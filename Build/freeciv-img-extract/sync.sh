python img-extract.py &&
pngcrush pre-freeciv-web-tileset-0.png freeciv-web-tileset-0.png &&
pngcrush pre-freeciv-web-tileset-1.png freeciv-web-tileset-1.png &&
mkdir -p ../../public/tileset &&
cp freeciv-web-tileset-0.png ../../public/tileset/ &&
cp freeciv-web-tileset-1.png ../../public/tileset/ &&
cp freeciv-web-tileset.js ../../public/javascript/ 
