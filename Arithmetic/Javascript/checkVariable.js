const empty = (string) => {
	return (string == undefined || string == "" || string == null);
}

const in_array = (search, array, column) => {
    if(empty(column)) {
        column = "";
    }

    let length = array.length;
    for(let i = 0; i < length; i++) {
        if(!empty(column)) {
            if(array[i][column] == search) return true;
        } else {
            if(array[i] == search) return true;
        }
    }
    return false;
}
