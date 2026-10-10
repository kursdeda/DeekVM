if [ -e .build/DeekVM ]; then
    echo -e "Executing... :\n"
    .build/DeekVM
    echo -e "\nFinished with exit code $?"
fi