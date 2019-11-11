#pragma once
// Do n times operation function and sum them.
// Using max types because We can expect any value
// if recursion == true than factorial be calculated recursively
long double summaryWithOperations(const long long int& n, long double (*operation)(const long long int& i), bool recursion = false);