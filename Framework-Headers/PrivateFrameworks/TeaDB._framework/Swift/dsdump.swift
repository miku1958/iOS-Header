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
 protocol TeaDB.FastEntityType // 2 requirements
 {
	// class base protocol
	// getter
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
	var width : èK
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : èK
 }

 struct __C.CGRect {

	// Properties
	var origin : CGPoint
	var size : CGSize
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : èK
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : èK
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
	case blob : ªH
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
	0x135e0  class func Database.__allocating_init(location:) // init 
 }

 enum TeaDB.Location {

	// Properties
	case path : String
	case documents : (name: String)
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
 struct TeaDB.ValueOf: QueryValueType {

	// Properties
	let value : String // +0x0
 }

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

 enum TeaDB.OrderBy {

	// Properties
	case descending : (column: String)
	case ascending : (column: String)
 }

 struct TeaDB.SelectCommand {

	// Properties
	var parts : [String]
 }

 class TeaDB.FastEntity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let keysAndValues : ColumnCodable

	// Swift methods
	0x23620  class func FastEntity.__allocating_init<A>(_:) // init 
	0x236d0  class func FastEntity.__allocating_init<A, B>(_:_:) // init 
	0x237c0  class func FastEntity.__allocating_init<A, B, C>(_:_:_:) // init 
	0x238d0  class func FastEntity.__allocating_init<A, B, C, D>(_:_:_:_:) // init 
	0x23a40  class func FastEntity.__allocating_init<A, B, C, D, E>(_:_:_:_:_:) // init 
	0x23b40  class func FastEntity.__allocating_init<A, B, C, D, E, F>(_:_:_:_:_:_:) // init 
	0x23c70  class func FastEntity.__allocating_init<A, B, C, D, E, F, G>(_:_:_:_:_:_:_:) // init 
	0x23dc0  class func FastEntity.__allocating_init<A, B, C, D, E, F, G, H>(_:_:_:_:_:_:_:_:) // init 
	0x23f20  class func FastEntity.__allocating_init<A, B, C, D, E, F, G, H, I>(_:_:_:_:_:_:_:_:_:) // init 
	0x240a0  class func FastEntity.__allocating_init<A, B, C, D, E, F, G, H, I, J>(_:_:_:_:_:_:_:_:_:_:) // init 
	0x24240  class func FastEntity.__allocating_init<A, B, C, D, E, F, G, H, I, J, K>(_:_:_:_:_:_:_:_:_:_:_:) // init 
	0x24400  class func FastEntity.__allocating_init<A, B, C, D, E, F, G, H, I, J, K, L>(_:_:_:_:_:_:_:_:_:_:_:_:) // init 
 }

 class TeaDB.Connection : _SwiftObject /usr/lib/swift/libswiftCore.dylib, ConnectionType {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : IH

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
	var _id : FastColumn // +0x0
	var _version : FastColumn // +0x8
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

 class TeaDB.FastColumn {
 enum TeaDB.CodingKeys {

	// Properties
	case name  
	case wrappedValue  
 }

 enum TeaDB.Transaction {

	// Properties
	case deferred  
	case immediate  
	case exclusive  
 }

 struct TeaDB.JSON {

	// Properties
	let value : A
 }

 enum TeaDB.CodingKeys {

	// Properties
	case value  
 }

 class TeaDB.Table {
 class TeaDB.PreparedStatement : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : IH

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
