int count(int data[],int size){
	set<int> numbers;

	for(int i = 0; i < size; ++i) {
        numbers.insert(data[i]);
    }

	return numbers.size();
}