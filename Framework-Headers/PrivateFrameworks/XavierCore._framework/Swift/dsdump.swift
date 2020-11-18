 protocol XavierCore.Diffable // 6 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class getter
	// method
	// method
 }

 struct XavierCore.Diff {

	// Properties
	let updated : Diffable
	let tail : Tail
 }

 enum XavierCore.Errors {

	// Properties
	case invalidDiff : String
	case invalidUpdate : Diffable
 }

 enum XavierCore.Tail {

	// Properties
	case added : (elements: [A])
	case removed : (count: Int)
 }

 enum XavierCore.CodingKeys {

	// Properties
	case updated  
	case tail  
 }

 enum XavierCore.Errors {

	// Properties
	case invalidFormat  
 }

 enum XavierCore.CodingKeys {

	// Properties
	case added  
	case removed  
 }

 struct XavierCore.Diff {

	// Properties
	var removed : Set<A>
	var inserted : Diffable
 }

 enum XavierCore.CodingKeys {

	// Properties
	case removed  
	case inserted  
 }

 struct XavierCore.NumberDiffable {

	// Properties
	let value : A
 }

 struct XavierCore.Diff {

	// Properties
	let inserted : [A]
	let removed : [A]
 }

 enum XavierCore.CodingKeys {

	// Properties
	case inserted  
	case removed  
 }
