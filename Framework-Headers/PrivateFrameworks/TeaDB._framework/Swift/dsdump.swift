 protocol TeaDB.KeyValueStoreDescriptor // 2 requirements
 {
	// class getter
	// class getter
 }
 protocol TeaDB.EntityType // 3 requirements
 {
	// class base protocol
	// class base protocol
	// getter
 }
 protocol TeaDB.QueryValueType // 1 requirements
 {
	// getter
 }
 protocol TeaDB.ColumnType // 6 requirements
 {
	// class base protocol
	// class base protocol
	// class base protocol
	// class getter
	// getter
	// class init
 }
 protocol TeaDB.ColumnCodable // 11 requirements
 {
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
	// method
	// method
	// class method
 }
 protocol TeaDB.Nullable // 1 requirements
 {
	// getter
 }
 protocol TeaDB.CommandType // 1 requirements
 {
	// getter
 }
 protocol TeaDB.BaseType // 5 requirements
 {
	// class base protocol
	// class base protocol
	// class getter
	// class getter
	// class init
 }
 protocol TeaDB.ConnectionType // 1 requirements
 {
	// method
 }
 protocol TeaDB.StatementChainType // 2 requirements
 {
	// method
	// class method
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : K
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : K
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : K
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : K
 }

 class TeaDB.KeyValueStore {
 struct TeaDB.Promises {

	// Properties
	var kvs : KeyValueStore
 }

 struct TeaDB.KVSEntity {

	// Properties
	var id : Column
	var updatedAt : Column
	var valueJson : Column
 }

 struct TeaDB.KVSEntry {

	// Properties
	var entity : KVSEntity
	var value : B
 }

 enum TeaDB.TranslationError {

	// Properties
	case missingRoot  
 }

 enum TeaDB.CodingKeys {

	// Properties
	case id  
	case updatedAt  
	case valueJson  
 }

 struct TeaDB._Optional {

	// Properties
	var value : A?
 }

 enum TeaDB.DataType {

	// Properties
	case text  
	case integer  
	case bool  
	case double  
	case blob  
 }

 struct TeaDB.RawEntity { }

 enum TeaDB.CodingKeys { }

 enum TeaDB.ValueType {

	// Properties
	case text : String
	case integer : Int
	case bool : Bool
	case double : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	case blob : ·H
	case null  
 }

 enum TeaDB.CodingKeys {

	// Properties
	case text  
	case integer  
	case bool  
	case double  
	case blob  
	case null  
 }

 class TeaDB.Database : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var connection : Connection
	let queue : OS_dispatch_queue

	// Swift methods
	0x12f20  class func Database.__allocating_init(location:) // init 
 }

 enum TeaDB.Location {

	// Properties
	case path : String
	case inMemory  
 }

 enum TeaDB.Errors {

	// Properties
	case cantOpen : Location
	case noConnection  
 }

 enum TeaDB.Expression {

	// Properties
	case eq : QueryValueType
	case neq : QueryValueType
	case gt : QueryValueType
	case gte : QueryValueType
	case lt : QueryValueType
	case lte : QueryValueType
	case and : Expression
	case or : Expression
	case in : QueryValueType
	case notIn : QueryValueType
 }

 class TeaDB.Query {
 struct TeaDB.InsertCommand {

	// Properties
	var parts : [String]
 }

 class TeaDB.Store {
 struct TeaDB.Promises {

	// Properties
	var store : Store
 }

 class TeaDB.Column {
 enum TeaDB.Func {

	// Properties
	case value : A
	case block : ()
 }

 struct TeaDB.CreateIndexCommand {

	// Properties
	var parts : [String]
 }

 class TeaDB.Delete {
 class TeaDB.Save {
 struct TeaDB.CreateTableCommand {

	// Properties
	var parts : [String]
 }

 struct TeaDB.SelectCommand {

	// Properties
	var parts : [String]
 }

 class TeaDB.Connection : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ConnectionType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : UH

	// Swift methods
 }

 struct TeaDB.Versions {

	// Properties
	let create : Create // +0x0
	let save : Save // +0x8
	let query : Query // +0x10
 }

 struct TeaDB.Entity {

	// Properties
	let id : Column // +0x0
	let version : Column // +0x8
 }

 enum TeaDB.CodingKeys {

	// Properties
	case id  
	case version  
 }

 class TeaDB.MixedKeyValueStore {
 struct TeaDB.Promises {

	// Properties
	var kvs : MixedKeyValueStore
 }

 struct TeaDB.MKVSEntity {

	// Properties
	var id : Column
	var updatedAt : Column
	var valueJson : Column
 }

 struct TeaDB.MKVSEntry {

	// Properties
	var entity : MKVSEntity
	var value : B
 }

 enum TeaDB.TranslationError {

	// Properties
	case missingRoot  
 }

 enum TeaDB.CodingKeys {

	// Properties
	case id  
	case updatedAt  
	case valueJson  
 }

 class TeaDB.Statement {
 enum TeaDB.Operation {

	// Properties
	case create  
	case insert  
	case update  
	case delete  
	case query  
	case run  
 }

 enum TeaDB.Transaction {

	// Properties
	case deferred  
	case immediate  
	case exclusive  
 }

 class TeaDB.Table {
 class TeaDB.PreparedStatement : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : UH

	// Swift methods
 }

 enum TeaDB.SQLError {

	// Properties
	case error : String
	case internal : String
	case perm : String
	case abort : String
	case busy : String
	case locked : String
	case nomem : String
	case readonly : String
	case interrupt : String
	case ioerr : String
	case corrupt : String
	case notFound : String
	case full : String
	case cantOpen : String
	case protocol : String
	case empty : String
	case schema : String
	case tooBig : String
	case constraint : String
	case mismatch : String
	case misuse : String
	case noLFS : String
	case auth : String
	case format : String
	case range : String
	case notADB : String
	case notice : String
	case warning : String
	case unknown : String
	case ok  
	case row  
	case done  
 }

 class TeaDB.Create {
 struct TeaDB.DeleteCommand {

	// Properties
	var parts : [String]
 }
