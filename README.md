mkdir build

cd build

cmake ..

make

# need to run the following line before generate report
./tests/my_class_test


lcov --capture --directory . --output-file coverage.info

lcov --remove coverage.info  --output-file coverage_filtered.info '/usr/*' '*/CppUTest/*' '*/Platforms/Gcc/*' '*/tests/*'

genhtml coverage_filtered.info --output-directory coverage_report
