# dp_simple_knapsack_possible_sum

Mark true if a bag with n kg capacity can be fully-filled
with collection of things.

<img src="https://latex.codecogs.com/gif.latex?f(0,&space;t)&space;=&space;true" title="f(0, t) = true" />
<img src="https://latex.codecogs.com/gif.latex?f(x,&space;t)&space;=&space;f(x-w_t,&space;t-1)&space;\vee&space;f(x,&space;t-1)" title="f(x, t) = f(x-w_t, i-1) \vee f(x, t-1)" />
where
<img src="https://latex.codecogs.com/gif.latex?(x-w_t)&space;\geq&space;0" title="(x-w_t) \geq 0" />

<img src="https://latex.codecogs.com/gif.latex?TimeComplexity:&space;O(NW)" title="TimeComplexity: O(NW)" />

where N is the max capacity of the bag<br>
and W is the collections of weights
