import createQueue from './queue'

const queue = createQueue()

console.log(`Queue is empty? ${queue.isEmpty()} \n`)

queue.enqueue("GREAT!")
queue.enqueue("It Works!")

console.log(`My queue now: ${queue.peek()} \n`)