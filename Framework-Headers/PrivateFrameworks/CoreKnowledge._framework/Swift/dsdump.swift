 protocol CoreKnowledge.Serializable // 2 requirements
 {
	// getter
	// class method
 }
 protocol CoreKnowledge.CKAsynchronousBackingStore // 14 requirements
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
 }
 protocol CoreKnowledge.CKSynchronousBackingStore // 13 requirements
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
 }
 protocol CoreKnowledge.CKBackingStore // 12 requirements
 {
	// class base protocol
	// class base protocol
	// getter
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
 protocol CoreKnowledge.CKDefaultedAsynchronousBackingStore // 1 requirements
 {
	// class base protocol
 }
 protocol CoreKnowledge.CKDefaultedSynchronousBackingStore // 1 requirements
 {
	// class base protocol
 }
 protocol CoreKnowledge.Memorable // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol CoreKnowledge.MemorableIntent // 1 requirements
 {
	// method
 }
 protocol CoreKnowledge.SiriKitIntent // 3 requirements
 {
	// class base protocol
	// getter
	// getter
 }
 protocol CoreKnowledge.USOType // 2 requirements
 {
	// class base protocol
	// class base protocol
 }
 protocol CoreKnowledge.CKExecutableClosure // 2 requirements
 {
	// getter
	// method
 }
 protocol CoreKnowledge.Binding // 0 requirements
 {
 }
 protocol CoreKnowledge.Number // 1 requirements
 {
	// class base protocol
 }
 protocol CoreKnowledge.Value // 6 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// class getter
	// class method
	// getter
 }
 protocol CoreKnowledge.Initiable // 1 requirements
 {
	// class init
 }
 protocol CoreKnowledge.FailableIterator // 2 requirements
 {
	// class base protocol
	// method
 }

 enum __C.INIntentHandlingStatus { }

 enum __C.INPersonHandleType { }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 class CoreKnowledge.CKAppInteractionsContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId : [String : [String : Int]] // +0x8 (0x8)
	var numberOfDiscardedDonationsByIntentTypeAndBundleId : [String : [String : Double]] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6b80  @objc CKAppInteractionsContext.init <stripped>
	0x6fd0  @objc CKAppInteractionsContext.encodeWithCoder: <stripped>
	0x7510  @objc CKAppInteractionsContext.initWithCoder: <stripped>
	0x7610  @objc CKAppInteractionsContext.copyWithZone: <stripped>
	0x7b00  @objc CKAppInteractionsContext.updateDiscardedDonations:forIntentType:andBundleId: <stripped>
	0x7c10  @objc CKAppInteractionsContext..cxx_destruct <stripped>

	// Swift methods
	0x6890  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x68b0  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.setter // setter 
	0x68d0  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6910  func CKAppInteractionsContext.outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x6970  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.getter // getter 
	0x69d0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.setter // setter 
	0x6a30  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6c60  class func CKAppInteractionsContext.__allocating_init(_:) // init 
	0x6dd0  func CKAppInteractionsContext.encode(with:) // method 
	0x7020  class func CKAppInteractionsContext.__allocating_init(coder:) // init 
	0x7570  func CKAppInteractionsContext.copy(with:) // method 
	0x7650  func CKAppInteractionsContext.incrementNumberOfOutOfAppLaunchBoundaryDonations(forBundleId:intent:) // method 
	0x7af0  func CKAppInteractionsContext.updateDiscardedDonations(_:forIntentType:andBundleId:) // method 
 }

 class CoreKnowledge.CKKnowledgeStoreUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xc350  @objc CKKnowledgeStoreUtils.init <stripped>
 }

 class CoreKnowledge.CKUserDefaultsBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var kv : NSUserDefaults // +0x10 (0x8)

	// Swift methods
	0xc7b0  func CKUserDefaultsBackingStore.name.getter // getter 
	0xc7d0  func CKUserDefaultsBackingStore.name.setter // setter 
	0xc7e0  func CKUserDefaultsBackingStore.name.modify // modifyCoroutine 
	0xc820  class func CKUserDefaultsBackingStore.__allocating_init() // init 
	0xcb60  func CKUserDefaultsBackingStore.synchronize() // method 
	0xcb80  func CKUserDefaultsBackingStore.keys() // method 
	0xcda0  func CKUserDefaultsBackingStore.keys(matching:) // method 
	0xd0c0  func CKUserDefaultsBackingStore._value(forKey:) // method 
	0xd190  func CKUserDefaultsBackingStore.values() // method 
	0xd220  func CKUserDefaultsBackingStore.values(forKeys:) // method 
	0xd4f0  func CKUserDefaultsBackingStore.values(forKeysMatching:) // method 
	0xdad0  func CKUserDefaultsBackingStore.dictionaryRepresentation() // method 
	0xdb40  func CKUserDefaultsBackingStore.dictionaryRepresentation(forKeysMatching:) // method 
	0xe0c0  func CKUserDefaultsBackingStore.triplesComponents(matching:) // method 
	0xe200  func CKUserDefaultsBackingStore.verify(path:completionHandler:) // method 
	0xe360  func CKUserDefaultsBackingStore.setValue(_:forKey:completionHandler:) // method 
	0xe370  func CKUserDefaultsBackingStore.writeBatch() // method 
	0x11180  func CKUserDefaultsBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xe420  func CKUserDefaultsBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xe580  func CKUserDefaultsBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0xe6e0  func CKUserDefaultsBackingStore.removeValue(forKey:) // method 
	0xe780  func CKUserDefaultsBackingStore.removeValues(forKeys:) // method 
	0xe880  func CKUserDefaultsBackingStore.removeValues(matching:) // method 
	0xeaf0  func CKUserDefaultsBackingStore.removeAllValues() // method 
	0xec90  func CKUserDefaultsBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0xedf0  func CKUserDefaultsBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0xef50  func CKUserDefaultsBackingStore.dropLinks(between:and:completionHandler:) // method 
	0xf0b0  func CKUserDefaultsBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.INInteractionEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interaction : INInteraction

	// Swift methods
	0x11190  class func INInteractionEncoder.__allocating_init(_:) // init 
	0x11210  func INInteractionEncoder.base64() // method 
 }

 class CoreKnowledge.INInteractionDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x11460  class func INInteractionDecoder.__allocating_init() // init 
 }

 class CoreKnowledge.CKPermanentEventStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let knowledgeStore : CKKnowledgeStore

	// ObjC -> Swift bridged methods
	0xacd80  @objc CKPermanentEventStore.backingStore <stripped>
	0xad1b0  @objc CKPermanentEventStore.historicEventsAndReturnError: <stripped>
	0xad9e0  @objc CKPermanentEventStore.historicEventsWithCompletionHandler: <stripped>
	0xade80  @objc CKPermanentEventStore.setFirstSeen:forEventWithIdentifier:completionHandler: <stripped>
	0xae560  @objc CKPermanentEventStore.setLastSeen:forEventWithIdentifier:completionHandler: <stripped>
	0xaead0  @objc CKPermanentEventStore.setFrequency:forEventWithIdentifier:completionHandler: <stripped>
	0xaefa0  @objc CKPermanentEventStore.setLastDuration:forEventWithIdentifier:completionHandler: <stripped>
	0xaf5a0  @objc CKPermanentEventStore.setTotalDuration:forEventWithIdentifier:completionHandler: <stripped>
	0xaf760  @objc CKPermanentEventStore.deleteEventWithIdentifier:error: <stripped>
	0xaf840  @objc CKPermanentEventStore.deleteEventWithIdentifier:completionHandler: <stripped>
	0x5c7d0  @objc CKPermanentEventStore.historicEventWithIdentifier:completionHandler: <stripped>
	0x5d570  @objc CKPermanentEventStore.historicEventsWithSourceBundleIdentifier:andIntent:completionHandler: <stripped>
	0x48150  @objc CKPermanentEventStore.recordEvent:completionHandler: <stripped>
	0x484f0  @objc CKPermanentEventStore.recordEvent:error: <stripped>
	0x48630  @objc CKPermanentEventStore.recordInteraction:error: <stripped>
	0x48850  @objc CKPermanentEventStore.recordInteraction:completionHandler: <stripped>
	0x48d40  @objc CKPermanentEventStore.recordInteraction:bundleId:error: <stripped>
	0x49990  @objc CKPermanentEventStore.recordInteraction:bundleId:completionHandler: <stripped>
	0x49e00  @objc CKPermanentEventStore.deleteInteractionsWithBundleId:error: <stripped>
	0x49ee0  @objc CKPermanentEventStore.deleteInteractionsWithBundleId:completionHandler: <stripped>
	0x115d0  @objc CKPermanentEventStore.initWithKnowledgeStore: <stripped>
	0x11810  @objc CKPermanentEventStore.init <stripped>
	0x11890  @objc CKPermanentEventStore..cxx_destruct <stripped>

	// Swift methods
	0x11500  class func CKPermanentEventStore.__allocating_init(knowledgeStore:) // init 
 }

 class CoreKnowledge.CKInMemoryBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let inMemoryStoreHandler : CKPersistentStoreHandler // +0x10 (0x8)

	// Swift methods
	0x12370  func CKInMemoryBackingStore.name.getter // getter 
	0x12390  func CKInMemoryBackingStore.name.setter // setter 
	0x123a0  func CKInMemoryBackingStore.name.modify // modifyCoroutine 
	0x123f0  class func CKInMemoryBackingStore.__allocating_init() // init 
	0x125b0  func CKInMemoryBackingStore.keys(completionHandler:) // method 
	0x126a0  func CKInMemoryBackingStore.keys(matching:completionHandler:) // method 
	0x12780  func CKInMemoryBackingStore.value(forKey:completionHandler:) // method 
	0x129c0  func CKInMemoryBackingStore.values(completionHandler:) // method 
	0x12ab0  func CKInMemoryBackingStore.values(forKeys:completionHandler:) // method 
	0x12bc0  func CKInMemoryBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x12ca0  func CKInMemoryBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x12d90  func CKInMemoryBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x12e70  func CKInMemoryBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x12f90  func CKInMemoryBackingStore.verify(path:completionHandler:) // method 
	0x13050  func CKInMemoryBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x13120  func CKInMemoryBackingStore.writeBatch() // method 
	0x131d0  func CKInMemoryBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x13290  func CKInMemoryBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x13510  func CKInMemoryBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x13790  func CKInMemoryBackingStore.removeValue(forKey:completionHandler:) // method 
	0x13950  func CKInMemoryBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x13b10  func CKInMemoryBackingStore.removeValues(matching:completionHandler:) // method 
	0x13ce0  func CKInMemoryBackingStore.removeAllValues(completionHandler:) // method 
	0x13d90  func CKInMemoryBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x13e40  func CKInMemoryBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x13ef0  func CKInMemoryBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x13fa0  func CKInMemoryBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 enum CoreKnowledge.SQLTableType {

	// Properties
	case IntegerValue  
	case DoubleValue  
	case StringValue  
	case AnyValue  
 }

 class CoreKnowledge.CKPersistentStoreHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var connection : Connection? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x1d570  @objc CKPersistentStoreHandler.init <stripped>
	0x1dfc0  @objc CKPersistentStoreHandler.initWithName: <stripped>
	0x1e7c0  @objc CKPersistentStoreHandler.keysAndReturnError: <stripped>
	0x1f1d0  @objc CKPersistentStoreHandler.keysMatching:error: <stripped>
	0x1fab0  @objc CKPersistentStoreHandler.valuesAndReturnError: <stripped>
	0x20500  @objc CKPersistentStoreHandler.valuesForKeysMatching:error: <stripped>
	0x20f00  @objc CKPersistentStoreHandler.keysAndValuesAndReturnError: <stripped>
	0x21a90  @objc CKPersistentStoreHandler.keysAndValuesForKeysMatching:error: <stripped>
	0x22570  @objc CKPersistentStoreHandler._valuesForKeys:error: <stripped>
	0x23a10  @objc CKPersistentStoreHandler.saveKeysAndValues:error: <stripped>
	0x24140  @objc CKPersistentStoreHandler.removeValueForKey:error: <stripped>
	0x24ba0  @objc CKPersistentStoreHandler.removeValuesForKeys:error: <stripped>
	0x25690  @objc CKPersistentStoreHandler.removeValuesMatching:error: <stripped>
	0x25f50  @objc CKPersistentStoreHandler.removeAllValuesAndReturnError: <stripped>
	0x26cf0  @objc CKPersistentStoreHandler.tripleComponentsMatching:error: <stripped>
	0x26df0  @objc CKPersistentStoreHandler.setWeightForLinkWithLabel:between:and:toValue:error: <stripped>
	0x26f70  @objc CKPersistentStoreHandler.increaseWeightForLinkWithLabel:between:and: <stripped>
	0x26fa0  @objc CKPersistentStoreHandler.decreaseWeightForLinkWithLabel:between:and: <stripped>
	0x27880  @objc CKPersistentStoreHandler.dropLinkWithLabel:between:and:error: <stripped>
	0x27a00  @objc CKPersistentStoreHandler.dropLinksWithLabel:from:error: <stripped>
	0x28000  @objc CKPersistentStoreHandler.dropLinksBetween:and:error: <stripped>
	0x28760  @objc CKPersistentStoreHandler..cxx_destruct <stripped>

	// Swift methods
	0x1d2f0  func CKPersistentStoreHandler.connection.getter // getter 
	0x1d330  func CKPersistentStoreHandler.connection.setter // setter 
	0x1d380  func CKPersistentStoreHandler.connection.modify // modifyCoroutine 
	0x1d3d0  class func static CKPersistentStoreHandler.inMemoryHandler() // method 
	0x1d5f0  class func CKPersistentStoreHandler.__allocating_init(name:) // init 
	0x1dff0  func CKPersistentStoreHandler.keys() // method 
	0x1e860  func CKPersistentStoreHandler.keys(matching:) // method 
	0x1f2a0  func CKPersistentStoreHandler.values() // method 
	0x1fb50  func CKPersistentStoreHandler.values(forKeysMatching:) // method 
	0x205d0  func CKPersistentStoreHandler.keysAndValues() // method 
	0x20fb0  func CKPersistentStoreHandler.keysAndValues(forKeysMatching:) // method 
	0x21b70  func CKPersistentStoreHandler.selectQuery(project:whereField:isIn:) // method 
	0x21b80  func CKPersistentStoreHandler._values(forKeys:) // method 
	0x22650  func CKPersistentStoreHandler.save(keysAndValues:) // method 
	0x23af0  func CKPersistentStoreHandler.removeValue(forKey:) // method 
	0x24210  func CKPersistentStoreHandler._removeValues(forKeys:) // method 
	0x24a50  func CKPersistentStoreHandler.removeValues(forKeys:) // method 
	0x24c70  func CKPersistentStoreHandler._removeValues(matching:) // method 
	0x25520  func CKPersistentStoreHandler.removeValues(matching:) // method 
	0x25730  func CKPersistentStoreHandler.removeAllValues() // method 
	0x26070  func CKPersistentStoreHandler.tripleComponents(matching:) // method 
	0x26dc0  func CKPersistentStoreHandler.setWeight(forLinkWithLabel:between:and:toValue:) // method 
	0x26f50  func CKPersistentStoreHandler.increaseWeight(forLinkWithLabel:between:and:) // method 
	0x26f90  func CKPersistentStoreHandler.decreaseWeight(forLinkWithLabel:between:and:) // method 
	0x270b0  func CKPersistentStoreHandler.decreaseWeights(between:and:) // method 
	0x27860  func CKPersistentStoreHandler.dropLink(withLabel:between:and:) // method 
	0x279e0  func CKPersistentStoreHandler.dropLinks(withLabel:from:) // method 
	0x27b10  func CKPersistentStoreHandler.dropLinks(between:and:) // method 
	0x28120  func CKPersistentStoreHandler.deserializeValue(_:) // method 
 }

 class CoreKnowledge.CKSiriRemembers : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x31710  @objc CKSiriRemembers.init <stripped>
	0x317b0  @objc CKSiriRemembers..cxx_destruct <stripped>

	// Swift methods
	0x30d10  class func static CKSiriRemembers.saveInteraction(interaction:) // method 
	0x30d90  class func static CKSiriRemembers.findAppMatches(forIntent:candidateBundleIDs:completionHandler:) // method 
	0x30ed0  class func static CKSiriRemembers.findAppMatches(forJSONIntent:candidateBundleIDs:completionHandler:) // method 
	0x30ff0  class func static CKSiriRemembers.findRelativeAppUsageProbabilities(bundleIDs:days:completionHandler:) // method 
 }

 class CoreKnowledge.CKSQLBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var name : String // +0x10 (0x10)
	let connection : NSXPCConnection // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x3e010  @objc CKSQLBackingStore.initWithName: <stripped>

	// Swift methods
	0x3dd90  func CKSQLBackingStore.name.getter // getter 
	0x3ddd0  func CKSQLBackingStore.name.setter // setter 
	0x3de10  func CKSQLBackingStore.name.modify // modifyCoroutine 
	0x3de60  class func CKSQLBackingStore.__allocating_init(name:) // init 
	0x3e0c0  class func static CKSQLBackingStore.mainInstance() // method 
	0x3e120  func CKSQLBackingStore.daemon(errorHandler:) // method 
	0x3eb90  func CKSQLBackingStore.keys(completionHandler:) // method 
	0x3ee10  func CKSQLBackingStore.keys(matching:completionHandler:) // method 
	0x3f020  func CKSQLBackingStore.value(forKey:completionHandler:) // method 
	0x3f2e0  func CKSQLBackingStore.values(completionHandler:) // method 
	0x3f590  func CKSQLBackingStore.values(forKeys:completionHandler:) // method 
	0x3fa00  func CKSQLBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x3fc10  func CKSQLBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x3fed0  func CKSQLBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x400e0  func CKSQLBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x40390  func CKSQLBackingStore.verify(path:completionHandler:) // method 
	0x404f0  func CKSQLBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x408e0  func CKSQLBackingStore.writeBatch() // method 
	0x40960  func CKSQLBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x40c00  func CKSQLBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x40f40  func CKSQLBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x41220  func CKSQLBackingStore.removeValue(forKey:completionHandler:) // method 
	0x41440  func CKSQLBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x41660  func CKSQLBackingStore.removeValues(matching:completionHandler:) // method 
	0x41850  func CKSQLBackingStore.removeAllValues(completionHandler:) // method 
	0x41a30  func CKSQLBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x41cd0  func CKSQLBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x41f60  func CKSQLBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x421d0  func CKSQLBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 struct CoreKnowledge.MemorableEntity {

	// Properties
	let paramName : String // +0x0
	let entityType : String // +0x10
	let siriRemembersID : String? // +0x20
	let siriRemembersTokens : [String] // +0x30
 }

 struct CoreKnowledge.MemorableEntityIterator {

	// Properties
	var inner : [String : Any].Iterator // +0x0
	var memoized : Memorable // +0x28
 }

 class CoreKnowledge.SRInternalDatabaseManager : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x45be0  @objc SRInternalDatabaseManager.init <stripped>
 }

 enum CoreKnowledge.SRDatabaseManager { }

 class CoreKnowledge.Connection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _handle : OpaquePointer? // +0x10 (0x8)
	var busyTimeout : Double // +0x18 (0x8)
	var busyHandler : @convention(block) (_:)? // +0x20 (0x8)
	var trace : @convention(block) (_:)? // +0x28 (0x8)
	var updateHook : @convention(block) (_:_:_:_:)? // +0x30 (0x8)
	var commitHook : @convention(block) ()? // +0x38 (0x8)
	var rollbackHook : @convention(block) ()? // +0x40 (0x8)
	var functions : [String : [Int : @convention(block) (_:_:_:)]] // +0x48 (0x8)
	var collations : [String : @convention(block) (_:_:)] // +0x50 (0x8)
	var queue : OS_dispatch_queue // +0x58 (0x8)
	var $__lazy_storage_$_queueContext : Int? // +0x60 (0x9)

	// Swift methods
	0x4b400  class func Connection.__allocating_init(_:readonly:) // init 
 }

 enum CoreKnowledge.Location {

	// Properties
	case uri : String
	case inMemory  
	case temporary  
 }

 enum CoreKnowledge.Operation {

	// Properties
	case insert  
	case update  
	case delete  
 }

 enum CoreKnowledge.TransactionMode {

	// Properties
	case deferred  
	case immediate  
	case exclusive  
 }

 enum CoreKnowledge.Result {

	// Properties
	case error : (message: String, code: Int32, statement: Statement?)
 }

 enum CoreKnowledge.CKHexastore {

	// Properties
	case SPO  
	case SOP  
	case OPS  
	case OSP  
	case PSO  
	case POS  
 }

 struct CoreKnowledge.Blob {

	// Properties
	let bytes : [UInt8] // +0x0
 }

 class CoreKnowledge.CKCloudKitBackingStore : CKSQLBackingStore {
	// ObjC -> Swift bridged methods
	0x5f900  @objc CKCloudKitBackingStore.initWithName: <stripped>

	// Swift methods
	0x5dde0  func CKCloudKitBackingStore.triplesComponents(matching:) // method 
 }

 class CoreKnowledge.CKTriple : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : (String, String, String, Int) // +0x8 (0x38)

	// ObjC -> Swift bridged methods
	0x5fe10  @objc CKTriple.subject <stripped>
	0x5fea0  @objc CKTriple.predicate <stripped>
	0x5ff70  @objc CKTriple.object <stripped>
	0x60040  @objc CKTriple.weight <stripped>
	0x60080  @objc CKTriple.description <stripped>
	0x60470  @objc CKTriple.hash <stripped>
	0x60f10  @objc CKTriple.isEqual: <stripped>
	0x611c0  @objc CKTriple.initWithSubject:predicate:object:weight: <stripped>
	0x615a0  @objc CKTriple.encodeWithCoder: <stripped>
	0x61b00  @objc CKTriple.initWithCoder: <stripped>
	0x61ed0  @objc CKTriple.init <stripped>
	0x61f50  @objc CKTriple..cxx_destruct <stripped>

	// Swift methods
	0x5fe70  func CKTriple.subject.getter // getter 
	0x5ff20  func CKTriple.predicate.getter // getter 
	0x5fff0  func CKTriple.object.getter // getter 
	0x60060  func CKTriple.weight.getter // getter 
	0x60fb0  class func CKTriple.__allocating_init(tuple:) // init 
	0x5fcb0  class func CKTriple.__allocating_init(subject:predicate:object:weight:) // init 
	0x61320  func CKTriple.encode(with:) // method 
	0x615f0  class func CKTriple.__allocating_init(coder:) // init 
	0x61b60  func CKTriple.dictionary() // method 
 }

 struct CoreKnowledge.SendMessage: SiriKitIntent {

	// Properties
	let parameters : Parameters // +0x0
 }

 struct CoreKnowledge.Parameters {

	// Properties
	let recipients : PersonContact // +0x0
	let speakableGroupName : SpeakableString // +0x8
 }

 struct CoreKnowledge.PersonContact: USOType {

	// Properties
	let person : Person // +0x0
 }

 struct CoreKnowledge.Person: USOType {

	// Properties
	let name : PersonName // +0x0
	let identifyingRelationship : PersonRelationship // +0x60
	let contactAddress : ContactAddress // +0x70
 }

 struct CoreKnowledge.PersonName {

	// Properties
	let fullName : String? // +0x0
	let namePrefix : Name // +0x10
	let givenName : String? // +0x20
	let middleName : String? // +0x30
	let familyName : String? // +0x40
	let namePostfix : Name // +0x50
 }

 struct CoreKnowledge.Name {

	// Properties
	let textValue : String // +0x0
 }

 struct CoreKnowledge.PersonRelationship {

	// Properties
	let relationshipType : Name // +0x0
 }

 struct CoreKnowledge.ContactAddress {

	// Properties
	let _type : String? // +0x0
	let value : String? // +0x10
	let label : String? // +0x20
 }

 struct CoreKnowledge.SpeakableString {

	// Properties
	let spokenPhrase : String // +0x0
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case spokenPhrase  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case relationshipType  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case textValue  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case fullName  
	case namePrefix  
	case givenName  
	case middleName  
	case familyName  
	case namePostfix  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case name  
	case identifyingRelationship  
	case contactAddress  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case person  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case parameters  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case recipients  
	case speakableGroupName  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case _type  
	case value  
	case label  
 }

 struct CoreKnowledge.CKOntology { }

 class CoreKnowledge.CoreKnowledgeXPCUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x72be0  @objc CoreKnowledgeXPCUtils.init <stripped>
 }

 enum CoreKnowledge.JSONLDParseError {

	// Properties
	case unexpectedFormat  
	case resourceNotAvailable  
 }

 class CoreKnowledge.CKJSONLDGraph : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let _entities : [CKEntity] // +0x8 (0x8)
	let queue : OS_dispatch_queue // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x76570  @objc CKJSONLDGraph.initWithEntities: <stripped>
	0x765c0  @objc CKJSONLDGraph.entities <stripped>
	0x77300  @objc CKJSONLDGraph.linkedDataWithCompletionHandler: <stripped>
	0x77470  @objc CKJSONLDGraph.init <stripped>
	0x774f0  @objc CKJSONLDGraph..cxx_destruct <stripped>

	// Swift methods
	0x764e0  class func CKJSONLDGraph.__allocating_init(withEntities:) // init 
	0x76620  func CKJSONLDGraph.entities.getter // getter 
	0x768d0  func CKJSONLDGraph.linkedData(completionHandler:) // method 
 }

 class CoreKnowledge.CKEphemeralEventSequence : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x6f460  @objc CKEphemeralEventSequence.loadFromKnowledgeStreamNamed:between:and:completionHandler: <stripped>
	0x6f870  @objc CKEphemeralEventSequence.removeAllEventsSavedInKnowledgeStreamNamed:completionHandler: <stripped>
	0x6fc60  @objc CKEphemeralEventSequence.appendEvent: <stripped>
	0x707c0  @objc CKEphemeralEventSequence.writeEventsToKnowledgeStreamNamed:completionHandler: <stripped>
	0x33140  @objc CKEphemeralEventSequence.eventsBetween:and: <stripped>
	0x332b0  @objc CKEphemeralEventSequence.eventsWithIdentifier: <stripped>
	0x33a70  @objc CKEphemeralEventSequence.first <stripped>
	0x33ac0  @objc CKEphemeralEventSequence.last <stripped>
	0x846d0  @objc CKEphemeralEventSequence.init <stripped>
	0x847d0  @objc CKEphemeralEventSequence..cxx_destruct <stripped>

	// Swift methods
	0x846f0  func CKEphemeralEventSequence.historyStartEvent.getter // getter 
 }

 class CoreKnowledge.SRJobScheduler : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x873b0  @objc SRJobScheduler.init <stripped>
	0x87450  @objc SRJobScheduler..cxx_destruct <stripped>

	// Swift methods
	0x86bc0  class func static SRJobScheduler.scheduleAllJobs() // method 
	0x86be0  func SRJobScheduler.add(job:) // method 
 }

 struct CoreKnowledge.ScheduledJob {

	// Properties
	let id : String // +0x0
	let repeatInterval : JobRepeatInterval // +0x10
	let executionCriteria : OS_xpc_object // +0x18
	let handler : () // +0x20
 }

 enum CoreKnowledge.JobRepeatInterval {

	// Properties
	case never  
	case daily  
 }

 enum CoreKnowledge.ConditionType {

	// Properties
	case simple : Matcher
	case composite : CKGenericCondition
	case none  
 }

 enum CoreKnowledge.CKMatchType { }

 class CoreKnowledge.Matcher : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let comparison : CKMatchType
	let value : String
	var $__lazy_storage_$_sql : String?

	// Swift methods
	0x891d0  class func Matcher.__allocating_init(_:value:) // init 
	0x89270  func Matcher.evaluate(on:) // method 
	0x89810  func Matcher.sql.getter // getter 
	0x89b00  func Matcher.sql.setter // setter 
	0x89b20  func Matcher.sql.modify // modifyCoroutine 
 }

 class CoreKnowledge.CKGenericCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : ConditionType
	var negated : Bool
	var $__lazy_storage_$_sql : String?

	// ObjC -> Swift bridged methods
	0x89c80  @objc CKGenericCondition.predicate <stripped>
	0x89f20  @objc CKGenericCondition.description <stripped>
	0x8a1c0  @objc CKGenericCondition.initWithValue: <stripped>
	0x8a340  @objc CKGenericCondition.initWithMatchType:value:negated: <stripped>
	0x8a5e0  @objc CKGenericCondition.and: <stripped>
	0x8a700  @objc CKGenericCondition.or: <stripped>
	0x8b3c0  @objc CKGenericCondition.evaluateOn: <stripped>
	0x8b540  @objc CKGenericCondition.copyWithZone: <stripped>
	0x8b9e0  @objc CKGenericCondition.encodeWithCoder: <stripped>
	0x8c150  @objc CKGenericCondition.initWithCoder: <stripped>
	0x8c1b0  @objc CKGenericCondition.init <stripped>
	0x8c200  @objc CKGenericCondition..cxx_destruct <stripped>

	// Swift methods
	0x89d80  func CKGenericCondition.predicate.getter // getter 
	0x8a090  class func CKGenericCondition.__allocating_init(value:) // init 
	0x889b0  class func CKGenericCondition.__allocating_init(_:value:negated:) // init 
	0x8a4e0  func CKGenericCondition.and(_:) // method 
	0x8a600  func CKGenericCondition.or(_:) // method 
	0x8a830  func CKGenericCondition.sql.getter // getter 
	0x8afd0  func CKGenericCondition.sql.setter // setter 
	0x8b000  func CKGenericCondition.sql.modify // modifyCoroutine 
	0x8b130  func CKGenericCondition.evaluate(on:) // method 
	0x8b460  func CKGenericCondition.copy(with:) // method 
	0x8b6a0  func CKGenericCondition.encode(with:) // method 
	0x8ba30  class func CKGenericCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKTripleCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var rawCondition : CKGenericCondition

	// ObjC -> Swift bridged methods
	0x8c3c0  @objc CKTripleCondition.description <stripped>
	0x8c8e0  @objc CKTripleCondition.initWithValue: <stripped>
	0x8fa40  @objc CKTripleCondition.initWithSubject:predicate:object: <stripped>
	0x8fc20  @objc CKTripleCondition.and: <stripped>
	0x8fe70  @objc CKTripleCondition.or: <stripped>
	0x90060  @objc CKTripleCondition.evaluateOn: <stripped>
	0x90210  @objc CKTripleCondition.copyWithZone: <stripped>
	0x904d0  @objc CKTripleCondition.encodeWithCoder: <stripped>
	0x90870  @objc CKTripleCondition.initWithCoder: <stripped>
	0x908f0  @objc CKTripleCondition.init <stripped>
	0x90980  @objc CKTripleCondition..cxx_destruct <stripped>

	// Swift methods
	0x8c2e0  func CKTripleCondition.rawCondition.getter // getter 
	0x8c320  func CKTripleCondition.rawCondition.setter // setter 
	0x8c370  func CKTripleCondition.rawCondition.modify // modifyCoroutine 
	0x8c510  class func CKTripleCondition.__allocating_init(_:) // init 
	0x8fae0  func CKTripleCondition.and(_:) // method 
	0x8fd30  func CKTripleCondition.or(_:) // method 
	0x8ff80  func CKTripleCondition.evaluate(on:) // method 
	0x90130  func CKTripleCondition.copy(with:) // method 
	0x90430  func CKTripleCondition.encode(with:) // method 
	0x90570  class func CKTripleCondition.__allocating_init(coder:) // init 
 }

 struct CoreKnowledge.LegacySendMessageIntent {

	// Properties
	let typeName : String // +0x0
	let parameters : LegacySendMessageIntentParameters // +0x10
 }

 struct CoreKnowledge.LegacySendMessageIntentParameters {

	// Properties
	let recipients : LegacyPerson // +0x0
	let speakableGroupName : SpeakableString? // +0x8
 }

 struct CoreKnowledge.LegacyPerson {

	// Properties
	let displayName : String? // +0x0
	let nameComponents : LegacyNameComponents // +0x10
	let relationship : String? // +0x70
	let personHandle : LegacyPersonHandle // +0x80
 }

 struct CoreKnowledge.LegacyNameComponents {

	// Properties
	let namePrefix : String? // +0x0
	let givenName : String? // +0x10
	let middleName : String? // +0x20
	let familyName : String? // +0x30
	let nameSuffix : String? // +0x40
	let nickname : String? // +0x50
 }

 struct CoreKnowledge.LegacyPersonHandle {

	// Properties
	let type : String? // +0x0
	let value : String? // +0x10
	let label : String? // +0x20
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case namePrefix  
	case givenName  
	case middleName  
	case familyName  
	case nameSuffix  
	case nickname  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case displayName  
	case nameComponents  
	case relationship  
	case personHandle  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case typeName  
	case parameters  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case recipients  
	case speakableGroupName  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case type  
	case value  
	case label  
 }

 class CoreKnowledge.SRIngestor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let db : Connection // +0x8 (0x8)
	let date : Date // +0x0 (0x0)
	let intent : INIntent // +0x0 (0x8)
	let intentUUID : String // +0x0 (0x10)
	let dkEventUUID : UUID? // +0x0 (0x0)
	let bundleID : String? // +0x0 (0x10)
	let inintentHandlingStatus : INIntentHandlingStatus? // +0x0 (0x9)
	let engagementSignals : [String : Any]? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x9c660  @objc SRIngestor.init <stripped>
	0x9c6d0  @objc SRIngestor..cxx_destruct <stripped>

	// Swift methods
	0x9a270  func SRIngestor.upsertIntent() // method 
	0x9aef0  func SRIngestor.upsertEntity(_:entity:) // method 
 }

 class CoreKnowledge.CKHistoricEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
	var _firstSeen : Date // +0x0 (0x0)
	var _lastSeen : Date // +0x74735f5f (0x0)
	var _frequency : Int // +0x0 (0x8)
	var _lastDuration : Double // +0x45545f5f (0x8)
	var _totalDuration : Double // +0x0 (0x8)
	var _metadata : [String : Any] // +0x165966 (0x8)

	// ObjC -> Swift bridged methods
	0x9d850  @objc CKHistoricEvent.identifier <stripped>
	0x9e1a0  @objc CKHistoricEvent.firstSeen <stripped>
	0x9e290  @objc CKHistoricEvent.lastSeen <stripped>
	0x9e380  @objc CKHistoricEvent.frequency <stripped>
	0x9e430  @objc CKHistoricEvent.lastDuration <stripped>
	0x9e4e0  @objc CKHistoricEvent.totalDuration <stripped>
	0x9e590  @objc CKHistoricEvent.metadata <stripped>
	0x9ecd0  @objc CKHistoricEvent.encodeWithCoder: <stripped>
	0x9f980  @objc CKHistoricEvent.initWithCoder: <stripped>
	0x9fa70  @objc CKHistoricEvent.init: <stripped>
	0x9fb10  @objc CKHistoricEvent.initFrom:withIdentifier: <stripped>
	0x9fc20  @objc CKHistoricEvent.copyWithZone: <stripped>
	0x9fcb0  @objc CKHistoricEvent.init <stripped>
	0x9fd20  @objc CKHistoricEvent..cxx_destruct <stripped>

	// Swift methods
	0x9d9a0  func CKHistoricEvent._firstSeen.getter // getter 
	0x9d9c0  func CKHistoricEvent._firstSeen.setter // setter 
	0x9d9e0  func CKHistoricEvent._firstSeen.modify // modifyCoroutine 
	0x9db00  func CKHistoricEvent._lastSeen.getter // getter 
	0x9db70  func CKHistoricEvent._lastSeen.setter // setter 
	0x9dbf0  func CKHistoricEvent._lastSeen.modify // modifyCoroutine 
	0x9dcd0  func CKHistoricEvent._frequency.getter // getter 
	0x9dd00  func CKHistoricEvent._frequency.setter // setter 
	0x9dd40  func CKHistoricEvent._frequency.modify // modifyCoroutine 
	0x9de20  func CKHistoricEvent._lastDuration.getter // getter 
	0x9de40  func CKHistoricEvent._lastDuration.setter // setter 
	0x9de60  func CKHistoricEvent._lastDuration.modify // modifyCoroutine 
	0x9df40  func CKHistoricEvent._totalDuration.getter // getter 
	0x9df90  func CKHistoricEvent._totalDuration.setter // setter 
	0x9dff0  func CKHistoricEvent._totalDuration.modify // modifyCoroutine 
	0x9e0d0  func CKHistoricEvent._metadata.getter // getter 
	0x9e110  func CKHistoricEvent._metadata.setter // setter 
	0x9e160  func CKHistoricEvent._metadata.modify // modifyCoroutine 
	0x9e220  func CKHistoricEvent.firstSeen.getter // getter 
	0x9e310  func CKHistoricEvent.lastSeen.getter // getter 
	0x9e3d0  func CKHistoricEvent.frequency.getter // getter 
	0x9e480  func CKHistoricEvent.lastDuration.getter // getter 
	0x9e530  func CKHistoricEvent.totalDuration.getter // getter 
	0x9e610  func CKHistoricEvent.metadata.getter // getter 
	0x9d4b0  class func CKHistoricEvent.__allocating_init(identifier:firstSeen:lastSeen:frequency:lastDuration:totalDuration:metadata:) // init 
	0x9e830  func CKHistoricEvent.encode(with:) // method 
	0x9ed20  class func CKHistoricEvent.__allocating_init(coder:) // init 
	0x9f9e0  class func CKHistoricEvent.__allocating_init(_:) // init 
	0x9fb60  func CKHistoricEvent.copy(with:) // method 
 }

 class CoreKnowledge.DataScrubber : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa1220  @objc DataScrubber.init <stripped>
 }

 class CoreKnowledge.CKClosure : NSObject /usr/lib/libobjc.A.dylib, CKExecutableClosure {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)
	let entity : CKEntity // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xa28c0  @objc CKClosure.initWithCoder: <stripped>
	0xa2b30  @objc CKClosure.encodeWithCoder: <stripped>
	0xa2be0  @objc CKClosure.init <stripped>
	0xa2c60  @objc CKClosure..cxx_destruct <stripped>

	// Swift methods
	0xa2100  class func CKClosure.__allocating_init(coder:) // init 
	0xa28f0  func CKClosure.encode(with:) // method 
	0xa2b80  func CKClosure.execute() // method 
 }

 enum CoreKnowledge.CKLogicError {

	// Properties
	case missingRuleBody  
	case unsatisfiableRule  
 }

 class CoreKnowledge.CKLogic : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var body : [(predicate: String?, object: CKEntity)] // +0x8 (0x8)
	var negatedBody : [(predicate: String?, object: CKEntity)] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xa4930  @objc CKLogic.hash <stripped>
	0xa4f30  @objc CKLogic.identifier <stripped>
	0xa5630  @objc CKLogic.andExistsLink:to:error: <stripped>
	0xa5c40  @objc CKLogic.andNotExistsLink:to:error: <stripped>
	0xa5fe0  @objc CKLogic.and: <stripped>
	0xa6090  @objc CKLogic.init <stripped>
	0xa6110  @objc CKLogic..cxx_destruct <stripped>

	// Swift methods
	0xa4700  func CKLogic.body.getter // getter 
	0xa4720  func CKLogic.body.setter // setter 
	0xa4740  func CKLogic.body.modify // modifyCoroutine 
	0xa4820  func CKLogic.negatedBody.getter // getter 
	0xa4880  func CKLogic.negatedBody.setter // setter 
	0xa48e0  func CKLogic.negatedBody.modify // modifyCoroutine 
	0xa4f90  func CKLogic.identifier.getter // getter 
	0xa50c0  class func static CKLogic.ifExistsLink(_:to:) // method 
	0xa50f0  func CKLogic.andExistsLink(_:to:) // method 
	0xa5650  class func static CKLogic.ifNotExistsLink(_:to:) // method 
	0xa5700  func CKLogic.andNotExistsLink(_:to:) // method 
	0xa5d50  func CKLogic.and(_:) // method 
 }

 enum CoreKnowledge.ErrorTracker { }

 struct CoreKnowledge.CKPath {

	// Properties
	var path : [String] // +0x0
	var fromSubject : Bool // +0x8
	var toObject : Bool // +0x9
 }

 class CoreKnowledge.CKDeviceKnowledgeStore : CKKnowledgeStore { }

 class CoreKnowledge.CKEntity : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
	let store : CKKnowledgeStore // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0xb14d0  @objc CKEntity.isEqual: <stripped>
	0xb1570  @objc CKEntity.hash <stripped>
	0xb1740  @objc CKEntity.description <stripped>
	0xb1da0  @objc CKEntity.valueForKey: <stripped>
	0xb1ea0  @objc CKEntity.valueForKey:completionHandler: <stripped>
	0xb2840  @objc CKEntity.valuesForKeys:completionHandler: <stripped>
	0xb2c10  @objc CKEntity.setValue:forKey:completionHandler: <stripped>
	0xb3570  @objc CKEntity.setValuesForKeys:completionHandler: <stripped>
	0xb3680  @objc CKEntity.removeValueForKey:completionHandler: <stripped>
	0xb4750  @objc CKEntity.linkTo:withPredicate:completionHandler: <stripped>
	0xb4c20  @objc CKEntity.linkTo:withPredicate:error: <stripped>
	0xb4e40  @objc CKEntity.unlinkTo:withPredicate:ignoreWeights:completionHandler: <stripped>
	0xb53a0  @objc CKEntity.removeWithCompletionHandler: <stripped>
	0xb9c60  @objc CKEntity.linksTo:matchType:completionHandler: <stripped>
	0xba130  @objc CKEntity.linksTo:matchType:error: <stripped>
	0xba250  @objc CKEntity.init <stripped>
	0xba2d0  @objc CKEntity..cxx_destruct <stripped>

	// Swift methods
	0xb11c0  class func CKEntity.__allocating_init(identifier:knowledgeStore:) // init 
	0xb1e60  func CKEntity.value(forKey:completionHandler:) // method 
	0xb1f80  func CKEntity.values(forKeys:completionHandler:) // method 
	0xb2190  func CKEntity.values(forKeys:completionHandler:) // method 
	0xb28f0  func CKEntity.setValue(_:forKey:completionHandler:) // method 
	0xb2d00  func CKEntity.setValues(forKeys:completionHandler:) // method 
	0xb3640  func CKEntity.removeValue(forKey:completionHandler:) // method 
	0xb4210  func CKEntity.link(to:withPredicate:completionHandler:) // method 
	0xb4810  func CKEntity.link(to:withPredicate:) // method 
	0xb4d10  func CKEntity.unlink(to:withPredicate:ignoreWeights:completionHandler:) // method 
	0xb4f20  func CKEntity.unlink(to:withPredicate:ignoreWeights:) // method 
	0xb5320  func CKEntity.remove(completionHandler:) // method 
	0xb5480  func CKEntity.remove() // method 
	0xb5810  func CKEntity.path(to:withRadius:completionHandler:) // method 
	0xb5da0  func CKEntity.path(to:withRadius:) // method 
	0xb5dc0  func CKEntity.path(to:radius:) // method 
	0xb6a80  func CKEntity.linkedEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xb7090  func CKEntity.linkedEntities(withPredicate:matchType:complement:) // method 
	0xb70a0  func CKEntity.linkedEntities(completionHandler:) // method 
	0xb7ad0  func CKEntity.linkedEntities() // method 
	0xb7ea0  func CKEntity.linkingEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xb84a0  func CKEntity.linkingEntities(withPredicate:matchType:complement:) // method 
	0xb84b0  func CKEntity.linkingEntities(completionHandler:) // method 
	0xb88b0  func CKEntity.linkingEntities() // method 
	0xb92b0  func CKEntity.links(to:matchType:completionHandler:) // method 
	0xb9ce0  func CKEntity.links(to:matchType:) // method 
 }

 class CoreKnowledge.CKTimedDispatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x10 (0x8)
	let semaphore : OS_dispatch_semaphore // +0x18 (0x8)
	var _interruptError : Error? // +0x20 (0x8)
	let _timeout : DispatchTime // +0x67 (0x0)
	var _group : OS_dispatch_group? // +0x45545f5f (0x8)

	// Swift methods
	0xbf310  func CKTimedDispatch._interruptError.getter // getter 
	0xbf340  func CKTimedDispatch._interruptError.setter // setter 
	0xbf380  func CKTimedDispatch._interruptError.modify // modifyCoroutine 
	0xbf480  func CKTimedDispatch._group.getter // getter 
	0xbf4c0  func CKTimedDispatch._group.setter // setter 
	0xbf510  func CKTimedDispatch._group.modify // modifyCoroutine 
	0xbf550  func CKTimedDispatch.group.getter // getter 
	0xbe580  class func CKTimedDispatch.__allocating_init(timeout:) // init 
	0xbf8a0  func CKTimedDispatch.interrupt(_:) // method 
	0xbf920  func CKTimedDispatch.wait() // method 
 }

 enum CoreKnowledge.CKError {

	// Properties
	case databaseException : String
	case fatalError : String
	case unexpectedData : Any?
	case timeout  
	case notSupported  
	case databaseNotReady  
 }

 class CoreKnowledge.CKKnowledgeStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let backingStore : CKBackingStore // +0x8 (0x28)
	let sparqlQueue : OS_dispatch_queue // +0x30 (0x8)
	let location : Location // +0x38 (0x11)
	var delegate : CKKnowledgeStoreDelegate? // +0x50 (0x8)

	// ObjC -> Swift bridged methods
	0xa6550  @objc CKKnowledgeStore.inferLinkTo:withPredicate:when:error: <stripped>
	0xa8890  @objc CKKnowledgeStore.inferLinkTo:withPredicate:when:completionHandler: <stripped>
	0x776f0  @objc CKKnowledgeStore.subgraphWithEntities: <stripped>
	0x7ad20  @objc CKKnowledgeStore.importContentsOfJSONLDAtPath:completionHandler: <stripped>
	0x3a480  @objc CKKnowledgeStore.dictionaryRepresentationWithCompletionHandler: <stripped>
	0x3a640  @objc CKKnowledgeStore.dictionaryRepresentationAndReturnError: <stripped>
	0x3a790  @objc CKKnowledgeStore.dictionaryRepresentationForKeysMatching:completionHandler: <stripped>
	0x3a8c0  @objc CKKnowledgeStore.dictionaryRepresentationForKeysMatching:error: <stripped>
	0x3aa40  @objc CKKnowledgeStore.keysWithCompletionHandler: <stripped>
	0x3abd0  @objc CKKnowledgeStore.keysAndReturnError: <stripped>
	0x3ad10  @objc CKKnowledgeStore.keysMatching:completionHandler: <stripped>
	0x3ae40  @objc CKKnowledgeStore.keysMatching:error: <stripped>
	0x3afb0  @objc CKKnowledgeStore.valuesWithCompletionHandler: <stripped>
	0x3b140  @objc CKKnowledgeStore.valuesAndReturnError: <stripped>
	0x3b290  @objc CKKnowledgeStore.valueForKey:completionHandler: <stripped>
	0x3b6b0  @objc CKKnowledgeStore.valueForKey: <stripped>
	0x3bbd0  @objc CKKnowledgeStore.valuesForKeys:completionHandler: <stripped>
	0x3bd60  @objc CKKnowledgeStore.valuesForKeysMatching:completionHandler: <stripped>
	0x3be90  @objc CKKnowledgeStore.valuesForKeysMatching:error: <stripped>
	0x3c020  @objc CKKnowledgeStore.entityWithIdentifier: <stripped>
	0x3c6f0  @objc CKKnowledgeStore.entitiesWithCompletionHandler: <stripped>
	0x3ccd0  @objc CKKnowledgeStore.entitiesAndReturnError: <stripped>
	0x3cdc0  @objc CKKnowledgeStore.triplesMatching:error: <stripped>
	0x3cf30  @objc CKKnowledgeStore.triplesMatching:completionHandler: <stripped>
	0x3d5d0  @objc CKKnowledgeStore.sparqlResultsForQuery:completionHandler: <stripped>
	0x14570  @objc CKKnowledgeStore.writeBatch <stripped>
	0x14a00  @objc CKKnowledgeStore.setValue:forKey:completionHandler: <stripped>
	0x14b50  @objc CKKnowledgeStore.setValue:forKey: <stripped>
	0x151a0  @objc CKKnowledgeStore.importTriplesFromFileAtPath:completionHandler: <stripped>
	0x152c0  @objc CKKnowledgeStore.removeEntity:completionHandler: <stripped>
	0x153e0  @objc CKKnowledgeStore.removeEntity:error: <stripped>
	0x15470  @objc CKKnowledgeStore.removeValueForKey:completionHandler: <stripped>
	0x15950  @objc CKKnowledgeStore.removeValueForKey:error: <stripped>
	0x15aa0  @objc CKKnowledgeStore.removeValuesForKeys:completionHandler: <stripped>
	0x15f30  @objc CKKnowledgeStore.removeValuesForKeys:error: <stripped>
	0x16060  @objc CKKnowledgeStore.removeValuesMatching:completionHandler: <stripped>
	0x164b0  @objc CKKnowledgeStore.removeValuesMatching:error: <stripped>
	0x16640  @objc CKKnowledgeStore.removeAllValuesWithCompletionHandler: <stripped>
	0x16ab0  @objc CKKnowledgeStore.removeAllValuesAndReturnError: <stripped>
	0x16b80  @objc CKKnowledgeStore.disableSyncAndDeleteCloudDataWithCompletionHandler: <stripped>
	0xc1350  @objc CKKnowledgeStore.delegate <stripped>
	0xc13a0  @objc CKKnowledgeStore.setDelegate: <stripped>
	0xc1400  @objc CKKnowledgeStore.name <stripped>
	0xc15e0  @objc CKKnowledgeStore.filePathURL <stripped>
	0xc1670  @objc CKKnowledgeStore.hash <stripped>
	0xc1930  @objc CKKnowledgeStore.isEqual: <stripped>
	0xc1c20  @objc CKKnowledgeStore.init <stripped>
	0xc1ca0  @objc CKKnowledgeStore..cxx_destruct <stripped>

	// Swift methods
	0xc03f0  func CKKnowledgeStore.delegate.getter // getter 
	0xc0430  func CKKnowledgeStore.delegate.setter // setter 
	0xc0480  func CKKnowledgeStore.delegate.modify // modifyCoroutine 
	0xc04d0  func CKKnowledgeStore.name.getter // getter 
	0xc0510  func CKKnowledgeStore.filePath.getter // getter 
	0xc07a0  class func static CKKnowledgeStore.defaultKnowledgeStore() // method 
	0xc0880  class func static CKKnowledgeStore.defaultSynchedKnowledgeStore() // method 
	0xc08d0  class func static CKKnowledgeStore.inMemoryKnowledgeStore() // method 
	0xc0920  class func static CKKnowledgeStore.userDefaultsKnowledgeStore() // method 
	0xc0970  class func static CKKnowledgeStore.knowledgeStore(withName:) // method 
	0xc0980  class func static CKKnowledgeStore.synchedKnowledgeStore(withName:) // method 
	0xc09f0  class func static CKKnowledgeStore.store(_:) // method 
 }

 enum CoreKnowledge.Location {

	// Properties
	case sql : String
	case sqlSynched : String
	case inMemory  
	case userDefaults  
 }

 class CoreKnowledge.AppUsageProbabilityFinder : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xc3150  @objc AppUsageProbabilityFinder.init <stripped>

	// Swift methods
	0xc2e80  class func static AppUsageProbabilityFinder.relativeAppUsageProbabilities(bundleIDs:days:) // method 
 }

 class CoreKnowledge.SRAppMatcher : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var db : Connection // +0x8 (0x8)
	var domain : String // +0x10 (0x10)
	var allowedBundleIDs : [String] // +0x20 (0x8)
	var memorableEntities : [MemorableEntity] // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0xc7750  @objc SRAppMatcher.init <stripped>
	0xc77d0  @objc SRAppMatcher..cxx_destruct <stripped>

	// Swift methods
	0xc49b0  func SRAppMatcher.appMatches() // method 
	0xc51a0  func SRAppMatcher.findEntitySignals() // method 
	0xc5860  func SRAppMatcher.findMatchingEntities(forEntity:) // method 
	0xc65d0  func SRAppMatcher.findIntentSignals(entitySignals:) // method 
	0xc7480  func SRAppMatcher.findEntityMatchSignals(allIntentSignals:) // method 
	0xc7630  func SRAppMatcher.decideResult(entityMatchSignals:appUsageSignals:) // method 
	0xc76e0  func SRAppMatcher.decide(byEntityMatch:withAppUsageSignals:) // method 
 }

 struct CoreKnowledge.EntitySignals {

	// Properties
	let intentIndex : Int // +0x0
	let idfScore : Double // +0x8
 }

 struct CoreKnowledge.IntentSignals {

	// Properties
	let intentRowID : Int64
	let entityRowID : Int64
	let entityIndex : Int
	let bundleID : String
	let modifiedAt : Date
	let recencyOrder : Int
	var idfScore : Double
 }

 struct CoreKnowledge.EntityMatchSignals {

	// Properties
	let bundleID : String // +0x0
	let recencyOrder : Int // +0x10
	let isMostRecentAppForEntity : Bool // +0x18
	let maxIDFScore : Double // +0x20
	let frequency : Int // +0x28
	let secondsAgo : Double // +0x30
	let relevanceScore : Double // +0x38
	let frequencyScore : Double // +0x40
	let overallScore : Double // +0x48
 }

 struct CoreKnowledge.AppUsageSignals {

	// Properties
	let bundleID : String // +0x0
	var usageShare1Day : Double // +0x10
	var usageShare7Days : Double // +0x18
	let usageShare28Days : Double // +0x20
 }

 struct CoreKnowledge.AppMatchSignals {

	// Properties
	let entityMatchSignals : EntityMatchSignals // +0x0
	let appUsageSignals : AppUsageSignals // +0x8
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case bundleID  
	case usageShare1Day  
	case usageShare7Days  
	case usageShare28Days  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case bundleID  
	case recencyOrder  
	case isMostRecentAppForEntity  
	case maxIDFScore  
	case frequency  
	case secondsAgo  
	case relevanceScore  
	case frequencyScore  
	case overallScore  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case entityMatchSignals  
	case appUsageSignals  
 }

 class CoreKnowledge.Statement : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FailableIterator {

	// Properties
	var handle : OpaquePointer? // +0x10 (0x8)
	let connection : Connection // +0x18 (0x8)
	var $__lazy_storage_$_columnCount : Int? // +0x20 (0x9)
	var $__lazy_storage_$_columnNames : [String]? // +0x30 (0x8)
	var $__lazy_storage_$_row : Cursor // +0x38 (0x10)

	// Swift methods
	0xd6440  class func Statement.__allocating_init(_:_:) // init 
 }

 struct CoreKnowledge.Cursor {

	// Properties
	let handle : OpaquePointer // +0x0
	let columnCount : Int // +0x8
 }

 class CoreKnowledge.CKDeviceActivityStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xd9cc0  @objc CKDeviceActivityStore.init <stripped>
	0xd9d40  @objc CKDeviceActivityStore..cxx_destruct <stripped>

	// Swift methods
	0xd9a70  class func CKDeviceActivityStore.__allocating_init(store:) // init 
 }

 class CoreKnowledge.CKAbstractWriteBatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var buffer : [String : Any?]
	let backingStore : CKBackingStore

	// ObjC -> Swift bridged methods
	0xdadb0  @objc CKAbstractWriteBatch.setObject:forKey: <stripped>

	// Swift methods
	0xdac00  func CKAbstractWriteBatch.buffer.getter // getter 
	0xdac30  func CKAbstractWriteBatch.buffer.setter // setter 
	0xdac70  func CKAbstractWriteBatch.buffer.modify // modifyCoroutine 
	0xdacc0  class func CKAbstractWriteBatch.__allocating_init(backingStore:) // init 
	0xdada0  func CKAbstractWriteBatch.setObject(_:forKey:) // method 
 }

 class CoreKnowledge.CKInMemoryWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xdaf60  @objc CKInMemoryWriteBatch.writeWithCompletionHandler: <stripped>
	0xdb960  @objc CKInMemoryWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xdaec0  func CKInMemoryWriteBatch.write(completionHandler:) // method 
	0xdb010  func CKInMemoryWriteBatch.write() // method 
 }

 class CoreKnowledge.CKUserDefaultsWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xdaf60  @objc CKUserDefaultsWriteBatch.writeWithCompletionHandler: <stripped>
	0xdc460  @objc CKUserDefaultsWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xdba20  func CKUserDefaultsWriteBatch.write(completionHandler:) // method 
	0xdbac0  func CKUserDefaultsWriteBatch.write() // method 
 }

 class CoreKnowledge.CKSQLWriteBatch : CKAbstractWriteBatch {

	// Properties
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
	0xdda10  @objc CKSQLWriteBatch.writeWithCompletionHandler: <stripped>
	0xddf90  @objc CKSQLWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xdc550  func CKSQLWriteBatch.queue.getter // getter 
	0xdc580  func CKSQLWriteBatch.queue.setter // setter 
	0xdc5c0  func CKSQLWriteBatch.queue.modify // modifyCoroutine 
	0xdcff0  func CKSQLWriteBatch.write(completionHandler:) // method 
	0xdda30  func CKSQLWriteBatch.write() // method 
 }

 class CoreKnowledge.CKCloudKitWriteBatch : CKSQLWriteBatch {
	// ObjC -> Swift bridged methods
	0xdf6c0  @objc CKCloudKitWriteBatch.writeWithCompletionHandler: <stripped>
 }

 enum CoreKnowledge.Configs { }

 enum CoreKnowledge.Key {

	// Properties
	case fetchedInteractionsAt  
	case scrubbedDeletedDataAt  
	case scrubbedOldDataAt  
 }

 class CoreKnowledge.CKLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let osLog : OS_os_log // +0x10 (0x8)

	// Swift methods
	0xe83e0  class func CKLogger.__allocating_init(_:) // init 
	0xe8450  func CKLogger.debug(_:_:) // method 
	0xe8470  func CKLogger.info(_:_:) // method 
	0xe8490  func CKLogger.error(_:_:) // method 
	0xe84b0  func CKLogger.fault(_:_:) // method 
	0xe8510  func CKLogger.log(type:_:_:) // method 
 }

 class CoreKnowledge.SRAppMatches : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let matchType : SRAppMatchesType // +0x8 (0x8)
	let bundleIDs : [String] // +0x10 (0x8)
	let signalsJSON : Data // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0xe8d50  @objc SRAppMatches.matchType <stripped>
	0xe8d90  @objc SRAppMatches.bundleIDs <stripped>
	0xe8df0  @objc SRAppMatches.signalsJSON <stripped>
	0xe9030  @objc SRAppMatches.initWithMatchType:bundleIDs:signalsJSON: <stripped>
	0xe9150  @objc SRAppMatches.description <stripped>
	0xe94a0  @objc SRAppMatches.copyWithZone: <stripped>
	0xe97a0  @objc SRAppMatches.encodeWithCoder: <stripped>
	0xe9d80  @objc SRAppMatches.initWithCoder: <stripped>
	0xe9e00  @objc SRAppMatches.init <stripped>
	0xe9e80  @objc SRAppMatches..cxx_destruct <stripped>

	// Swift methods
	0xe8cb0  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signals:) // init 
	0xe8e80  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signalsJSON:) // init 
	0xe9380  func SRAppMatches.copy(with:) // method 
	0xe9640  func SRAppMatches.encode(with:) // method 
	0xe97f0  class func SRAppMatches.__allocating_init(coder:) // init 
 }

 enum CoreKnowledge.SRAppMatchesType { }
