/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {

    let prev2 = 0;
    let prev1 = 1;

    yield prev2;
    yield prev1;

    while (true) {
        let curr = prev2 + prev1;

        yield curr;

        prev2 = prev1;
        prev1 = curr;
    }
};


/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 * gen.next().value; // 1
 * gen.next().value; // 2
 */