echo "Building And Importing Library Into Device..."
./build_library.sh

echo "Building Tests And Unit Tests In Bin..."
./build_blinktest.sh

echo "Done"