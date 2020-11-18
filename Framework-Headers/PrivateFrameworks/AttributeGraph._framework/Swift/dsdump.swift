 protocol AttributeGraph.Rule // 4 requirements
 {
	// class base protocol
	// class associated type access function
	// class getter
	// getter
 }
 protocol AttributeGraph.StatefulRule // 4 requirements
 {
	// class base protocol
	// class associated type access function
	// class getter
	// method
 }
 protocol AttributeGraph._AttributeBody // 4 requirements
 {
	// class method
	// class getter
	// class method
	// class getter
 }
 protocol AttributeGraph.ObservedAttribute // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol AttributeGraph.AttributeBodyVisitor // 1 requirements
 {
	// method
 }

 struct __C.Metadata {

	// Properties
	let rawValue : _Metadata
 }

 class __C.Graph {
 struct __C.AnyAttribute {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : õ4
 }

 struct __C.AnyWeakAttribute {

	// Properties
	var _details : __Unnamed_struct__details
 }

 struct __C._Metadata { }

 struct __C._AttributeVTable {

	// Properties
	var version : UInt
	var type_destroy : _AttributeType
	var self_destroy : _AttributeType
	var self_description : _AttributeType
	var value_description : _AttributeType
	var update_default : _AttributeType
 }

 struct __C.__Unnamed_struct__details {

	// Properties
	var identifier : AnyAttribute
WARNING: couldn't find address 0x0 (0x0) in binary!
	var seed : õ4
 }

 struct __C._AttributeType {

	// Properties
	var self_id : Metadata
	var value_id : Metadata
	var update : _AGClosureStorage
	var vtable : _AttributeVTable
	var flags : _AttributeTypeFlags
WARNING: couldn't find address 0x0 (0x0) in binary!
	var internal_offset : õ4
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value_layout :  empty-list 
 }

 struct __C._AttributeTypeFlags {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : õ4
 }

 struct __C._AGClosureStorage {

	// Properties
	var thunk : UnsafeRawPointer
	var context : UnsafeRawPointer?
 }

 struct AttributeGraph.WeakAttribute {

	// Properties
	var base : AnyWeakAttribute
 }

 struct AttributeGraph.Attribute {

	// Properties
	var identifier : AnyAttribute
 }

 struct AttributeGraph.AttributeType {

	// Properties
	var graphType : _AttributeType // +0x0
	var type : _AttributeBody // +0x38
 }

 struct AttributeGraph.IndirectAttribute {

	// Properties
	let identifier : AnyAttribute
 }

 struct AttributeGraph.AnyRuleContext {

	// Properties
	var attribute : AnyAttribute // +0x0
 }

 struct AttributeGraph.RuleContext {

	// Properties
	var attribute : Attribute
 }

 struct AttributeGraph.External { }

 struct AttributeGraph.Focus {

	// Properties
	var root : Attribute
WARNING: couldn't find address 0x0 (0x0) in binary!
	var keyPath : e2
 }

 struct AttributeGraph.Map {

	// Properties
	var arg : Attribute
	let body : (_:)
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
	var base : AnyOptionalAttribute
 }
