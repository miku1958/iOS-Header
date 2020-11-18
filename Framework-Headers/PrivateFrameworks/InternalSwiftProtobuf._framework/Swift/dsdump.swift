 protocol InternalSwiftProtobuf.SelectiveVisitor // 1 requirements
 {
	// class base protocol
 }
 protocol InternalSwiftProtobuf.Enum // 5 requirements
 {
	// class base protocol
	// class base protocol
	// class init
	// class init
	// getter
 }
 protocol InternalSwiftProtobuf.AnyExtensionField // 7 requirements
 {
	// class base protocol
	// method
	// getter
	// method
	// method
	// method
	// getter
 }
 protocol InternalSwiftProtobuf.ExtensionField // 8 requirements
 {
	// class base protocol
	// class base protocol
	// class associated type access function
	// getter
	// setter
	// modify coroutine
	// class init
	// class init
 }
 protocol InternalSwiftProtobuf.AnyMessageExtension // 4 requirements
 {
	// getter
	// getter
	// getter
	// method
 }
 protocol InternalSwiftProtobuf.Decoder // 59 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol InternalSwiftProtobuf.ProtobufAPIVersion_2 // 0 requirements
 {
 }
 protocol InternalSwiftProtobuf.ProtobufAPIVersionCheck // 2 requirements
 {
	// class associated conformance access function
	// class associated type access function
 }
 protocol InternalSwiftProtobuf._ProtoNameProviding // 1 requirements
 {
	// class getter
 }
 protocol InternalSwiftProtobuf._CustomJSONCodable // 3 requirements
 {
	// method
	// method
	// class method
 }
 protocol InternalSwiftProtobuf.Message // 11 requirements
 {
	// class base protocol
	// class init
	// class getter
	// getter
	// getter
	// setter
	// modify coroutine
	// method
	// method
	// method
	// method
 }
 protocol InternalSwiftProtobuf._MessageImplementationBase // 3 requirements
 {
	// class base protocol
	// class base protocol
	// method
 }
 protocol InternalSwiftProtobuf.FieldType // 8 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class getter
	// class method
	// class method
	// class method
	// class method
	// class method
 }
 protocol InternalSwiftProtobuf.MapKeyType // 1 requirements
 {
	// class base protocol
 }
 protocol InternalSwiftProtobuf.MapValueType // 1 requirements
 {
	// class base protocol
 }
 protocol InternalSwiftProtobuf.ExtensionMap // 2 requirements
 {
	// getter
	// method
 }
 protocol InternalSwiftProtobuf.Visitor // 56 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol InternalSwiftProtobuf.ProtobufWrapper // 7 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
	// setter
	// modify coroutine
	// class init
	// class init
 }
 protocol InternalSwiftProtobuf.ExtensibleMessage // 4 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Any {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : AnyMessageStorage // +0x10
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Api {

	// Properties
	var name : String // +0x0
	var methods : Google_Protobuf_Method // +0x10
	var options : Google_Protobuf_Option // +0x18
	var version : String // +0x20
	var mixins : Google_Protobuf_Mixin // +0x30
	var syntax : Google_Protobuf_Syntax // +0x38
	var unknownFields : UnknownStorage // +0x48
	var _sourceContext : Google_Protobuf_SourceContext // +0x58
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Method {

	// Properties
	var name : String // +0x0
	var requestTypeURL : String // +0x10
	var requestStreaming : Bool // +0x20
	var responseTypeURL : String // +0x28
	var responseStreaming : Bool // +0x38
	var options : Google_Protobuf_Option // +0x40
	var syntax : Google_Protobuf_Syntax // +0x48
	var unknownFields : UnknownStorage // +0x58
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Mixin {

	// Properties
	var name : String // +0x0
	var root : String // +0x10
	var unknownFields : UnknownStorage // +0x20
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Duration {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var seconds : gя // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nanos : )я // +0x8
	var unknownFields : UnknownStorage // +0x10
 }

 struct InternalSwiftProtobuf.JSONEncodingOptions {

	// Properties
	var alwaysPrintEnumsAsInts : Bool // +0x0
	var preserveProtoFieldNames : Bool // +0x1
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Empty {

	// Properties
	var unknownFields : UnknownStorage // +0x0
 }

 struct InternalSwiftProtobuf.JSONDecoder {

	// Properties
	var scanner : JSONScanner // +0x0
	var messageType : Message // +0x68
	var fieldCount : Int // +0x78
	var isMapKey : Bool // +0x80
	var fieldNameMap : _NameMap // +0x88
 }

 struct InternalSwiftProtobuf.Google_Protobuf_FieldMask {

	// Properties
	var paths : [String] // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 enum InternalSwiftProtobuf.Internal { }

 struct InternalSwiftProtobuf.BinaryEncodingSizeVisitor {

	// Properties
	var serializedSize : Int // +0x0
 }

 struct InternalSwiftProtobuf.BinaryEncodingMessageSetSizeVisitor {

	// Properties
	var serializedSize : Int // +0x0
 }

 struct InternalSwiftProtobuf.JSONDecodingOptions {

	// Properties
	var messageDepthLimit : Int // +0x0
	var ignoreUnknownFields : Bool // +0x8
 }

 struct InternalSwiftProtobuf.BinaryDecoder {

	// Properties
	var p : UnsafeRawPointer // +0x0
	var available : Int // +0x8
	var fieldStartP : UnsafeRawPointer // +0x10
	var fieldEndP : UnsafeRawPointer? // +0x18
	var consumed : Bool // +0x20
	var fieldWireFormat : WireFormat // +0x21
	var fieldNumber : Int // +0x28
	var extensions : ExtensionMap // +0x30
	var groupFieldNumber : Int? // +0x58
	var options : BinaryDecodingOptions // +0x68
	var recursionBudget : Int // +0x78
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownData : !х // +0x80
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownOverride : !х // +0x90
 }

 enum InternalSwiftProtobuf.Google_Protobuf_NullValue {

	// Properties
	case UNRECOGNIZED : Int
	case nullValue  
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Struct {

	// Properties
	var fields : Google_Protobuf_Value // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Value {

	// Properties
	var kind : OneOf_Kind // +0x0
	var unknownFields : UnknownStorage // +0x18
 }

 enum InternalSwiftProtobuf.OneOf_Kind {

	// Properties
	case nullValue : Google_Protobuf_NullValue
	case numberValue : Double
	case stringValue : String
	case boolValue : Bool
	case structValue : Google_Protobuf_Struct
	case listValue : Google_Protobuf_ListValue
 }

 struct InternalSwiftProtobuf.Google_Protobuf_ListValue {

	// Properties
	var values : Google_Protobuf_Value // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.BinaryEncoder {

	// Properties
	var pointer : UnsafeMutableRawPointer // +0x0
 }

 class InternalSwiftProtobuf.DoubleParser : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var work :  empty-list 

	// Swift methods
	0x418f0  func <stripped> // method 
 }

 class InternalSwiftProtobuf.AnyMessageStorage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _typeURL : String
	var state : InternalState

	// Swift methods
	0x43a20  func <stripped> // getter 
	0x43f90  func <stripped> // method 
	0x44070  func <stripped> // method 
	0x44560  func <stripped> // method 
 }

 enum InternalSwiftProtobuf.InternalState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case binary : )г
	case message : Message
WARNING: couldn't find address 0x0 (0x0) in binary!
	case contentJSON : #г
 }

 struct InternalSwiftProtobuf.OptionalExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : FieldType
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.RepeatedExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : FieldType
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.PackedExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : FieldType
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.OptionalEnumExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.RepeatedEnumExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.PackedEnumExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.OptionalMessageExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.RepeatedMessageExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.OptionalGroupExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.RepeatedGroupExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct InternalSwiftProtobuf.ExtensionFieldValueSet {

	// Properties
	var values : AnyExtensionField // +0x0
 }

 struct InternalSwiftProtobuf.Google_Protobuf_FileDescriptorSet {

	// Properties
	var file : Google_Protobuf_FileDescriptorProto // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_FileDescriptorProto {

	// Properties
	var dependency : [String] // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var publicDependency :  empty-list  // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var weakDependency :  empty-list  // +0x10
	var messageType : Google_Protobuf_DescriptorProto // +0x18
	var enumType : Google_Protobuf_EnumDescriptorProto // +0x20
	var service : Google_Protobuf_ServiceDescriptorProto // +0x28
	var extension : Google_Protobuf_FieldDescriptorProto // +0x30
	var unknownFields : UnknownStorage // +0x38
	var _name : String? // +0x48
	var _package : String? // +0x58
	var _options : Google_Protobuf_FileOptions // +0x68
	var _sourceCodeInfo : Google_Protobuf_SourceCodeInfo // +0x88
	var _syntax : String? // +0xa0
 }

 struct InternalSwiftProtobuf.Google_Protobuf_DescriptorProto {

	// Properties
	var field : Google_Protobuf_FieldDescriptorProto // +0x0
	var extension : Google_Protobuf_FieldDescriptorProto // +0x8
	var nestedType : Google_Protobuf_DescriptorProto // +0x10
	var enumType : Google_Protobuf_EnumDescriptorProto // +0x18
	var extensionRange : ExtensionRange // +0x20
	var oneofDecl : Google_Protobuf_OneofDescriptorProto // +0x28
	var reservedRange : ReservedRange // +0x30
	var reservedName : [String] // +0x38
	var unknownFields : UnknownStorage // +0x40
	var _name : String? // +0x50
	var _options : Google_Protobuf_MessageOptions // +0x60
 }

 struct InternalSwiftProtobuf.ExtensionRange {

	// Properties
	var unknownFields : UnknownStorage // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _start : ах // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : ах // +0x18
	var _options : Google_Protobuf_ExtensionRangeOptions // +0x20
 }

 struct InternalSwiftProtobuf.ReservedRange {

	// Properties
	var unknownFields : UnknownStorage // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _start : ах // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : ах // +0x18
 }

 struct InternalSwiftProtobuf.Google_Protobuf_ExtensionRangeOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
 }

 struct InternalSwiftProtobuf.Google_Protobuf_FieldDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _name : String? // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _number : ах // +0x20
	var _label : Label // +0x25
	var _type : TypeEnum // +0x26
	var _typeName : String? // +0x28
	var _extendee : String? // +0x38
	var _defaultValue : String? // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _oneofIndex : ах // +0x58
	var _jsonName : String? // +0x60
	var _options : Google_Protobuf_FieldOptions // +0x70
	var _proto3Optional : Bool? // +0x96
 }

 enum InternalSwiftProtobuf.TypeEnum {

	// Properties
	case double  
	case float  
	case int64  
	case uint64  
	case int32  
	case fixed64  
	case fixed32  
	case bool  
	case string  
	case group  
	case message  
	case bytes  
	case uint32  
	case enum  
	case sfixed32  
	case sfixed64  
	case sint32  
	case sint64  
 }

 enum InternalSwiftProtobuf.Label {

	// Properties
	case optional  
	case required  
	case repeated  
 }

 struct InternalSwiftProtobuf.Google_Protobuf_OneofDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _name : String? // +0x10
	var _options : Google_Protobuf_OneofOptions // +0x20
 }

 struct InternalSwiftProtobuf.Google_Protobuf_EnumDescriptorProto {

	// Properties
	var value : Google_Protobuf_EnumValueDescriptorProto // +0x0
	var reservedRange : EnumReservedRange // +0x8
	var reservedName : [String] // +0x10
	var unknownFields : UnknownStorage // +0x18
	var _name : String? // +0x28
	var _options : Google_Protobuf_EnumOptions // +0x38
 }

 struct InternalSwiftProtobuf.EnumReservedRange {

	// Properties
	var unknownFields : UnknownStorage // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _start : ах // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : ах // +0x18
 }

 struct InternalSwiftProtobuf.Google_Protobuf_EnumValueDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _name : String? // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _number : ах // +0x20
	var _options : Google_Protobuf_EnumValueOptions // +0x28
 }

 struct InternalSwiftProtobuf.Google_Protobuf_ServiceDescriptorProto {

	// Properties
	var method : Google_Protobuf_MethodDescriptorProto // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _name : String? // +0x18
	var _options : Google_Protobuf_ServiceOptions // +0x28
 }

 struct InternalSwiftProtobuf.Google_Protobuf_MethodDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _name : String? // +0x10
	var _inputType : String? // +0x20
	var _outputType : String? // +0x30
	var _options : Google_Protobuf_MethodOptions // +0x40
	var _clientStreaming : Bool? // +0x62
	var _serverStreaming : Bool? // +0x63
 }

 struct InternalSwiftProtobuf.Google_Protobuf_FileOptions {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x10
	var _storage : _StorageClass // +0x18
 }

 enum InternalSwiftProtobuf.OptimizeMode {

	// Properties
	case speed  
	case codeSize  
	case liteRuntime  
 }

 struct InternalSwiftProtobuf.Google_Protobuf_MessageOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _messageSetWireFormat : Bool? // +0x20
	var _noStandardDescriptorAccessor : Bool? // +0x21
	var _deprecated : Bool? // +0x22
	var _mapEntry : Bool? // +0x23
 }

 struct InternalSwiftProtobuf.Google_Protobuf_FieldOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _ctype : CType // +0x20
	var _packed : Bool? // +0x21
	var _jstype : JSType // +0x22
	var _lazy : Bool? // +0x23
	var _deprecated : Bool? // +0x24
	var _weak : Bool? // +0x25
 }

 enum InternalSwiftProtobuf.CType {

	// Properties
	case string  
	case cord  
	case stringPiece  
 }

 enum InternalSwiftProtobuf.JSType {

	// Properties
	case jsNormal  
	case jsString  
	case jsNumber  
 }

 struct InternalSwiftProtobuf.Google_Protobuf_OneofOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
 }

 struct InternalSwiftProtobuf.Google_Protobuf_EnumOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _allowAlias : Bool? // +0x20
	var _deprecated : Bool? // +0x21
 }

 struct InternalSwiftProtobuf.Google_Protobuf_EnumValueOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _deprecated : Bool? // +0x20
 }

 struct InternalSwiftProtobuf.Google_Protobuf_ServiceOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _deprecated : Bool? // +0x20
 }

 struct InternalSwiftProtobuf.Google_Protobuf_MethodOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _deprecated : Bool? // +0x20
	var _idempotencyLevel : IdempotencyLevel // +0x21
 }

 enum InternalSwiftProtobuf.IdempotencyLevel {

	// Properties
	case idempotencyUnknown  
	case noSideEffects  
	case idempotent  
 }

 struct InternalSwiftProtobuf.Google_Protobuf_UninterpretedOption {

	// Properties
	var name : NamePart // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _identifierValue : String? // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _positiveIntValue : Aх // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _negativeIntValue : аг // +0x38
	var _doubleValue : Double? // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _stringValue : !х // +0x58
	var _aggregateValue : String? // +0x68
 }

 struct InternalSwiftProtobuf.NamePart {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _namePart : String? // +0x10
	var _isExtension : Bool? // +0x20
 }

 struct InternalSwiftProtobuf.Google_Protobuf_SourceCodeInfo {

	// Properties
	var location : Location // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Location {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var path :  empty-list  // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var span :  empty-list  // +0x8
	var leadingDetachedComments : [String] // +0x10
	var unknownFields : UnknownStorage // +0x18
	var _leadingComments : String? // +0x28
	var _trailingComments : String? // +0x38
 }

 struct InternalSwiftProtobuf.Google_Protobuf_GeneratedCodeInfo {

	// Properties
	var annotation : Annotation // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Annotation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var path :  empty-list  // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _sourceFile : String? // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _begin : ах // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : ах // +0x30
 }

 class InternalSwiftProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _javaPackage : String? // +0x10 (0x10)
	var _javaOuterClassname : String? // +0x20 (0x10)
	var _javaMultipleFiles : Bool? // +0x30 (0x1)
	var _javaGenerateEqualsAndHash : Bool? // +0x31 (0x1)
	var _javaStringCheckUtf8 : Bool? // +0x32 (0x1)
	var _optimizeFor : OptimizeMode // +0x33 (0x1)
	var _goPackage : String? // +0x38 (0x10)
	var _ccGenericServices : Bool? // +0x48 (0x1)
	var _javaGenericServices : Bool? // +0x49 (0x1)
	var _pyGenericServices : Bool? // +0x4a (0x1)
	var _phpGenericServices : Bool? // +0x4b (0x1)
	var _deprecated : Bool? // +0x4c (0x1)
	var _ccEnableArenas : Bool? // +0x4d (0x1)
	var _objcClassPrefix : String? // +0x50 (0x10)
	var _csharpNamespace : String? // +0x60 (0x10)
	var _swiftPrefix : String? // +0x70 (0x10)
	var _phpClassPrefix : String? // +0x80 (0x10)
	var _phpNamespace : String? // +0x90 (0x10)
	var _phpMetadataNamespace : String? // +0xa0 (0x10)
	var _rubyPackage : String? // +0xb0 (0x10)
	var _uninterpretedOption : Google_Protobuf_UninterpretedOption // +0xc0 (0x8)

	// Swift methods
 }

 enum InternalSwiftProtobuf.JSONEncodingError {

	// Properties
	case anyTranscodeFailure  
	case timestampRange  
	case durationRange  
	case fieldMaskConversion  
	case missingFieldNames  
	case missingValue  
 }

 struct InternalSwiftProtobuf.JSONEncodingVisitor {

	// Properties
	var encoder : JSONEncoder // +0x0
	var nameMap : _NameMap // +0x10
	var extensions : ExtensionFieldValueSet // +0x30
	let options : JSONEncodingOptions // +0x38
 }

 class InternalSwiftProtobuf.MessageExtension {
 enum InternalSwiftProtobuf.BinaryDecodingError {

	// Properties
	case trailingGarbage  
	case truncated  
	case invalidUTF8  
	case malformedProtobuf  
	case missingRequiredFields  
	case internalExtensionError  
	case messageDepthLimit  
 }

 struct InternalSwiftProtobuf.HashVisitor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var hasher : Ъф // +0x0
 }

 enum InternalSwiftProtobuf.BinaryDelimited { }

 enum InternalSwiftProtobuf.Error {

	// Properties
	case unknownStreamError  
	case truncated  
 }

 class InternalSwiftProtobuf.InternPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var interned : [UnsafeRawBufferPointer]

	// Swift methods
	0x9a8b0  func <stripped> // method 
 }

 struct InternalSwiftProtobuf._NameMap {

	// Properties
	var internPool : InternPool // +0x0
	var numberToNameMap : Names // +0x8
	var protoToNumberMap : Name // +0x10
	var jsonToNumberMap : Name // +0x18
 }

 enum InternalSwiftProtobuf.NameDescription {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case same : /д
WARNING: couldn't find address 0x0 (0x0) in binary!
	case standard : /д
WARNING: couldn't find address 0x0 (0x0) in binary!
	case unique : !д
WARNING: couldn't find address 0x0 (0x0) in binary!
	case aliased : д
 }

 struct InternalSwiftProtobuf.Names {

	// Properties
	var json : Name // +0x0
	var proto : Name // +0x28
 }

 struct InternalSwiftProtobuf.Name {

	// Properties
	var utf8Buffer : UnsafeRawBufferPointer // +0x0
	var nameString : NameString // +0x10
 }

 enum InternalSwiftProtobuf.NameString {

	// Properties
	case string : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case staticString : Иц
 }

 struct InternalSwiftProtobuf.BinaryDecodingOptions {

	// Properties
	var messageDepthLimit : Int // +0x0
	var discardUnknownFields : Bool // +0x8
 }

 struct InternalSwiftProtobuf._ProtobufMap { }

 struct InternalSwiftProtobuf._ProtobufMessageMap { }

 struct InternalSwiftProtobuf._ProtobufEnumMap { }

 enum InternalSwiftProtobuf.AnyUnpackError {

	// Properties
	case typeMismatch  
	case malformedWellKnownTypeJSON  
	case malformedAnyField  
 }

 struct InternalSwiftProtobuf.JSONEncoder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data :  empty-list  // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var separator : е // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_DoubleValue {

	// Properties
	var value : Double // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_FloatValue {

	// Properties
	var value : Float // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Int64Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : gя // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_UInt64Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : oе // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Int32Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : )я // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_UInt32Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : yд // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_BoolValue {

	// Properties
	var value : Bool // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct InternalSwiftProtobuf.Google_Protobuf_StringValue {

	// Properties
	var value : String // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 struct InternalSwiftProtobuf.Google_Protobuf_BytesValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : )г // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 struct InternalSwiftProtobuf.Version { }

 struct InternalSwiftProtobuf.ProtobufFloat: FieldType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufDouble: FieldType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufInt32: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufInt64: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufUInt32: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufUInt64: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufSInt32: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufSInt64: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufFixed32: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufFixed64: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufSFixed32: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufSFixed64: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufBool: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufString: FieldType,  MapKeyType,  MapValueType { }

 struct InternalSwiftProtobuf.ProtobufBytes: FieldType,  MapValueType { }

 struct InternalSwiftProtobuf.UnknownStorage {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data : )г // +0x0
 }

 struct InternalSwiftProtobuf.TextFormatDecoder {

	// Properties
	var scanner : TextFormatScanner // +0x0
	var fieldCount : Int // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	var terminator : е // +0x48
	var fieldNameMap : _NameMap // +0x50
	var messageType : Message // +0x70
 }

 struct InternalSwiftProtobuf.TextFormatEncoder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data :  empty-list  // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var indentString :  empty-list  // +0x8
 }

 struct InternalSwiftProtobuf.TextFormatEncodingVisitor {

	// Properties
	var encoder : TextFormatEncoder // +0x0
	var nameMap : _NameMap // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nameResolver : Int // +0x30
	var extensions : ExtensionFieldValueSet // +0x38
	let options : TextFormatEncodingOptions // +0x40
 }

 struct InternalSwiftProtobuf.TextFormatScanner {

	// Properties
	var extensions : ExtensionMap // +0x0
	var p : UnsafeRawPointer // +0x28
	var end : UnsafeRawPointer // +0x30
	var doubleParser : DoubleParser // +0x38
 }

 struct InternalSwiftProtobuf.JSONScanner {

	// Properties
	let source : UnsafeRawBufferPointer // +0x0
	var index : Int // +0x10
	var numberParser : DoubleParser // +0x18
	var options : JSONDecodingOptions // +0x20
	var extensions : ExtensionMap // +0x30
	var recursionLimit : Int // +0x58
	var recursionBudget : Int // +0x60
 }

 struct InternalSwiftProtobuf.SimpleExtensionMap {

	// Properties
	var fields : AnyMessageExtension // +0x0
 }

 enum InternalSwiftProtobuf.BinaryEncodingError {

	// Properties
	case anyTranscodeFailure  
	case missingRequiredFields  
 }

 struct InternalSwiftProtobuf.JSONMapEncodingVisitor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var separator : и© // +0x0
	var encoder : JSONEncoder // +0x18
	let options : JSONEncodingOptions // +0x22
 }

 struct InternalSwiftProtobuf.Google_Protobuf_SourceContext {

	// Properties
	var fileName : String // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Timestamp {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var seconds : gя // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nanos : )я // +0x8
	var unknownFields : UnknownStorage // +0x10
 }

 enum InternalSwiftProtobuf.Google_Protobuf_Syntax {

	// Properties
	case UNRECOGNIZED : Int
	case proto2  
	case proto3  
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Type {

	// Properties
	var name : String // +0x0
	var fields : Google_Protobuf_Field // +0x10
	var oneofs : [String] // +0x18
	var options : Google_Protobuf_Option // +0x20
	var syntax : Google_Protobuf_Syntax // +0x28
	var unknownFields : UnknownStorage // +0x38
	var _sourceContext : Google_Protobuf_SourceContext // +0x48
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Field {

	// Properties
	var kind : Kind // +0x0
	var cardinality : Cardinality // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var number : )я // +0x1c
	var name : String // +0x20
	var typeURL : String // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	var oneofIndex : )я // +0x40
	var packed : Bool // +0x44
	var options : Google_Protobuf_Option // +0x48
	var jsonName : String // +0x50
	var defaultValue : String // +0x60
	var unknownFields : UnknownStorage // +0x70
 }

 enum InternalSwiftProtobuf.Kind {

	// Properties
	case UNRECOGNIZED : Int
	case typeUnknown  
	case typeDouble  
	case typeFloat  
	case typeInt64  
	case typeUint64  
	case typeInt32  
	case typeFixed64  
	case typeFixed32  
	case typeBool  
	case typeString  
	case typeGroup  
	case typeMessage  
	case typeBytes  
	case typeUint32  
	case typeEnum  
	case typeSfixed32  
	case typeSfixed64  
	case typeSint32  
	case typeSint64  
 }

 enum InternalSwiftProtobuf.Cardinality {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case optional  
	case required  
	case repeated  
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Enum {

	// Properties
	var name : String // +0x0
	var enumvalue : Google_Protobuf_EnumValue // +0x10
	var options : Google_Protobuf_Option // +0x18
	var syntax : Google_Protobuf_Syntax // +0x20
	var unknownFields : UnknownStorage // +0x30
	var _sourceContext : Google_Protobuf_SourceContext // +0x40
 }

 struct InternalSwiftProtobuf.Google_Protobuf_EnumValue {

	// Properties
	var name : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var number : )я // +0x10
	var options : Google_Protobuf_Option // +0x18
	var unknownFields : UnknownStorage // +0x20
 }

 struct InternalSwiftProtobuf.Google_Protobuf_Option {

	// Properties
	var name : String // +0x0
	var unknownFields : UnknownStorage // +0x10
	var _value : Google_Protobuf_Any // +0x20
 }

 struct InternalSwiftProtobuf.BinaryEncodingVisitor {

	// Properties
	var encoder : BinaryEncoder // +0x0
 }

 struct InternalSwiftProtobuf.BinaryEncodingMessageSetVisitor {

	// Properties
	var encoder : BinaryEncoder // +0x0
 }

 struct InternalSwiftProtobuf.TextFormatEncodingOptions {

	// Properties
	var printUnknownFields : Bool // +0x0
 }

 enum InternalSwiftProtobuf.WireFormat {

	// Properties
	case varint  
	case fixed64  
	case lengthDelimited  
	case startGroup  
	case endGroup  
	case fixed32  
 }

 enum InternalSwiftProtobuf.JSONDecodingError {

	// Properties
	case unknownField : String
	case failure  
	case malformedNumber  
	case numberRange  
	case malformedMap  
	case malformedBool  
	case malformedString  
	case invalidUTF8  
	case missingFieldNames  
	case schemaMismatch  
	case unrecognizedEnumValue  
	case illegalNull  
	case unquotedMapKey  
	case leadingZero  
	case truncated  
	case malformedDuration  
	case malformedTimestamp  
	case malformedFieldMask  
	case trailingGarbage  
	case conflictingOneOf  
	case messageDepthLimit  
 }

 enum InternalSwiftProtobuf.TextFormatDecodingError {

	// Properties
	case malformedText  
	case malformedNumber  
	case trailingGarbage  
	case truncated  
	case invalidUTF8  
	case schemaMismatch  
	case missingFieldNames  
	case unknownField  
	case unrecognizedEnumValue  
	case conflictingOneOf  
	case internalExtensionError  
 }
