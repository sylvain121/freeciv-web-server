# Syncronizes the javascript packet handler (packhand_gen.js)
# with the definitions in packets.def.
python generate_js_hand.py && \
cp packhand_gen.js ../../public/javascript/ && \
cp packets.js ../../public/javascript/ && \
cp ../freeciv/freeciv/data/scenarios/*.sav.gz ../../public/savegames/ && \
cp ../freeciv/freeciv/data/scenarios/tutorial.sav ../../public/savegames/ && \
rm ../../public/savegames/tutorial.sav.gz && \
echo "done!"
