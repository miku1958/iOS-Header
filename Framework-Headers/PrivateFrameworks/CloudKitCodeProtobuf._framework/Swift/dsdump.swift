 protocol CloudKitCodeProtobuf.ExtensibleMessage // 4 requirements
 {
	// class base protocol
	// getter
	// setter
	// modify coroutine
 }
 protocol CloudKitCodeProtobuf.Visitor // 56 requirements
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
 protocol CloudKitCodeProtobuf.Decoder // 59 requirements
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
 protocol CloudKitCodeProtobuf.ProtobufAPIVersion_2 // 0 requirements
 {
 }
 protocol CloudKitCodeProtobuf.ProtobufAPIVersionCheck // 2 requirements
 {
	// class associated conformance access function
	// class associated type access function
 }
 protocol CloudKitCodeProtobuf.Message // 11 requirements
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
	// getter
	// method
 }
 protocol CloudKitCodeProtobuf._MessageImplementationBase // 3 requirements
 {
	// class base protocol
	// class base protocol
	// method
 }
 protocol CloudKitCodeProtobuf.SelectiveVisitor // 1 requirements
 {
	// class base protocol
 }
 protocol CloudKitCodeProtobuf.AnyMessageExtension // 4 requirements
 {
	// getter
	// getter
	// getter
	// method
 }
 protocol CloudKitCodeProtobuf.AnyExtensionField // 7 requirements
 {
	// class base protocol
	// getter
	// getter
	// method
	// method
	// method
	// getter
 }
 protocol CloudKitCodeProtobuf.ExtensionField // 8 requirements
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
 protocol CloudKitCodeProtobuf._CustomJSONCodable // 3 requirements
 {
	// method
	// method
	// class method
 }
 protocol CloudKitCodeProtobuf.ProtobufWrapper // 7 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
	// setter
	// modify coroutine
	// class init
	// class init
 }
 protocol CloudKitCodeProtobuf.ExtensionMap // 2 requirements
 {
	// getter
	// method
 }
 protocol CloudKitCodeProtobuf._ProtoNameProviding // 1 requirements
 {
	// class getter
 }
 protocol CloudKitCodeProtobuf.FieldType // 8 requirements
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
 protocol CloudKitCodeProtobuf.MapKeyType // 1 requirements
 {
	// class base protocol
 }
 protocol CloudKitCodeProtobuf.MapValueType // 1 requirements
 {
	// class base protocol
 }
 protocol CloudKitCodeProtobuf.Enum // 5 requirements
 {
	// class base protocol
	// class base protocol
	// class init
	// class init
	// getter
 }

 enum CloudKitCodeProtobuf.JSONEncodingError {

	// Properties
	case anyTranscodeFailure  
	case timestampRange  
	case durationRange  
	case fieldMaskConversion  
	case missingFieldNames  
	case missingValue  
 }

 struct CloudKitCodeProtobuf.TextFormatDecoder {

	// Properties
	var scanner : TextFormatScanner // +0x0
	var fieldCount : Int // +0x40
	var terminator : UInt8? // +0x48
	var fieldNameMap : _NameMap? // +0x50
	var messageType : Message.Type? // +0x70
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Api {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Method {

	// Properties
	var name : String // +0x0
	var requestTypeURL : String // +0x10
	var requestStreaming : Bool // +0x20
	var responseTypeURL : String // +0x28
	var responseStreaming : Bool // +0x38
	var options : [Google_Protobuf_Option] // +0x40
	var syntax : Google_Protobuf_Syntax // +0x48
	var unknownFields : UnknownStorage // +0x58
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Mixin {

	// Properties
	var name : String // +0x0
	var root : String // +0x10
	var unknownFields : UnknownStorage // +0x20
 }

 class CloudKitCodeProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String // +0x10 (0x10)
	var _methods : Google_Protobuf_Method // +0x20 (0x8)
	var _options : [Google_Protobuf_Option] // +0x28 (0x8)
	var _version : String // +0x30 (0x10)
	var _sourceContext : Google_Protobuf_SourceContext? // +0x40 (0x20)
	var _mixins : Google_Protobuf_Mixin // +0x60 (0x8)
	var _syntax : Google_Protobuf_Syntax // +0x68 (0x9)

	// Swift methods
 }

 struct CloudKitCodeProtobuf.ExtensionFieldValueSet {

	// Properties
	var values : [Int : AnyExtensionField] // +0x0
 }

 struct CloudKitCodeProtobuf._ProtobufMap { }

 struct CloudKitCodeProtobuf._ProtobufMessageMap { }

 struct CloudKitCodeProtobuf._ProtobufEnumMap { }

 struct CloudKitCodeProtobuf.JSONEncoder {

	// Properties
	var data : [UInt8] // +0x0
	var separator : UInt8? // +0x8
	let doubleFormatter : DoubleFormatter // +0x10
 }

 struct CloudKitCodeProtobuf.BinaryEncodingVisitor {

	// Properties
	var encoder : BinaryEncoder // +0x0
 }

 struct CloudKitCodeProtobuf.BinaryEncodingMessageSetVisitor {

	// Properties
	var encoder : BinaryEncoder // +0x0
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Duration {

	// Properties
	var seconds : Int64 // +0x0
	var nanos : Int32 // +0x8
	var unknownFields : UnknownStorage // +0x10
 }

 struct CloudKitCodeProtobuf.HashVisitor {

	// Properties
	var hashValue : Int // +0x0
 }

 struct CloudKitCodeProtobuf.JSONDecodingOptions {

	// Properties
	var messageDepthLimit : Int // +0x0
 }

 enum CloudKitCodeProtobuf.JSONDecodingError {

	// Properties
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

 enum CloudKitCodeProtobuf.BinaryEncodingError {

	// Properties
	case anyTranscodeFailure  
	case missingRequiredFields  
 }

 class CloudKitCodeProtobuf.InternPool : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var interned : [UnsafeBufferPointer<UInt8>] // +0x10 (0x8)

	// Swift methods
 }

 struct CloudKitCodeProtobuf._NameMap {

	// Properties
	var internPool : InternPool // +0x0
	var numberToNameMap : Names // +0x8
	var protoToNumberMap : Name // +0x10
	var jsonToNumberMap : Name // +0x18
 }

 enum CloudKitCodeProtobuf.NameDescription {

	// Properties
	case same : (proto: StaticString)
	case standard : (proto: StaticString)
	case unique : (proto: StaticString, json: StaticString)
	case aliased : (proto: StaticString, aliases: [StaticString])
 }

 struct CloudKitCodeProtobuf.Names {

	// Properties
	var json : Name // +0x0
	var proto : Name // +0x28
 }

 struct CloudKitCodeProtobuf.Name {

	// Properties
	var utf8Buffer : UnsafeBufferPointer<UInt8> // +0x0
	var nameString : NameString // +0x10
 }

 enum CloudKitCodeProtobuf.NameString {

	// Properties
	case string : String
	case staticString : StaticString
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Empty {

	// Properties
	var unknownFields : UnknownStorage // +0x0
 }

 struct CloudKitCodeProtobuf.BinaryDecodingOptions {

	// Properties
	var messageDepthLimit : Int // +0x0
	var discardUnknownFields : Bool // +0x8
 }

 struct CloudKitCodeProtobuf.TextFormatEncodingVisitor {

	// Properties
	var encoder : TextFormatEncoder // +0x0
	var nameMap : _NameMap? // +0x10
	var nameResolver : [Int : StaticString] // +0x30
	var extensions : ExtensionFieldValueSet? // +0x38
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_DoubleValue {

	// Properties
	var value : Double // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_FloatValue {

	// Properties
	var value : Float // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Int64Value {

	// Properties
	var value : Int64 // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_UInt64Value {

	// Properties
	var value : UInt64 // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Int32Value {

	// Properties
	var value : Int32 // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_UInt32Value {

	// Properties
	var value : UInt32 // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_BoolValue {

	// Properties
	var value : Bool // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_StringValue {

	// Properties
	var value : String // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_BytesValue {

	// Properties
	var value : Data // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 enum CloudKitCodeProtobuf.WireFormat {

	// Properties
	case varint  
	case fixed64  
	case lengthDelimited  
	case startGroup  
	case endGroup  
	case fixed32  
 }

 struct CloudKitCodeProtobuf.JSONDecoder {

	// Properties
	var scanner : JSONScanner // +0x0
	var options : JSONDecodingOptions // +0x30
	var fieldCount : Int // +0x38
	var isMapKey : Bool // +0x40
	var fieldNameMap : _NameMap? // +0x48
 }

 struct CloudKitCodeProtobuf.Version { }

 struct CloudKitCodeProtobuf.Google_Protobuf_SourceContext {

	// Properties
	var fileName : String // +0x0
	var unknownFields : UnknownStorage // +0x10
 }

 struct CloudKitCodeProtobuf.JSONEncodingVisitor {

	// Properties
	var encoder : JSONEncoder // +0x0
	var nameMap : _NameMap // +0x18
 }

 enum CloudKitCodeProtobuf.Google_Protobuf_NullValue {

	// Properties
	case UNRECOGNIZED : Int
	case nullValue  
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Struct {

	// Properties
	var fields : Google_Protobuf_Value // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Value {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 enum CloudKitCodeProtobuf.OneOf_Kind {

	// Properties
	case nullValue : Google_Protobuf_NullValue
	case numberValue : Double
	case stringValue : String
	case boolValue : Bool
	case structValue : Google_Protobuf_Struct
	case listValue : Google_Protobuf_ListValue
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_ListValue {

	// Properties
	var values : Google_Protobuf_Value // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 class CloudKitCodeProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _kind : OneOf_Kind // +0x10 (0x18)

	// Swift methods
 }

 class CloudKitCodeProtobuf.MessageExtension {
 struct CloudKitCodeProtobuf.TextFormatEncoder {

	// Properties
	var data : [UInt8] // +0x0
	var indentString : [UInt8] // +0x8
 }

 struct CloudKitCodeProtobuf.OptionalExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A.FieldType.BaseType
	var protobufExtension : AnyMessageExtension
 }

 struct CloudKitCodeProtobuf.RepeatedExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A.FieldType.BaseType]
	var protobufExtension : AnyMessageExtension
 }

 struct CloudKitCodeProtobuf.PackedExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A.FieldType.BaseType]
	var protobufExtension : AnyMessageExtension
 }

 struct CloudKitCodeProtobuf.OptionalEnumExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A
	var protobufExtension : AnyMessageExtension
 }

 struct CloudKitCodeProtobuf.RepeatedEnumExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct CloudKitCodeProtobuf.PackedEnumExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct CloudKitCodeProtobuf.OptionalMessageExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A
	var protobufExtension : AnyMessageExtension
 }

 struct CloudKitCodeProtobuf.RepeatedMessageExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 struct CloudKitCodeProtobuf.OptionalGroupExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : A
	var protobufExtension : AnyMessageExtension
 }

 struct CloudKitCodeProtobuf.RepeatedGroupExtensionField: ExtensionField,  AnyExtensionField {

	// Properties
	var value : [A]
	var protobufExtension : AnyMessageExtension
 }

 enum CloudKitCodeProtobuf.AnyUnpackError {

	// Properties
	case typeMismatch  
	case malformedWellKnownTypeJSON  
	case malformedAnyField  
 }

 enum CloudKitCodeProtobuf.BinaryDecodingError {

	// Properties
	case trailingGarbage  
	case truncated  
	case invalidUTF8  
	case malformedProtobuf  
	case missingRequiredFields  
	case internalExtensionError  
	case messageDepthLimit  
 }

 enum CloudKitCodeProtobuf.Google_Protobuf_Syntax {

	// Properties
	case UNRECOGNIZED : Int
	case proto2  
	case proto3  
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Type {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Field {

	// Properties
	var kind : Kind // +0x0
	var cardinality : Cardinality // +0x10
	var number : Int32 // +0x1c
	var name : String // +0x20
	var typeURL : String // +0x30
	var oneofIndex : Int32 // +0x40
	var packed : Bool // +0x44
	var options : Google_Protobuf_Option // +0x48
	var jsonName : String // +0x50
	var defaultValue : String // +0x60
	var unknownFields : UnknownStorage // +0x70
 }

 enum CloudKitCodeProtobuf.Kind {

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

 enum CloudKitCodeProtobuf.Cardinality {

	// Properties
	case UNRECOGNIZED : Int
	case unknown  
	case optional  
	case required  
	case repeated  
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Enum {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_EnumValue {

	// Properties
	var name : String // +0x0
	var number : Int32 // +0x10
	var options : Google_Protobuf_Option // +0x18
	var unknownFields : UnknownStorage // +0x20
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Option {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : _StorageClass // +0x10
 }

 class CloudKitCodeProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String
	var _fields : Google_Protobuf_Field
	var _oneofs : [String]
	var _options : Google_Protobuf_Option
	var _sourceContext : Google_Protobuf_SourceContext?
	var _syntax : Google_Protobuf_Syntax

	// Swift methods
 }

 class CloudKitCodeProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String
	var _enumvalue : Google_Protobuf_EnumValue
	var _options : Google_Protobuf_Option
	var _sourceContext : Google_Protobuf_SourceContext?
	var _syntax : Google_Protobuf_Syntax

	// Swift methods
 }

 class CloudKitCodeProtobuf._StorageClass : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _name : String
	var _value : Google_Protobuf_Any?

	// Swift methods
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Timestamp {

	// Properties
	var seconds : Int64 // +0x0
	var nanos : Int32 // +0x8
	var unknownFields : UnknownStorage // +0x10
 }

 enum CloudKitCodeProtobuf.Internal { }

 struct CloudKitCodeProtobuf.TextFormatScanner {

	// Properties
	var extensions : ExtensionMap? // +0x0
	var p : UnsafePointer<UInt8> // +0x28
	var end : UnsafePointer<UInt8> // +0x30
	var doubleFormatter : DoubleFormatter // +0x38
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_FieldMask {

	// Properties
	var paths : [String] // +0x0
	var unknownFields : UnknownStorage // +0x8
 }

 struct CloudKitCodeProtobuf.UnknownStorage {

	// Properties
	var data : Data // +0x0
 }

 struct CloudKitCodeProtobuf.JSONMapEncodingVisitor {

	// Properties
	var separator : StaticString? // +0x0
	var encoder : JSONEncoder // +0x18
 }

 struct CloudKitCodeProtobuf.BinaryEncoder {

	// Properties
	var pointer : UnsafeMutablePointer<UInt8> // +0x0
 }

 class CloudKitCodeProtobuf.AnyMessageStorage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _typeURL : String // +0x10 (0x10)
	var state : InternalState // +0x20 (0x29)

	// Swift methods
	0x938d0  func <stripped> // getter 
	0x93bf0  func <stripped> // method 
	0x93cd0  func <stripped> // method 
	0x94140  func <stripped> // method 
 }

 enum CloudKitCodeProtobuf.InternalState {

	// Properties
	case binary : Data
	case message : Message
	case contentJSON : (Data, JSONDecodingOptions)
 }

 class CloudKitCodeProtobuf.DoubleFormatter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var doubleFormatString : UnsafeMutableRawBufferPointer // +0x10 (0x10)
	var work : UnsafeMutableRawBufferPointer // +0x20 (0x10)

	// Swift methods
	0x96eb0  func <stripped> // method 
 }

 struct CloudKitCodeProtobuf.SimpleExtensionMap {

	// Properties
	var fields : [Int : [AnyMessageExtension]] // +0x0
 }

 enum CloudKitCodeProtobuf.BinaryDelimited { }

 enum CloudKitCodeProtobuf.Error {

	// Properties
	case unknownStreamError  
	case truncated  
 }

 struct CloudKitCodeProtobuf.BinaryDecoder {

	// Properties
	var p : UnsafePointer<UInt8> // +0x0
	var available : Int // +0x8
	var fieldStartP : UnsafePointer<UInt8> // +0x10
	var fieldEndP : UnsafePointer<UInt8>? // +0x18
	var consumed : Bool // +0x20
	var fieldWireFormat : WireFormat // +0x21
	var fieldNumber : Int // +0x28
	var extensions : ExtensionMap? // +0x30
	var groupFieldNumber : Int? // +0x58
	var options : BinaryDecodingOptions // +0x68
	var recursionBudget : Int // +0x78
	var unknownData : Data? // +0x80
	var unknownOverride : Data? // +0x90
 }

 struct CloudKitCodeProtobuf.Google_Protobuf_Any {

	// Properties
	var unknownFields : UnknownStorage // +0x0
	var _storage : AnyMessageStorage // +0x10
 }

 struct CloudKitCodeProtobuf.JSONScanner {

	// Properties
	let source : UnsafeBufferPointer<UInt8> // +0x0
	var index : Int // +0x10
	var numberFormatter : DoubleFormatter // +0x18
	var recursionLimit : Int // +0x20
	var recursionBudget : Int // +0x28
 }

 enum CloudKitCodeProtobuf.TextFormatDecodingError {

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

 struct CloudKitCodeProtobuf.ProtobufFloat: FieldType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufDouble: FieldType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufInt32: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufInt64: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufUInt32: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufUInt64: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufSInt32: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufSInt64: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufFixed32: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufFixed64: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufSFixed32: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufSFixed64: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufBool: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufString: FieldType,  MapKeyType,  MapValueType { }

 struct CloudKitCodeProtobuf.ProtobufBytes: FieldType,  MapValueType { }

 struct CloudKitCodeProtobuf.BinaryEncodingSizeVisitor {

	// Properties
	var serializedSize : Int // +0x0
 }

 struct CloudKitCodeProtobuf.BinaryEncodingMessageSetSizeVisitor {

	// Properties
	var serializedSize : Int // +0x0
 }
