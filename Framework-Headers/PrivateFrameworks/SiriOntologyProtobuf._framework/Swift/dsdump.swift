 protocol SiriOntologyProtobuf.Enum // 5 requirements
 {
	// class base protocol
	// class base protocol
	// class init
	// class init
	// getter
 }
 protocol SiriOntologyProtobuf.ExtensibleMessage // 4 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriOntologyProtobuf.Decoder // 59 requirements
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
 protocol SiriOntologyProtobuf._CustomJSONCodable // 3 requirements
 {
	// method
	// method
	// class method
 }
 protocol SiriOntologyProtobuf.AnyExtensionField // 7 requirements
 {
	// class base protocol
	// method
	// getter
	// method
	// method
	// method
	// getter
 }
 protocol SiriOntologyProtobuf.ExtensionField // 8 requirements
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
 protocol SiriOntologyProtobuf.AnyMessageExtension // 4 requirements
 {
	// getter
	// getter
	// getter
	// method
 }
 protocol SiriOntologyProtobuf.Message // 11 requirements
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
 protocol SiriOntologyProtobuf._MessageImplementationBase // 3 requirements
 {
	// class base protocol
	// class base protocol
	// method
 }
 protocol SiriOntologyProtobuf.ExtensionMap // 2 requirements
 {
	// getter
	// method
 }
 protocol SiriOntologyProtobuf.ProtobufAPIVersion_2 // 0 requirements
 {
 }
 protocol SiriOntologyProtobuf.ProtobufAPIVersionCheck // 2 requirements
 {
	// class associated conformance access function
	// class associated type access function
 }
 protocol SiriOntologyProtobuf.Visitor // 56 requirements
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
 protocol SiriOntologyProtobuf.FieldType // 8 requirements
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
 protocol SiriOntologyProtobuf.MapKeyType // 1 requirements
 {
	// class base protocol
 }
 protocol SiriOntologyProtobuf.MapValueType // 1 requirements
 {
	// class base protocol
 }
 protocol SiriOntologyProtobuf._ProtoNameProviding // 1 requirements
 {
	// class getter
 }
 protocol SiriOntologyProtobuf.ProtobufWrapper // 7 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
	// setter
	// modify coroutine
	// class init
	// class init
 }
 protocol SiriOntologyProtobuf.SelectiveVisitor // 1 requirements
 {
	// class base protocol
 }

 struct __C._ConditionalAllocationBuffer {

	// Properties
	var memory : UnsafeMutableRawPointer
	var capacity : Int
	var onStack : Bool
 }

 enum SiriOntologyProtobuf.BinaryEncodingError {

	// Properties
	case anyTranscodeFailure  
	case missingRequiredFields  
 }

 struct SiriOntologyProtobuf.HashVisitor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var hasher : ÌŒ // +0x0
 }

 struct SiriOntologyProtobuf.JSONScanner {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let source :  empty-list  // +0x0
	var index : Int // +0x10
	var numberParser : DoubleParser // +0x18
	var recursionLimit : Int // +0x20
	var recursionBudget : Int // +0x28
	var ignoreUnknownFields : Bool // +0x30
 }

 struct SiriOntologyProtobuf.TextFormatScanner {

	// Properties
	var extensions : ExtensionMap // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var p :  empty-list  // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	var end :  empty-list  // +0x30
	var doubleParser : DoubleParser // +0x38
 }

 struct SiriOntologyProtobuf.ExtensionFieldValueSet {

	// Properties
	var values : AnyExtensionField // +0x0
 }

 enum SiriOntologyProtobuf.Google_Protobuf_Syntax {

	// Properties
	case UNRECOGNIZED : Int
	case proto2  
	case proto3  
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Type {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Field {

	// Properties
	var kind : Kind // +0x0
	var cardinality : Cardinality // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var number : ﬂÃ // +0x1c
	var name : String // +0x20
	var typeURL : String // +0x30
WARNING: couldn't find address 0x0 (0x0) in binary!
	var oneofIndex : ﬂÃ // +0x40
	var packed : Bool // +0x44
	var options : Google_Protobuf_Option // +0x48
	var jsonName : String // +0x50
	var defaultValue : String // +0x60
	var unknownFields : UnknownStorage // +0x70
 }

 enum SiriOntologyProtobuf.Kind {

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

 enum SiriOntologyProtobuf.Cardinality {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case optional  
	case required  
	case repeated  
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Enum {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_EnumValue {

	// Properties
	var name : String // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var number : ﬂÃ // +0x10
	var options : Google_Protobuf_Option // +0x18
	var unknownFields : UnknownStorage // +0x20
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Option {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String
	var _fields : Google_Protobuf_Field
	var _oneofs : [String]
	var _options : Google_Protobuf_Option
	var _sourceContext : Google_Protobuf_SourceContext
	var _syntax : Google_Protobuf_Syntax

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String
	var _enumvalue : Google_Protobuf_EnumValue
	var _options : Google_Protobuf_Option
	var _sourceContext : Google_Protobuf_SourceContext
	var _syntax : Google_Protobuf_Syntax

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String
	var _value : Google_Protobuf_Any

	// Swift methods
 }

 enum SiriOntologyProtobuf.JSONDecodingError {

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

 struct SiriOntologyProtobuf.BinaryEncoder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pointer :  empty-list  // +0x0
 }

 enum SiriOntologyProtobuf.Internal { }

 struct SiriOntologyProtobuf.Google_Protobuf_Api {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Method {

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

 struct SiriOntologyProtobuf.Google_Protobuf_Mixin {

	// Properties
	var name : String // +0x0
	var root : String // +0x10
	var unknownFields : UnknownStorage // +0x20
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String // +0x10 (0x10)
	var _methods : Google_Protobuf_Method // +0x20 (0x8)
	var _options : Google_Protobuf_Option // +0x28 (0x8)
	var _version : String // +0x30 (0x10)
	var _sourceContext : Google_Protobuf_SourceContext // +0x40 (0x20)
	var _mixins : Google_Protobuf_Mixin // +0x60 (0x8)
	var _syntax : Google_Protobuf_Syntax // +0x68 (0x9)

	// Swift methods
 }

 enum SiriOntologyProtobuf.JSONEncodingError {

	// Properties
	case anyTranscodeFailure  
	case timestampRange  
	case durationRange  
	case fieldMaskConversion  
	case missingFieldNames  
	case missingValue  
 }

 struct SiriOntologyProtobuf.JSONMapEncodingVisitor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var separator : ˚… // +0x0
	var encoder : JSONEncoder // +0x18
	let options : JSONEncodingOptions // +0x22
 }

 enum SiriOntologyProtobuf.BinaryDecodingError {

	// Properties
	case trailingGarbage  
	case truncated  
	case invalidUTF8  
	case malformedProtobuf  
	case missingRequiredFields  
	case internalExtensionError  
	case messageDepthLimit  
 }

 struct SiriOntologyProtobuf.Version { }

 struct SiriOntologyProtobuf.BinaryDecodingOptions {

	// Properties
	var messageDepthLimit : Int // +0x0
	var discardUnknownFields : Bool // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_FileDescriptorSet {

	// Properties
	var file : Google_Protobuf_FileDescriptorProto // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_FileDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_DescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.ExtensionRange {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.ReservedRange {

	// Properties
	var unknownFields : UnknownStorage // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _start : … // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : … // +0x18
 }

 struct SiriOntologyProtobuf.Google_Protobuf_ExtensionRangeOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
 }

 struct SiriOntologyProtobuf.Google_Protobuf_FieldDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 enum SiriOntologyProtobuf.TypeEnum {

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

 enum SiriOntologyProtobuf.Label {

	// Properties
	case optional  
	case required  
	case repeated  
 }

 struct SiriOntologyProtobuf.Google_Protobuf_OneofDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_EnumDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.EnumReservedRange {

	// Properties
	var unknownFields : UnknownStorage // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _start : … // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : … // +0x18
 }

 struct SiriOntologyProtobuf.Google_Protobuf_EnumValueDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_ServiceDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_MethodDescriptorProto {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_FileOptions {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x10
	var _storage : _StorageClass // +0x18
 }

 enum SiriOntologyProtobuf.OptimizeMode {

	// Properties
	case speed  
	case codeSize  
	case liteRuntime  
 }

 struct SiriOntologyProtobuf.Google_Protobuf_MessageOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _messageSetWireFormat : Bool? // +0x20
	var _noStandardDescriptorAccessor : Bool? // +0x21
	var _deprecated : Bool? // +0x22
	var _mapEntry : Bool? // +0x23
 }

 struct SiriOntologyProtobuf.Google_Protobuf_FieldOptions {

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

 enum SiriOntologyProtobuf.CType {

	// Properties
	case string  
	case cord  
	case stringPiece  
 }

 enum SiriOntologyProtobuf.JSType {

	// Properties
	case jsNormal  
	case jsString  
	case jsNumber  
 }

 struct SiriOntologyProtobuf.Google_Protobuf_OneofOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
 }

 struct SiriOntologyProtobuf.Google_Protobuf_EnumOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _allowAlias : Bool? // +0x20
	var _deprecated : Bool? // +0x21
 }

 struct SiriOntologyProtobuf.Google_Protobuf_EnumValueOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _deprecated : Bool? // +0x20
 }

 struct SiriOntologyProtobuf.Google_Protobuf_ServiceOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _deprecated : Bool? // +0x20
 }

 struct SiriOntologyProtobuf.Google_Protobuf_MethodOptions {

	// Properties
	var uninterpretedOption : Google_Protobuf_UninterpretedOption // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _protobuf_extensionFieldValues : ExtensionFieldValueSet // +0x18
	var _deprecated : Bool? // +0x20
	var _idempotencyLevel : IdempotencyLevel // +0x21
 }

 enum SiriOntologyProtobuf.IdempotencyLevel {

	// Properties
	case idempotencyUnknown  
	case noSideEffects  
	case idempotent  
 }

 struct SiriOntologyProtobuf.Google_Protobuf_UninterpretedOption {

	// Properties
	var name : NamePart // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _identifierValue : String? // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _positiveIntValue : …» // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _negativeIntValue : I» // +0x38
	var _doubleValue : Double? // +0x48
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _stringValue : Û¡ // +0x58
	var _aggregateValue : String? // +0x68
 }

 struct SiriOntologyProtobuf.NamePart {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _namePart : String? // +0x10
	var _isExtension : Bool? // +0x20
 }

 struct SiriOntologyProtobuf.Google_Protobuf_SourceCodeInfo {

	// Properties
	var location : Location // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Location {

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

 struct SiriOntologyProtobuf.Google_Protobuf_GeneratedCodeInfo {

	// Properties
	var annotation : Annotation // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Annotation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var path :  empty-list  // +0x0
	var unknownFields : UnknownStorage // +0x8
	var _sourceFile : String? // +0x18
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _begin : … // +0x28
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : … // +0x30
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String?
	var _package : String?
	var _dependency : [String]
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _publicDependency :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _weakDependency :  empty-list 
	var _messageType : Google_Protobuf_DescriptorProto
	var _enumType : Google_Protobuf_EnumDescriptorProto
	var _service : Google_Protobuf_ServiceDescriptorProto
	var _extension : Google_Protobuf_FieldDescriptorProto
	var _options : Google_Protobuf_FileOptions
	var _sourceCodeInfo : Google_Protobuf_SourceCodeInfo
	var _syntax : String?

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String?
	var _field : Google_Protobuf_FieldDescriptorProto
	var _extension : Google_Protobuf_FieldDescriptorProto
	var _nestedType : Google_Protobuf_DescriptorProto
	var _enumType : Google_Protobuf_EnumDescriptorProto
	var _extensionRange : ExtensionRange
	var _oneofDecl : Google_Protobuf_OneofDescriptorProto
	var _options : Google_Protobuf_MessageOptions
	var _reservedRange : ReservedRange
	var _reservedName : [String]

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _start : …
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _end : …
	var _options : Google_Protobuf_ExtensionRangeOptions

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _number : …
	var _label : Label
	var _type : TypeEnum
	var _typeName : String?
	var _extendee : String?
	var _defaultValue : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _oneofIndex : …
	var _jsonName : String?
	var _options : Google_Protobuf_FieldOptions

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String?
	var _options : Google_Protobuf_OneofOptions

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String?
	var _value : Google_Protobuf_EnumValueDescriptorProto
	var _options : Google_Protobuf_EnumOptions
	var _reservedRange : EnumReservedRange
	var _reservedName : [String]

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _number : …
	var _options : Google_Protobuf_EnumValueOptions

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String?
	var _method : Google_Protobuf_MethodDescriptorProto
	var _options : Google_Protobuf_ServiceOptions

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String?
	var _inputType : String?
	var _outputType : String?
	var _options : Google_Protobuf_MethodOptions
	var _clientStreaming : Bool?
	var _serverStreaming : Bool?

	// Swift methods
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

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

 class SiriOntologyProtobuf.DoubleParser : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var work : UnsafeMutableRawBufferPointer // +0x10 (0x10)

	// Swift methods
	0x7fb70  func <stripped> // method 
 }

 struct SiriOntologyProtobuf.TextFormatEncodingOptions {

	// Properties
	var printUnknownFields : Bool // +0x0
 }

 struct SiriOntologyProtobuf.OptionalExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : FieldType
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.RepeatedExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : FieldType
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.PackedExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : FieldType
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.OptionalEnumExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.RepeatedEnumExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.PackedEnumExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.OptionalMessageExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.RepeatedMessageExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.OptionalGroupExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.RepeatedGroupExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct SiriOntologyProtobuf.BinaryEncodingSizeVisitor {

	// Properties
	var serializedSize : Int // +0x0
 }

 struct SiriOntologyProtobuf.BinaryEncodingMessageSetSizeVisitor {

	// Properties
	var serializedSize : Int // +0x0
 }

 class SiriOntologyProtobuf.MessageExtension {
 struct SiriOntologyProtobuf.Google_Protobuf_SourceContext {

	// Properties
	var fileName : String // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Timestamp {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var seconds : ç¬ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nanos : ﬂÃ // +0x8
	var unknownFields : UnknownStorage // +0x10
 }

 struct SiriOntologyProtobuf.JSONEncodingVisitor {

	// Properties
	var encoder : JSONEncoder // +0x0
	var nameMap : _NameMap // +0x10
	let options : JSONEncodingOptions // +0x30
 }

 enum SiriOntologyProtobuf.AnyUnpackError {

	// Properties
	case typeMismatch  
	case malformedWellKnownTypeJSON  
	case malformedAnyField  
 }

 struct SiriOntologyProtobuf.UnknownStorage {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data : º // +0x0
 }

 struct SiriOntologyProtobuf.JSONEncoder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data :  empty-list  // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var separator : Å¬ // +0x8
 }

 struct SiriOntologyProtobuf.BinaryEncodingVisitor {

	// Properties
	var encoder : BinaryEncoder // +0x0
 }

 struct SiriOntologyProtobuf.BinaryEncodingMessageSetVisitor {

	// Properties
	var encoder : BinaryEncoder // +0x0
 }

 struct SiriOntologyProtobuf.TextFormatEncodingVisitor {

	// Properties
	var encoder : TextFormatEncoder // +0x0
	var nameMap : _NameMap // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nameResolver : Int // +0x30
	var extensions : ExtensionFieldValueSet // +0x38
	let options : TextFormatEncodingOptions // +0x40
 }

 struct SiriOntologyProtobuf.TextFormatDecoder {

	// Properties
	var scanner : TextFormatScanner // +0x0
	var fieldCount : Int // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	var terminator : Å¬ // +0x48
	var fieldNameMap : _NameMap // +0x50
	var messageType : Message // +0x70
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Empty {

	// Properties
	var unknownFields : UnknownStorage // +0x0
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Any {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : AnyMessageStorage // +0x10
 }

 struct SiriOntologyProtobuf._ProtobufMap { }

 struct SiriOntologyProtobuf._ProtobufMessageMap { }

 struct SiriOntologyProtobuf._ProtobufEnumMap { }

 struct SiriOntologyProtobuf.JSONEncodingOptions {

	// Properties
	var alwaysPrintEnumsAsInts : Bool // +0x0
	var preserveProtoFieldNames : Bool // +0x1
 }

 struct SiriOntologyProtobuf.ProtobufFloat: FieldType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufDouble: FieldType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufInt32: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufInt64: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufUInt32: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufUInt64: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufSInt32: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufSInt64: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufFixed32: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufFixed64: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufSFixed32: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufSFixed64: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufBool: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufString: FieldType,  MapKeyType,  MapValueType { }

 struct SiriOntologyProtobuf.ProtobufBytes: FieldType,  MapValueType { }

 struct SiriOntologyProtobuf.Google_Protobuf_DoubleValue {

	// Properties
	var value : Double // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_FloatValue {

	// Properties
	var value : Float // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Int64Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : ç¬ // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_UInt64Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : G¡ // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Int32Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : ﬂÃ // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_UInt32Value {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : -¡ // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_BoolValue {

	// Properties
	var value : Bool // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_StringValue {

	// Properties
	var value : String // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_BytesValue {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var value : º // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 struct SiriOntologyProtobuf.Google_Protobuf_FieldMask {

	// Properties
	var paths : [String] // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 enum SiriOntologyProtobuf.TextFormatDecodingError {

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

 struct SiriOntologyProtobuf.BinaryDecoder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var p :  empty-list  // +0x0
	var available : Int // +0x8
WARNING: couldn't find address 0x0 (0x0) in binary!
	var fieldStartP :  empty-list  // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	var fieldEndP :  empty-list  // +0x18
	var consumed : Bool // +0x20
	var fieldWireFormat : WireFormat // +0x21
	var fieldNumber : Int // +0x28
	var extensions : ExtensionMap // +0x30
	var groupFieldNumber : Int? // +0x58
	var options : BinaryDecodingOptions // +0x68
	var recursionBudget : Int // +0x78
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownData : Û¡ // +0x80
WARNING: couldn't find address 0x0 (0x0) in binary!
	var unknownOverride : Û¡ // +0x90
 }

 struct SiriOntologyProtobuf.JSONDecoder {

	// Properties
	var scanner : JSONScanner // +0x0
	var options : JSONDecodingOptions // +0x38
	var fieldCount : Int // +0x48
	var isMapKey : Bool // +0x50
	var fieldNameMap : _NameMap // +0x58
 }

 struct SiriOntologyProtobuf.TextFormatEncoder {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data :  empty-list  // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var indentString :  empty-list  // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Duration {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var seconds : ç¬ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var nanos : ﬂÃ // +0x8
	var unknownFields : UnknownStorage // +0x10
 }

 enum SiriOntologyProtobuf.WireFormat {

	// Properties
	case varint  
	case fixed64  
	case lengthDelimited  
	case startGroup  
	case endGroup  
	case fixed32  
 }

 struct SiriOntologyProtobuf.SimpleExtensionMap {

	// Properties
	var fields : AnyMessageExtension // +0x0
 }

 class SiriOntologyProtobuf.AnyMessageStorage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _typeURL : String // +0x10 (0x10)
	var state : InternalState // +0x20 (0x29)

	// Swift methods
	0xf2880  func <stripped> // getter 
	0xf2d40  func <stripped> // method 
	0xf2e20  func <stripped> // method 
	0xf3250  func <stripped> // method 
 }

 enum SiriOntologyProtobuf.InternalState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case binary : º
	case message : Message
WARNING: couldn't find address 0x0 (0x0) in binary!
	case contentJSON : _∂
 }

 enum SiriOntologyProtobuf.Google_Protobuf_NullValue {

	// Properties
	case UNRECOGNIZED : Int
	case nullValue  
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Struct {

	// Properties
	var fields : Google_Protobuf_Value // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct SiriOntologyProtobuf.Google_Protobuf_Value {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 enum SiriOntologyProtobuf.OneOf_Kind {

	// Properties
	case nullValue : Google_Protobuf_NullValue
	case numberValue : Double
	case stringValue : String
	case boolValue : Bool
	case structValue : Google_Protobuf_Struct
	case listValue : Google_Protobuf_ListValue
 }

 struct SiriOntologyProtobuf.Google_Protobuf_ListValue {

	// Properties
	var values : Google_Protobuf_Value // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 class SiriOntologyProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _kind : OneOf_Kind // +0x10 (0x18)

	// Swift methods
 }

 enum SiriOntologyProtobuf.BinaryDelimited { }

 enum SiriOntologyProtobuf.Error {

	// Properties
	case unknownStreamError  
	case truncated  
 }

 struct SiriOntologyProtobuf.JSONDecodingOptions {

	// Properties
	var messageDepthLimit : Int // +0x0
	var ignoreUnknownFields : Bool // +0x8
 }

 class SiriOntologyProtobuf.InternPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var interned :  empty-list  // +0x10 (0x8)

	// Swift methods
	0xffed0  func <stripped> // method 
 }

 struct SiriOntologyProtobuf._NameMap {

	// Properties
	var internPool : InternPool // +0x0
	var numberToNameMap : Names // +0x8
	var protoToNumberMap : Name // +0x10
	var jsonToNumberMap : Name // +0x18
 }

 enum SiriOntologyProtobuf.NameDescription {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case same : 	π
WARNING: couldn't find address 0x0 (0x0) in binary!
	case standard : 	π
WARNING: couldn't find address 0x0 (0x0) in binary!
	case unique : ˚∏
WARNING: couldn't find address 0x0 (0x0) in binary!
	case aliased : Â∏
 }

 struct SiriOntologyProtobuf.Name {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var utf8Buffer :  empty-list  // +0x0
	var nameString : NameString // +0x10
 }

 struct SiriOntologyProtobuf.Names {

	// Properties
	var json : Name // +0x0
	var proto : Name // +0x28
 }

 enum SiriOntologyProtobuf.NameString {

	// Properties
	case string : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case staticString : u∏
 }
