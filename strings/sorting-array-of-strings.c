// To sort a given array of strings into lexicographically increasing order or into an order in which
// the string with the lowest length appears first, a sorting function with a flag indicating the type
// of comparison strategy can be written. The disadvantage with doing so is having to rewrite the
// function for every new comparison strategy.

// A better implementation would be to write a sorting function that accepts a pointer to the
//function that compares each pair of strings. Doing this will mean only passing a pointer to the
//sorting function with every new comparison strategy.