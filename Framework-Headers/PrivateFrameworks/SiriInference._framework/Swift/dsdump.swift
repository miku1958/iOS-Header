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
 protocol SiriInference.ContactStore // 2 requirements
 {
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
	var handle : ¯¯
	let connection : Connection
	var $__lazy_storage_$_columnCount : Int?
	var $__lazy_storage_$_columnNames : [String]?
	var $__lazy_storage_$_row : Cursor

	// Swift methods
 }

 struct SQLite.Cursor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : '± // +0x0
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
	var _handle : ¯¯
	var busyTimeout : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var busyHandler : ¯°
	var trace : @convention(block) (_:)?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateHook :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var commitHook : }°
	var rollbackHook : @convention(block) ()?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var functions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var collations : String
	var queue : OS_dispatch_queue
	var $__lazy_storage_$_queueContext : Int?

	// Swift methods
	0x199f90  class func Connection.__allocating_init(_:readonly:) // init 
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

 enum __C.MAAssetState { }

 enum __C.MADownloadResult { }

 enum __C.MAQueryResult { }

 enum __C.ComparisonResult { }

 class SiriInference.SuggestedContactsFilter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let preferredHandleType : HandleType

	// Swift methods
	0x1d90  func <stripped> // method 
 }

 struct SiriInference.RecurrenceConstraintSolver { }

 struct SiriInference.Aggregation {

	// Properties
	let category : AggregationCategory
	let categoryValue : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var recency : ]è
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
	case next : ¿è
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
	0xb0c0  class func DateTime.Time.__allocating_init(withHour:) // init 
	0xb160  class func DateTime.Time.__allocating_init(withHour:minute:) // init 
	0xb200  class func DateTime.Time.__allocating_init(withHour:minute:second:) // init 
	0xb2a0  class func DateTime.Time.__allocating_init(withHour:meridiem:) // init 
	0xb350  class func DateTime.Time.__allocating_init(withHour:minute:meridiem:) // init 
	0xb400  class func DateTime.Time.__allocating_init(withHour:minute:second:meridiem:) // init 
	0xb4b0  class func DateTime.Time.__allocating_init(withDefinedValue:) // init 
	0xb560  class func DateTime.Time.__allocating_init(withHour:minute:second:meridiem:definedValue:setByUser:) // init 
	0xb660  class func DateTime.Time.__allocating_init(withHour:minute:second:meridiem:definedValue:occurringIn:setByUser:) // init 
	0xb760  func <stripped> // method 
	0xb920  func <stripped> // getter 
	0xc050  func <stripped> // method 
	0xc0b0  func <stripped> // method 
	0xc1f0  func <stripped> // method 
	0xcb10  func <stripped> // getter 
	0xc5a0  class func DateTime.Time.__allocating_init(from:) // init 
	0xc890  func <stripped> // method 
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
	0x11ca0  func <stripped> // method 
	0x12310  func <stripped> // method 
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
	let date : ]è
WARNING: couldn't find address 0x0 (0x0) in binary!
	let language : ñâ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timeZone : Kä
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : %ä
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
	0x189e0  class func DateTime.Interval.__allocating_init(withQuantity:timeUnit:) // init 
	0x18a70  class func DateTime.Interval.__allocating_init(withTimeUnit:qualifier:) // init 
	0x18990  class func DateTime.Interval.__allocating_init(withQuantity:timeUnit:qualifier:) // init 
	0x18b00  func <stripped> // method 
	0x18bb0  func <stripped> // getter 
	0x19580  func <stripped> // getter 
	0x191f0  class func DateTime.Interval.__allocating_init(from:) // init 
	0x19420  func <stripped> // method 
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
	let calendar : %ä // +0x0 (0x0)

	// Swift methods
	0x1e340  func <stripped> // method 
	0x1e690  func <stripped> // method 
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
	var databaseUrl : à // +0x1ef000 (0x0)
	var stitchingSucceeded : Int // +0x5 (0x8)
	var stitchingSkipped : Int // +0x12 (0x8)
	var stitchingFailed : Int // +0x65745f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d31c0005c1b0 (0x31c0005c1b0) in binary!
	0x1d318  @objc BackfillInteractions.(null) <stripped>
WARNING: couldn't find address 0x1d3040005c190 (0x3040005c190) in binary!
	0x48000000c  @objc BackfillInteractions.(null) <stripped>
WARNING: couldn't find address 0x1d2e40005c170 (0x2e40005c170) in binary!
	0x1d2e0  @objc BackfillInteractions.(null) <stripped>
 }

 class SiriInference.IsFavoriteSignalGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let favorites : [CNFavoritesEntry]

	// Swift methods
	0x20cb0  func <stripped> // method 
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
	var intentResultType : Yå
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
	var lastCheck : ]è
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
WARNING: couldn't find address 0x1d2ac0005c138 (0x2ac0005c138) in binary!
	0x1d2a8  @objc HolidaysDBUpdaterOperation.(null) <stripped>
WARNING: couldn't find address 0x1d2a40005c1b0 (0x2a40005c1b0) in binary!
	0x1d290  @objc HolidaysDBUpdaterOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x104ffe9ba00  @objc HolidaysDBUpdaterOperation.(null) <stripped>
	0xffe9c468  @objc HolidaysDBUpdaterOperation.uÈº <stripped>
 }

 class SiriInference.HolidaysDBPollingOperation : XPCActivityOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var runDate : ]è

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d2e40005c170 (0x2e40005c170) in binary!
	0x1d2e0  @objc HolidaysDBPollingOperation.(null) <stripped>
WARNING: couldn't find address 0x1d2dc0005c1e8 (0x2dc0005c1e8) in binary!
	0x1d2c8  @objc HolidaysDBPollingOperation.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x13cffe96c88  @objc HolidaysDBPollingOperation.(null) <stripped>
	0x11cffe96fa0  @objc HolidaysDBPollingOperation. <stripped>

	// Swift methods
 }

 enum SiriInference.UpdaterState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case backoff : ]è
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
	let cutoffDate : ]è // +0x0 (0x0)
	var scrubbedCount : Int // +0x45545f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d2840005c190 (0x2840005c190) in binary!
	0x1d270  @objc ScrubOldRecords.(null) <stripped>
WARNING: couldn't find address 0x1d2640005c0f0 (0x2640005c0f0) in binary!
	0x28000000c  @objc ScrubOldRecords.(null) <stripped>
WARNING: couldn't find address 0x1d2440005c0a0 (0x2440005c0a0) in binary!
	0x1f3a0  @objc ScrubOldRecords.(null) <stripped>

	// Swift methods
	0x42d80  func <stripped> // method 
 }

 class SiriInference.SolsticeAndEquinox : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let calendar : %ä // +0x0 (0x0)
	let type : AstronomicalType // +0x1a45dc (0x1)

	// Swift methods
	0x43650  func <stripped> // method 
	0x43840  func <stripped> // method 
	0x43990  func <stripped> // method 
	0x43bd0  func <stripped> // method 
	0x44040  func <stripped> // method 
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
	0x48570  func <stripped> // getter 
	0x480c0  class func ContactResolver.__allocating_init() // init 
	0x48b10  func <stripped> // method 
	0x48b70  func <stripped> // method 
	0x48de0  func <stripped> // method 
	0x4c8c0  func <stripped> // method 
	0x4cb10  func <stripped> // method 
	0x4e390  func <stripped> // method 
	0x4e8d0  func <stripped> // method 
	0x4f5c0  func <stripped> // method 
	0x4fd60  func <stripped> // method 
	0x50a40  func <stripped> // method 
	0x50ec0  func <stripped> // method 
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
	var locale : ñâ
	var appCandidates : AppCandidate
	var domain : Domain
	var intent : String
	var intentId : String

	// Swift methods
	0x51700  func <stripped> // getter 
	0x51b00  class func ContactResolver.RequestContext.__allocating_init() // init 
	0x51cc0  func <stripped> // method 
	0x51ed0  func <stripped> // method 
	0x51f60  func <stripped> // method 
	0x51fa0  func <stripped> // method 
	0x51fc0  func <stripped> // method 
	0x51fe0  func <stripped> // method 
	0x52220  class func ContactResolver.RequestContext.__allocating_init(from:) // init 
	0x525b0  func <stripped> // method 
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
	0x52ec0  func <stripped> // getter 
	0x53000  class func ContactResolver.Spec.__allocating_init() // init 
	0x53030  func <stripped> // method 
	0x53050  func <stripped> // method 
	0x53060  func <stripped> // method 
	0x53070  func <stripped> // method 
	0x53170  class func ContactResolver.Spec.__allocating_init(from:) // init 
	0x53320  func <stripped> // method 
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
	let id : MÚ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let name : 7ß
	let log : OS_os_log
 }

 class SiriInference.GregorianEasterHoliday : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x67180  func <stripped> // method 
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
	0x67690  func <stripped> // method 
	0x677f0  func <stripped> // getter 
	0x689f0  func <stripped> // getter 
	0x68330  class func DateTime.Date.Holiday.__allocating_init(from:) // init 
	0x68710  func <stripped> // method 
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
	0x72720  func <stripped> // method 
 }

 class SiriInference.HolidaysDBHolidayResolver : HolidaysDatabase {
	// Swift methods
	0x73420  func <stripped> // method 
	0x74f10  func <stripped> // method 
	0x75da0  func <stripped> // method 
 }

 enum SiriInference.HolidaysDBHolidayResolverError {

	// Properties
	case databaseError : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	case badLocale : ñâ
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
	var $__lazy_storage_$_assetURL : SÊ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var $__lazy_storage_$_versiondate : #Þ // +0x0 (0x0)
	var $__lazy_storage_$_holiday : String?? // +0x0 (0x10)
	var $__lazy_storage_$_country : String?? // +0x0 (0x10)

	// Swift methods
	0x79900  func <stripped> // getter 
	0x79a50  func <stripped> // getter 
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
	var donationTime : ]è // +0x0 (0x0)
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
WARNING: couldn't find address 0x1f39e0005c0a8 (0x39e0005c0a8) in binary!
	0x1d228  @objc AppMatches.(null) <stripped>
WARNING: couldn't find address 0x1d21c0005c478 (0x21c0005c478) in binary!
	0x1f38a  @objc AppMatches.(null) <stripped>
WARNING: couldn't find address 0x1beb40005c060 (0x6b40005c060) in binary!
	0x29198  @objc AppMatches.(null) <stripped>
WARNING: couldn't find address 0x1d1ec0005c0f8 (0x1ec0005c0f8) in binary!
	0x1d1d8  @objc AppMatches.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0xccffee43f8  @objc AppMatches.(null) <stripped>
	0xffee4450  @objc AppMatches. <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x9cfff122b8  @objc AppMatches.(null) <stripped>
	0xfff12d30  @objc AppMatches. <stripped>

	// Swift methods
	0x83c70  class func AppMatches.__allocating_init(recommendation:bundleIds:signals:) // init 
	0x84010  func <stripped> // method 
	0x84240  func <stripped> // method 
	0x84480  class func AppMatches.__allocating_init(coder:) // init 
 }

 enum SiriInference.AppMatchRecommendation { }

 class SiriInference.DateTimeConstraintSolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var constraintSet : DateTimeConstraint
	let context : DateTimeResolutionContext
	let solvers : DateTimeConstraintSolving
	var orderedConstraints : DateTimeConstraint

	// Swift methods
	0x85580  func <stripped> // method 
	0x859b0  func <stripped> // method 
	0x85b40  func <stripped> // method 
	0x85e20  func <stripped> // method 
	0x86710  func <stripped> // method 
	0x86720  func <stripped> // method 
 }

 class SiriInference.RestartableBlockOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation, RestartableOperation {

	// Properties
	let block : ()

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d1c40005c058 (0x1c40005c058) in binary!
	0x1d1c0  @objc RestartableBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x1d1ac0005c038 (0x1ac0005c038) in binary!
	0x38000000c  @objc RestartableBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x1d1940005c028 (0x1940005c028) in binary!
	0x1d190  @objc RestartableBlockOperation.(null) <stripped>

	// Swift methods
	0x8b320  class func RestartableBlockOperation.__allocating_init(block:) // init 
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
	case data : È
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
	0x942a0  func <stripped> // method 
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
	0x97300  class func DateTime.Date.__allocating_init(withDay:) // init 
	0x96ef0  class func DateTime.Date.__allocating_init(withDay:month:) // init 
	0x97450  class func DateTime.Date.__allocating_init(withDay:monthOfYear:) // init 
	0x97540  class func DateTime.Date.__allocating_init(withDay:monthOfYear:year:) // init 
	0x97620  class func DateTime.Date.__allocating_init(withYear:) // init 
	0x970d0  class func DateTime.Date.__allocating_init(withDay:month:year:) // init 
	0x97770  class func DateTime.Date.__allocating_init(withMonth:year:) // init 
	0x97850  class func DateTime.Date.__allocating_init(withDefinedValue:) // init 
	0x96f70  class func DateTime.Date.__allocating_init(withHoliday:) // init 
	0x971d0  class func DateTime.Date.__allocating_init(withDayOfWeek:) // init 
	0x97a20  class func DateTime.Date.__allocating_init(withDayOfWeek:dayOfWeekOrdinal:) // init 
	0x97b10  class func DateTime.Date.__allocating_init(withMonthOfYear:) // init 
	0x97c00  class func DateTime.Date.__allocating_init(withMonthOfYear:year:) // init 
	0x97cf0  class func DateTime.Date.__allocating_init(withDay:month:year:definedValue:holiday:monthOfYear:weekOfYear:dayOfWeek:dayOfWeekOrdinal:calendarEra:) // init 
	0x96ff0  class func DateTime.Date.__allocating_init(withDay:month:year:definedValue:holiday:monthOfYear:weekOfYear:dayOfWeek:dayOfWeekOrdinal:calendarEra:occurringIn:) // init 
	0x97ef0  func <stripped> // method 
	0x981f0  func <stripped> // getter 
	0x98b50  func <stripped> // method 
	0x98cc0  func <stripped> // method 
	0x998f0  func <stripped> // getter 
	0x990c0  class func DateTime.Date.__allocating_init(from:) // init 
	0x99550  func <stripped> // method 
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
	0xabf20  func <stripped> // method 
	0xac800  func <stripped> // method 
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
WARNING: couldn't find address 0x1d1940005c028 (0x1940005c028) in binary!
	0x1d190  @objc RefreshRollups.(null) <stripped>
WARNING: couldn't find address 0x1d17c0005c008 (0x17c0005c008) in binary!
	0x28000000c  @objc RefreshRollups.(null) <stripped>
WARNING: couldn't find address 0x1d1640005bff8 (0x1640005bff8) in binary!
	0x1d160  @objc RefreshRollups.(null) <stripped>
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
	var mostRecent : ]è
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
	var date : ]è
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
	let contactStore : ContactStore
	var queryToCNContact : [String : [CNContact]]

	// Swift methods
	0xc2140  func <stripped> // method 
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
	0xc6470  func <stripped> // method 
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
	let inner : ›Ë // +0x18
 }

 struct SiriInference.Feature {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let name : 7ß // +0x0
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
	let uuid : ý¸
	let intentClassName : String
	let intentHandlingStatus : INIntentHandlingStatus
	let interaction : INInteraction
 }

 class SiriInference.ScrubRuntimeDataRecords : XPCActivityOperation {

	// Properties
	var expiredRecords : Int
	var tombStonedRecords : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d1640005bff8 (0x1640005bff8) in binary!
	0x1d160  @objc ScrubRuntimeDataRecords.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x4cfff4c388  @objc ScrubRuntimeDataRecords.(null) <stripped>

	// Swift methods
	0xe1c90  func <stripped> // method 
 }

 class SiriInference.DBLoader {
 class SiriInference.CancellableStitcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let phoneAppDonation : PhoneAppDonation // +0x10 (0x8)
	let intentId : String // +0x18 (0x10)
	let store : _DKKnowledgeQuerying // +0x28 (0x8)
	let stitchedDataRecordStore : StitchedDataRecordStore // +0x30 (0x28)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let runTimeDataURL : 	¸ // +0x0 (0x0)
	let anonymizer : AnonymizeIdsProtocol // +0x2 (0x28)

	// Swift methods
	0xe2da0  func <stripped> // method 
	0xe4d70  func <stripped> // method 
 }

 class SiriInference.Intent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var id : ¡é // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var groupId : ¡é // +0x18 (0x8)
	let uuid : String // +0x20 (0x10)
	let dkEventUuid : String? // +0x30 (0x10)
	let domain : String // +0x40 (0x10)
	let verb : String // +0x50 (0x10)
	let bundleId : String // +0x60 (0x10)
	let isDonatedBySiri : Bool // +0x70 (0x1)
	let direction : INInteractionDirection // +0x78 (0x8)
	let handlingStatus : INIntentHandlingStatus // +0x80 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let startDate : ]è // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let durationSeconds : ¡é // +0x77735f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdAt : ]è // +0x7079745f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let updatedAt : ]è // +0x45545f5f (0x0)

	// Swift methods
	0xe7fe0  func <stripped> // method 
	0xe82c0  func <stripped> // method 
	0xe88e0  func <stripped> // method 
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
	var id : ¡é
WARNING: couldn't find address 0x0 (0x0) in binary!
	let entityIds :  empty-list 
	var rollup : Rollup
 }

 class SiriInference.ScrubDodMLRecords : XPCActivityOperation {

	// Properties
	var tombStonedRecords : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d1440005bfd8 (0x1440005bfd8) in binary!
	0x1d140  @objc ScrubDodMLRecords.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7a4fff6a1f8  @objc ScrubDodMLRecords.(null) <stripped>

	// Swift methods
	0xf3430  func <stripped> // method 
 }

 struct SiriInference.Interaction {

	// Properties
	var intentUuid : String?
	var dkEventUuid : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let groupId : ¡é
WARNING: couldn't find address 0x0 (0x0) in binary!
	let entityId : ¡é
	let domain : String
	let verb : String
	let bundleId : String
	let isDonatedBySiri : Bool
	let direction : InteractionDirection
	let status : InteractionStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : ]è
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
	var birthday : ­Ú
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
	var interval : ·± // +0x0 (0x0)
	var recurrencePattern : RecurrencePattern // +0x1d0756 (0x8)

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
	case notset  
 }

 struct SiriInference.Group {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : ¡é // +0x0
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
	let encoder : ¡°

	// Swift methods
	0x107ba0  func <stripped> // method 
	0x1080e0  func <stripped> // method 
	0x108990  func <stripped> // method 
	0x108ca0  func <stripped> // method 
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
	var pauseRequests : 9È // +0x10 (0x4)
	let queue : OS_dispatch_queue // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let queueKey : ¥» // +0x20 (0x8)
	let queueKeyValue : Int // +0x28 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d12c0005c038 (0x12c0005c038) in binary!
	0x1d118  @objc BackgroundQueue.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0xcfffb9008  @objc BackgroundQueue.(null) <stripped>

	// Swift methods
	0x1112b0  func <stripped> // method 
	0x111f30  func <stripped> // method 
	0x1121f0  func <stripped> // method 
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
	0x113230  func <stripped> // getter 
	0x1133f0  func <stripped> // method 
	0x113800  func <stripped> // method 
	0x1138f0  func <stripped> // method 
	0x113d60  func <stripped> // method 
	0x114c20  func <stripped> // method 
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
	0x1234c0  func <stripped> // method 
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
	var id : ¡é
	var type : String
	var uuid : String
	var rollup : Rollup
	var tokens : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : ]è
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
	0x134a10  class func DateTime.DateTimeRange.__allocating_init(withDateTime:) // init 
	0x134aa0  class func DateTime.DateTimeRange.__allocating_init(withStartDateTime:) // init 
	0x134880  class func DateTime.DateTimeRange.__allocating_init(withStartDateTime:endDateTime:) // init 
	0x134940  class func DateTime.DateTimeRange.__allocating_init(withStartDateTime:endDateTime:interval:) // init 
	0x134b90  class func DateTime.DateTimeRange.__allocating_init(withStartDateTime:duration:) // init 
	0x134c10  class func DateTime.DateTimeRange.__allocating_init(withDefinedValue:) // init 
	0x134cb0  class func DateTime.DateTimeRange.__allocating_init(withDefinedValue:qualifier:) // init 
	0x134d50  class func DateTime.DateTimeRange.__allocating_init(withInterval:) // init 
	0x1348d0  class func DateTime.DateTimeRange.__allocating_init(at:start:end:duration:interval:definedValue:qualifier:) // init 
	0x134e10  func <stripped> // method 
	0x134ff0  func <stripped> // getter 
	0x135190  func <stripped> // method 
	0x136e10  func <stripped> // getter 
	0x136650  class func DateTime.DateTimeRange.__allocating_init(from:) // init 
	0x136af0  func <stripped> // method 
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
	0x13cb40  func <stripped> // getter 
	0x13cda0  func <stripped> // method 
	0x13ce00  func <stripped> // method 
	0x13d0e0  func <stripped> // method 
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
	0x13f290  class func BackgroundManager.__allocating_init() // init 
	0x13f380  func <stripped> // method 
	0x13f3e0  func <stripped> // method 
	0x13f680  func <stripped> // method 
	0x13fb10  func <stripped> // method 
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
	0x143580  func <stripped> // method 
	0x148b40  func <stripped> // method 
	0x149400  func <stripped> // method 
	0x149970  func <stripped> // method 
	0x149cf0  func <stripped> // method 
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
	0x14ec10  func <stripped> // method 
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

 struct SiriInference.CalendarComponentConstraintSolver { }

 struct SiriInference.PrivatizedStitchedDataRecord {

	// Properties
	let stitchedDataId : String
	let context : RequestContext
	let contactResolutionInfoWithPrivacy : ContactResolutionInfoWithPrivacy
	let callDuration : Int?
	let succesfulCallThreshold : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intentResultType : Yå
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
	0x15b320  class func DateTime.__allocating_init(withDate:) // init 
	0x15b4f0  class func DateTime.__allocating_init(withDate:time:) // init 
	0x15b750  class func DateTime.__allocating_init(withDate:time:occurringIn:) // init 
	0x15b7d0  class func DateTime.__allocating_init(withDefinedValue:) // init 
	0x15b5c0  class func DateTime.__allocating_init(withTime:) // init 
	0x15b540  class func DateTime.__allocating_init(withDate:time:definedValue:recurrencePattern:temporalIntent:occurringIn:) // init 
	0x15b480  class func DateTime.__allocating_init(withStartHour:startMinute:startSecond:startMeridiem:endHour:endMinute:endSecond:endMeridiem:) // init 
	0x15b3c0  class func DateTime.__allocating_init(withStartHour:startMinute:startSecond:startMeridiem:) // init 
	0x15bb10  class func DateTime.__allocating_init(withDate:occurringIn:) // init 
	0x15b370  class func DateTime.__allocating_init(occurringIn:) // init 
	0x15bbc0  func <stripped> // method 
	0x15bd00  func <stripped> // getter 
	0x15cbf0  func <stripped> // getter 
	0x15c4b0  class func DateTime.__allocating_init(from:) // init 
	0x15c8d0  func <stripped> // method 
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
	let dkEventUUID : ý¸ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0x1d100  _block_destroy_helper.18
WARNING: couldn't find address 0x1d0ec0005bf78 (0xec0005bf78) in binary!
	0x38000000c  @objc SaveInteraction.(null) <stripped>
WARNING: couldn't find address 0x1d0dc0005bfe8 (0xdc0005bfe8) in binary!
	0x1d0c8  @objc SaveInteraction.(null) <stripped>

	// Swift methods
	0x15f610  class func SaveInteraction.__allocating_init(interaction:dkEventUUID:) // init 
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
	let oldestDate : ]è // +0x0 (0x0)
	var scrubbedCount : Int // +0x77735f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d0dc0005bfe8 (0xdc0005bfe8) in binary!
	0x1d0c8  @objc ScrubDeletedRecords.(null) <stripped>
WARNING: couldn't find address 0x1d0bc0005bf48 (0xbc0005bf48) in binary!
	0x28000000c  @objc ScrubDeletedRecords.(null) <stripped>
WARNING: couldn't find address 0x1d0a40005bf38 (0xa40005bf38) in binary!
	0x1d0a0  @objc ScrubDeletedRecords.(null) <stripped>

	// Swift methods
	0x165f80  func <stripped> // method 
 }

 class SiriInference.ProcessUnstitchedIntents : XPCActivityOperation {

	// Properties
	var stitchingSucceeded : Int
	var stitchingSkipped : Int
	var stitchingFailed : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d0a40005bf38 (0xa40005bf38) in binary!
	0x1d0a0  @objc ProcessUnstitchedIntents.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x704fffdb928  @objc ProcessUnstitchedIntents.(null) <stripped>
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
	0x16dc00  func <stripped> // method 
	0x16e7d0  func <stripped> // method 
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
	var language : ñâ // +0x45545f5f (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var regionFormat : ñâ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var regionAwareLanguage : ñâ // +0x1da530 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timeZone : Kä // +0x66bc (0x0)
	var hemisphere : Hemisphere // +0x1da530 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var calendar : %ä // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var date : ]è // +0x0 (0x0)

	// Swift methods
	0x1726a0  class func DateTimeResolutionContext.__allocating_init(with:regionFormat:regionAwareLanguage:timeZone:hemisphere:calendar:date:) // init 
	0x172bd0  class func DateTimeResolutionContext.__allocating_init(from:) // init 
	0x1732c0  func <stripped> // method 
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
	let id : ¡é // +0x0
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
	var versiondate : ]è
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
	var completionKVObservation : ý¢

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d08c0005bf98 (0x8c0005bf98) in binary!
	0x1d078  @objc XPCActivityOperation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x55cfffeb808  @objc XPCActivityOperation.(null) <stripped>

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
	0x1830b0  class func DateTime.RecurrencePattern.__allocating_init(withRecurrencePeriod:) // init 
	0x183210  class func DateTime.RecurrencePattern.__allocating_init(withRecurrenceDateTimeRange:recurrencePeriod:totalNumberOfOccurrences:recurrenceDateTimes:fromDateTime:toDateTime:) // init 
	0x1832b0  func <stripped> // method 
	0x183420  func <stripped> // getter 
	0x184020  func <stripped> // getter 
	0x183890  class func DateTime.RecurrencePattern.__allocating_init(from:) // init 
	0x183cf0  func <stripped> // method 
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
	0x1876f0  func <stripped> // method 
	0x188610  func <stripped> // method 
 }

 class SiriInference.ContactRankerInput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var inputs : MLMultiArray

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d06c0005c578 (0x6c0005c578) in binary!
	0x29000  @objc ContactRankerInput.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x53cfffeba78  @objc ContactRankerInput.(null) <stripped>

	// Swift methods
 }

 class SiriInference.ContactRankerOutput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let provider : MLFeatureProvider
	var $__lazy_storage_$_outputScore : MLMultiArray?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1d04c0005c558 (0x4c0005c558) in binary!
	0x28fe0  @objc ContactRankerOutput.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x1533a4d4152  @objc ContactRankerOutput.(null) <stripped>

	// Swift methods
	0x192ae0  func <stripped> // getter 
 }

 class SiriInference.ContactRanker : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let model : MLModel

	// Swift methods
	0x192d80  func <stripped> // method 
 }
