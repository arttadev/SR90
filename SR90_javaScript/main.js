//concat
let arr1 = [1,2,3]
let arr2 = [5,6,7]
let concat = arr1.concat(arr2)
//console.log(concat)
//concat

//every

const checker = 34;
let array = [23, 45, 32, 45, -1]
let check = array.every((elem)=> {
	return elem > 0
 })
//console.log(check)

//every

//filter

const digits_array = [1, 2, 3,'a']
const result =  digits_array.filter(digit => digit > 0);
//console.log(result);

//filter

//flat

const flat_arr = [1, 2, 3, 4, [[[[5]]]]]
//console.log(flat_arr.flat(2));

//flat

//forEach

const arr3 = [1,2,3,4]
//arr3.forEach(elem => console.log(elem));

//forEach

//indexOf

const arr4 = ['Picsart', 'Soft', 'Digitain', 'ServiceTitan']
//console.log(arr4.indexOf('Picsart'));

//indexOf

//lastIndexOf

const names = ['Karen', 'Bruno', 'Vazgen', 'Davit']
//console.log(names.lastIndexOf('Vazgen'));

//lastIndexOf

//map

const sqr = [1, 4, 5, 8]
const result_map = sqr.map(x => x * x);
//console.log(result_map);

//map

//reduce

const reduce_array = [2, 3, 6, 8]
const initial = 0;
const sumWithInitial = reduce_array.reduce(
	(calculator, current) => calculator + current, initial
);
//console.log(sumWithInitial);

//reduce

//reverse 

const curr_array = [1,2,3,4,5];
//console.log('array1:', curr_array);
const rev_array = curr_array.reverse();
//console.log('reversed:', rev_array);

//reverse

//slice

const slice_array = [23, 24, 25, 34, 35]
//console.log(slice_array.slice(2));

//slice

//some

const some_array = [1,1,1,1,1]
const even = (elements) => elements % 2 === 0
//console.log(some_array.some(even));

//some

//sort

const sort_months= ['March', 'Jan', 'Feb', 'Dec'];
sort_months.sort();
//console.log(sort_months);

//sort

//splice

const splice_array = ['One', 'Two', 'five']
splice_array.splice(1, 0, 'Zero')
//console.log(splice_array);

//splice

//entries

for (const elem of [1, 2, 'a', 'b'].entries())
{
//console.log(elem);
}

//entries


//fill

let fill_array = [1, 2, 3, 4, 5];

fill_array.fill(0, 1, 4);
//console.log("Modified Array:", fill_array);

//fill

//find

let find_array = [1, 2, 3, 4, 5];

let evenNumber = find_array.find((num) => num % 2 === 0);
//console.log("First Even Number:", evenNumber);

//find


//findIndex

let findIndex_array = [1, 2, 3, 4, 5];

let evenIndex = findIndex_array.findIndex((num) => num % 2 === 0);
//console.log("Index of First Even Number:", evenIndex);

//findIndex

//findLastindex

let findLastIndexArray = [1, 2, 3, 4, 5, 2];

let lastIndex = findLastIndexArray.findLastIndex((num) => num === 2);
//console.log("Index of Last Occurrence of 2:", lastIndex);

//findLastindex

//includes

let includesArray = [1, 2, 3, 4, 5];

let includesNumber = includesArray.includes(3);
//console.log("Array includes 3:", includesNumber);

//includes

//join

let joinArray = ["apple", "banana", "orange"];

let joinedString = joinArray.join(", ");
//console.log("Joined String:", joinedString);

//join

//with

let car = {
	make: "Toyota",
	model: "Camry",
	year: 2022,
};

with (car)
{
	make = "Honda";
	model = "Accord";
	year = 2023;
}
//console.log("Updated Car:", car);

//with