 protocol AttributeGraph.Formula // 3 requirements
 {
	// class associated type access function
	// method
	// class method
 }
 protocol AttributeGraph.PointerFormula // 1 requirements
 {
	// class base protocol
 }
 protocol AttributeGraph.UntypedAttribute // 11 requirements
 {
	// class method
	// class method
	// class method
	// class method
	// class method
	// class method
	// class method
	// class method
	// class method
	// class method
	// class getter
 }
 protocol AttributeGraph.AttributeVisitor // 1 requirements
 {
	// method
 }
 protocol AttributeGraph.TypedAttribute // 3 requirements
 {
	// class base protocol
	// class associated type access function
	// class getter
 }
 protocol AttributeGraph.ComputedAttribute // 6 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// class method
	// class getter
	// method
 }
 protocol AttributeGraph.DynamicInputAttribute // 3 requirements
 {
	// class base protocol
	// method
	// method
 }
 protocol AttributeGraph.ObservedAttribute // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol AttributeGraph.BFSVisitor // 1 requirements
 {
	// method
 }
 protocol AttributeGraph.InputList // 6 requirements
 {
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class getter
	// class getter
	// class getter
 }
 protocol AttributeGraph.FormulaList // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class method
 }
 protocol AttributeGraph.List // 3 requirements
 {
	// class associated type access function
	// class getter
	// getter
 }
 protocol AttributeGraph.FunctionalAttribute1 // 4 requirements
 {
	// class base protocol
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol AttributeGraph.FunctionalAttribute2 // 5 requirements
 {
	// class base protocol
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol AttributeGraph.FunctionalAttribute3 // 6 requirements
 {
	// class base protocol
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol AttributeGraph.FunctionalAttribute4 // 7 requirements
 {
	// class base protocol
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol AttributeGraph.FunctionalAttribute5 // 8 requirements
 {
	// class base protocol
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// method
 }

 class __C.Subgraph {
 struct __C.EdgeOptions {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : V
 }

 struct __C.Metadata {

	// Properties
	var value : UnsafeRawPointer
 }

 struct __C.AnyAttribute {

	// Properties
	var id : UInt
 }

 struct __C.Graph {

	// Properties
	var p : _UnownedGraph
 }

 struct __C._AttributeVTable {

	// Properties
	var version : UInt
	var self_destroy : _AttributeType
	var self_description : _AttributeType
	var value_description : _AttributeType
	var update_default : _AttributeType
	var input_was_added : _AttributeType
	var input_was_removed : _AttributeType
	var invalidated : _AttributeType
 }

 struct __C._UnownedGraph { }

 struct __C._AttributeType {

	// Properties
	var self_id : Metadata
	var value_id : Metadata
	var update : _AGClosureStorage
	var vtable : _AttributeVTable
	var flags : _AttributeTypeFlags
WARNING: couldn't find address 0x0 (0x0) in binary!
	var internal_id : V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value_offset : V
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value_layout :  empty-list 
 }

 struct __C._AttributeTypeFlags {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : V
 }

 struct __C._AGClosureStorage {

	// Properties
	var thunk : UnsafeRawPointer
	var context : UnsafeRawPointer?
 }

 struct AttributeGraph.WeakAttribute {

	// Properties
	let _subgraph : Subgraph // +0x0
	let _attribute : Attribute // +0x8
 }

 struct AttributeGraph.AnyWeakAttribute {

	// Properties
	let _subgraph : Subgraph // +0x0
	let _attribute : AnyAttribute // +0x8
 }

 struct AttributeGraph.Formulas { }

 struct AttributeGraph.Constant: PointerFormula,  Formula {

	// Properties
	var value : A
 }

 struct AttributeGraph.Focus: PointerFormula,  Formula {

	// Properties
	var root : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	var keyPath : •S
 }

 struct AttributeGraph.Offset: PointerFormula,  Formula {

	// Properties
	var root : A
	var offset : PointerOffset
 }

 struct AttributeGraph.Reference: PointerFormula,  Formula {

	// Properties
	var callback : Attribute
 }

 struct AttributeGraph.Computed: PointerFormula,  Formula {

	// Properties
	var value : A
	var inputs : B
 }

 struct AttributeGraph.Attribute {

	// Properties
	var identifier : AnyAttribute
 }

 enum AttributeGraph.CacheBehavior {

	// Properties
	case dynamic  
	case cached  
	case uncached  
 }

 struct AttributeGraph.AttributeType {

	// Properties
	var graphType : _AttributeType // +0x0
	var type : UntypedAttribute // +0x40
 }

 struct AttributeGraph.DynamicInputHelper {

	// Properties
	var oldAttribute : OptionalAttribute
 }

 struct AttributeGraph.SearchVisitor {

	// Properties
	let visitorType : BFSVisitor // +0x0
	let visitor : UnsafeMutableRawPointer // +0x10
	var ident : AnyAttribute // +0x18
	var matches : Bool // +0x20
 }

 struct AttributeGraph.AttributeContext {

	// Properties
	var graph : Graph
	var attribute : Attribute
 }

 struct AttributeGraph.External { }

 struct AttributeGraph.Focus {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let keyPath : áP
 }

 struct AttributeGraph.Map {

	// Properties
	let body : (_:)
 }

 struct AttributeGraph.Map2 {

	// Properties
	let body : (_:_:)
 }

 struct AttributeGraph.Map3 {

	// Properties
	let body : (_:_:_:)
 }

 struct AttributeGraph.Identity { }

 struct AttributeGraph.Zip { }

 struct AttributeGraph.Index {

	// Properties
	var index : A.Collection.Index
 }

 struct AttributeGraph.UnsafeOffset {

	// Properties
	let offset : Int
 }

 struct AttributeGraph.PointerOffset {

	// Properties
	var byteOffset : Int
 }

 struct AttributeGraph.AnyOptionalAttribute {

	// Properties
	var identifier : AnyAttribute // +0x0
 }

 struct AttributeGraph.OptionalAttribute {

	// Properties
	var identifier : AnyAttribute
 }

 struct AttributeGraph.InputIndex {

	// Properties
	var value : Int
 }

 struct AttributeGraph.List0: List {

	// Properties
	var elements : () // +0x0
 }

 struct AttributeGraph.List1: List {

	// Properties
	var elements : A
 }

 struct AttributeGraph.List2: List {

	// Properties
	var elements : (A, B)
 }

 struct AttributeGraph.List3: List {

	// Properties
	var elements : (A, B, C)
 }

 struct AttributeGraph.List4: List {

	// Properties
	var elements : (A, B, C, D)
 }

 struct AttributeGraph.List5: List {

	// Properties
	var elements : (A, B, C, D, E)
 }

 struct AttributeGraph.List6: List {

	// Properties
	var elements : (A, B, C, D, E, F)
 }

 struct AttributeGraph.List7: List {

	// Properties
	var elements : (A, B, C, D, E, F, G)
 }

 struct AttributeGraph.List8: List {

	// Properties
	var elements : (A, B, C, D, E, F, G, H)
 }
