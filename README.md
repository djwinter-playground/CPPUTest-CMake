mkdir build

cd build

cmake ..

make



lcov --capture --directory . --output-file coverage.info

lcov --remove coverage.info '/usr/*' --output-file coverage_filtered.info

genhtml coverage_filtered.info --output-directory coverage_report
