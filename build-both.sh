rm ./st/config.h
(cd st && cat font1.h color.h config.base.h > config.h)
(cd st && sudo make clean st)
mv -f ./st/st ./st-dina

rm ./st/config.h
(cd st && cat font2.h color.h config.base.h > config.h)
(cd st && sudo make clean st)
mv -f ./st/st ./st-fira

cp -f ./st-dina ~/.scripts/st
cp -f ./st-fira ~/.scripts/st-fira
cp -f ./st-fira.desktop ~/.local/share/applications/st-fira.desktop
cp -f ./st.desktop ~/.local/share/applications/st.desktop
