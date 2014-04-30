#/bin/sh

_blob=guest/guest_init.o
_patched=guest/guest_init.o-patched
rm $_patched 2>/dev/null

xxd -g 1 -c 1  guest/init  | head -5 | grep "^0000004: 02" >/dev/null
if [ $? = 0 ]
then
    _elfclass=64
    _foo="sed \"s/0000030:.*\$/`xxd -g 4 -c 4 guest/init | head -49 | grep "^0000030:"`/g\""
else
    _elfclass=32
    _foo="sed \"s/0000024:.*\$/`xxd -g 4 -c 4 guest/init | head -37 | grep "^0000024:"`/g\""
fi
echo "Setting ELF$_elfclass header flags in binary $_blob to what's used in guest/init"

xxd -g 4 -c 4 $_blob  | eval $_foo | \
    xxd -r -g 4 -c 4 >$_patched
mv $_patched $_blob
