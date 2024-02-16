### Notes
Previously, we were facing problem having strings case-sensitive.
Now here, we'd use Enums that limits the possible.
Each Enum instance can only/must have 1 data member from in it.
no more misspellings or case issues.

### important points
- a GuitarSpec's object is *Encapsulated* inside Guitar class to divide/group problem
in logical parts.
- we are initializing inventory with some random data.
- Initialized an instance of what Erin likes and searched it
in the inventory.
- *search method* now takes GuitarSpec object, not Guitar object,
- now if we have to make some change in Guitar's specification, we can directly add them inside
GuitarSpec class without affecting other Code.