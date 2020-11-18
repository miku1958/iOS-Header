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
 protocol CoreKnowledge.ClonableOperation // 1 requirements
 {
	// method
 }

 enum __C.INIntentHandlingStatus { }

 enum __C.INInteractionDirection { }

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
	0x6f30  @objc CKAppInteractionsContext.init <stripped>
	0x7380  @objc CKAppInteractionsContext.encodeWithCoder: <stripped>
	0x78c0  @objc CKAppInteractionsContext.initWithCoder: <stripped>
	0x79c0  @objc CKAppInteractionsContext.copyWithZone: <stripped>
	0x7eb0  @objc CKAppInteractionsContext.updateDiscardedDonations:forIntentType:andBundleId: <stripped>
	0x7fc0  @objc CKAppInteractionsContext..cxx_destruct <stripped>

	// Swift methods
	0x6c40  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x6c60  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.setter // setter 
	0x6c80  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6cc0  func CKAppInteractionsContext.outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x6d20  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.getter // getter 
	0x6d80  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.setter // setter 
	0x6de0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x7010  class func CKAppInteractionsContext.__allocating_init(_:) // init 
	0x7180  func CKAppInteractionsContext.encode(with:) // method 
	0x73d0  class func CKAppInteractionsContext.__allocating_init(coder:) // init 
	0x7920  func CKAppInteractionsContext.copy(with:) // method 
	0x7a00  func CKAppInteractionsContext.incrementNumberOfOutOfAppLaunchBoundaryDonations(forBundleId:intent:) // method 
	0x7ea0  func CKAppInteractionsContext.updateDiscardedDonations(_:forIntentType:andBundleId:) // method 
 }

 class CoreKnowledge.CKKnowledgeStoreUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xc830  @objc CKKnowledgeStoreUtils.init <stripped>
 }

 class CoreKnowledge.CKUserDefaultsBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var kv : NSUserDefaults // +0x10 (0x8)

	// Swift methods
	0xcc90  func CKUserDefaultsBackingStore.name.getter // getter 
	0xccb0  func CKUserDefaultsBackingStore.name.setter // setter 
	0xccc0  func CKUserDefaultsBackingStore.name.modify // modifyCoroutine 
	0xcd00  class func CKUserDefaultsBackingStore.__allocating_init() // init 
	0xd040  func CKUserDefaultsBackingStore.synchronize() // method 
	0xd060  func CKUserDefaultsBackingStore.keys() // method 
	0xd280  func CKUserDefaultsBackingStore.keys(matching:) // method 
	0xd5a0  func CKUserDefaultsBackingStore._value(forKey:) // method 
	0xd670  func CKUserDefaultsBackingStore.values() // method 
	0xd700  func CKUserDefaultsBackingStore.values(forKeys:) // method 
	0xd9d0  func CKUserDefaultsBackingStore.values(forKeysMatching:) // method 
	0xdfb0  func CKUserDefaultsBackingStore.dictionaryRepresentation() // method 
	0xe020  func CKUserDefaultsBackingStore.dictionaryRepresentation(forKeysMatching:) // method 
	0xe5a0  func CKUserDefaultsBackingStore.triplesComponents(matching:) // method 
	0xe6e0  func CKUserDefaultsBackingStore.verify(path:completionHandler:) // method 
	0xe840  func CKUserDefaultsBackingStore.setValue(_:forKey:completionHandler:) // method 
	0xe850  func CKUserDefaultsBackingStore.writeBatch() // method 
	0x11660  func CKUserDefaultsBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xe900  func CKUserDefaultsBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xea60  func CKUserDefaultsBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0xebc0  func CKUserDefaultsBackingStore.removeValue(forKey:) // method 
	0xec60  func CKUserDefaultsBackingStore.removeValues(forKeys:) // method 
	0xed60  func CKUserDefaultsBackingStore.removeValues(matching:) // method 
	0xefd0  func CKUserDefaultsBackingStore.removeAllValues() // method 
	0xf170  func CKUserDefaultsBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0xf2d0  func CKUserDefaultsBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0xf430  func CKUserDefaultsBackingStore.dropLinks(between:and:completionHandler:) // method 
	0xf590  func CKUserDefaultsBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.SaveInteraction : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let interaction : INInteraction // +0x8 (0x8)
	let dkEventUUID : UUID // +0x25 (0x0)

	// ObjC -> Swift bridged methods
	0x11810  @objc SaveInteraction.initWithInteraction:dkEventUUID: <stripped>
	0x11b70  @objc SaveInteraction.main <stripped>
	0x11cd0  @objc SaveInteraction.init <stripped>
	0x11d40  @objc SaveInteraction..cxx_destruct <stripped>

	// Swift methods
	0x116c0  class func SaveInteraction.__allocating_init(interaction:dkEventUUID:) // init 
 }

 class CoreKnowledge.INInteractionEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interaction : INInteraction

	// Swift methods
	0x11fc0  class func INInteractionEncoder.__allocating_init(_:) // init 
	0x12040  func INInteractionEncoder.base64() // method 
 }

 class CoreKnowledge.INInteractionDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x12290  class func INInteractionDecoder.__allocating_init() // init 
 }

 class CoreKnowledge.CKPermanentEventStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let knowledgeStore : CKKnowledgeStore

	// ObjC -> Swift bridged methods
	0x12400  @objc CKPermanentEventStore.initWithKnowledgeStore: <stripped>
	0x12640  @objc CKPermanentEventStore.init <stripped>
	0x126c0  @objc CKPermanentEventStore..cxx_destruct <stripped>

	// Swift methods
	0x12330  class func CKPermanentEventStore.__allocating_init(knowledgeStore:) // init 
 }

 class CoreKnowledge.CKInMemoryBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let inMemoryStoreHandler : CKPersistentStoreHandler // +0x10 (0x8)

	// Swift methods
	0x131a0  func CKInMemoryBackingStore.name.getter // getter 
	0x131c0  func CKInMemoryBackingStore.name.setter // setter 
	0x131d0  func CKInMemoryBackingStore.name.modify // modifyCoroutine 
	0x13220  class func CKInMemoryBackingStore.__allocating_init() // init 
	0x133e0  func CKInMemoryBackingStore.keys(completionHandler:) // method 
	0x134d0  func CKInMemoryBackingStore.keys(matching:completionHandler:) // method 
	0x135b0  func CKInMemoryBackingStore.value(forKey:completionHandler:) // method 
	0x137f0  func CKInMemoryBackingStore.values(completionHandler:) // method 
	0x138e0  func CKInMemoryBackingStore.values(forKeys:completionHandler:) // method 
	0x139f0  func CKInMemoryBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x13ad0  func CKInMemoryBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x13bc0  func CKInMemoryBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x13ca0  func CKInMemoryBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x13dc0  func CKInMemoryBackingStore.verify(path:completionHandler:) // method 
	0x13e80  func CKInMemoryBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x13f50  func CKInMemoryBackingStore.writeBatch() // method 
	0x14000  func CKInMemoryBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x140c0  func CKInMemoryBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x14340  func CKInMemoryBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x145c0  func CKInMemoryBackingStore.removeValue(forKey:completionHandler:) // method 
	0x14780  func CKInMemoryBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x14940  func CKInMemoryBackingStore.removeValues(matching:completionHandler:) // method 
	0x14b10  func CKInMemoryBackingStore.removeAllValues(completionHandler:) // method 
	0x14bc0  func CKInMemoryBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x14c70  func CKInMemoryBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x14d20  func CKInMemoryBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x14dd0  func CKInMemoryBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.BackgroundQueue : NSOperationQueue /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var lock : OS_dispatch_semaphore // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x15500  @objc BackgroundQueue.init <stripped>
	0x158f0  @objc BackgroundQueue..cxx_destruct <stripped>

	// Swift methods
	0x15580  func BackgroundQueue.pause() // method 
	0x15880  func BackgroundQueue.resume() // method 
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
	0x1ea10  @objc CKPersistentStoreHandler.init <stripped>
	0x1f460  @objc CKPersistentStoreHandler.initWithName: <stripped>
	0x1fc60  @objc CKPersistentStoreHandler.keysAndReturnError: <stripped>
	0x20670  @objc CKPersistentStoreHandler.keysMatching:error: <stripped>
	0x20f50  @objc CKPersistentStoreHandler.valuesAndReturnError: <stripped>
	0x219a0  @objc CKPersistentStoreHandler.valuesForKeysMatching:error: <stripped>
	0x223a0  @objc CKPersistentStoreHandler.keysAndValuesAndReturnError: <stripped>
	0x22f30  @objc CKPersistentStoreHandler.keysAndValuesForKeysMatching:error: <stripped>
	0x23a10  @objc CKPersistentStoreHandler._valuesForKeys:error: <stripped>
	0x24eb0  @objc CKPersistentStoreHandler.saveKeysAndValues:error: <stripped>
	0x255e0  @objc CKPersistentStoreHandler.removeValueForKey:error: <stripped>
	0x26040  @objc CKPersistentStoreHandler.removeValuesForKeys:error: <stripped>
	0x26b30  @objc CKPersistentStoreHandler.removeValuesMatching:error: <stripped>
	0x273f0  @objc CKPersistentStoreHandler.removeAllValuesAndReturnError: <stripped>
	0x28190  @objc CKPersistentStoreHandler.tripleComponentsMatching:error: <stripped>
	0x28290  @objc CKPersistentStoreHandler.setWeightForLinkWithLabel:between:and:toValue:error: <stripped>
	0x28410  @objc CKPersistentStoreHandler.increaseWeightForLinkWithLabel:between:and: <stripped>
	0x28440  @objc CKPersistentStoreHandler.decreaseWeightForLinkWithLabel:between:and: <stripped>
	0x28d20  @objc CKPersistentStoreHandler.dropLinkWithLabel:between:and:error: <stripped>
	0x28ea0  @objc CKPersistentStoreHandler.dropLinksWithLabel:from:error: <stripped>
	0x294a0  @objc CKPersistentStoreHandler.dropLinksBetween:and:error: <stripped>
	0x29c00  @objc CKPersistentStoreHandler..cxx_destruct <stripped>

	// Swift methods
	0x1e790  func CKPersistentStoreHandler.connection.getter // getter 
	0x1e7d0  func CKPersistentStoreHandler.connection.setter // setter 
	0x1e820  func CKPersistentStoreHandler.connection.modify // modifyCoroutine 
	0x1e870  class func static CKPersistentStoreHandler.inMemoryHandler() // method 
	0x1ea90  class func CKPersistentStoreHandler.__allocating_init(name:) // init 
	0x1f490  func CKPersistentStoreHandler.keys() // method 
	0x1fd00  func CKPersistentStoreHandler.keys(matching:) // method 
	0x20740  func CKPersistentStoreHandler.values() // method 
	0x20ff0  func CKPersistentStoreHandler.values(forKeysMatching:) // method 
	0x21a70  func CKPersistentStoreHandler.keysAndValues() // method 
	0x22450  func CKPersistentStoreHandler.keysAndValues(forKeysMatching:) // method 
	0x23010  func CKPersistentStoreHandler.selectQuery(project:whereField:isIn:) // method 
	0x23020  func CKPersistentStoreHandler._values(forKeys:) // method 
	0x23af0  func CKPersistentStoreHandler.save(keysAndValues:) // method 
	0x24f90  func CKPersistentStoreHandler.removeValue(forKey:) // method 
	0x256b0  func CKPersistentStoreHandler._removeValues(forKeys:) // method 
	0x25ef0  func CKPersistentStoreHandler.removeValues(forKeys:) // method 
	0x26110  func CKPersistentStoreHandler._removeValues(matching:) // method 
	0x269c0  func CKPersistentStoreHandler.removeValues(matching:) // method 
	0x26bd0  func CKPersistentStoreHandler.removeAllValues() // method 
	0x27510  func CKPersistentStoreHandler.tripleComponents(matching:) // method 
	0x28260  func CKPersistentStoreHandler.setWeight(forLinkWithLabel:between:and:toValue:) // method 
	0x283f0  func CKPersistentStoreHandler.increaseWeight(forLinkWithLabel:between:and:) // method 
	0x28430  func CKPersistentStoreHandler.decreaseWeight(forLinkWithLabel:between:and:) // method 
	0x28550  func CKPersistentStoreHandler.decreaseWeights(between:and:) // method 
	0x28d00  func CKPersistentStoreHandler.dropLink(withLabel:between:and:) // method 
	0x28e80  func CKPersistentStoreHandler.dropLinks(withLabel:from:) // method 
	0x28fb0  func CKPersistentStoreHandler.dropLinks(between:and:) // method 
	0x295c0  func CKPersistentStoreHandler.deserializeValue(_:) // method 
 }

 class CoreKnowledge.CKSiriRemembers : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x32ad0  @objc CKSiriRemembers.init <stripped>
	0x32b70  @objc CKSiriRemembers..cxx_destruct <stripped>

	// Swift methods
	0x320d0  class func static CKSiriRemembers.saveInteraction(interaction:) // method 
	0x32150  class func static CKSiriRemembers.findAppMatches(forIntent:candidateBundleIDs:completionHandler:) // method 
	0x32290  class func static CKSiriRemembers.findAppMatches(forJSONIntent:candidateBundleIDs:completionHandler:) // method 
	0x323b0  class func static CKSiriRemembers.findRelativeAppUsageProbabilities(bundleIDs:days:completionHandler:) // method 
 }

 class CoreKnowledge.DeferrableXPCOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var activity : OS_xpc_object? // +0x8 (0x8)
	var isDeferred : Bool // +0x10 (0x1)
	var completionKVObservation : NSKeyValueObservation? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x3f4b0  @objc DeferrableXPCOperation.init <stripped>
	0x3f810  @objc DeferrableXPCOperation..cxx_destruct <stripped>

	// Swift methods
	0x3eff0  func DeferrableXPCOperation.activity.getter // getter 
	0x3f030  func DeferrableXPCOperation.activity.setter // setter 
	0x3f080  func DeferrableXPCOperation.activity.modify // modifyCoroutine 
	0x3f160  func DeferrableXPCOperation.isDeferred.getter // getter 
	0x3f190  func DeferrableXPCOperation.isDeferred.setter // setter 
	0x3f1d0  func DeferrableXPCOperation.isDeferred.modify // modifyCoroutine 
	0x3f2c0  func DeferrableXPCOperation.completionKVObservation.getter // getter 
	0x3f300  func DeferrableXPCOperation.completionKVObservation.setter // setter 
	0x3f350  func DeferrableXPCOperation.completionKVObservation.modify // modifyCoroutine 
	0x3f4d0  class func DeferrableXPCOperation.__allocating_init(activity:) // init 
	0x3f620  func DeferrableXPCOperation.isCancelledOrDeferred.getter // getter 
 }

 class CoreKnowledge.CKSQLBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var name : String // +0x10 (0x10)
	let connection : NSXPCConnection // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x40180  @objc CKSQLBackingStore.initWithName: <stripped>

	// Swift methods
	0x3ff00  func CKSQLBackingStore.name.getter // getter 
	0x3ff40  func CKSQLBackingStore.name.setter // setter 
	0x3ff80  func CKSQLBackingStore.name.modify // modifyCoroutine 
	0x3ffd0  class func CKSQLBackingStore.__allocating_init(name:) // init 
	0x40230  class func static CKSQLBackingStore.mainInstance() // method 
	0x40290  func CKSQLBackingStore.daemon(errorHandler:) // method 
	0x40d00  func CKSQLBackingStore.keys(completionHandler:) // method 
	0x40f80  func CKSQLBackingStore.keys(matching:completionHandler:) // method 
	0x41190  func CKSQLBackingStore.value(forKey:completionHandler:) // method 
	0x41450  func CKSQLBackingStore.values(completionHandler:) // method 
	0x41700  func CKSQLBackingStore.values(forKeys:completionHandler:) // method 
	0x41b70  func CKSQLBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x41d80  func CKSQLBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x42040  func CKSQLBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x42250  func CKSQLBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x42500  func CKSQLBackingStore.verify(path:completionHandler:) // method 
	0x42660  func CKSQLBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x42a50  func CKSQLBackingStore.writeBatch() // method 
	0x42ad0  func CKSQLBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x42d70  func CKSQLBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x430b0  func CKSQLBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x43390  func CKSQLBackingStore.removeValue(forKey:completionHandler:) // method 
	0x435b0  func CKSQLBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x437d0  func CKSQLBackingStore.removeValues(matching:completionHandler:) // method 
	0x439c0  func CKSQLBackingStore.removeAllValues(completionHandler:) // method 
	0x43ba0  func CKSQLBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x43e40  func CKSQLBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x440d0  func CKSQLBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x44340  func CKSQLBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 struct CoreKnowledge.MemorableEntity {

	// Properties
	let paramName : String // +0x0
	let paramSize : Int // +0x10
	let entityType : String // +0x18
	let siriRemembersID : String? // +0x28
	let siriRemembersTokens : [String] // +0x38
 }

 struct CoreKnowledge.MemorableEntityIterator {

	// Properties
	var inner : [String : Any].Iterator // +0x0
	var memoized : Memorable // +0x28
	var memoizedCount : Int // +0x40
 }

 class CoreKnowledge.SRInternalDatabaseManager : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x47eb0  @objc SRInternalDatabaseManager.init <stripped>
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
	0x4d800  class func Connection.__allocating_init(_:readonly:) // init 
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
	0x61d30  @objc CKCloudKitBackingStore.initWithName: <stripped>

	// Swift methods
	0x60210  func CKCloudKitBackingStore.triplesComponents(matching:) // method 
 }

 class CoreKnowledge.CKTriple : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : (String, String, String, Int) // +0x8 (0x38)

	// ObjC -> Swift bridged methods
	0x62240  @objc CKTriple.subject <stripped>
	0x622d0  @objc CKTriple.predicate <stripped>
	0x623a0  @objc CKTriple.object <stripped>
	0x62470  @objc CKTriple.weight <stripped>
	0x624b0  @objc CKTriple.description <stripped>
	0x628a0  @objc CKTriple.hash <stripped>
	0x63340  @objc CKTriple.isEqual: <stripped>
	0x635f0  @objc CKTriple.initWithSubject:predicate:object:weight: <stripped>
	0x639d0  @objc CKTriple.encodeWithCoder: <stripped>
	0x63f30  @objc CKTriple.initWithCoder: <stripped>
	0x64300  @objc CKTriple.init <stripped>
	0x64380  @objc CKTriple..cxx_destruct <stripped>

	// Swift methods
	0x622a0  func CKTriple.subject.getter // getter 
	0x62350  func CKTriple.predicate.getter // getter 
	0x62420  func CKTriple.object.getter // getter 
	0x62490  func CKTriple.weight.getter // getter 
	0x633e0  class func CKTriple.__allocating_init(tuple:) // init 
	0x620e0  class func CKTriple.__allocating_init(subject:predicate:object:weight:) // init 
	0x63750  func CKTriple.encode(with:) // method 
	0x63a20  class func CKTriple.__allocating_init(coder:) // init 
	0x63f90  func CKTriple.dictionary() // method 
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

 class CoreKnowledge.ScrubDeletedRecords : DeferrableXPCOperation {

	// Properties
	let oldestDate : Date? // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0x6e940  @objc ScrubDeletedRecords.initSinceDate: <stripped>
	0x6fa10  @objc ScrubDeletedRecords.main <stripped>
	0x6fa90  @objc ScrubDeletedRecords.init <stripped>
	0x6fb20  @objc ScrubDeletedRecords..cxx_destruct <stripped>

	// Swift methods
	0x6e7a0  class func ScrubDeletedRecords.__allocating_init(sinceDate:) // init 
 }

 struct CoreKnowledge.CKOntology { }

 class CoreKnowledge.CoreKnowledgeXPCUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x76390  @objc CoreKnowledgeXPCUtils.init <stripped>
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
	0x79d20  @objc CKJSONLDGraph.initWithEntities: <stripped>
	0x79d70  @objc CKJSONLDGraph.entities <stripped>
	0x7aab0  @objc CKJSONLDGraph.linkedDataWithCompletionHandler: <stripped>
	0x7ac20  @objc CKJSONLDGraph.init <stripped>
	0x7aca0  @objc CKJSONLDGraph..cxx_destruct <stripped>

	// Swift methods
	0x79c90  class func CKJSONLDGraph.__allocating_init(withEntities:) // init 
	0x79dd0  func CKJSONLDGraph.entities.getter // getter 
	0x7a080  func CKJSONLDGraph.linkedData(completionHandler:) // method 
 }

 class CoreKnowledge.CKEphemeralEventSequence : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x87e80  @objc CKEphemeralEventSequence.init <stripped>
	0x87f80  @objc CKEphemeralEventSequence..cxx_destruct <stripped>

	// Swift methods
	0x87ea0  func CKEphemeralEventSequence.historyStartEvent.getter // getter 
 }

 class CoreKnowledge.XPCTaskScheduler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : BackgroundQueue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x8a360  @objc XPCTaskScheduler.initWithQueue: <stripped>
	0x8a5b0  @objc XPCTaskScheduler.scheduleAllTasks <stripped>
	0x8adf0  @objc XPCTaskScheduler.init <stripped>
	0x8ae70  @objc XPCTaskScheduler..cxx_destruct <stripped>

	// Swift methods
	0x8a260  class func XPCTaskScheduler.__allocating_init(queue:) // init 
	0x8a3d0  func XPCTaskScheduler.scheduleAllTasks() // method 
	0x8a650  func XPCTaskScheduler.add(id:repeatInterval:makeOp:) // method 
 }

 enum CoreKnowledge.RepeatInterval {

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
	0x8c100  class func Matcher.__allocating_init(_:value:) // init 
	0x8c1a0  func Matcher.evaluate(on:) // method 
	0x8c740  func Matcher.sql.getter // getter 
	0x8ca30  func Matcher.sql.setter // setter 
	0x8ca50  func Matcher.sql.modify // modifyCoroutine 
 }

 class CoreKnowledge.CKGenericCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : ConditionType
	var negated : Bool
	var $__lazy_storage_$_sql : String?

	// ObjC -> Swift bridged methods
	0x8cbb0  @objc CKGenericCondition.predicate <stripped>
	0x8ce50  @objc CKGenericCondition.description <stripped>
	0x8d0f0  @objc CKGenericCondition.initWithValue: <stripped>
	0x8d270  @objc CKGenericCondition.initWithMatchType:value:negated: <stripped>
	0x8d510  @objc CKGenericCondition.and: <stripped>
	0x8d630  @objc CKGenericCondition.or: <stripped>
	0x8e2f0  @objc CKGenericCondition.evaluateOn: <stripped>
	0x8e470  @objc CKGenericCondition.copyWithZone: <stripped>
	0x8e910  @objc CKGenericCondition.encodeWithCoder: <stripped>
	0x8f080  @objc CKGenericCondition.initWithCoder: <stripped>
	0x8f0e0  @objc CKGenericCondition.init <stripped>
	0x8f130  @objc CKGenericCondition..cxx_destruct <stripped>

	// Swift methods
	0x8ccb0  func CKGenericCondition.predicate.getter // getter 
	0x8cfc0  class func CKGenericCondition.__allocating_init(value:) // init 
	0x8b8e0  class func CKGenericCondition.__allocating_init(_:value:negated:) // init 
	0x8d410  func CKGenericCondition.and(_:) // method 
	0x8d530  func CKGenericCondition.or(_:) // method 
	0x8d760  func CKGenericCondition.sql.getter // getter 
	0x8df00  func CKGenericCondition.sql.setter // setter 
	0x8df30  func CKGenericCondition.sql.modify // modifyCoroutine 
	0x8e060  func CKGenericCondition.evaluate(on:) // method 
	0x8e390  func CKGenericCondition.copy(with:) // method 
	0x8e5d0  func CKGenericCondition.encode(with:) // method 
	0x8e960  class func CKGenericCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKTripleCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var rawCondition : CKGenericCondition

	// ObjC -> Swift bridged methods
	0x8f2f0  @objc CKTripleCondition.description <stripped>
	0x8f810  @objc CKTripleCondition.initWithValue: <stripped>
	0x92970  @objc CKTripleCondition.initWithSubject:predicate:object: <stripped>
	0x92b50  @objc CKTripleCondition.and: <stripped>
	0x92da0  @objc CKTripleCondition.or: <stripped>
	0x92f90  @objc CKTripleCondition.evaluateOn: <stripped>
	0x93140  @objc CKTripleCondition.copyWithZone: <stripped>
	0x93400  @objc CKTripleCondition.encodeWithCoder: <stripped>
	0x937a0  @objc CKTripleCondition.initWithCoder: <stripped>
	0x93820  @objc CKTripleCondition.init <stripped>
	0x938b0  @objc CKTripleCondition..cxx_destruct <stripped>

	// Swift methods
	0x8f210  func CKTripleCondition.rawCondition.getter // getter 
	0x8f250  func CKTripleCondition.rawCondition.setter // setter 
	0x8f2a0  func CKTripleCondition.rawCondition.modify // modifyCoroutine 
	0x8f440  class func CKTripleCondition.__allocating_init(_:) // init 
	0x92a10  func CKTripleCondition.and(_:) // method 
	0x92c60  func CKTripleCondition.or(_:) // method 
	0x92eb0  func CKTripleCondition.evaluate(on:) // method 
	0x93060  func CKTripleCondition.copy(with:) // method 
	0x93360  func CKTripleCondition.encode(with:) // method 
	0x934a0  class func CKTripleCondition.__allocating_init(coder:) // init 
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
	let direction : INInteractionDirection // +0x0 (0x8)
	let inintentHandlingStatus : INIntentHandlingStatus? // +0x0 (0x9)
	let engagementSignals : [String : Any]? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x9ee80  @objc SRIngestor.init <stripped>
	0x9eef0  @objc SRIngestor..cxx_destruct <stripped>

	// Swift methods
	0x9c190  func SRIngestor.saveInteraction() // method 
	0x9c7a0  func SRIngestor.upsertIntent() // method 
	0x9d450  func SRIngestor.upsertEntity(_:entity:) // method 
	0x9bfe0  class func SRIngestor.__allocating_init(db:interaction:dkEventUUID:) // init 
 }

 class CoreKnowledge.CKHistoricEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
	var _firstSeen : Date // +0x16aec6 (0x0)
	var _lastSeen : Date // +0x21c0 (0x0)
	var _frequency : Int // +0x0 (0x8)
	var _lastDuration : Double // +0x80000400 (0x8)
	var _totalDuration : Double // +0x0 (0x8)
	var _metadata : [String : Any] // +0x74735f5f (0x8)

	// ObjC -> Swift bridged methods
	0x9fb80  @objc CKHistoricEvent.identifier <stripped>
	0xa04d0  @objc CKHistoricEvent.firstSeen <stripped>
	0xa05c0  @objc CKHistoricEvent.lastSeen <stripped>
	0xa06b0  @objc CKHistoricEvent.frequency <stripped>
	0xa0760  @objc CKHistoricEvent.lastDuration <stripped>
	0xa0810  @objc CKHistoricEvent.totalDuration <stripped>
	0xa08c0  @objc CKHistoricEvent.metadata <stripped>
	0xa1000  @objc CKHistoricEvent.encodeWithCoder: <stripped>
	0xa1cb0  @objc CKHistoricEvent.initWithCoder: <stripped>
	0xa1da0  @objc CKHistoricEvent.init: <stripped>
	0xa1e40  @objc CKHistoricEvent.initFrom:withIdentifier: <stripped>
	0xa1f50  @objc CKHistoricEvent.copyWithZone: <stripped>
	0xa1fe0  @objc CKHistoricEvent.init <stripped>
	0xa2050  @objc CKHistoricEvent..cxx_destruct <stripped>

	// Swift methods
	0x9fcd0  func CKHistoricEvent._firstSeen.getter // getter 
	0x9fcf0  func CKHistoricEvent._firstSeen.setter // setter 
	0x9fd10  func CKHistoricEvent._firstSeen.modify // modifyCoroutine 
	0x9fe30  func CKHistoricEvent._lastSeen.getter // getter 
	0x9fea0  func CKHistoricEvent._lastSeen.setter // setter 
	0x9ff20  func CKHistoricEvent._lastSeen.modify // modifyCoroutine 
	0xa0000  func CKHistoricEvent._frequency.getter // getter 
	0xa0030  func CKHistoricEvent._frequency.setter // setter 
	0xa0070  func CKHistoricEvent._frequency.modify // modifyCoroutine 
	0xa0150  func CKHistoricEvent._lastDuration.getter // getter 
	0xa0170  func CKHistoricEvent._lastDuration.setter // setter 
	0xa0190  func CKHistoricEvent._lastDuration.modify // modifyCoroutine 
	0xa0270  func CKHistoricEvent._totalDuration.getter // getter 
	0xa02c0  func CKHistoricEvent._totalDuration.setter // setter 
	0xa0320  func CKHistoricEvent._totalDuration.modify // modifyCoroutine 
	0xa0400  func CKHistoricEvent._metadata.getter // getter 
	0xa0440  func CKHistoricEvent._metadata.setter // setter 
	0xa0490  func CKHistoricEvent._metadata.modify // modifyCoroutine 
	0xa0550  func CKHistoricEvent.firstSeen.getter // getter 
	0xa0640  func CKHistoricEvent.lastSeen.getter // getter 
	0xa0700  func CKHistoricEvent.frequency.getter // getter 
	0xa07b0  func CKHistoricEvent.lastDuration.getter // getter 
	0xa0860  func CKHistoricEvent.totalDuration.getter // getter 
	0xa0940  func CKHistoricEvent.metadata.getter // getter 
	0x9f7e0  class func CKHistoricEvent.__allocating_init(identifier:firstSeen:lastSeen:frequency:lastDuration:totalDuration:metadata:) // init 
	0xa0b60  func CKHistoricEvent.encode(with:) // method 
	0xa1050  class func CKHistoricEvent.__allocating_init(coder:) // init 
	0xa1d10  class func CKHistoricEvent.__allocating_init(_:) // init 
	0xa1e90  func CKHistoricEvent.copy(with:) // method 
 }

 class CoreKnowledge.CKClosure : NSObject /usr/lib/libobjc.A.dylib, CKExecutableClosure {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)
	let entity : CKEntity // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xa3740  @objc CKClosure.initWithCoder: <stripped>
	0xa39b0  @objc CKClosure.encodeWithCoder: <stripped>
	0xa3a60  @objc CKClosure.init <stripped>
	0xa3ae0  @objc CKClosure..cxx_destruct <stripped>

	// Swift methods
	0xa2f80  class func CKClosure.__allocating_init(coder:) // init 
	0xa3770  func CKClosure.encode(with:) // method 
	0xa3a00  func CKClosure.execute() // method 
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
	0xa57b0  @objc CKLogic.hash <stripped>
	0xa5db0  @objc CKLogic.identifier <stripped>
	0xa64b0  @objc CKLogic.andExistsLink:to:error: <stripped>
	0xa6ac0  @objc CKLogic.andNotExistsLink:to:error: <stripped>
	0xa6e60  @objc CKLogic.and: <stripped>
	0xa6f10  @objc CKLogic.init <stripped>
	0xa6f90  @objc CKLogic..cxx_destruct <stripped>

	// Swift methods
	0xa5580  func CKLogic.body.getter // getter 
	0xa55a0  func CKLogic.body.setter // setter 
	0xa55c0  func CKLogic.body.modify // modifyCoroutine 
	0xa56a0  func CKLogic.negatedBody.getter // getter 
	0xa5700  func CKLogic.negatedBody.setter // setter 
	0xa5760  func CKLogic.negatedBody.modify // modifyCoroutine 
	0xa5e10  func CKLogic.identifier.getter // getter 
	0xa5f40  class func static CKLogic.ifExistsLink(_:to:) // method 
	0xa5f70  func CKLogic.andExistsLink(_:to:) // method 
	0xa64d0  class func static CKLogic.ifNotExistsLink(_:to:) // method 
	0xa6580  func CKLogic.andNotExistsLink(_:to:) // method 
	0xa6bd0  func CKLogic.and(_:) // method 
 }

 enum CoreKnowledge.ErrorTracker { }

 class CoreKnowledge.ScrubOldRecords : DeferrableXPCOperation {

	// Properties
	let cutoffDate : Date? // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0xac370  @objc ScrubOldRecords.main <stripped>
	0xac3f0  @objc ScrubOldRecords.init <stripped>
	0xac480  @objc ScrubOldRecords..cxx_destruct <stripped>

	// Swift methods
	0xab420  class func ScrubOldRecords.__allocating_init(olderThan:) // init 
 }

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
	0xb3380  @objc CKEntity.isEqual: <stripped>
	0xb3420  @objc CKEntity.hash <stripped>
	0xb35f0  @objc CKEntity.description <stripped>
	0xb3c50  @objc CKEntity.valueForKey: <stripped>
	0xb3d50  @objc CKEntity.valueForKey:completionHandler: <stripped>
	0xb46f0  @objc CKEntity.valuesForKeys:completionHandler: <stripped>
	0xb4ac0  @objc CKEntity.setValue:forKey:completionHandler: <stripped>
	0xb5420  @objc CKEntity.setValuesForKeys:completionHandler: <stripped>
	0xb5530  @objc CKEntity.removeValueForKey:completionHandler: <stripped>
	0xb6600  @objc CKEntity.linkTo:withPredicate:completionHandler: <stripped>
	0xb6ad0  @objc CKEntity.linkTo:withPredicate:error: <stripped>
	0xb6cf0  @objc CKEntity.unlinkTo:withPredicate:ignoreWeights:completionHandler: <stripped>
	0xb7250  @objc CKEntity.removeWithCompletionHandler: <stripped>
	0xbbb10  @objc CKEntity.linksTo:matchType:completionHandler: <stripped>
	0xbbfe0  @objc CKEntity.linksTo:matchType:error: <stripped>
	0xbc100  @objc CKEntity.init <stripped>
	0xbc180  @objc CKEntity..cxx_destruct <stripped>

	// Swift methods
	0xb3070  class func CKEntity.__allocating_init(identifier:knowledgeStore:) // init 
	0xb3d10  func CKEntity.value(forKey:completionHandler:) // method 
	0xb3e30  func CKEntity.values(forKeys:completionHandler:) // method 
	0xb4040  func CKEntity.values(forKeys:completionHandler:) // method 
	0xb47a0  func CKEntity.setValue(_:forKey:completionHandler:) // method 
	0xb4bb0  func CKEntity.setValues(forKeys:completionHandler:) // method 
	0xb54f0  func CKEntity.removeValue(forKey:completionHandler:) // method 
	0xb60c0  func CKEntity.link(to:withPredicate:completionHandler:) // method 
	0xb66c0  func CKEntity.link(to:withPredicate:) // method 
	0xb6bc0  func CKEntity.unlink(to:withPredicate:ignoreWeights:completionHandler:) // method 
	0xb6dd0  func CKEntity.unlink(to:withPredicate:ignoreWeights:) // method 
	0xb71d0  func CKEntity.remove(completionHandler:) // method 
	0xb7330  func CKEntity.remove() // method 
	0xb76c0  func CKEntity.path(to:withRadius:completionHandler:) // method 
	0xb7c50  func CKEntity.path(to:withRadius:) // method 
	0xb7c70  func CKEntity.path(to:radius:) // method 
	0xb8930  func CKEntity.linkedEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xb8f40  func CKEntity.linkedEntities(withPredicate:matchType:complement:) // method 
	0xb8f50  func CKEntity.linkedEntities(completionHandler:) // method 
	0xb9980  func CKEntity.linkedEntities() // method 
	0xb9d50  func CKEntity.linkingEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xba350  func CKEntity.linkingEntities(withPredicate:matchType:complement:) // method 
	0xba360  func CKEntity.linkingEntities(completionHandler:) // method 
	0xba760  func CKEntity.linkingEntities() // method 
	0xbb160  func CKEntity.links(to:matchType:completionHandler:) // method 
	0xbbb90  func CKEntity.links(to:matchType:) // method 
 }

 class CoreKnowledge.CKTimedDispatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x10 (0x8)
	let semaphore : OS_dispatch_semaphore // +0x18 (0x8)
	var _interruptError : Error? // +0x20 (0x8)
	let _timeout : DispatchTime // +0x45545f5f (0x0)
	var _group : OS_dispatch_group? // +0x0 (0x8)

	// Swift methods
	0xc11c0  func CKTimedDispatch._interruptError.getter // getter 
	0xc11f0  func CKTimedDispatch._interruptError.setter // setter 
	0xc1230  func CKTimedDispatch._interruptError.modify // modifyCoroutine 
	0xc1330  func CKTimedDispatch._group.getter // getter 
	0xc1370  func CKTimedDispatch._group.setter // setter 
	0xc13c0  func CKTimedDispatch._group.modify // modifyCoroutine 
	0xc1400  func CKTimedDispatch.group.getter // getter 
	0xc0430  class func CKTimedDispatch.__allocating_init(timeout:) // init 
	0xc1750  func CKTimedDispatch.interrupt(_:) // method 
	0xc17d0  func CKTimedDispatch.wait() // method 
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
	0xc3200  @objc CKKnowledgeStore.delegate <stripped>
	0xc3250  @objc CKKnowledgeStore.setDelegate: <stripped>
	0xc32b0  @objc CKKnowledgeStore.name <stripped>
	0xc3490  @objc CKKnowledgeStore.filePathURL <stripped>
	0xc3520  @objc CKKnowledgeStore.hash <stripped>
	0xc37e0  @objc CKKnowledgeStore.isEqual: <stripped>
	0xc3ad0  @objc CKKnowledgeStore.init <stripped>
	0xc3b50  @objc CKKnowledgeStore..cxx_destruct <stripped>

	// Swift methods
	0xc22a0  func CKKnowledgeStore.delegate.getter // getter 
	0xc22e0  func CKKnowledgeStore.delegate.setter // setter 
	0xc2330  func CKKnowledgeStore.delegate.modify // modifyCoroutine 
	0xc2380  func CKKnowledgeStore.name.getter // getter 
	0xc23c0  func CKKnowledgeStore.filePath.getter // getter 
	0xc2650  class func static CKKnowledgeStore.defaultKnowledgeStore() // method 
	0xc2730  class func static CKKnowledgeStore.defaultSynchedKnowledgeStore() // method 
	0xc2780  class func static CKKnowledgeStore.inMemoryKnowledgeStore() // method 
	0xc27d0  class func static CKKnowledgeStore.userDefaultsKnowledgeStore() // method 
	0xc2820  class func static CKKnowledgeStore.knowledgeStore(withName:) // method 
	0xc2830  class func static CKKnowledgeStore.synchedKnowledgeStore(withName:) // method 
	0xc28a0  class func static CKKnowledgeStore.store(_:) // method 
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
	0xc5000  @objc AppUsageProbabilityFinder.init <stripped>

	// Swift methods
	0xc4d30  class func static AppUsageProbabilityFinder.relativeAppUsageProbabilities(bundleIDs:days:) // method 
 }

 class CoreKnowledge.SRAppMatcher : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var db : Connection
	var domain : String
	var allowedBundleIDs : [String]
	var entitySet : RequestEntity
	var memorableEntities : [MemorableEntity]

	// ObjC -> Swift bridged methods
	0xcbe80  @objc SRAppMatcher.init <stripped>
	0xcbf00  @objc SRAppMatcher..cxx_destruct <stripped>

	// Swift methods
	0xc6ed0  func SRAppMatcher.appMatches() // method 
	0xc72c0  func SRAppMatcher.findEntitySignals() // method 
	0xc78e0  func SRAppMatcher.findMatchingEntities(forEntity:) // method 
	0xc8730  func SRAppMatcher.findIntentSignals(entityIDs:) // method 
	0xc8a90  func SRAppMatcher.findBaseIntentSignals(entityIDs:) // method 
	0xc9e50  func SRAppMatcher.calculateEntityMatchSignals(intentSignals:) // method 
	0xcbc60  func SRAppMatcher.findAppSignals(intentSignals:) // method 
	0xcbe10  func SRAppMatcher.makeDecision(appSignals:) // method 
 }

 struct CoreKnowledge.EntitySignals {

	// Properties
	let intentIndex : Int // +0x0
	let idfScore : Double // +0x8
	let paramSize : Int // +0x10
 }

 class CoreKnowledge.IntentSignals : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let intentID : Int64 // +0x10 (0x8)
	var entities : IntentParameter // +0x18 (0x8)
	let bundleID : String // +0x20 (0x10)
	let direction : INInteractionDirection // +0x30 (0x8)
	let modifiedAt : Date // +0x80000400 (0x0)
	var recencyOrder : Int // +0x0 (0x8)
	var ftsRankings : [Double] // +0x1654 (0x8)
	var requestEntityMatchRates : [Double] // +0x0 (0x8)
	var intentEntityMatchRates : [Double] // +0x16dde4 (0x8)
	var maxEntityMatchRate : Double // +0x16dde4 (0x8)

	// Swift methods
	0xcc040  func IntentSignals.entities.getter // getter 
	0xcc070  func IntentSignals.entities.setter // setter 
	0xcc0b0  func IntentSignals.entities.modify // modifyCoroutine 
	0xcc1d0  func IntentSignals.recencyOrder.getter // getter 
	0xcc200  func IntentSignals.recencyOrder.setter // setter 
	0xcc240  func IntentSignals.recencyOrder.modify // modifyCoroutine 
	0xcc310  func IntentSignals.ftsRankings.getter // getter 
	0xcc330  func IntentSignals.ftsRankings.setter // setter 
	0xcc350  func IntentSignals.ftsRankings.modify // modifyCoroutine 
	0xcc430  func IntentSignals.requestEntityMatchRates.getter // getter 
	0xcc450  func IntentSignals.requestEntityMatchRates.setter // setter 
	0xcc470  func IntentSignals.requestEntityMatchRates.modify // modifyCoroutine 
	0xcc540  func IntentSignals.intentEntityMatchRates.getter // getter 
	0xcc5a0  func IntentSignals.intentEntityMatchRates.setter // setter 
	0xcc600  func IntentSignals.intentEntityMatchRates.modify // modifyCoroutine 
	0xcc6d0  func IntentSignals.maxEntityMatchRate.getter // getter 
	0xcc700  func IntentSignals.maxEntityMatchRate.setter // setter 
	0xcc740  func IntentSignals.maxEntityMatchRate.modify // modifyCoroutine 
	0xc9dd0  class func IntentSignals.__allocating_init(intentID:entities:bundleID:direction:modifiedAt:recencyOrder:) // init 
 }

 struct CoreKnowledge.IntentParameter {

	// Properties
	var cardinality : Int64 // +0x0
	var entityIDs : [Int64] // +0x8
 }

 class CoreKnowledge.RequestEntity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let entity : MemorableEntity // +0x10 (0x40)
	var matches : DBEntityMatch // +0x50 (0x8)

	// Swift methods
	0xccbb0  func RequestEntity.matches.getter // getter 
	0xccbe0  func RequestEntity.matches.setter // setter 
	0xccc20  func RequestEntity.matches.modify // modifyCoroutine 
	0xc6490  class func RequestEntity.__allocating_init(entity:) // init 
 }

 struct CoreKnowledge.DBEntityMatch {

	// Properties
	let entityID : Int64 // +0x0
	let ftsRank : Double // +0x8
 }

 struct CoreKnowledge.AppSignals {

	// Properties
	let bundleID : String // +0x0
	let recencyOrder : Int // +0x10
	let isMostRecentAppForEntity : Bool // +0x18
	let frequency : Int // +0x20
	let secondsAgo : Double // +0x28
	let relevanceScore : Double // +0x30
	let frequencyScore : Double // +0x38
	let overallScore : Double // +0x40
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
	let appSignals : AppSignals // +0x0
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case appSignals  
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
	case frequency  
	case secondsAgo  
	case relevanceScore  
	case frequencyScore  
	case overallScore  
 }

 class CoreKnowledge.Statement : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FailableIterator {

	// Properties
	var handle : OpaquePointer? // +0x10 (0x8)
	let connection : Connection // +0x18 (0x8)
	var $__lazy_storage_$_columnCount : Int? // +0x20 (0x9)
	var $__lazy_storage_$_columnNames : [String]? // +0x30 (0x8)
	var $__lazy_storage_$_row : Cursor // +0x38 (0x10)

	// Swift methods
	0xdcbe0  class func Statement.__allocating_init(_:_:) // init 
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
	0xe0460  @objc CKDeviceActivityStore.init <stripped>
	0xe04e0  @objc CKDeviceActivityStore..cxx_destruct <stripped>

	// Swift methods
	0xe0210  class func CKDeviceActivityStore.__allocating_init(store:) // init 
 }

 class CoreKnowledge.CKAbstractWriteBatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var buffer : [String : Any?]
	let backingStore : CKBackingStore

	// ObjC -> Swift bridged methods
	0xe1550  @objc CKAbstractWriteBatch.setObject:forKey: <stripped>

	// Swift methods
	0xe13a0  func CKAbstractWriteBatch.buffer.getter // getter 
	0xe13d0  func CKAbstractWriteBatch.buffer.setter // setter 
	0xe1410  func CKAbstractWriteBatch.buffer.modify // modifyCoroutine 
	0xe1460  class func CKAbstractWriteBatch.__allocating_init(backingStore:) // init 
	0xe1540  func CKAbstractWriteBatch.setObject(_:forKey:) // method 
 }

 class CoreKnowledge.CKInMemoryWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xe1700  @objc CKInMemoryWriteBatch.writeWithCompletionHandler: <stripped>
	0xe2100  @objc CKInMemoryWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xe1660  func CKInMemoryWriteBatch.write(completionHandler:) // method 
	0xe17b0  func CKInMemoryWriteBatch.write() // method 
 }

 class CoreKnowledge.CKUserDefaultsWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xe1700  @objc CKUserDefaultsWriteBatch.writeWithCompletionHandler: <stripped>
	0xe2c00  @objc CKUserDefaultsWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xe21c0  func CKUserDefaultsWriteBatch.write(completionHandler:) // method 
	0xe2260  func CKUserDefaultsWriteBatch.write() // method 
 }

 class CoreKnowledge.CKSQLWriteBatch : CKAbstractWriteBatch {

	// Properties
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
	0xe41b0  @objc CKSQLWriteBatch.writeWithCompletionHandler: <stripped>
	0xe4730  @objc CKSQLWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xe2cf0  func CKSQLWriteBatch.queue.getter // getter 
	0xe2d20  func CKSQLWriteBatch.queue.setter // setter 
	0xe2d60  func CKSQLWriteBatch.queue.modify // modifyCoroutine 
	0xe3790  func CKSQLWriteBatch.write(completionHandler:) // method 
	0xe41d0  func CKSQLWriteBatch.write() // method 
 }

 class CoreKnowledge.CKCloudKitWriteBatch : CKSQLWriteBatch {
	// ObjC -> Swift bridged methods
	0xe5e60  @objc CKCloudKitWriteBatch.writeWithCompletionHandler: <stripped>
 }

 class CoreKnowledge.BackfillInteractions : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let handler : (_:)? // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0xe8310  @objc BackfillInteractions.main <stripped>
	0xe8420  @objc BackfillInteractions.init <stripped>
	0xe84a0  @objc BackfillInteractions..cxx_destruct <stripped>

	// Swift methods
	0xe7670  class func BackfillInteractions.__allocating_init(handler:) // init 
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
	0xefb30  class func CKLogger.__allocating_init(_:) // init 
	0xefba0  func CKLogger.debug(_:_:) // method 
	0xefbc0  func CKLogger.info(_:_:) // method 
	0xefbe0  func CKLogger.error(_:_:) // method 
	0xefc00  func CKLogger.fault(_:_:) // method 
	0xefc60  func CKLogger.log(type:_:_:) // method 
 }

 class CoreKnowledge.SRAppMatches : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let matchType : SRAppMatchesType // +0x8 (0x8)
	let bundleIDs : [String] // +0x10 (0x8)
	let signalsJSON : Data // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0xf0490  @objc SRAppMatches.matchType <stripped>
	0xf04d0  @objc SRAppMatches.bundleIDs <stripped>
	0xf0530  @objc SRAppMatches.signalsJSON <stripped>
	0xf0a50  @objc SRAppMatches.initWithMatchType:bundleIDs:signalsJSON: <stripped>
	0xf0b70  @objc SRAppMatches.description <stripped>
	0xf0ec0  @objc SRAppMatches.copyWithZone: <stripped>
	0xf11c0  @objc SRAppMatches.encodeWithCoder: <stripped>
	0xf17a0  @objc SRAppMatches.initWithCoder: <stripped>
	0xf1820  @objc SRAppMatches.init <stripped>
	0xf18a0  @objc SRAppMatches..cxx_destruct <stripped>

	// Swift methods
	0xf0400  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signals:) // init 
	0xf08a0  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signalsJSON:) // init 
	0xf0da0  func SRAppMatches.copy(with:) // method 
	0xf1060  func SRAppMatches.encode(with:) // method 
	0xf1210  class func SRAppMatches.__allocating_init(coder:) // init 
 }

 enum CoreKnowledge.SRAppMatchesType { }
