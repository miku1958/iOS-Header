 protocol SiriInference.ContactRecommender // 5 requirements
 {
	// getter
	// getter
	// setter
	// modify coroutine
	// method
 }
 protocol SiriInference.Asset // 6 requirements
 {
	// getter
	// getter
	// method
	// method
	// method
	// method
 }
 protocol SiriInference.IntentEventData // 4 requirements
 {
	// getter
	// method
	// method
	// method
 }
 protocol SiriInference.RestartableOperation // 1 requirements
 {
	// method
 }
 protocol SiriInference.ValueResolver // 19 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class associated type access function
	// class getter
 }
 protocol SiriInference.SingleValueResolver // 3 requirements
 {
	// class base protocol
	// method
	// method
 }
 protocol SiriInference.MultiValueResolver // 3 requirements
 {
	// class base protocol
	// method
	// method
 }
 protocol SiriInference.ContactStore // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol SiriInference.LoggableOperation // 2 requirements
 {
	// class getter
	// method
 }
 protocol SiriInference.DefinedDateTimeRangeStorageProviding // 2 requirements
 {
	// method
	// method
 }
 protocol SiriInference.DateTimeConstraintSolving // 2 requirements
 {
	// method
	// method
 }
 protocol SiriInference.SqlDB // 13 requirements
 {
	// class getter
	// class setter
	// class modify coroutine
	// getter
	// setter
	// modify coroutine
	// class method
	// class method
	// class method
	// class init
	// class init
	// class init
	// class init
 }
 protocol SiriInference.EventStoreMatcher // 1 requirements
 {
	// method
 }
 protocol SiriInference.Into // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol SiriInference.HolidayResolver // 1 requirements
 {
	// method
 }
 protocol SiriInference.StitchedDataRecordStore // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol SiriInference.DefinedTimeStorageProviding // 1 requirements
 {
	// method
 }
 protocol SiriInference.MemorableParameter // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol SiriInference.MemorableIntent // 2 requirements
 {
	// method
	// method
 }
 protocol SiriInference.ContactSetBackgroundSignalProvider // 1 requirements
 {
	// method
 }
 protocol SiriInference.MetricKeys // 1 requirements
 {
	// method
 }
 protocol SiriInference.ContactNameExpander // 1 requirements
 {
	// method
 }
 protocol SiriInference.ContactMatcher // 1 requirements
 {
	// method
 }
 protocol SiriInference.ContactSetSignalProvider // 1 requirements
 {
	// method
 }
 protocol SiriInference.SpecialHoliday // 4 requirements
 {
	// getter
	// method
	// method
	// getter
 }
 protocol SiriInference.HandleScorer // 1 requirements
 {
	// method
 }
 protocol SiriInference.Versioned // 3 requirements
 {
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriInference.Signal // 14 requirements
 {
	// class base protocol
	// class base protocol
	// class base protocol
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// getter
	// setter
	// modify coroutine
	// class init
	// method
 }
 protocol SiriInference.SingleValueSignal // 8 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// getter
	// setter
	// modify coroutine
 }
 protocol SiriInference.DateTimeSuggestionResolverRule // 1 requirements
 {
	// method
 }
 protocol SiriInference.AnonymizeIdsProtocol // 1 requirements
 {
	// method
 }
 protocol SQLite.FailableIterator // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol SQLite.Binding // 0 requirements
 {
 }
 protocol SQLite.Number // 1 requirements
 {
	// class base protocol
 }
 protocol SQLite.Value // 7 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class getter
	// class method
	// getter
 }

 class SQLite.Statement : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FailableIterator {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handle : £ü
	let connection : Connection
	var $__lazy_storage_$_columnCount : Int?
	var $__lazy_storage_$_columnNames : [String]?
	var $__lazy_storage_$_row : Cursor

	// Swift methods
 }

 struct SQLite.Cursor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : ° // +0x0
	let columnCount : Int // +0x8
 }

 struct SQLite.Row {

	// Properties
	let columnNames : [String : Int] // +0x0
	let values : Binding // +0x8
 }

 struct SQLite.RowIterator {

	// Properties
	let statement : Statement // +0x0
	let columnNames : [String : Int] // +0x8
 }

 class SQLite.Connection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _handle : £ü
	var busyTimeout : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var busyHandler : £†
	var trace : @convention(block) (_:)?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateHook :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var commitHook : q†
	var rollbackHook : @convention(block) ()?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var functions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var collations : String
	var queue : OS_dispatch_queue
	var $__lazy_storage_$_queueContext : Int?

	// Swift methods
	0x1a08f0  class func Connection.__allocating_init(_:readonly:) // init 
 }

 enum SQLite.Location {

	// Properties
	case uri : String
	case inMemory  
	case temporary  
 }

 enum SQLite.Operation {

	// Properties
	case insert  
	case update  
	case delete  
 }

 enum SQLite.TransactionMode {

	// Properties
	case deferred  
	case immediate  
	case exclusive  
 }

 struct SQLite.MigrationRunner {

	// Properties
	let db : Connection // +0x0
	let migrations : Migration // +0x8
 }

 struct SQLite.Migration {

	// Properties
	let id : String // +0x0
	let migrate : Connection // +0x10
 }

 enum SQLite.QueryError {

	// Properties
	case noSuchTable : (name: String)
	case noSuchColumn : (name: String, columns: [String])
	case ambiguousColumn : (name: String, similar: [String])
	case unexpectedNullValue : (name: String)
	case incorrectType : (name: String)
 }

 struct SQLite.Blob {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes :  empty-list  // +0x0
 }

 struct SQLite.DatabaseError {

	// Properties
	let code : ResultCode // +0x0
	let message : String? // +0x8
	let sql : String? // +0x18
	let callstack : [String] // +0x28
 }

 enum SQLite.ResultCode {

	// Properties
	case SQLITE_OK  
	case SQLITE_ERROR  
	case SQLITE_INTERNAL  
	case SQLITE_PERM  
	case SQLITE_ABORT  
	case SQLITE_BUSY  
	case SQLITE_LOCKED  
	case SQLITE_NOMEM  
	case SQLITE_READONLY  
	case SQLITE_INTERRUPT  
	case SQLITE_IOERR  
	case SQLITE_CORRUPT  
	case SQLITE_NOTFOUND  
	case SQLITE_FULL  
	case SQLITE_CANTOPEN  
	case SQLITE_PROTOCOL  
	case SQLITE_EMPTY  
	case SQLITE_SCHEMA  
	case SQLITE_TOOBIG  
	case SQLITE_CONSTRAINT  
	case SQLITE_MISMATCH  
	case SQLITE_MISUSE  
	case SQLITE_NOLFS  
	case SQLITE_AUTH  
	case SQLITE_FORMAT  
	case SQLITE_RANGE  
	case SQLITE_NOTADB  
	case SQLITE_NOTICE  
	case SQLITE_WARNING  
	case SQLITE_ROW  
	case SQLITE_DONE  
	case SQLITE_OK_LOAD_PERMANENTLY  
	case SQLITE_ERROR_MISSING_COLLSEQ  
	case SQLITE_BUSY_RECOVERY  
	case SQLITE_LOCKED_SHAREDCACHE  
	case SQLITE_READONLY_RECOVERY  
	case SQLITE_IOERR_READ  
	case SQLITE_CORRUPT_VTAB  
	case SQLITE_CANTOPEN_NOTEMPDIR  
	case SQLITE_CONSTRAINT_CHECK  
	case SQLITE_NOTICE_RECOVER_WAL  
	case SQLITE_WARNING_AUTOINDEX  
	case SQLITE_ERROR_RETRY  
	case SQLITE_ABORT_ROLLBACK  
	case SQLITE_BUSY_SNAPSHOT  
	case SQLITE_LOCKED_VTAB  
	case SQLITE_READONLY_CANTLOCK  
	case SQLITE_IOERR_SHORT_READ  
	case SQLITE_CORRUPT_SEQUENCE  
	case SQLITE_CANTOPEN_ISDIR  
	case SQLITE_CONSTRAINT_COMMITHOOK  
	case SQLITE_NOTICE_RECOVER_ROLLBACK  
	case SQLITE_ERROR_SNAPSHOT  
	case SQLITE_READONLY_ROLLBACK  
	case SQLITE_IOERR_WRITE  
	case SQLITE_CANTOPEN_FULLPATH  
	case SQLITE_CONSTRAINT_FOREIGNKEY  
	case SQLITE_READONLY_DBMOVED  
	case SQLITE_IOERR_FSYNC  
	case SQLITE_CANTOPEN_CONVPATH  
	case SQLITE_CONSTRAINT_FUNCTION  
	case SQLITE_READONLY_CANTINIT  
	case SQLITE_IOERR_DIR_FSYNC  
	case SQLITE_CANTOPEN_DIRTYWAL  
	case SQLITE_CONSTRAINT_NOTNULL  
	case SQLITE_READONLY_DIRECTORY  
	case SQLITE_IOERR_TRUNCATE  
	case SQLITE_CONSTRAINT_PRIMARYKEY  
	case SQLITE_IOERR_FSTAT  
	case SQLITE_CONSTRAINT_TRIGGER  
	case SQLITE_IOERR_UNLOCK  
	case SQLITE_CONSTRAINT_UNIQUE  
	case SQLITE_IOERR_RDLOCK  
	case SQLITE_CONSTRAINT_VTAB  
	case SQLITE_IOERR_DELETE  
	case SQLITE_CONSTRAINT_ROWID  
	case SQLITE_IOERR_BLOCKED  
	case SQLITE_IOERR_NOMEM  
	case SQLITE_IOERR_ACCESS  
	case SQLITE_IOERR_CHECKRESERVEDLOCK  
	case SQLITE_IOERR_LOCK  
	case SQLITE_IOERR_CLOSE  
	case SQLITE_IOERR_DIR_CLOSE  
	case SQLITE_IOERR_SHMOPEN  
	case SQLITE_IOERR_SHMSIZE  
	case SQLITE_IOERR_SHMLOCK  
	case SQLITE_IOERR_SHMMAP  
	case SQLITE_IOERR_SEEK  
	case SQLITE_IOERR_DELETE_NOENT  
	case SQLITE_IOERR_MMAP  
	case SQLITE_IOERR_GETTEMPPATH  
	case SQLITE_IOERR_CONVPATH  
 }

 enum __C.INIntentHandlingStatus { }

 enum __C.INInteractionDirection { }

 enum __C.CNContactType { }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 struct __C.INPersonHandleLabel {

	// Properties
	var _rawValue : NSString
 }

 struct __C.MLModelMetadataKey {

	// Properties
	var _rawValue : NSString
 }

 enum __C.ComparisonResult { }

 struct __C.CompareOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.MAAssetState { }

 enum __C.MADownloadResult { }

 enum __C.MAQueryResult { }

 enum __C.ComparisonResult { }

 class SiriInference.SuggestedContactsFilter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let preferredHandleType : HandleType

	// Swift methods
	0x2630  func <stripped> // method 
 }

 struct SiriInference.RecurrenceConstraintSolver { }

 struct SiriInference.Aggregation {

	// Properties
	let category : AggregationCategory
	let categoryValue : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var recency : ∑ÿ
	var f2min : Int
	var f10min : Int
	var f1hr : Int
	var f6hr : Int
	var f1day : Int
	var f7day : Int
	var f28day : Int
	var finf : Int
 }

 enum SiriInference.CodingKeys {

	// Properties
	case category  
	case categoryValue  
	case recency  
	case f2min  
	case f10min  
	case f1hr  
	case f6hr  
	case f1day  
	case f7day  
	case f28day  
	case finf  
 }

 struct SiriInference.PrivatizedAggregation {

	// Properties
	let category : AggregationCategory // +0x0
	let categoryValue : String // +0x8
	let recencyBucket : TimeIntervalBucket // +0x18
	let f2min : Int // +0x20
	let f10min : Int // +0x28
	let f1hr : Int // +0x30
	let f6hr : Int // +0x38
	let f1day : Int // +0x40
	let f7day : Int // +0x48
	let f28day : Int // +0x50
	let finf : Int // +0x58
 }

 enum SiriInference.CodingKeys {

	// Properties
	case category  
	case categoryValue  
	case recencyBucket  
	case f2min  
	case f10min  
	case f1hr  
	case f6hr  
	case f1day  
	case f7day  
	case f28day  
	case finf  
 }

 enum SiriInference.ConvergenceStrategy {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case next : !Ÿ
	case relative  
	case start  
 }

 class SiriInference.Time : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let hour : Int? // +0x10 (0x9)
	let minute : Int? // +0x20 (0x9)
	let second : Int? // +0x30 (0x9)
	let meridiem : Meridiem // +0x39 (0x1)
	let definedValue : DefinedTime // +0x3a (0x1)
	let occurringIn : DateTimeRange // +0x40 (0x8)
	var setByUser : Bool // +0x48 (0x1)

	// Swift methods
	0xc300  class func DateTime.Time.__allocating_init(withHour:) // init 
	0xc3a0  class func DateTime.Time.__allocating_init(withHour:minute:) // init 
	0xc440  class func DateTime.Time.__allocating_init(withHour:minute:second:) // init 
	0xc4e0  class func DateTime.Time.__allocating_init(withHour:meridiem:) // init 
	0xc590  class func DateTime.Time.__allocating_init(withHour:minute:meridiem:) // init 
	0xc640  class func DateTime.Time.__allocating_init(withHour:minute:second:meridiem:) // init 
	0xc6f0  class func DateTime.Time.__allocating_init(withDefinedValue:) // init 
	0xc7a0  class func DateTime.Time.__allocating_init(withHour:minute:second:meridiem:definedValue:setByUser:) // init 
	0xc8a0  class func DateTime.Time.__allocating_init(withHour:minute:second:meridiem:definedValue:occurringIn:setByUser:) // init 
	0xc9a0  func <stripped> // method 
	0xcb60  func <stripped> // getter 
	0xd290  func <stripped> // method 
	0xd2f0  func <stripped> // method 
	0xd430  func <stripped> // method 
	0xdd50  func <stripped> // getter 
	0xd7e0  class func DateTime.Time.__allocating_init(from:) // init 
	0xdad0  func <stripped> // method 
 }

 enum SiriInference.CodingKeys {

	// Properties
	case hour  
	case minute  
	case second  
	case meridiem  
	case definedValue  
	case occurringIn  
	case setByUser  
 }

 class SiriInference.ContactResolverResolutionMetrics {
 class SiriInference.ContactResolverUserResponseMetrics {
 struct SiriInference.RunTimeDataDB {

	// Properties
	var connection : Connection // +0x0
 }

 enum SiriInference.Bound {

	// Properties
	case start  
	case end  
	case notset  
 }

 struct SiriInference.DurationConstraintSolver { }

 class SiriInference.RelationshipAliasGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dbLoader : DBLoader // +0x0

	// Swift methods
	0x12fc0  func <stripped> // method 
	0x13630  func <stripped> // method 
 }

 struct SiriInference.RelationshipDB {

	// Properties
	var connection : Connection // +0x0
 }

 struct SiriInference.IsRelationAlias {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 class SiriInference.Atomic {
 struct SiriInference.HolidayResolutionContext {

	// Properties
	let calendarSystem : CalendarSystem
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ∑ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let language : =”
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeZone : ü‘
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : y‘
	let requestedYear : Int?
	let qualifier : Qualifier
 }

 struct SiriInference.BoundsOfRangeSignal {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	let startBoundIsSet : Bool // +0x10
	let endBoundIsSet : Bool // +0x11
 }

 struct SiriInference.TemporalIntentSignal {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	let setByUser : Bool // +0x10
 }

 struct SiriInference.DateTimeSignalSet {

	// Properties
	let temporalIntent : TemporalIntentSignal // +0x0
	let boundsOfRange : BoundsOfRangeSignal // +0x18
 }

 enum SiriInference.CodingKeys {

	// Properties
	case temporalIntent  
	case boundsOfRange  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case setByUser  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case startBoundIsSet  
	case endBoundIsSet  
 }

 class SiriInference.Interval : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let quantity : Double? // +0x10 (0x9)
	let timeUnit : TimeUnit // +0x19 (0x1)
	let qualifier : Qualifier // +0x1a (0x1)

	// Swift methods
	0x1a2d0  class func DateTime.Interval.__allocating_init(withQuantity:timeUnit:) // init 
	0x1a360  class func DateTime.Interval.__allocating_init(withTimeUnit:qualifier:) // init 
	0x1a280  class func DateTime.Interval.__allocating_init(withQuantity:timeUnit:qualifier:) // init 
	0x1a3f0  func <stripped> // method 
	0x1a4a0  func <stripped> // getter 
	0x1ae70  func <stripped> // getter 
	0x1aae0  class func DateTime.Interval.__allocating_init(from:) // init 
	0x1ad10  func <stripped> // method 
 }

 enum SiriInference.CodingKeys {

	// Properties
	case quantity  
	case timeUnit  
	case qualifier  
 }

 struct SiriInference.DateTimeResolutionSpec {

	// Properties
	let expandToType : ExpandToType // +0x0
	let dateTimeConvergenceStrategy : DateTimeConvergenceStrategy // +0x1
	let overridesForDefinedDateTimeRanges : DefinedDateTimeRange // +0x8
	let witchingHourRoundOffEnabled : Bool // +0x10
	let convergeToOperatingHours : Bool // +0x11
 }

 enum SiriInference.ExpandToType {

	// Properties
	case pointInTime  
	case range  
	case duration  
 }

 enum SiriInference.DateTimeConvergenceStrategy {

	// Properties
	case past  
	case future  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case expandToType  
	case dateTimeConvergenceStrategy  
	case overridesForDefinedDateTimeRanges  
	case witchingHourRoundOffEnabled  
	case convergeToOperatingHours  
 }

 enum SiriInference.SiriRemembers { }

 class SiriInference.FirstAdvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : y‘ // +0x0 (0x0)

	// Swift methods
	0x20910  func <stripped> // method 
	0x20c60  func <stripped> // method 
 }

 enum SiriInference.FirstAdventError {

	// Properties
	case cantComputeNthThursday : Int
	case badMonth : Int
	case noMonth  
	case badDateMath  
 }

 class SiriInference.BackfillInteractions : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var backfilledCount : Int // +0x8 (0x8)
	var skippedCount : Int // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var databaseUrl : 1– // +0x1f5000 (0x0)
	var stitchingSucceeded : Int // +0x5 (0x8)
	var stitchingSkipped : Int // +0x12 (0x8)
	var stitchingFailed : Int // +0x65745f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d85c0005b9d0 (0x5c0005b9d0) in binary!
	0x1d858  @objc BackfillInteractions.(null) <stripped>
WARNING: couldn't find address 0x1d8440005b9b0 (0x440005b9b0) in binary!
	0x48000000c  @objc BackfillInteractions.(null) <stripped>
WARNING: couldn't find address 0x1d8240005b990 (0x240005b990) in binary!
	0x1d820  @objc BackfillInteractions.(null) <stripped>
 }

 class SiriInference.IsFavoriteSignalGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let favorites : [CNFavoritesEntry]

	// Swift methods
	0x232d0  func <stripped> // method 
 }

 struct SiriInference.IsFavorite {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var isFavorite : Bool // +0x10
	var isFavoriteWithRequestBundleId : Bool // +0x11
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case isFavorite  
	case isFavoriteWithRequestBundleId  
 }

 struct SiriInference.CoreMLContactRecommender {

	// Properties
	var version : String // +0x0
	var modelType : ModelType // +0x10
	let ranker : ContactRankerWrapper // +0x18
 }

 struct SiriInference.CoreAnalyticsMetric {

	// Properties
	let eventName : String // +0x0
	let properties : CoreAnalyticsValue // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case eventName  
	case properties  
 }

 struct SiriInference.TemporalityConstraintSolver { }

 enum SiriInference.ModelType {

	// Properties
	case coreMLContactRecommender  
	case basicContactRecommender  
	case noneUsed  
	case uninitialized  
 }

 enum SiriInference.StitchedData { }

 enum SiriInference.ConfirmationUserAction {

	// Properties
	case confirm  
	case reject  
	case abandoned  
 }

 struct SiriInference.ConfirmationInfo {

	// Properties
	var contactId : String // +0x0
	var handleValue : String // +0x10
	var confirmationUserAction : ConfirmationUserAction // +0x20
 }

 enum SiriInference.DisambiguationUserAction {

	// Properties
	case selected  
	case abandoned  
	case selectedOther  
 }

 struct SiriInference.ContactDisambiguationInfo {

	// Properties
	var contactIdsShown : [String] // +0x0
	var contactIdSelected : String? // +0x8
	var disambiguationUserAction : DisambiguationUserAction // +0x18
 }

 struct SiriInference.HandleDisambiguationInfo {

	// Properties
	var handleValuesShown : [String] // +0x0
	var contactId : String // +0x8
	var handleValueSelected : String? // +0x18
	var disambiguationUserAction : DisambiguationUserAction // +0x28
 }

 struct SiriInference.ContactSystemSelectedInfo {

	// Properties
	var contactId : String // +0x0
	var handleValue : String // +0x10
 }

 struct SiriInference.UserInteractionInfo {

	// Properties
	var confirmationInfo : ConfirmationInfo // +0x0
	var contactDisambiguationInfo : ContactDisambiguationInfo // +0x28
	var handleDisambiguationInfo : HandleDisambiguationInfo // +0x48
	var contactSystemSelected : ContactSystemSelectedInfo // +0x78
 }

 enum SiriInference.CodingKeys {

	// Properties
	case contactId  
	case handleValue  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case handleValuesShown  
	case contactId  
	case handleValueSelected  
	case disambiguationUserAction  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case contactIdsShown  
	case contactIdSelected  
	case disambiguationUserAction  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case contactId  
	case handleValue  
	case confirmationUserAction  
 }

 struct SiriInference.StitchedDataRecord {

	// Properties
	var stitchedDataId : String
	var context : RequestContext
	var spec : Spec
	var contactResolutionsInfo : ContactResolutionInfo
	var callDuration : Int?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var intentResultType : µ’
	var numCardinals : Int
 }

 struct SiriInference.ContactResolutionInfo {

	// Properties
	var userInteractionInfo : UserInteractionInfo
	var candidates : ContactRunTimeData
	var cardinalIndex : Int
 }

 enum SiriInference.CodingKeys {

	// Properties
	case confirmationInfo  
	case contactDisambiguationInfo  
	case handleDisambiguationInfo  
	case contactSystemSelected  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case userInteractionInfo  
	case candidates  
	case cardinalIndex  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case stitchedDataId  
	case context  
	case spec  
	case contactResolutionsInfo  
	case callDuration  
	case intentResultType  
	case numCardinals  
 }

 enum SiriInference.ContactResolverModelPredMetricKeys {

	// Properties
	case outcome  
	case hasConfident  
	case hasNeedsConfirmation  
	case hasNeedsDisambiguation  
	case hasNone  
	case comparison  
	case hasExactMatchOutcome  
	case hasExactMatchCandidates  
	case hasNoOrPartialMatch  
	case hasRelevantCandidate  
	case numCandidatesAsModelInput  
	case numCandidatesAfterTrim  
	case numCandidatesForOutput  
 }

 class SiriInference.HolidaysDBUpdater : HolidaysDatabase {

	// Properties
	var state : UpdaterState
	var localDBVersion : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastCheck : ∑ÿ
	var requeueFunction : (_:)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var delayedRequeueFunction :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var catalogUpdateFunction :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var findUpdatesFunction :  empty-list 
	var downloadFunction : HolidaysDBMobileAsset
	var installUpdateFunction : HolidaysDBMobileAsset

	// Swift methods
 }

 class SiriInference.HolidaysDBUpdaterOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var $__lazy_storage_$_updater : HolidaysDBUpdater

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d7ec0005b958 (0x7ec0005b958) in binary!
	0x1d7e8  @objc HolidaysDBUpdaterOperation.(null) <stripped>
WARNING: couldn't find address 0x1d7e40005b9d8 (0x7e40005b9d8) in binary!
	0x1d7d0  @objc HolidaysDBUpdaterOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x124ffe975f0  @objc HolidaysDBUpdaterOperation.(null) <stripped>
	0xffe98058  @objc HolidaysDBUpdaterOperation.âeÄIâ˛Hç=, <stripped>
 }

 class SiriInference.HolidaysDBPollingOperation : XPCActivityOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var runDate : ∑ÿ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d8240005b990 (0x240005b990) in binary!
	0x1d820  @objc HolidaysDBPollingOperation.(null) <stripped>
WARNING: couldn't find address 0x1d81c0005ba10 (0x1c0005ba10) in binary!
	0x1d808  @objc HolidaysDBPollingOperation.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x15cffe92d88  @objc HolidaysDBPollingOperation.(null) <stripped>
	0x13cffe930b0  @objc HolidaysDBPollingOperation.àAäEàE•IãEHâÖpˇˇˇAäEàE¶AäEàEßMã~IãF HâEêLâ˜IâŒLâ˛ËM±˛ˇIâ≈ËE˛ˇˇHâ¬Hç=#∏ <stripped>

	// Swift methods
 }

 enum SiriInference.UpdaterState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case backoff : ∑ÿ
	case downloading : HolidaysDBMobileAsset
	case installing : HolidaysDBMobileAsset
	case cleaningUp : HolidaysDBMobileAsset
	case finished  
	case ready  
	case waitingForCatalog  
	case findingAssets  
	case refreshingCatalog  
 }

 enum SiriInference.ShouldRetry {

	// Properties
	case noRetryNeeded  
	case shouldRetry  
 }

 enum SiriInference.ObservanceType {

	// Properties
	case international  
	case national  
 }

 struct SiriInference.SiriRemembersStore {

	// Properties
	let dbLoader : DBLoader // +0x0
 }

 class SiriInference.ScrubOldRecords : XPCActivityOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cutoffDate : ∑ÿ // +0x0 (0x0)
	var scrubbedCount : Int // +0x45545f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d7c40005b9b8 (0x7c40005b9b8) in binary!
	0x1d7b0  @objc ScrubOldRecords.(null) <stripped>
WARNING: couldn't find address 0x1d7a40005b910 (0x7a40005b910) in binary!
	0x28000000c  @objc ScrubOldRecords.(null) <stripped>
WARNING: couldn't find address 0x1d7840005b8c0 (0x7840005b8c0) in binary!
	0x1f900  @objc ScrubOldRecords.(null) <stripped>

	// Swift methods
	0x45150  func <stripped> // method 
 }

 class SiriInference.SolsticeAndEquinox : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : y‘ // +0x0 (0x0)
	let type : AstronomicalType // +0x1aacac (0x1)

	// Swift methods
	0x45a20  func <stripped> // method 
	0x45c10  func <stripped> // method 
	0x45d60  func <stripped> // method 
	0x45fa0  func <stripped> // method 
	0x46410  func <stripped> // method 
 }

 enum SiriInference.AstronomicalType {

	// Properties
	case marchEquinox  
	case juneSolstice  
	case septemberEquinox  
	case decemberSolstice  
 }

 enum SiriInference.SolsticeError {

	// Properties
	case badYear : Int
	case calcFailed : Int
	case badCoefficients  
 }

 class SiriInference.MeCardIdProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var id : String? // +0x10 (0x10)
	var observer : NSObject // +0x20 (0x8)

	// Swift methods
 }

 enum SiriInference.TemporalIntent {

	// Properties
	case past  
	case present  
	case future  
	case unknown  
 }

 enum SiriInference.DefinedDate {

	// Properties
	case today  
	case tomorrow  
	case yesterday  
	case dayBeforeYesterday  
	case twoDaysBeforeYesterday  
	case dayAfterTomorrow  
	case twoDaysAfterTomorrow  
 }

 enum SiriInference.MetricsService { }

 enum SiriInference.ContactResolverResolutionMetricKeys {

	// Properties
	case resolutionProcess  
	case numPrompts  
	case executionSuccessEstimate  
 }

 class SiriInference.ContactResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var lock : OS_dispatch_semaphore
	var runTimeData : ContactRunTimeData
	var _cache : ContactResolverCache

	// Swift methods
	0x4b2f0  func <stripped> // getter 
	0x4ae40  class func ContactResolver.__allocating_init() // init 
	0x4b8f0  func <stripped> // method 
	0x4b950  func <stripped> // method 
	0x4bbd0  func <stripped> // method 
	0x4f6f0  func <stripped> // method 
	0x4f950  func <stripped> // method 
	0x50da0  func <stripped> // method 
	0x512e0  func <stripped> // method 
	0x51ff0  func <stripped> // method 
	0x52790  func <stripped> // method 
	0x53490  func <stripped> // method 
	0x53910  func <stripped> // method 
 }

 enum SiriInference.ContactResolutionType {

	// Properties
	case contact  
	case handle  
	case emergency  
	case rawHandle  
	case meCard  
	case knownContact  
 }

 enum SiriInference.Domain {

	// Properties
	case messages  
	case phone  
	case contacts  
	case findMy  
	case unspecified  
 }

 class SiriInference.RequestContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var locale : =”
	var appCandidates : AppCandidate
	var domain : Domain
	var intent : String
	var intentId : String

	// Swift methods
	0x54150  func <stripped> // getter 
	0x54550  class func ContactResolver.RequestContext.__allocating_init() // init 
	0x54710  func <stripped> // method 
	0x54920  func <stripped> // method 
	0x549b0  func <stripped> // method 
	0x549f0  func <stripped> // method 
	0x54a10  func <stripped> // method 
	0x54a30  func <stripped> // method 
	0x54c70  class func ContactResolver.RequestContext.__allocating_init(from:) // init 
	0x55000  func <stripped> // method 
 }

 struct SiriInference.AppCandidate {

	// Properties
	let bundleId : String // +0x0
	let type : AppCandidateType // +0x10
 }

 enum SiriInference.AppCandidateType {

	// Properties
	case firstParty  
	case thirdPartyWithCNContactEntitlement  
	case thirdPartyWithoutCNContactEntitlement  
 }

 enum SiriInference.AllowSuggestedContacts {

	// Properties
	case yes  
	case no  
	case ifOnlyMatchIsSuggested  
 }

 class SiriInference.Spec : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var processNLv3SpeechAlternatives : Bool // +0x10 (0x1)
	var allowSuggestedContacts : AllowSuggestedContacts // +0x11 (0x1)

	// Swift methods
	0x55910  func <stripped> // getter 
	0x55a50  class func ContactResolver.Spec.__allocating_init() // init 
	0x55a80  func <stripped> // method 
	0x55aa0  func <stripped> // method 
	0x55ab0  func <stripped> // method 
	0x55ac0  func <stripped> // method 
	0x55bc0  class func ContactResolver.Spec.__allocating_init(from:) // init 
	0x55d70  func <stripped> // method 
 }

 struct SiriInference.SignalSet {

	// Properties
	var originalContact : Contact
	var speechAlternativeRanks : SpeechAlternativeRanks
	var isSuggested : IsSuggestedContact
	var isNameTokenExactMatch : IsNameTokenExactMatch
	var isAllContactNameTokensMatched : IsAllContactNameTokensMatched
	var isPartialNameMatch : IsPartialNameMatch
	var isHypocorism : IsHypocorismGeneratedContact
	var hasSuggestedProperties : HasSuggestedProperties
	var recencyFrequencySignals : RecencyAndFrequencySignals
	var requestMatchSignals : MatchSignals
	var isMeCardRelation : IsMeCardRelation
	var isRelationAlias : IsRelationAlias
	var isFavoriteForContact : IsFavorite
	var peopleSuggesterScoreSumForContact : PeopleSuggesterScore
	var candidateContactHandles : Match
 }

 struct SiriInference.BackgroundSignalSet {

	// Properties
	var isMatchWithRelationName : IsMatchWithRelationName // +0x0
	var peopleSuggesterScoreSumForContact : PeopleSuggesterScore // +0x18
	var candidateContactHandles : Match // +0x30
 }

 struct SiriInference.HandleSignalSet {

	// Properties
	var peopleSuggesterScore : PeopleSuggesterScore // +0x0
	var isSuggestedHandle : IsSuggestedHandle // +0x18
	var isFavorite : IsFavorite // +0x30
	var isRequestMatch : IsHandleMatch // +0x48
 }

 struct SiriInference.BackgroundHandleSignalSet {

	// Properties
	var peopleSuggesterScore : PeopleSuggesterScore // +0x0
 }

 struct SiriInference.RecommenderContactData {

	// Properties
	var score : Double? // +0x0
	var isTrimmed : Bool? // +0x9
 }

 struct SiriInference.RecommenderInfo {

	// Properties
	var modelType : ModelType // +0x0
	var fallbackToBasic : Bool // +0x1
	var recommenderVersion : String // +0x8
 }

 struct SiriInference.ContactRunTimeData {

	// Properties
	var recommenderRequestData : RecommenderInfo
	var matches : ProcessedMatch
	var matchesWithBackgroundSignals : Match
	var recommendation : Recommendation
	var contactResolutionType : ContactResolutionType
 }

 enum SiriInference.CodingKeys {

	// Properties
	case recommenderRequestData  
	case matches  
	case matchesWithBackgroundSignals  
	case recommendation  
	case contactResolutionType  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case modelType  
	case fallbackToBasic  
	case recommenderVersion  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case score  
	case isTrimmed  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case peopleSuggesterScore  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case peopleSuggesterScore  
	case isSuggestedHandle  
	case isFavorite  
	case isRequestMatch  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isMatchWithRelationName  
	case peopleSuggesterScoreSumForContact  
	case candidateContactHandles  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case originalContact  
	case speechAlternativeRanks  
	case isSuggested  
	case isNameTokenExactMatch  
	case isAllContactNameTokensMatched  
	case isPartialNameMatch  
	case isHypocorism  
	case hasSuggestedProperties  
	case recencyFrequencySignals  
	case requestMatchSignals  
	case isMeCardRelation  
	case isRelationAlias  
	case isFavoriteForContact  
	case peopleSuggesterScoreSumForContact  
	case candidateContactHandles  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case processNLv3SpeechAlternatives  
	case allowSuggestedContacts  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case bundleId  
	case type  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case locale  
	case appCandidates  
	case domain  
	case intent  
	case intentId  
 }

 enum SiriInference.Key {

	// Properties
	case countryCode : String
	case hemisphere : Hemisphere
	case defaultValue  
 }

 struct SiriInference.Signpost {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : i 
WARNING: couldn't find address 0x0 (0x0) in binary!
	let name : ìœ
	let log : OS_os_log
 }

 class SiriInference.GregorianEasterHoliday : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x69ec0  func <stripped> // method 
 }

 class SiriInference.Holiday : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let id : String // +0x10 (0x10)
	let name : String // +0x20 (0x10)
	let calendarSystem : CalendarSystem // +0x30 (0x1)
	let frequency : Frequency // +0x31 (0x1)
	let observanceType : ObservanceType // +0x32 (0x1)
	let dateType : HolidayDateType // +0x33 (0x1)
	let associatedReligion : Religion // +0x34 (0x1)
	let emotion : Emotion // +0x35 (0x1)

	// Swift methods
	0x6a3d0  func <stripped> // method 
	0x6a530  func <stripped> // getter 
	0x6b730  func <stripped> // getter 
	0x6b070  class func DateTime.Date.Holiday.__allocating_init(from:) // init 
	0x6b450  func <stripped> // method 
 }

 enum SiriInference.CodingKeys {

	// Properties
	case id  
	case name  
	case calendarSystem  
	case frequency  
	case observanceType  
	case dateType  
	case associatedReligion  
	case emotion  
 }

 struct SiriInference.PrivatizedHandleSignalSet {

	// Properties
	let peopleSuggesterScore : PeopleSuggesterScore // +0x0
	let isSuggestedHandle : IsSuggestedHandle // +0x18
	let isFavorite : IsFavorite // +0x30
	let isRequestMatch : IsHandleMatch // +0x48
 }

 enum SiriInference.CodingKeys {

	// Properties
	case peopleSuggesterScore  
	case isSuggestedHandle  
	case isFavorite  
	case isRequestMatch  
 }

 struct SiriInference.PrivatizedBgSignalSet {

	// Properties
	let isMatchWithRelationName : IsMatchWithRelationName // +0x0
	let peopleSuggesterScore : PeopleSuggesterScore // +0x18
	var handlesWithBgPrivacySignals : Match // +0x30
 }

 struct SiriInference.PrivatizedBgHandleSignalSet {

	// Properties
	let peopleSuggesterScore : PeopleSuggesterScore // +0x0
 }

 struct SiriInference.ContactHandleWithPrivacy {

	// Properties
	let id : String? // +0x0
	let type : HandleType // +0x10
	let value : String? // +0x18
	let isSuggested : Bool // +0x28
 }

 struct SiriInference.PrivatizedSignalSet {

	// Properties
	let speechAlternativeRanks : SpeechAlternativeRanks // +0x0
	let isSuggested : IsSuggestedContact // +0x28
	let isNameTokenExactMatch : IsNameTokenExactMatch // +0x40
	let isAllContactNameTokensMatched : IsAllContactNameTokensMatched // +0x58
	let isHypocorism : IsHypocorismGeneratedContact // +0x70
	let hasSuggestedProperties : HasSuggestedProperties // +0x88
	let isPartialNameMatch : IsPartialNameMatch // +0xa0
	let recencyFrequencySignals : PrivatizedRecencyFrequencySignals // +0xb8
	var recentMatchScore : RecentMatchScore // +0xd8
	var recentGroupMatchScore : RecentGroupMatchScore // +0xf0
	let isMeCardRelation : IsMeCardRelation // +0x108
	let isRelationAlias : IsRelationAlias // +0x120
	var isFavoriteForContact : IsFavorite // +0x138
	var requestMatchSignals : MatchSignals // +0x150
	var handlesWithPrivacySignals : Match // +0x168
 }

 struct SiriInference.ContactWithPrivacyFields {

	// Properties
	let id : String // +0x0
	let handles : ContactHandleWithPrivacy // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case id  
	case handles  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case speechAlternativeRanks  
	case isSuggested  
	case isNameTokenExactMatch  
	case isAllContactNameTokensMatched  
	case isHypocorism  
	case hasSuggestedProperties  
	case isPartialNameMatch  
	case recencyFrequencySignals  
	case recentMatchScore  
	case recentGroupMatchScore  
	case isMeCardRelation  
	case isRelationAlias  
	case isFavoriteForContact  
	case requestMatchSignals  
	case handlesWithPrivacySignals  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case id  
	case type  
	case value  
	case isSuggested  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case peopleSuggesterScore  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isMatchWithRelationName  
	case peopleSuggesterScore  
	case handlesWithBgPrivacySignals  
 }

 struct SiriInference.RecentGroupMatchScore {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Double // +0x10
 }

 struct SiriInference.RecentMatchScore {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Double // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 struct SiriInference.MemorableEntity {

	// Properties
	let paramName : String // +0x0
	let entityType : String // +0x10
	let memorableUUID : String? // +0x20
	let memorableTokens : [String] // +0x30
 }

 class SiriInference.HolidaysDatabase : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var readonly : Bool
	var dbLock : OS_dispatch_semaphore
	var storedDatabase : Connection

	// Swift methods
	0x753a0  func <stripped> // method 
 }

 class SiriInference.HolidaysDBHolidayResolver : HolidaysDatabase {
	// Swift methods
	0x760a0  func <stripped> // method 
	0x77b80  func <stripped> // method 
	0x78a10  func <stripped> // method 
 }

 enum SiriInference.HolidaysDBHolidayResolverError {

	// Properties
	case databaseError : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case badLocale : =”
 }

 class SiriInference.MeCardContactGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let meCard : CNContact?

	// Swift methods
 }

 struct SiriInference.IsMeCardRelation {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 class SiriInference.HolidaysDBMobileAsset : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let asset : Asset // +0x10 (0x28)
	let version : Int // +0x38 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_assetURL : /∫ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_versiondate : ?Œ // +0x0 (0x0)
	var $__lazy_storage_$_holiday : String?? // +0x0 (0x10)
	var $__lazy_storage_$_country : String?? // +0x0 (0x10)

	// Swift methods
	0x7c4c0  func <stripped> // getter 
	0x7c610  func <stripped> // getter 
 }

 enum SiriInference.HolidaysDBMobileAssetError {

	// Properties
	case queryError : MAQueryResult
	case downloadError : MADownloadResult
	case unexpectedAssetState : MAAssetState
	case queryInitFailed  
	case unavailable  
 }

 enum SiriInference.DefinedDateTimeRange {

	// Properties
	case afternoon  
	case autumn  
	case breakfastTime  
	case brunchTime  
	case dawn  
	case daytime  
	case dinnerTime  
	case dusk  
	case entireDay  
	case entireMonth  
	case entireWeek  
	case entireYear  
	case evening  
	case lunchTime  
	case morning  
	case night  
	case spring  
	case summer  
	case weekend  
	case winter  
	case workweek  
	case happyHour  
	case bedTime  
	case tonight  
	case entireFortnight  
	case entireSeason  
	case entireSemester  
	case entireDecade  
	case entireCentury  
	case entireQuarter  
	case entireHour  
	case entireMinute  
	case entireSecond  
	case entireMillisecond  
	case weekday  
	case operatingHours  
	case witchingHours  
 }

 class SiriInference.PhoneAppDonation : _SwiftObject /usr/lib/swift/libswiftCore.dylib, IntentEventData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var donationTime : ∑ÿ // +0x0 (0x0)
	var intentIdentifier : String // +0x6f635f5f (0x10)
	var callDuration : Int // +0x0 (0x8)

	// Swift methods
 }

 enum SiriInference.FinderError {

	// Properties
	case invalidHandlingStatus : INIntentHandlingStatus
	case invalidIntentType  
	case invalidInteractionDate  
	case invalidIntentId  
	case contactsMatchFailed  
	case phoneAppDonationNotFound  
 }

 enum SiriInference.IntentEventDataSource {

	// Properties
	case confirmationOffer : ConfirmationType
	case confirmationResult : ConfirmationType
	case disambiguationOffer : DisambiguationOfferType
	case disambiguationResult : DisambiguationResultType
	case phoneAppDonation  
	case runTimeDataType  
	case intentStart  
	case intentResult  
 }

 enum SiriInference.DisambiguationResultType {

	// Properties
	case contact  
	case other  
 }

 enum SiriInference.DisambiguationOfferType {

	// Properties
	case contact : ContactDisambiguationOfferType
	case other  
 }

 enum SiriInference.ConfirmationType {

	// Properties
	case contact  
	case messageBody  
	case other  
 }

 enum SiriInference.ContactDisambiguationOfferType {

	// Properties
	case contact  
	case handle  
 }

 class SiriInference.AppMatches : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let recommendation : AppMatchRecommendation
	let bundleIds : [String]
	let signals : AppSignals

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1bfc80005b8c8 (0x7c80005b8c8) in binary!
	0x1d768  @objc AppMatches.(null) <stripped>
WARNING: couldn't find address 0x1d75c0005bca8 (0x75c0005bca8) in binary!
	0x1f8da  @objc AppMatches.(null) <stripped>
WARNING: couldn't find address 0x1c3f40005b880 (0x3f40005b880) in binary!
	0x1c0c8  @objc AppMatches.(null) <stripped>
WARNING: couldn't find address 0x1d72c0005b920 (0x72c0005b920) in binary!
	0x1d718  @objc AppMatches.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0xf4ffee0c78  @objc AppMatches.(null) <stripped>
	0xffee0cd0  @objc AppMatches.AVSHÉÏHã™, <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0xc4fff0e7b8  @objc AppMatches.(null) <stripped>
	0xfff0f230  @objc AppMatches.PHã–, <stripped>

	// Swift methods
	0x86870  class func AppMatches.__allocating_init(recommendation:bundleIds:signals:) // init 
	0x86c10  func <stripped> // method 
	0x86e40  func <stripped> // method 
	0x87080  class func AppMatches.__allocating_init(coder:) // init 
 }

 enum SiriInference.AppMatchRecommendation { }

 class SiriInference.DateTimeConstraintSolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var constraintSet : DateTimeConstraint
	let context : DateTimeResolutionContext
	let solvers : DateTimeConstraintSolving
	var orderedConstraints : DateTimeConstraint

	// Swift methods
	0x88190  func <stripped> // method 
	0x88910  func <stripped> // method 
	0x88ab0  func <stripped> // method 
	0x88d90  func <stripped> // method 
	0x89680  func <stripped> // method 
	0x89690  func <stripped> // method 
 }

 class SiriInference.RestartableBlockOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation, RestartableOperation {

	// Properties
	let block : ()

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d7040005b878 (0x7040005b878) in binary!
	0x1d700  @objc RestartableBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x1d6ec0005b858 (0x6ec0005b858) in binary!
	0x38000000c  @objc RestartableBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x1d6d40005b848 (0x6d40005b848) in binary!
	0x1d6d0  @objc RestartableBlockOperation.(null) <stripped>

	// Swift methods
	0x8e380  class func RestartableBlockOperation.__allocating_init(block:) // init 
 }

 enum SiriInference.Religion {

	// Properties
	case buddhism  
	case christianity  
	case druze  
	case hinduism  
	case islam  
	case judaism  
	case secularism  
 }

 enum SiriInference.Measure {

	// Properties
	case absolute  
	case relative  
	case duration  
	case recurrence  
	case temporality  
	case notset  
 }

 enum SiriInference.CoreAnalyticsValue {

	// Properties
	case int : Int
	case double : Double
	case bool : Bool
	case string : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case data : ›∑
 }

 enum SiriInference.DecoderError {

	// Properties
	case invalidValueForType  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case type  
	case value  
 }

 enum SiriInference.AggregationCategory {

	// Properties
	case all  
	case domain  
	case verb  
	case bundleId  
	case direction  
	case status  
	case bundleIdAndDirection  
 }

 class SiriInference.RunTimeDataRecord {
 enum SiriInference.CodingKeys {

	// Properties
	case resolverName  
	case siriTaskId  
	case context  
	case spec  
	case runTimeData  
	case date  
 }

 struct SiriInference.MediaSearchItem {

	// Properties
	let inType : String // +0x0
	let item : INMediaItem // +0x10
	let search : INMediaSearch? // +0x18
 }

 enum SiriInference.TimeUnit {

	// Properties
	case century  
	case day  
	case decade  
	case fortnight  
	case hour  
	case millisecond  
	case minute  
	case month  
	case quarterOfYear  
	case seasonOfYear  
	case second  
	case week  
	case year  
 }

 class SiriInference.CoreDuetInteractionMonitor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let context : _CDLocalContext

	// Swift methods
 }

 class SiriInference.DateTimeSuggestionResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let spec : DateTimeResolutionSpec
	let context : DateTimeResolutionContext
	let rules : DateTimeSuggestionResolverRule

	// Swift methods
	0x972c0  func <stripped> // method 
 }

 struct SiriInference.MeridiemConstraintSolver { }

 enum SiriInference.Emotion {

	// Properties
	case celebratory  
	case solemn  
 }

 enum SiriInference.DefinedDateTime {

	// Properties
	case now  
 }

 struct SiriInference.Empty { }

 enum SiriInference.CodingKeys { }

 enum SiriInference.ContactResolverUserResponseMetricKeys {

	// Properties
	case outcome  
	case hasContactDisambiguation  
	case hasHandleDisambiguation  
	case hasConfirmation  
	case hasExecution  
	case contactDisambiguationOutcome  
	case contactDisambiguationFineGrainedOutcome  
	case hasSelectionInContactDisambiguation  
	case numPositionContactDisambiguationSelection  
	case numCandidatesContactDisambiguationSelection  
	case handleDisambiguationOutcome  
	case handleDisambiguationFineGrainedOutcome  
	case hasSelectionInHandleDisambiguation  
	case numPositionHandleDisambiguationSelection  
	case numCandidatesHandleDisambiguationSelection  
	case confirmationOutcome  
	case hasCallDuration  
	case numSecondsCallDuration  
	case executionSuccessEstimate  
 }

 class SiriInference.EventKitSignalGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let eventStoreMatcher : EventStoreMatcher

	// Swift methods
 }

 enum SiriInference.XPCError {

	// Properties
	case connectionInterrupted  
	case noResponse  
 }

 class SiriInference.Date : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let day : Int? // +0x10 (0x9)
	let month : Int? // +0x20 (0x9)
	let year : Int? // +0x30 (0x9)
	let definedValue : DefinedDate // +0x39 (0x1)
	let holiday : Holiday // +0x40 (0x8)
	let monthOfYear : MonthOfYear // +0x48 (0x1)
	let weekOfYear : Int? // +0x50 (0x9)
	let dayOfWeek : DayOfWeek // +0x59 (0x1)
	let dayOfWeekOrdinal : Int? // +0x60 (0x9)
	let calendarEra : CalendarEra // +0x69 (0x1)
	let occurringIn : DateTimeRange // +0x70 (0x8)

	// Swift methods
	0x9a120  class func DateTime.Date.__allocating_init(withDay:) // init 
	0x99d10  class func DateTime.Date.__allocating_init(withDay:month:) // init 
	0x9a270  class func DateTime.Date.__allocating_init(withDay:monthOfYear:) // init 
	0x9a360  class func DateTime.Date.__allocating_init(withDay:monthOfYear:year:) // init 
	0x9a440  class func DateTime.Date.__allocating_init(withYear:) // init 
	0x99e10  class func DateTime.Date.__allocating_init(withDay:month:year:) // init 
	0x9a590  class func DateTime.Date.__allocating_init(withMonth:year:) // init 
	0x9a670  class func DateTime.Date.__allocating_init(withDefinedValue:) // init 
	0x99d90  class func DateTime.Date.__allocating_init(withHoliday:) // init 
	0x99ff0  class func DateTime.Date.__allocating_init(withDayOfWeek:) // init 
	0x9a840  class func DateTime.Date.__allocating_init(withDayOfWeek:dayOfWeekOrdinal:) // init 
	0x9a930  class func DateTime.Date.__allocating_init(withMonthOfYear:) // init 
	0x9aa20  class func DateTime.Date.__allocating_init(withMonthOfYear:year:) // init 
	0x9ab10  class func DateTime.Date.__allocating_init(withDay:month:year:definedValue:holiday:monthOfYear:weekOfYear:dayOfWeek:dayOfWeekOrdinal:calendarEra:) // init 
	0x99e90  class func DateTime.Date.__allocating_init(withDay:month:year:definedValue:holiday:monthOfYear:weekOfYear:dayOfWeek:dayOfWeekOrdinal:calendarEra:occurringIn:) // init 
	0x9ad10  func <stripped> // method 
	0x9b010  func <stripped> // getter 
	0x9b970  func <stripped> // method 
	0x9bae0  func <stripped> // method 
	0x9c710  func <stripped> // getter 
	0x9bee0  class func DateTime.Date.__allocating_init(from:) // init 
	0x9c370  func <stripped> // method 
 }

 enum SiriInference.CodingKeys {

	// Properties
	case day  
	case month  
	case year  
	case definedValue  
	case holiday  
	case monthOfYear  
	case weekOfYear  
	case dayOfWeek  
	case dayOfWeekOrdinal  
	case calendarEra  
	case occurringIn  
 }

 enum SiriInference.Source {

	// Properties
	case user  
	case definedDateTimeRange  
	case definedDate  
	case definedTime  
 }

 class SiriInference.HypocorismGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var dbLoader : DBLoader // +0x0

	// Swift methods
	0xaef30  func <stripped> // method 
	0xaf810  func <stripped> // method 
 }

 struct SiriInference.HypocorismDB {

	// Properties
	var connection : Connection // +0x0
 }

 struct SiriInference.IsHypocorismGeneratedContact {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 enum SiriInference.Err {

	// Properties
	case aggregationMergeCategoriesUnequal : AggregationCategory
	case aggregationMergeCategoryValuesUnequal : (String, String)
 }

 struct SiriInference.DefinedDateTimeRangeStore: DefinedDateTimeRangeStorageProviding { }

 class SiriInference.SiriRemembersContactSignalProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var dbLoader : DBLoader

	// Swift methods
 }

 struct SiriInference.RecencyAndFrequencySignals {

	// Properties
	var version : UInt // +0x0
	var isError : Bool // +0x8
	var dbInaccessible : Bool // +0x9
	let aggregations : Aggregation // +0x10
	let groupAggregations : Aggregation // +0x18
 }

 enum SiriInference.CodingKeys {

	// Properties
	case version  
	case isError  
	case aggregations  
	case groupAggregations  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case version  
	case isError  
	case dbInaccessible  
	case aggregations  
	case groupAggregations  
 }

 struct SiriInference.PrivatizedRecencyFrequencySignals {

	// Properties
	var version : UInt // +0x0
	var isError : Bool // +0x8
	let aggregations : PrivatizedAggregation // +0x10
	let groupAggregations : PrivatizedAggregation // +0x18
 }

 enum SiriInference.Frequency {

	// Properties
	case annual  
	case nonAnnual  
 }

 struct SiriInference.PartialNameMatchExpander {

	// Properties
	let contactStore : ContactStore // +0x0
 }

 struct SiriInference.IsPartialNameMatch {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 enum SiriInference.DefinedTime {

	// Properties
	case currentTime  
	case midnight  
	case noon  
 }

 class SiriInference.RefreshRollups : XPCActivityOperation {

	// Properties
	var db : Connection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d6d40005b848 (0x6d40005b848) in binary!
	0x1d6d0  @objc RefreshRollups.(null) <stripped>
WARNING: couldn't find address 0x1d6bc0005b828 (0x6bc0005b828) in binary!
	0x28000000c  @objc RefreshRollups.(null) <stripped>
WARNING: couldn't find address 0x1d6a40005b818 (0x6a40005b818) in binary!
	0x1d6a0  @objc RefreshRollups.(null) <stripped>
 }

 enum SiriInference.RollupKind {

	// Properties
	case entity  
	case group  
 }

 enum SiriInference.Recommendation {

	// Properties
	case confident : A
	case needsConfirmation : A
	case needsDisambiguation : [A]
	case none  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case confident  
	case needsConfirmation  
	case needsDisambiguation  
	case none  
 }

 struct SiriInference.BasicContactRecommender {

	// Properties
	var version : String // +0x0
	var modelType : ModelType // +0x10
 }

 struct SiriInference.TimeBuckets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var mostRecent : ∑ÿ
	var f2min : Int
	var f10min : Int
	var f1hr : Int
	var f6hr : Int
	var f1day : Int
	var f7day : Int
	var f28day : Int
	var finf : Int
 }

 struct SiriInference.Rollup {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : ∑ÿ
	var all : TimeBuckets
	var byDomain : TimeBuckets
	var byVerb : TimeBuckets
	var byApp : TimeBuckets
 }

 enum SiriInference.CodingKeys {

	// Properties
	case mostRecent  
	case f2min  
	case f10min  
	case f1hr  
	case f6hr  
	case f1day  
	case f7day  
	case f28day  
	case finf  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case date  
	case all  
	case byDomain  
	case byVerb  
	case byApp  
 }

 class SiriInference.ContactsFrameworkMatcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let contactStore : ContactStore // +0x10 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tokenizer : 3Ø // +0x38 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let locale : =” // +0x1c5200 (0x0)

	// Swift methods
	0xc4e60  func <stripped> // method 
 }

 struct SiriInference.IsSuggestedHandle {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 struct SiriInference.HasSuggestedProperties {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 struct SiriInference.IsAllContactNameTokensMatched {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 struct SiriInference.IsNameTokenExactMatch {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 struct SiriInference.IsSuggestedContact {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 class SiriInference.JulianEasterHoliday : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xc8c80  func <stripped> // method 
 }

 enum SiriInference.JulianEasterError {

	// Properties
	case calcFailed : Int
	case cantGetDate  
	case badDateMath  
 }

 enum SiriInference.Feature {

	// Properties
	case nativeFlowDatetimeResolution  
	case nativeFlowContactResolution  
	case foundInAppContacts  
	case contactResolverMLRecommender  
 }

 struct SiriInference.LoggableError {

	// Properties
	let metricId : String // +0x0
	let payload : [String : NSObject] // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let inner : -º // +0x18
 }

 struct SiriInference.Feature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let name : ìœ // +0x0
	let getter : PrivatizedSignalSet // +0x18
 }

 struct SiriInference.ContactRankerWrapper {

	// Properties
	var model : ContactRanker // +0x0
 }

 struct SiriInference.TrialManager {

	// Properties
	let trialClient : TRIClient // +0x0
 }

 class SiriInference.ContactResolverModelPredMetrics {
 class SiriInference.SortingResolverRule : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum SiriInference.PrivatizedStitchedDataSummary { }

 struct SiriInference.StitchedDataRecord {

	// Properties
	let stitchedDataId : String // +0x0
	let resolutionInfosReduced : Bool // +0x10
	let contactsResolutionSummary : ContactResolutionInfo // +0x18
	let callDuration : Int? // +0x20
	let succesfulCallThreshold : Bool // +0x29
 }

 struct SiriInference.ContactResolutionInfo {

	// Properties
	let candidates : ContactRunTimeData // +0x0
	let userInteractionInfo : UserInteractionInfo // +0x20
 }

 struct SiriInference.ContactRunTimeData {

	// Properties
	let recommendationSignal : String // +0x0
	let matchedId : [String] // +0x10
	let recommendedId : [String] // +0x18
 }

 enum SiriInference.CodingKeys {

	// Properties
	case recommendationSignal  
	case matchedId  
	case recommendedId  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case candidates  
	case userInteractionInfo  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case stitchedDataId  
	case resolutionInfosReduced  
	case contactsResolutionSummary  
	case callDuration  
	case succesfulCallThreshold  
 }

 struct SiriInference.InteractionEvent {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : ©
	let intentClassName : String
	let intentHandlingStatus : INIntentHandlingStatus
	let interaction : INInteraction
 }

 class SiriInference.ScrubRuntimeDataRecords : XPCActivityOperation {

	// Properties
	var expiredRecords : Int
	var tombStonedRecords : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d6a40005b818 (0x6a40005b818) in binary!
	0x1d6a0  @objc ScrubRuntimeDataRecords.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x74fff47d98  @objc ScrubRuntimeDataRecords.(null) <stripped>

	// Swift methods
	0xe4560  func <stripped> // method 
 }

 class SiriInference.DBLoader {
 class SiriInference.CancellableStitcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let phoneAppDonation : PhoneAppDonation // +0x10 (0x8)
	let intentId : String // +0x18 (0x10)
	let store : _DKKnowledgeQuerying // +0x28 (0x8)
	let stitchedDataRecordStore : StitchedDataRecordStore // +0x30 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let runTimeDataURL : %® // +0x2 (0x0)
	let anonymizer : AnonymizeIdsProtocol // +0x0 (0x28)

	// Swift methods
	0xe5690  func <stripped> // method 
	0xe7660  func <stripped> // method 
 }

 class SiriInference.Intent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var id : =⁄ // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var groupId : =⁄ // +0x18 (0x8)
	let uuid : String // +0x20 (0x10)
	let dkEventUuid : String? // +0x30 (0x10)
	let domain : String // +0x40 (0x10)
	let verb : String // +0x50 (0x10)
	let bundleId : String // +0x60 (0x10)
	let isDonatedBySiri : Bool // +0x70 (0x1)
	let direction : INInteractionDirection // +0x78 (0x8)
	let handlingStatus : INIntentHandlingStatus // +0x80 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ∑ÿ // +0x77735f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let durationSeconds : =⁄ // +0x7079745f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdAt : ∑ÿ // +0x45545f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let updatedAt : ∑ÿ // +0x0 (0x0)

	// Swift methods
	0xea8f0  func <stripped> // method 
	0xeabd0  func <stripped> // method 
	0xeb1f0  func <stripped> // method 
 }

 class SiriInference.EKEventStoreMatcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib, EventStoreMatcher {

	// Properties
	let eventStore : EKEventStore

	// Swift methods
 }

 struct SiriInference.RequestMatchSignalProvider { }

 struct SiriInference.IsHandleMatch {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : IsMatch // +0x10
 }

 struct SiriInference.MatchSignals {

	// Properties
	var version : UInt // +0x0
	var isError : Bool // +0x8
	var allQueryMatched : Bool // +0x9
	var allTokensQueried : Bool // +0xa
	var givenNameMatched : IsMatch // +0xb
	var middleNameMatched : IsMatch // +0xc
	var familyNameMatched : IsMatch // +0xd
	var organizationNameMatched : IsMatch // +0xe
	var nicknameMatched : IsMatch // +0xf
	var namePrefixMatched : IsMatch // +0x10
	var nameSuffixMatched : IsMatch // +0x11
	var allHandlesMatched : IsMatch // +0x12
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case version  
	case isError  
	case allQueryMatched  
	case allTokensQueried  
	case givenNameMatched  
	case middleNameMatched  
	case familyNameMatched  
	case organizationNameMatched  
	case nicknameMatched  
	case namePrefixMatched  
	case nameSuffixMatched  
	case allHandlesMatched  
 }

 enum SiriInference.IsMatch {

	// Properties
	case no  
	case yes  
	case notInQuery  
 }

 struct SiriInference.Group {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var id : =⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let entityIds :  empty-list 
	var rollup : Rollup
 }

 class SiriInference.ScrubDodMLRecords : XPCActivityOperation {

	// Properties
	var tombStonedRecords : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d6840005b7f8 (0x6840005b7f8) in binary!
	0x1d680  @objc ScrubDodMLRecords.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7c4fff65db8  @objc ScrubDodMLRecords.(null) <stripped>

	// Swift methods
	0xf5620  func <stripped> // method 
 }

 struct SiriInference.Interaction {

	// Properties
	var intentUuid : String?
	var dkEventUuid : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupId : =⁄
WARNING: couldn't find address 0x0 (0x0) in binary!
	let entityId : =⁄
	let domain : String
	let verb : String
	let bundleId : String
	let isDonatedBySiri : Bool
	let direction : InteractionDirection
	let status : InteractionStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ∑ÿ
 }

 enum SiriInference.CodingKeys {

	// Properties
	case intentUuid  
	case dkEventUuid  
	case groupId  
	case entityId  
	case domain  
	case verb  
	case bundleId  
	case isDonatedBySiri  
	case direction  
	case status  
	case date  
 }

 struct SiriInference.InteractionIngestorConfig {

	// Properties
	var policies : IntentPolicy // +0x0
 }

 struct SiriInference.IntentPolicy { }

 struct SiriInference.Contact {

	// Properties
	var id : String
	var isMe : Bool?
	var namePrefix : String
	var givenName : String
	var middleName : String
	var familyName : String
	var previousFamilyName : String
	var nameSuffix : String
	var nickname : String
	var organizationName : String
	var phoneticGivenName : String
	var phoneticMiddleName : String
	var phoneticFamilyName : String
	var phoneticOrganizationName : String
	var contactRelations : LabeledValue
WARNING: couldn't find address 0x0 (0x0) in binary!
	var birthday : … 
	var handles : ContactHandle
	var isSuggested : Bool
	var siriPhonemeData : String
 }

 struct SiriInference.LabeledValue {

	// Properties
	let id : String
	let label : String
	let value : A
 }

 struct SiriInference.PostalAddress {

	// Properties
	var street : String // +0x0
	var city : String // +0x10
	var state : String // +0x20
	var postalCode : String // +0x30
	var country : String // +0x40
	var isoCountryCode : String // +0x50
	var subAdministrativeArea : String // +0x60
	var subLocality : String // +0x70
 }

 struct SiriInference.InstantMessageAddress {

	// Properties
	let service : String // +0x0
	let username : String // +0x10
 }

 struct SiriInference.ContactHandle {

	// Properties
	let id : String? // +0x0
	let type : HandleType // +0x10
	let label : String? // +0x18
	let value : String? // +0x28
	let isSuggested : Bool // +0x38
 }

 enum SiriInference.HandleType {

	// Properties
	case unknown  
	case email  
	case phone  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case id  
	case type  
	case label  
	case value  
	case isSuggested  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case id  
	case isMe  
	case namePrefix  
	case givenName  
	case middleName  
	case familyName  
	case previousFamilyName  
	case nameSuffix  
	case nickname  
	case organizationName  
	case phoneticGivenName  
	case phoneticMiddleName  
	case phoneticFamilyName  
	case phoneticOrganizationName  
	case contactRelations  
	case birthday  
	case handles  
	case isSuggested  
	case siriPhonemeData  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case service  
	case username  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case street  
	case city  
	case state  
	case postalCode  
	case country  
	case isoCountryCode  
	case subAdministrativeArea  
	case subLocality  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case id  
	case label  
	case value  
 }

 class SiriInference.RecurringDateInterval : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var interval : ¢ // +0x1d76d6 (0x0)
	var recurrencePattern : RecurrencePattern // +0x4df0 (0x8)

	// Swift methods
 }

 enum SiriInference.Grain {

	// Properties
	case temporality  
	case second  
	case minute  
	case meridiem  
	case hour  
	case dayOfMonth  
	case dayOfWeek  
	case weekOfMonth  
	case weekOfYear  
	case month  
	case holiday  
	case year  
	case now  
	case notset  
 }

 struct SiriInference.Group {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : =⁄ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let entityIds :  empty-list  // +0x8
	var aggregations : Aggregation // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case id  
	case entityIds  
	case aggregations  
 }

 enum SiriInference.InteractionStatus {

	// Properties
	case unspecified  
	case ready  
	case inProgress  
	case success  
	case failure  
	case deferredToApplication  
	case userConfirmationRequired  
 }

 class SiriInference.DodMLStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib, StitchedDataRecordStore {

	// Properties
	let store : DESRecordStore
WARNING: couldn't find address 0x0 (0x0) in binary!
	let encoder : °

	// Swift methods
	0x10a050  func <stripped> // method 
	0x10a590  func <stripped> // method 
	0x10ae40  func <stripped> // method 
	0x10b150  func <stripped> // method 
 }

 class SiriInference.DefinedTimeStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib, DefinedTimeStorageProviding {
	// Swift methods
 }

 struct SiriInference.Match {

	// Properties
	var value : A
	var signals : B
 }

 struct SiriInference.ScoredMatch {

	// Properties
	var value : A
	var signals : B
	var score : Double
 }

 struct SiriInference.ProcessedMatch {

	// Properties
	var value : A
	var signals : B
	var recommenderData : C
 }

 enum SiriInference.CodingKeys {

	// Properties
	case value  
	case signals  
	case recommenderData  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case value  
	case signals  
	case score  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case value  
	case signals  
 }

 enum SiriInference.TimeIntervalBucket {

	// Properties
	case now  
	case _30sec  
	case _2min  
	case _10min  
	case _1hr  
	case _6hr  
	case _1day  
	case _7day  
	case _28day  
	case inf  
 }

 struct SiriInference.DateTimeResolver { }

 class SiriInference.BackgroundQueue : NSOperationQueue /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var lock : OS_dispatch_semaphore // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var pauseRequests : π // +0x10 (0x4)
	let queue : OS_dispatch_queue // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let queueKey : I¨ // +0x20 (0x8)
	let queueKeyValue : Int // +0x28 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d66c0005b860 (0x66c0005b860) in binary!
	0x1d658  @objc BackgroundQueue.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x34fff911d8  @objc BackgroundQueue.(null) <stripped>

	// Swift methods
	0x113650  func <stripped> // method 
	0x1142d0  func <stripped> // method 
	0x114590  func <stripped> // method 
 }

 class SiriInference.DateTimeConstraint : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let grain : Grain
	let value : Value
	let bound : Bound
	let measure : Measure
	let source : Source
	let convergeToBeginningOfGrain : Bool
	let setByUser : Bool
	let transient : Bool
	var solved : Bool
	var valuesThatAreSet : [Int]

	// Swift methods
	0x115570  func <stripped> // getter 
	0x115730  func <stripped> // method 
	0x115b40  func <stripped> // method 
	0x115c30  func <stripped> // method 
	0x1160a0  func <stripped> // method 
	0x116f60  func <stripped> // method 
 }

 struct SiriInference.AppMatcher {

	// Properties
	var db : DBLoader // +0x0
 }

 struct SiriInference.AppSignals {

	// Properties
	let bundleId : String // +0x0
	let recencyOrder : Int // +0x10
	let secondsAgo : Double // +0x18
	let recencyScore : Double // +0x20
	let frequencyScore : Double // +0x28
	let overallScore : Double // +0x30
 }

 enum SiriInference.CodingKeys {

	// Properties
	case bundleId  
	case recencyOrder  
	case secondsAgo  
	case recencyScore  
	case frequencyScore  
	case overallScore  
 }

 struct SiriInference.HolidayConstraintSolver {

	// Properties
	let holidayResolver : HolidayResolver // +0x0
 }

 enum SiriInference.Value {

	// Properties
	case simple : (value: Double)
	case meridiem : Meridiem
	case dayOfWeek : (value: Int, ordinal: Int?)
	case holiday : CalendarSystem
	case temporality : TemporalIntent
	case notset  
 }

 enum SiriInference.Constants { }

 enum SiriInference.Qualifier {

	// Properties
	case allOf  
	case earlierPartOf  
	case beginOf  
	case endOf  
	case laterPartOf  
	case middleOf  
	case restOf  
	case startOf  
	case plus  
	case minus  
	case approx  
	case early  
	case late  
	case every  
	case before  
	case after  
	case this  
	case next  
	case upcoming  
	case last  
 }

 class SiriInference.BackgroundSignalGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let context : RequestContext
	let spec : Spec
	let backgroundSignalProviders : BackgroundSignalProviders

	// Swift methods
	0x125890  func <stripped> // method 
 }

 struct SiriInference.BackgroundSignalProviders {

	// Properties
	let context : RequestContext // +0x0
	let isMatchRelationNameProvider : MatchRelationNameSignalProvider // +0x8
	let peopleSuggesterProvider : PeopleSuggesterSignalGenerator // +0x10
 }

 struct SiriInference.Entity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var id : =⁄
	var type : String
	var uuid : String
	var rollup : Rollup
	var tokens : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : ∑ÿ
 }

 struct SiriInference.SpeechAlternativeNameExpander { }

 struct SiriInference.SpeechAlternativeRanks {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var givenNameRank : Int // +0x10
	var middleNameRank : Int // +0x18
	var familyNameRank : Int // +0x20
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case givenNameRank  
	case middleNameRank  
	case familyNameRank  
 }

 class SiriInference.RunTimeDataLogger {
 enum SiriInference.InteractionDirection {

	// Properties
	case unspecified  
	case outgoing  
	case incoming  
 }

 enum SiriInference.HolidaysDBError {

	// Properties
	case conversionError : (String, String, String)
	case badDate : String
	case missingVersion  
	case readonly  
 }

 enum SiriInference.HolidaysDBObserved {

	// Properties
	case nextBusinessDay  
	case closestBusinessDay  
 }

 enum SiriInference.HolidaysDBType {

	// Properties
	case absolute  
	case list  
	case relativeToAnotherHoliday  
	case monthRelativeWeekday  
 }

 enum SiriInference.HolidaysDBCalendar {

	// Properties
	case buddhist  
	case chinese  
	case hebrew  
	case hijri  
	case hindu  
	case islamicUmalqura  
	case islamic  
	case gregorian  
	case japanese  
	case julian  
	case persian  
	case roc  
 }

 enum SiriInference.HolidaysDBWeekday {

	// Properties
	case monday  
	case tuesday  
	case wednesday  
	case thursday  
	case friday  
	case saturday  
	case sunday  
 }

 struct SiriInference.HolidaysDBRow {

	// Properties
	var holiday : String // +0x0
	var country : String // +0x10
	var calendar : HolidaysDBCalendar // +0x20
	var year : Int // +0x28
	var occurrence : Int // +0x30
	var type : HolidaysDBType // +0x38
	var month : Int? // +0x40
	var day : Int? // +0x50
	var dayofweek : HolidaysDBWeekday // +0x59
	var dayordinal : Int? // +0x60
	var offset : Int? // +0x70
	var duration : Int? // +0x80
	var relativeto : String? // +0x90
	var relativecalendar : HolidaysDBCalendar // +0xa0
	var observed : HolidaysDBObserved // +0xa1
	var evening : Bool? // +0xa2
 }

 enum SiriInference.CodingKeys {

	// Properties
	case holiday  
	case country  
	case calendar  
	case year  
	case occurrence  
	case type  
	case month  
	case day  
	case dayofweek  
	case dayordinal  
	case offset  
	case duration  
	case relativeto  
	case relativecalendar  
	case observed  
	case evening  
 }

 class SiriInference.DateTimeRange : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let at : DateTime
	let start : DateTime
	let end : DateTime
	let duration : Interval
	let interval : Interval
	let definedValue : DefinedDateTimeRange
	let qualifier : Qualifier

	// Swift methods
	0x136d20  class func DateTime.DateTimeRange.__allocating_init(withDateTime:) // init 
	0x136db0  class func DateTime.DateTimeRange.__allocating_init(withStartDateTime:) // init 
	0x136b90  class func DateTime.DateTimeRange.__allocating_init(withStartDateTime:endDateTime:) // init 
	0x136c50  class func DateTime.DateTimeRange.__allocating_init(withStartDateTime:endDateTime:interval:) // init 
	0x136ea0  class func DateTime.DateTimeRange.__allocating_init(withStartDateTime:duration:) // init 
	0x136f20  class func DateTime.DateTimeRange.__allocating_init(withDefinedValue:) // init 
	0x136fc0  class func DateTime.DateTimeRange.__allocating_init(withDefinedValue:qualifier:) // init 
	0x137060  class func DateTime.DateTimeRange.__allocating_init(withInterval:) // init 
	0x136be0  class func DateTime.DateTimeRange.__allocating_init(at:start:end:duration:interval:definedValue:qualifier:) // init 
	0x137120  func <stripped> // method 
	0x137300  func <stripped> // getter 
	0x1374a0  func <stripped> // method 
	0x139250  func <stripped> // getter 
	0x138a90  class func DateTime.DateTimeRange.__allocating_init(from:) // init 
	0x138f30  func <stripped> // method 
 }

 enum SiriInference.CodingKeys {

	// Properties
	case at  
	case start  
	case end  
	case duration  
	case interval  
	case definedValue  
	case qualifier  
 }

 enum SiriInference.DayOfWeek {

	// Properties
	case monday  
	case tuesday  
	case wednesday  
	case thursday  
	case friday  
	case saturday  
	case sunday  
 }

 struct SiriInference.SiriRemembersDB {

	// Properties
	var connection : Connection // +0x0
 }

 class SiriInference.PeopleSuggesterSignalGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var peopleSuggesterHandleScorer : HandleScorer

	// Swift methods
 }

 struct SiriInference.PeopleSuggesterScore {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Double // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 enum SiriInference.HolidayDateType {

	// Properties
	case absolute  
	case list  
	case relativeToAnotherHoliday  
	case monthRelativeWeekday  
 }

 enum SiriInference.Meridiem {

	// Properties
	case am  
	case pm  
 }

 class SiriInference.FetchMorphunAssets : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d6440005b7b8 (0x6440005b7b8) in binary!
	0x1d640  @objc FetchMorphunAssets.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x14fffb6878  @objc FetchMorphunAssets.(null) <stripped>
 }

 class SiriInference.InferenceError : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var errorId : ErrorId
	var msg : String
	let file : String
	let function : String
	let line : Int
	let callstack : [String]
	let kind : MeasurementKind
	var isLogged : Bool

	// Swift methods
	0x13ff70  func <stripped> // getter 
	0x1401d0  func <stripped> // method 
	0x140230  func <stripped> // method 
	0x140510  func <stripped> // method 
 }

 enum SiriInference.MeasurementKind {

	// Properties
	case log  
	case logAndCount  
	case logCountAndReport  
 }

 enum SiriInference.ErrorId {

	// Properties
	case backgroundQueueCannotPauseItself  
	case crResolver3PContactMatcherTimeout  
	case crResolverContactStoreQueryFailed  
	case crResolverCoreMlInferenceFailed  
	case crResolverCoreMlInitFailed  
	case crResolverFirstContactQueryFailed  
	case crResolverFirstContactQueryTimeout  
	case crResolverHypocorismNameExpanderFailed  
	case crResolverHypocorismNameExpanderTimeout  
	case crResolverIsFavoriteSignalProviderFailed  
	case crResolverIsFavoriteSignalProviderTimeout  
	case crResolverMakeRecommendationFailed  
	case crResolverMatchRelationNameProviderFailed  
	case crResolverMeCardExpanderFailed  
	case crResolverMeCardExpanderTimeout  
	case crResolverMeCardFetchFailed  
	case crResolverPartialNameMatchExpanderFailed  
	case crResolverPartialNameMatchExpanderTimeout  
	case crResolverPeopleSuggesterProviderFailed  
	case crResolverPeopleSuggesterProviderTimeout  
	case crResolverQuerySuggestedContactStoreFailed  
	case crResolverQuerySuggestedContactStoreTimeout  
	case crResolverRelationshipAliasExpanderFailed  
	case crResolverRelationshipAliasExpanderTimeout  
	case crResolverSiriRemembersSignalProviderFailed  
	case crResolverSiriRemembersSignalProviderTimeout  
	case crSaveToRunTimeDBFailed  
	case crStitchingCardinalChecksFailed  
	case crStitchingCastFailed  
	case crStitchingConfirmationOfferHandleValueMissing  
	case crStitchingConfirmationResultHandleValueMissing  
	case crStitchingDeserializationFailed  
	case crStitchingDeserializingRunTimeDataFromDBFailed  
	case crStitchingEventvalidationFailed  
	case crStitchingGetInteractionsFromDateFailed  
	case crStitchingInconsistentDataAcrossEvents  
	case crStitchingIntentResultHandleValueMissing  
	case crStitchingInvalidDataInEvent  
	case crStitchingMissingDataForTaskId  
	case crStitchingOtherError  
	case crStitchingUnwrapContactsFromStartCallIntent  
	case databaseError  
	case databaseErrorCantOpen  
	case databaseErrorCorrupt  
	case databaseErrorDiskFull  
	case databaseErrorIoErrGetTempPath  
	case dispatchError  
	case duetEventInvalidINInteraction  
	case duetEventMissingINInteraction  
	case duetInvalidQueryResults  
	case duetQueryFailure  
	case duetQueryReturnsEmptyArray  
	case morphunDownloadAssetsError  
	case morphunGetAssetPathsError  
	case otherError  
	case siriRemembersGroupNoEntities  
	case siriremembersIntentInvalidINIntent  
	case siriRemembersIntentSkipped  
	case timeout  
	case unhandledEnumVariant  
	case unwrappedNil  
	case urlError  
 }

 class SiriInference.ContactResolverAccuracyMetricsWrapper {
 enum SiriInference.ContactResolverContextKeys {

	// Properties
	case siriLocale  
	case siriDomain  
	case requestIntent  
	case hasOnly1pAppCandidates  
	case allowSuggestedContacts  
	case recommenderUsed  
 }

 class SiriInference.BackgroundManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var inner : Inner
	var lock : OS_dispatch_semaphore

	// Swift methods
	0x142750  class func BackgroundManager.__allocating_init() // init 
	0x142840  func <stripped> // method 
	0x1428a0  func <stripped> // method 
	0x142b40  func <stripped> // method 
	0x142fd0  func <stripped> // method 
 }

 class SiriInference.Inner : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interactionMonitor : CoreDuetInteractionMonitor
	let tombstoneObserver : NSObject
	let trialManager : TrialManager

	// Swift methods
 }

 class SiriInference.CandidateContactGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let hypocorismGenerator : HypocorismGenerator
	let meCardGenerator : MeCardContactGenerator
	let relationshipAliasGenerator : RelationshipAliasGenerator
	let contactsFrameworkMatcher : ContactsFrameworkMatcher
	let suggestedContactsMatcher : ContactsFrameworkMatcher
	let suggestedContactsFilter : SuggestedContactsFilter
	let signalProviders : ContactSignalProviders
	let partialNameMatchExpander : PartialNameMatchExpander

	// Swift methods
	0x147090  func <stripped> // method 
	0x14c1f0  func <stripped> // method 
	0x14cab0  func <stripped> // method 
	0x14d020  func <stripped> // method 
	0x14d3a0  func <stripped> // method 
 }

 struct SiriInference.ContactSignalProviders {

	// Properties
	let requestMatchProvider : RequestMatchSignalProvider // +0x0
	let siriRemembersProvider : SiriRemembersContactSignalProvider // +0x0
	let isFavoriteProvider : IsFavoriteSignalGenerator // +0x8
 }

 enum SiriInference.ProviderType {

	// Properties
	case isFavorite  
	case SiriRemembers  
	case SiriRemembersDB  
 }

 class SiriInference.Thanksgiving : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x1525a0  func <stripped> // method 
 }

 enum SiriInference.RepeatInterval {

	// Properties
	case never  
	case everyHour  
	case every4Hours  
	case every8Hours  
	case everyDay  
 }

 struct SiriInference.XPCActivity {

	// Properties
	let id : String // +0x0
	let repeatInterval : RepeatInterval // +0x10
	let requireScreenSleep : Bool // +0x11
	let allowBattery : Bool // +0x12
	let makeOperation : XPCActivityOperation // +0x18
 }

 struct SiriInference.DateTimeWindow {

	// Properties
	let vector : Vector
	let ranges : [ClosedRange<Double>]
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : y‘
WARNING: couldn't find address 0x0 (0x0) in binary!
	let referenceDate : ∑ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ∑ÿ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let endDate : ∑ÿ
 }

 enum SiriInference.Vector {

	// Properties
	case dateAndTime  
	case time  
 }

 struct SiriInference.CalendarComponentConstraintSolver { }

 struct SiriInference.PrivatizedStitchedDataRecord {

	// Properties
	let stitchedDataId : String
	let context : RequestContext
	let contactResolutionInfoWithPrivacy : ContactResolutionInfoWithPrivacy
	let callDuration : Int?
	let succesfulCallThreshold : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intentResultType : µ’
	let numCardinals : Int?
	let resolutionInfosReduced : Bool
 }

 struct SiriInference.ContactResolutionInfoWithPrivacy {

	// Properties
	let userInteractionInfo : UserInteractionInfo // +0x0
	let candidates : ContactRunTimeDataWithPrivacy // +0x98
	let cardinalIndex : Int // +0xe0
 }

 enum SiriInference.CodingKeys {

	// Properties
	case stitchedDataId  
	case context  
	case contactResolutionInfoWithPrivacy  
	case callDuration  
	case succesfulCallThreshold  
	case intentResultType  
	case numCardinals  
	case resolutionInfosReduced  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case userInteractionInfo  
	case candidates  
	case cardinalIndex  
 }

 struct SiriInference.ContactRunTimeDataWithPrivacy {

	// Properties
	let recommenderInfo : RecommenderInfo // +0x0
	let matches : ProcessedMatch // +0x18
	let matchesWithBackgroundSignals : Match // +0x20
	let recommendation : Recommendation // +0x28
 }

 enum SiriInference.CodingKeys {

	// Properties
	case recommenderInfo  
	case matches  
	case matchesWithBackgroundSignals  
	case recommendation  
 }

 class SiriInference.DateTime : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let date : Date // +0x10 (0x8)
	let time : Time // +0x18 (0x8)
	let definedValue : DefinedDateTime // +0x20 (0x1)
	let recurrencePattern : RecurrencePattern // +0x28 (0x8)
	let temporalIntent : TemporalIntent // +0x30 (0x1)
	let occurringIn : DateTimeRange // +0x38 (0x8)

	// Swift methods
	0x15ffc0  class func DateTime.__allocating_init(withDate:) // init 
	0x160190  class func DateTime.__allocating_init(withDate:time:) // init 
	0x1603f0  class func DateTime.__allocating_init(withDate:time:occurringIn:) // init 
	0x160470  class func DateTime.__allocating_init(withDefinedValue:) // init 
	0x160260  class func DateTime.__allocating_init(withTime:) // init 
	0x1601e0  class func DateTime.__allocating_init(withDate:time:definedValue:recurrencePattern:temporalIntent:occurringIn:) // init 
	0x160120  class func DateTime.__allocating_init(withStartHour:startMinute:startSecond:startMeridiem:endHour:endMinute:endSecond:endMeridiem:) // init 
	0x160060  class func DateTime.__allocating_init(withStartHour:startMinute:startSecond:startMeridiem:) // init 
	0x1607b0  class func DateTime.__allocating_init(withDate:occurringIn:) // init 
	0x160010  class func DateTime.__allocating_init(occurringIn:) // init 
	0x160860  func <stripped> // method 
	0x1609a0  func <stripped> // getter 
	0x161890  func <stripped> // getter 
	0x161150  class func DateTime.__allocating_init(from:) // init 
	0x161570  func <stripped> // method 
 }

 enum SiriInference.CodingKeys {

	// Properties
	case date  
	case time  
	case definedValue  
	case recurrencePattern  
	case temporalIntent  
	case occurringIn  
 }

 class SiriInference.PickFirstResolverRule : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriInference.SaveInteraction : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let interaction : INInteraction // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dkEventUUID : © // +0x0 (0x0)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d6240005b798 (0x6240005b798) in binary!
	0x1d620  @objc SaveInteraction.(null) <stripped>
WARNING: couldn't find address 0x1d60c0005b778 (0x60c0005b778) in binary!
	0x38000000c  @objc SaveInteraction.(null) <stripped>
WARNING: couldn't find address 0x1d5fc0005b7f0 (0x5fc0005b7f0) in binary!
	0x1d5e8  @objc SaveInteraction.(null) <stripped>

	// Swift methods
	0x163680  class func SaveInteraction.__allocating_init(interaction:dkEventUUID:) // init 
 }

 class SiriInference.PeopleSuggesterHandleScorer : _SwiftObject /usr/lib/swift/libswiftCore.dylib, HandleScorer {
	// Swift methods
 }

 class SiriInference.ConvergenceStrategyResolverRule : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum SiriInference.CalendarSystem {

	// Properties
	case buddhist  
	case chinese  
	case gregorian  
	case hebrew  
	case hijri  
	case indian  
	case islamic  
	case islamicUmalqura  
	case japanese  
	case julian  
	case republicOfChina  
	case persian  
 }

 class SiriInference.ScrubDeletedRecords : XPCActivityOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let oldestDate : ∑ÿ // +0x77735f5f (0x0)
	var scrubbedCount : Int // +0x6569665f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d5fc0005b7f0 (0x5fc0005b7f0) in binary!
	0x1d5e8  @objc ScrubDeletedRecords.(null) <stripped>
WARNING: couldn't find address 0x1d5dc0005b748 (0x5dc0005b748) in binary!
	0x28000000c  @objc ScrubDeletedRecords.(null) <stripped>
WARNING: couldn't find address 0x1d5c40005b738 (0x5c40005b738) in binary!
	0x1d5c0  @objc ScrubDeletedRecords.(null) <stripped>

	// Swift methods
	0x169fc0  func <stripped> // method 
 }

 class SiriInference.ProcessUnstitchedIntents : XPCActivityOperation {

	// Properties
	var stitchingSucceeded : Int
	var stitchingSkipped : Int
	var stitchingFailed : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d5c40005b738 (0x5c40005b738) in binary!
	0x1d5c0  @objc ProcessUnstitchedIntents.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x704fffdb7a8  @objc ProcessUnstitchedIntents.(null) <stripped>
 }

 struct SiriInference.ContactResolverCache {

	// Properties
	var relationshipDBLoader : DBLoader // +0x0
	var hypocorismDBLoader : DBLoader // +0x8
	var siriRemembersDBLoader : DBLoader // +0x10
	var contactStore : CNContactStore // +0x18
	var suggestedContactStore : CNContactStore // +0x20
	var meCard : CNContact? // +0x28
	var favorites : [CNFavoritesEntry] // +0x30
	var mlRecommender : CoreMLContactRecommender // +0x38
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tokenizer : 3Ø // +0x58
 }

 class SiriInference.DateTimeSuggestionGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let spec : DateTimeResolutionSpec // +0x10 (0x12)
	let context : DateTimeResolutionContext // +0x28 (0x8)
	let definedDateTimeRangeStore : DefinedDateTimeRangeStorageProviding // +0x30 (0x28)
	let definedTimeStore : DefinedTimeStorageProviding // +0x58 (0x28)
	let holidayResolver : HolidayResolver // +0x80 (0x28)
	let solver : DateTimeConstraintSolver // +0xa8 (0x8)

	// Swift methods
	0x173f90  func <stripped> // method 
	0x174b60  func <stripped> // method 
 }

 enum SiriInference.INPersonExpansion {

	// Properties
	case single : INPerson
	case multiple : [INPerson]
 }

 enum SiriInference.MonthOfYear {

	// Properties
	case january  
	case february  
	case march  
	case april  
	case may  
	case june  
	case july  
	case august  
	case september  
	case october  
	case november  
	case december  
 }

 class SiriInference.DateTimeResolutionContext : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var language : =” // +0x1e1660 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var regionFormat : =” // +0x67cc (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var regionAwareLanguage : =” // +0x1e1660 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timeZone : ü‘ // +0x0 (0x0)
	var hemisphere : Hemisphere // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var calendar : y‘ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : ∑ÿ // +0x77735f5f (0x0)

	// Swift methods
	0x178a30  class func DateTimeResolutionContext.__allocating_init(with:regionFormat:regionAwareLanguage:timeZone:hemisphere:calendar:date:) // init 
	0x178f60  class func DateTimeResolutionContext.__allocating_init(from:) // init 
	0x179650  func <stripped> // method 
 }

 enum SiriInference.Hemisphere {

	// Properties
	case north  
	case south  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case language  
	case regionFormat  
	case regionAwareLanguage  
	case timeZone  
	case hemisphere  
	case calendar  
	case date  
 }

 struct SiriInference.Entity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : =⁄ // +0x0
	let type : String // +0x8
	let uuid : String // +0x18
	let tokens : String // +0x28
	var aggregations : Aggregation // +0x38
 }

 enum SiriInference.CodingKeys {

	// Properties
	case id  
	case type  
	case uuid  
	case tokens  
	case aggregations  
 }

 enum SiriInference.ResolutionState {

	// Properties
	case resolvedEmergency : Contact
	case resolvedRawHandle : Contact
	case resolvedMeCard : Contact
	case resolvedKnownContact : Contact
	case resolveContact : Contact
	case resolveHandle : Match
 }

 class SiriInference.MatchRelationNameSignalProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var tokensForAllRelations : [Set<String>]

	// Swift methods
 }

 struct SiriInference.IsMatchWithRelationName {

	// Properties
	var isError : Bool // +0x0
	var version : UInt // +0x8
	var value : Bool // +0x10
 }

 enum SiriInference.CodingKeys {

	// Properties
	case isError  
	case version  
	case value  
 }

 struct SiriInference.HolidayCalendarInfo {

	// Properties
	var holiday : String // +0x0
	var country : String // +0x10
	var calendar : HolidaysDBCalendar // +0x20
 }

 enum SiriInference.HolidaysDBUpdateError {

	// Properties
	case badDate : String
	case noData  
	case outOfOrder  
 }

 enum SiriInference.CodingKeys {

	// Properties
	case version  
	case versiondate  
	case holiday  
	case country  
	case newInfo  
	case calendars  
 }

 struct SiriInference.HolidaysDBUpdate {

	// Properties
	var version : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var versiondate : ∑ÿ
	var holiday : String
	var country : String?
	var newInfo : HolidaysDBRow
	var newCalendars : HolidayCalendarInfo
 }

 enum SiriInference.CodingKeys {

	// Properties
	case holiday  
	case country  
	case calendar  
 }

 enum SiriInference.CalendarEra {

	// Properties
	case beforeCommonEra  
	case commonEra  
	case edo  
	case heisei  
	case meiji  
	case showa  
	case taisho  
 }

 class SiriInference.XPCActivityOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var activity : OS_xpc_object?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completionKVObservation : qí

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d5ac0005b7a0 (0x5ac0005b7a0) in binary!
	0x1d598  @objc XPCActivityOperation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x564fffeb948  @objc XPCActivityOperation.(null) <stripped>

	// Swift methods
 }

 class SiriInference.RecurrencePattern : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let recurrenceDateTimeRange : DateTimeRange
	let recurrencePeriod : Interval
	let totalNumberOfOccurrences : Int?
	let recurrenceDateTimes : DateTime
	let fromDateTime : DateTime
	let toDateTime : DateTime

	// Swift methods
	0x189730  class func DateTime.RecurrencePattern.__allocating_init(withRecurrencePeriod:) // init 
	0x189890  class func DateTime.RecurrencePattern.__allocating_init(withRecurrenceDateTimeRange:recurrencePeriod:totalNumberOfOccurrences:recurrenceDateTimes:fromDateTime:toDateTime:) // init 
	0x189930  func <stripped> // method 
	0x189aa0  func <stripped> // getter 
	0x18a6a0  func <stripped> // getter 
	0x189f10  class func DateTime.RecurrencePattern.__allocating_init(from:) // init 
	0x18a370  func <stripped> // method 
 }

 enum SiriInference.CodingKeys {

	// Properties
	case recurrenceDateTimeRange  
	case recurrencePeriod  
	case totalNumberOfOccurrences  
	case recurrenceDateTimes  
	case fromDateTime  
	case toDateTime  
 }

 class SiriInference.AnonymizeIdsInStitchedData : _SwiftObject /usr/lib/swift/libswiftCore.dylib, AnonymizeIdsProtocol {
	// Swift methods
	0x18dd70  func <stripped> // method 
	0x18ec90  func <stripped> // method 
 }

 class SiriInference.ContactRankerInput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var inputs : MLMultiArray

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d58c0005bd80 (0x58c0005bd80) in binary!
	0x1bf10  @objc ContactRankerInput.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x544fffebbb8  @objc ContactRankerInput.(null) <stripped>

	// Swift methods
 }

 class SiriInference.ContactRankerOutput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let provider : MLFeatureProvider
	var $__lazy_storage_$_outputScore : MLMultiArray?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d56c0005bd60 (0x56c0005bd60) in binary!
	0x1bef0  @objc ContactRankerOutput.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x1533a4d4152  @objc ContactRankerOutput.(null) <stripped>

	// Swift methods
	0x199420  func <stripped> // getter 
 }

 class SiriInference.ContactRanker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let model : MLModel

	// Swift methods
	0x1996c0  func <stripped> // method 
 }
