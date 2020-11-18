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
	0x6e40  @objc CKAppInteractionsContext.init <stripped>
	0x7290  @objc CKAppInteractionsContext.encodeWithCoder: <stripped>
	0x77d0  @objc CKAppInteractionsContext.initWithCoder: <stripped>
	0x78d0  @objc CKAppInteractionsContext.copyWithZone: <stripped>
	0x7dc0  @objc CKAppInteractionsContext.updateDiscardedDonations:forIntentType:andBundleId: <stripped>
	0x7ed0  @objc CKAppInteractionsContext..cxx_destruct <stripped>

	// Swift methods
	0x6b50  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x6b70  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.setter // setter 
	0x6b90  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6bd0  func CKAppInteractionsContext.outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x6c30  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.getter // getter 
	0x6c90  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.setter // setter 
	0x6cf0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6f20  class func CKAppInteractionsContext.__allocating_init(_:) // init 
	0x7090  func CKAppInteractionsContext.encode(with:) // method 
	0x72e0  class func CKAppInteractionsContext.__allocating_init(coder:) // init 
	0x7830  func CKAppInteractionsContext.copy(with:) // method 
	0x7910  func CKAppInteractionsContext.incrementNumberOfOutOfAppLaunchBoundaryDonations(forBundleId:intent:) // method 
	0x7db0  func CKAppInteractionsContext.updateDiscardedDonations(_:forIntentType:andBundleId:) // method 
 }

 class CoreKnowledge.CKKnowledgeStoreUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xc650  @objc CKKnowledgeStoreUtils.init <stripped>
 }

 class CoreKnowledge.CKUserDefaultsBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var kv : NSUserDefaults // +0x10 (0x8)

	// Swift methods
	0xcab0  func CKUserDefaultsBackingStore.name.getter // getter 
	0xcad0  func CKUserDefaultsBackingStore.name.setter // setter 
	0xcae0  func CKUserDefaultsBackingStore.name.modify // modifyCoroutine 
	0xcb20  class func CKUserDefaultsBackingStore.__allocating_init() // init 
	0xce60  func CKUserDefaultsBackingStore.synchronize() // method 
	0xce80  func CKUserDefaultsBackingStore.keys() // method 
	0xd0a0  func CKUserDefaultsBackingStore.keys(matching:) // method 
	0xd3c0  func CKUserDefaultsBackingStore._value(forKey:) // method 
	0xd490  func CKUserDefaultsBackingStore.values() // method 
	0xd520  func CKUserDefaultsBackingStore.values(forKeys:) // method 
	0xd7f0  func CKUserDefaultsBackingStore.values(forKeysMatching:) // method 
	0xddd0  func CKUserDefaultsBackingStore.dictionaryRepresentation() // method 
	0xde40  func CKUserDefaultsBackingStore.dictionaryRepresentation(forKeysMatching:) // method 
	0xe3c0  func CKUserDefaultsBackingStore.triplesComponents(matching:) // method 
	0xe500  func CKUserDefaultsBackingStore.verify(path:completionHandler:) // method 
	0xe660  func CKUserDefaultsBackingStore.setValue(_:forKey:completionHandler:) // method 
	0xe670  func CKUserDefaultsBackingStore.writeBatch() // method 
	0x11480  func CKUserDefaultsBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xe720  func CKUserDefaultsBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xe880  func CKUserDefaultsBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0xe9e0  func CKUserDefaultsBackingStore.removeValue(forKey:) // method 
	0xea80  func CKUserDefaultsBackingStore.removeValues(forKeys:) // method 
	0xeb80  func CKUserDefaultsBackingStore.removeValues(matching:) // method 
	0xedf0  func CKUserDefaultsBackingStore.removeAllValues() // method 
	0xef90  func CKUserDefaultsBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0xf0f0  func CKUserDefaultsBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0xf250  func CKUserDefaultsBackingStore.dropLinks(between:and:completionHandler:) // method 
	0xf3b0  func CKUserDefaultsBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.SaveInteraction : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let interaction : INInteraction // +0x8 (0x8)
	let dkEventUUID : UUID // +0x25 (0x0)

	// ObjC -> Swift bridged methods
	0x11630  @objc SaveInteraction.initWithInteraction:dkEventUUID: <stripped>
	0x11990  @objc SaveInteraction.main <stripped>
	0x11af0  @objc SaveInteraction.init <stripped>
	0x11b60  @objc SaveInteraction..cxx_destruct <stripped>

	// Swift methods
	0x114e0  class func SaveInteraction.__allocating_init(interaction:dkEventUUID:) // init 
 }

 class CoreKnowledge.INInteractionEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interaction : INInteraction

	// Swift methods
	0x11de0  class func INInteractionEncoder.__allocating_init(_:) // init 
	0x11e60  func INInteractionEncoder.base64() // method 
 }

 class CoreKnowledge.INInteractionDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x120b0  class func INInteractionDecoder.__allocating_init() // init 
 }

 class CoreKnowledge.CKPermanentEventStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let knowledgeStore : CKKnowledgeStore

	// ObjC -> Swift bridged methods
	0x12220  @objc CKPermanentEventStore.initWithKnowledgeStore: <stripped>
	0x12460  @objc CKPermanentEventStore.init <stripped>
	0x124e0  @objc CKPermanentEventStore..cxx_destruct <stripped>

	// Swift methods
	0x12150  class func CKPermanentEventStore.__allocating_init(knowledgeStore:) // init 
 }

 class CoreKnowledge.CKInMemoryBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let inMemoryStoreHandler : CKPersistentStoreHandler // +0x10 (0x8)

	// Swift methods
	0x12fc0  func CKInMemoryBackingStore.name.getter // getter 
	0x12fe0  func CKInMemoryBackingStore.name.setter // setter 
	0x12ff0  func CKInMemoryBackingStore.name.modify // modifyCoroutine 
	0x13040  class func CKInMemoryBackingStore.__allocating_init() // init 
	0x13200  func CKInMemoryBackingStore.keys(completionHandler:) // method 
	0x132f0  func CKInMemoryBackingStore.keys(matching:completionHandler:) // method 
	0x133d0  func CKInMemoryBackingStore.value(forKey:completionHandler:) // method 
	0x13610  func CKInMemoryBackingStore.values(completionHandler:) // method 
	0x13700  func CKInMemoryBackingStore.values(forKeys:completionHandler:) // method 
	0x13810  func CKInMemoryBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x138f0  func CKInMemoryBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x139e0  func CKInMemoryBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x13ac0  func CKInMemoryBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x13be0  func CKInMemoryBackingStore.verify(path:completionHandler:) // method 
	0x13ca0  func CKInMemoryBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x13d70  func CKInMemoryBackingStore.writeBatch() // method 
	0x13e20  func CKInMemoryBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x13ee0  func CKInMemoryBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x14160  func CKInMemoryBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x143e0  func CKInMemoryBackingStore.removeValue(forKey:completionHandler:) // method 
	0x145a0  func CKInMemoryBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x14760  func CKInMemoryBackingStore.removeValues(matching:completionHandler:) // method 
	0x14930  func CKInMemoryBackingStore.removeAllValues(completionHandler:) // method 
	0x149e0  func CKInMemoryBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x14a90  func CKInMemoryBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x14b40  func CKInMemoryBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x14bf0  func CKInMemoryBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.BackgroundQueue : NSOperationQueue /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var lock : OS_dispatch_semaphore // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x15320  @objc BackgroundQueue.init <stripped>
	0x15710  @objc BackgroundQueue..cxx_destruct <stripped>

	// Swift methods
	0x153a0  func BackgroundQueue.pause() // method 
	0x156a0  func BackgroundQueue.resume() // method 
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
	0x1e830  @objc CKPersistentStoreHandler.init <stripped>
	0x1f280  @objc CKPersistentStoreHandler.initWithName: <stripped>
	0x1fa80  @objc CKPersistentStoreHandler.keysAndReturnError: <stripped>
	0x20490  @objc CKPersistentStoreHandler.keysMatching:error: <stripped>
	0x20d70  @objc CKPersistentStoreHandler.valuesAndReturnError: <stripped>
	0x217c0  @objc CKPersistentStoreHandler.valuesForKeysMatching:error: <stripped>
	0x221c0  @objc CKPersistentStoreHandler.keysAndValuesAndReturnError: <stripped>
	0x22d50  @objc CKPersistentStoreHandler.keysAndValuesForKeysMatching:error: <stripped>
	0x23830  @objc CKPersistentStoreHandler._valuesForKeys:error: <stripped>
	0x24cd0  @objc CKPersistentStoreHandler.saveKeysAndValues:error: <stripped>
	0x25400  @objc CKPersistentStoreHandler.removeValueForKey:error: <stripped>
	0x25e60  @objc CKPersistentStoreHandler.removeValuesForKeys:error: <stripped>
	0x26950  @objc CKPersistentStoreHandler.removeValuesMatching:error: <stripped>
	0x27210  @objc CKPersistentStoreHandler.removeAllValuesAndReturnError: <stripped>
	0x27fb0  @objc CKPersistentStoreHandler.tripleComponentsMatching:error: <stripped>
	0x280b0  @objc CKPersistentStoreHandler.setWeightForLinkWithLabel:between:and:toValue:error: <stripped>
	0x28230  @objc CKPersistentStoreHandler.increaseWeightForLinkWithLabel:between:and: <stripped>
	0x28260  @objc CKPersistentStoreHandler.decreaseWeightForLinkWithLabel:between:and: <stripped>
	0x28b40  @objc CKPersistentStoreHandler.dropLinkWithLabel:between:and:error: <stripped>
	0x28cc0  @objc CKPersistentStoreHandler.dropLinksWithLabel:from:error: <stripped>
	0x292c0  @objc CKPersistentStoreHandler.dropLinksBetween:and:error: <stripped>
	0x29a20  @objc CKPersistentStoreHandler..cxx_destruct <stripped>

	// Swift methods
	0x1e5b0  func CKPersistentStoreHandler.connection.getter // getter 
	0x1e5f0  func CKPersistentStoreHandler.connection.setter // setter 
	0x1e640  func CKPersistentStoreHandler.connection.modify // modifyCoroutine 
	0x1e690  class func static CKPersistentStoreHandler.inMemoryHandler() // method 
	0x1e8b0  class func CKPersistentStoreHandler.__allocating_init(name:) // init 
	0x1f2b0  func CKPersistentStoreHandler.keys() // method 
	0x1fb20  func CKPersistentStoreHandler.keys(matching:) // method 
	0x20560  func CKPersistentStoreHandler.values() // method 
	0x20e10  func CKPersistentStoreHandler.values(forKeysMatching:) // method 
	0x21890  func CKPersistentStoreHandler.keysAndValues() // method 
	0x22270  func CKPersistentStoreHandler.keysAndValues(forKeysMatching:) // method 
	0x22e30  func CKPersistentStoreHandler.selectQuery(project:whereField:isIn:) // method 
	0x22e40  func CKPersistentStoreHandler._values(forKeys:) // method 
	0x23910  func CKPersistentStoreHandler.save(keysAndValues:) // method 
	0x24db0  func CKPersistentStoreHandler.removeValue(forKey:) // method 
	0x254d0  func CKPersistentStoreHandler._removeValues(forKeys:) // method 
	0x25d10  func CKPersistentStoreHandler.removeValues(forKeys:) // method 
	0x25f30  func CKPersistentStoreHandler._removeValues(matching:) // method 
	0x267e0  func CKPersistentStoreHandler.removeValues(matching:) // method 
	0x269f0  func CKPersistentStoreHandler.removeAllValues() // method 
	0x27330  func CKPersistentStoreHandler.tripleComponents(matching:) // method 
	0x28080  func CKPersistentStoreHandler.setWeight(forLinkWithLabel:between:and:toValue:) // method 
	0x28210  func CKPersistentStoreHandler.increaseWeight(forLinkWithLabel:between:and:) // method 
	0x28250  func CKPersistentStoreHandler.decreaseWeight(forLinkWithLabel:between:and:) // method 
	0x28370  func CKPersistentStoreHandler.decreaseWeights(between:and:) // method 
	0x28b20  func CKPersistentStoreHandler.dropLink(withLabel:between:and:) // method 
	0x28ca0  func CKPersistentStoreHandler.dropLinks(withLabel:from:) // method 
	0x28dd0  func CKPersistentStoreHandler.dropLinks(between:and:) // method 
	0x293e0  func CKPersistentStoreHandler.deserializeValue(_:) // method 
 }

 class CoreKnowledge.CKSiriRemembers : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x328f0  @objc CKSiriRemembers.init <stripped>
	0x32990  @objc CKSiriRemembers..cxx_destruct <stripped>

	// Swift methods
	0x31ef0  class func static CKSiriRemembers.saveInteraction(interaction:) // method 
	0x31f70  class func static CKSiriRemembers.findAppMatches(forIntent:candidateBundleIDs:completionHandler:) // method 
	0x320b0  class func static CKSiriRemembers.findAppMatches(forJSONIntent:candidateBundleIDs:completionHandler:) // method 
	0x321d0  class func static CKSiriRemembers.findRelativeAppUsageProbabilities(bundleIDs:days:completionHandler:) // method 
 }

 class CoreKnowledge.DeferrableXPCOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var activity : OS_xpc_object? // +0x8 (0x8)
	var isDeferred : Bool // +0x10 (0x1)
	var completionKVObservation : NSKeyValueObservation? // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x3f230  @objc DeferrableXPCOperation.init <stripped>
	0x3f590  @objc DeferrableXPCOperation..cxx_destruct <stripped>

	// Swift methods
	0x3ed70  func DeferrableXPCOperation.activity.getter // getter 
	0x3edb0  func DeferrableXPCOperation.activity.setter // setter 
	0x3ee00  func DeferrableXPCOperation.activity.modify // modifyCoroutine 
	0x3eee0  func DeferrableXPCOperation.isDeferred.getter // getter 
	0x3ef10  func DeferrableXPCOperation.isDeferred.setter // setter 
	0x3ef50  func DeferrableXPCOperation.isDeferred.modify // modifyCoroutine 
	0x3f040  func DeferrableXPCOperation.completionKVObservation.getter // getter 
	0x3f080  func DeferrableXPCOperation.completionKVObservation.setter // setter 
	0x3f0d0  func DeferrableXPCOperation.completionKVObservation.modify // modifyCoroutine 
	0x3f250  class func DeferrableXPCOperation.__allocating_init(activity:) // init 
	0x3f3a0  func DeferrableXPCOperation.isCancelledOrDeferred.getter // getter 
 }

 class CoreKnowledge.CKSQLBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var name : String // +0x10 (0x10)
	let connection : NSXPCConnection // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x3ff00  @objc CKSQLBackingStore.initWithName: <stripped>

	// Swift methods
	0x3fc80  func CKSQLBackingStore.name.getter // getter 
	0x3fcc0  func CKSQLBackingStore.name.setter // setter 
	0x3fd00  func CKSQLBackingStore.name.modify // modifyCoroutine 
	0x3fd50  class func CKSQLBackingStore.__allocating_init(name:) // init 
	0x3ffb0  class func static CKSQLBackingStore.mainInstance() // method 
	0x40010  func CKSQLBackingStore.daemon(errorHandler:) // method 
	0x40a80  func CKSQLBackingStore.keys(completionHandler:) // method 
	0x40d00  func CKSQLBackingStore.keys(matching:completionHandler:) // method 
	0x40f10  func CKSQLBackingStore.value(forKey:completionHandler:) // method 
	0x411d0  func CKSQLBackingStore.values(completionHandler:) // method 
	0x41480  func CKSQLBackingStore.values(forKeys:completionHandler:) // method 
	0x418f0  func CKSQLBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x41b00  func CKSQLBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x41dc0  func CKSQLBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x41fd0  func CKSQLBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x42280  func CKSQLBackingStore.verify(path:completionHandler:) // method 
	0x423e0  func CKSQLBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x427d0  func CKSQLBackingStore.writeBatch() // method 
	0x42850  func CKSQLBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x42af0  func CKSQLBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x42e30  func CKSQLBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x43110  func CKSQLBackingStore.removeValue(forKey:completionHandler:) // method 
	0x43330  func CKSQLBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x43550  func CKSQLBackingStore.removeValues(matching:completionHandler:) // method 
	0x43740  func CKSQLBackingStore.removeAllValues(completionHandler:) // method 
	0x43920  func CKSQLBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x43bc0  func CKSQLBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x43e50  func CKSQLBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x440c0  func CKSQLBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
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
	0x47d00  @objc SRInternalDatabaseManager.init <stripped>
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
	0x4d610  class func Connection.__allocating_init(_:readonly:) // init 
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
	0x61b40  @objc CKCloudKitBackingStore.initWithName: <stripped>

	// Swift methods
	0x60020  func CKCloudKitBackingStore.triplesComponents(matching:) // method 
 }

 class CoreKnowledge.CKTriple : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : (String, String, String, Int) // +0x8 (0x38)

	// ObjC -> Swift bridged methods
	0x62050  @objc CKTriple.subject <stripped>
	0x620e0  @objc CKTriple.predicate <stripped>
	0x621b0  @objc CKTriple.object <stripped>
	0x62280  @objc CKTriple.weight <stripped>
	0x622c0  @objc CKTriple.description <stripped>
	0x626b0  @objc CKTriple.hash <stripped>
	0x63150  @objc CKTriple.isEqual: <stripped>
	0x63400  @objc CKTriple.initWithSubject:predicate:object:weight: <stripped>
	0x637e0  @objc CKTriple.encodeWithCoder: <stripped>
	0x63d40  @objc CKTriple.initWithCoder: <stripped>
	0x64110  @objc CKTriple.init <stripped>
	0x64190  @objc CKTriple..cxx_destruct <stripped>

	// Swift methods
	0x620b0  func CKTriple.subject.getter // getter 
	0x62160  func CKTriple.predicate.getter // getter 
	0x62230  func CKTriple.object.getter // getter 
	0x622a0  func CKTriple.weight.getter // getter 
	0x631f0  class func CKTriple.__allocating_init(tuple:) // init 
	0x61ef0  class func CKTriple.__allocating_init(subject:predicate:object:weight:) // init 
	0x63560  func CKTriple.encode(with:) // method 
	0x63830  class func CKTriple.__allocating_init(coder:) // init 
	0x63da0  func CKTriple.dictionary() // method 
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
	0x6e750  @objc ScrubDeletedRecords.initSinceDate: <stripped>
	0x6f820  @objc ScrubDeletedRecords.main <stripped>
	0x6f8a0  @objc ScrubDeletedRecords.init <stripped>
	0x6f930  @objc ScrubDeletedRecords..cxx_destruct <stripped>

	// Swift methods
	0x6e5b0  class func ScrubDeletedRecords.__allocating_init(sinceDate:) // init 
 }

 struct CoreKnowledge.CKOntology { }

 class CoreKnowledge.CoreKnowledgeXPCUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x761a0  @objc CoreKnowledgeXPCUtils.init <stripped>
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
	0x79b30  @objc CKJSONLDGraph.initWithEntities: <stripped>
	0x79b80  @objc CKJSONLDGraph.entities <stripped>
	0x7a8c0  @objc CKJSONLDGraph.linkedDataWithCompletionHandler: <stripped>
	0x7aa30  @objc CKJSONLDGraph.init <stripped>
	0x7aab0  @objc CKJSONLDGraph..cxx_destruct <stripped>

	// Swift methods
	0x79aa0  class func CKJSONLDGraph.__allocating_init(withEntities:) // init 
	0x79be0  func CKJSONLDGraph.entities.getter // getter 
	0x79e90  func CKJSONLDGraph.linkedData(completionHandler:) // method 
 }

 class CoreKnowledge.CKEphemeralEventSequence : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x87c90  @objc CKEphemeralEventSequence.init <stripped>
	0x87d90  @objc CKEphemeralEventSequence..cxx_destruct <stripped>

	// Swift methods
	0x87cb0  func CKEphemeralEventSequence.historyStartEvent.getter // getter 
 }

 class CoreKnowledge.XPCTaskScheduler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : BackgroundQueue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x8a170  @objc XPCTaskScheduler.initWithQueue: <stripped>
	0x8a3c0  @objc XPCTaskScheduler.scheduleAllTasks <stripped>
	0x8ac00  @objc XPCTaskScheduler.init <stripped>
	0x8ac80  @objc XPCTaskScheduler..cxx_destruct <stripped>

	// Swift methods
	0x8a070  class func XPCTaskScheduler.__allocating_init(queue:) // init 
	0x8a1e0  func XPCTaskScheduler.scheduleAllTasks() // method 
	0x8a460  func XPCTaskScheduler.add(id:repeatInterval:makeOp:) // method 
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
	0x8bf10  class func Matcher.__allocating_init(_:value:) // init 
	0x8bfb0  func Matcher.evaluate(on:) // method 
	0x8c550  func Matcher.sql.getter // getter 
	0x8c840  func Matcher.sql.setter // setter 
	0x8c860  func Matcher.sql.modify // modifyCoroutine 
 }

 class CoreKnowledge.CKGenericCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : ConditionType
	var negated : Bool
	var $__lazy_storage_$_sql : String?

	// ObjC -> Swift bridged methods
	0x8c9c0  @objc CKGenericCondition.predicate <stripped>
	0x8cc60  @objc CKGenericCondition.description <stripped>
	0x8cf00  @objc CKGenericCondition.initWithValue: <stripped>
	0x8d080  @objc CKGenericCondition.initWithMatchType:value:negated: <stripped>
	0x8d320  @objc CKGenericCondition.and: <stripped>
	0x8d440  @objc CKGenericCondition.or: <stripped>
	0x8e100  @objc CKGenericCondition.evaluateOn: <stripped>
	0x8e280  @objc CKGenericCondition.copyWithZone: <stripped>
	0x8e720  @objc CKGenericCondition.encodeWithCoder: <stripped>
	0x8ee90  @objc CKGenericCondition.initWithCoder: <stripped>
	0x8eef0  @objc CKGenericCondition.init <stripped>
	0x8ef40  @objc CKGenericCondition..cxx_destruct <stripped>

	// Swift methods
	0x8cac0  func CKGenericCondition.predicate.getter // getter 
	0x8cdd0  class func CKGenericCondition.__allocating_init(value:) // init 
	0x8b6f0  class func CKGenericCondition.__allocating_init(_:value:negated:) // init 
	0x8d220  func CKGenericCondition.and(_:) // method 
	0x8d340  func CKGenericCondition.or(_:) // method 
	0x8d570  func CKGenericCondition.sql.getter // getter 
	0x8dd10  func CKGenericCondition.sql.setter // setter 
	0x8dd40  func CKGenericCondition.sql.modify // modifyCoroutine 
	0x8de70  func CKGenericCondition.evaluate(on:) // method 
	0x8e1a0  func CKGenericCondition.copy(with:) // method 
	0x8e3e0  func CKGenericCondition.encode(with:) // method 
	0x8e770  class func CKGenericCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKTripleCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var rawCondition : CKGenericCondition

	// ObjC -> Swift bridged methods
	0x8f100  @objc CKTripleCondition.description <stripped>
	0x8f620  @objc CKTripleCondition.initWithValue: <stripped>
	0x92780  @objc CKTripleCondition.initWithSubject:predicate:object: <stripped>
	0x92960  @objc CKTripleCondition.and: <stripped>
	0x92bb0  @objc CKTripleCondition.or: <stripped>
	0x92da0  @objc CKTripleCondition.evaluateOn: <stripped>
	0x92f50  @objc CKTripleCondition.copyWithZone: <stripped>
	0x93210  @objc CKTripleCondition.encodeWithCoder: <stripped>
	0x935b0  @objc CKTripleCondition.initWithCoder: <stripped>
	0x93630  @objc CKTripleCondition.init <stripped>
	0x936c0  @objc CKTripleCondition..cxx_destruct <stripped>

	// Swift methods
	0x8f020  func CKTripleCondition.rawCondition.getter // getter 
	0x8f060  func CKTripleCondition.rawCondition.setter // setter 
	0x8f0b0  func CKTripleCondition.rawCondition.modify // modifyCoroutine 
	0x8f250  class func CKTripleCondition.__allocating_init(_:) // init 
	0x92820  func CKTripleCondition.and(_:) // method 
	0x92a70  func CKTripleCondition.or(_:) // method 
	0x92cc0  func CKTripleCondition.evaluate(on:) // method 
	0x92e70  func CKTripleCondition.copy(with:) // method 
	0x93170  func CKTripleCondition.encode(with:) // method 
	0x932b0  class func CKTripleCondition.__allocating_init(coder:) // init 
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
	0x9ebf0  @objc SRIngestor.init <stripped>
	0x9ec60  @objc SRIngestor..cxx_destruct <stripped>

	// Swift methods
	0x9bfa0  func SRIngestor.saveInteraction() // method 
	0x9c590  func SRIngestor.upsertIntent() // method 
	0x9d210  func SRIngestor.upsertEntity(_:entity:) // method 
	0x9bdf0  class func SRIngestor.__allocating_init(db:interaction:dkEventUUID:) // init 
 }

 class CoreKnowledge.CKHistoricEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
	var _firstSeen : Date // +0x1666a6 (0x0)
	var _lastSeen : Date // +0x20d0 (0x0)
	var _frequency : Int // +0x0 (0x8)
	var _lastDuration : Double // +0x80000400 (0x8)
	var _totalDuration : Double // +0x0 (0x8)
	var _metadata : [String : Any] // +0x74735f5f (0x8)

	// ObjC -> Swift bridged methods
	0x9f8d0  @objc CKHistoricEvent.identifier <stripped>
	0xa0220  @objc CKHistoricEvent.firstSeen <stripped>
	0xa0310  @objc CKHistoricEvent.lastSeen <stripped>
	0xa0400  @objc CKHistoricEvent.frequency <stripped>
	0xa04b0  @objc CKHistoricEvent.lastDuration <stripped>
	0xa0560  @objc CKHistoricEvent.totalDuration <stripped>
	0xa0610  @objc CKHistoricEvent.metadata <stripped>
	0xa0d50  @objc CKHistoricEvent.encodeWithCoder: <stripped>
	0xa1a00  @objc CKHistoricEvent.initWithCoder: <stripped>
	0xa1af0  @objc CKHistoricEvent.init: <stripped>
	0xa1b90  @objc CKHistoricEvent.initFrom:withIdentifier: <stripped>
	0xa1ca0  @objc CKHistoricEvent.copyWithZone: <stripped>
	0xa1d30  @objc CKHistoricEvent.init <stripped>
	0xa1da0  @objc CKHistoricEvent..cxx_destruct <stripped>

	// Swift methods
	0x9fa20  func CKHistoricEvent._firstSeen.getter // getter 
	0x9fa40  func CKHistoricEvent._firstSeen.setter // setter 
	0x9fa60  func CKHistoricEvent._firstSeen.modify // modifyCoroutine 
	0x9fb80  func CKHistoricEvent._lastSeen.getter // getter 
	0x9fbf0  func CKHistoricEvent._lastSeen.setter // setter 
	0x9fc70  func CKHistoricEvent._lastSeen.modify // modifyCoroutine 
	0x9fd50  func CKHistoricEvent._frequency.getter // getter 
	0x9fd80  func CKHistoricEvent._frequency.setter // setter 
	0x9fdc0  func CKHistoricEvent._frequency.modify // modifyCoroutine 
	0x9fea0  func CKHistoricEvent._lastDuration.getter // getter 
	0x9fec0  func CKHistoricEvent._lastDuration.setter // setter 
	0x9fee0  func CKHistoricEvent._lastDuration.modify // modifyCoroutine 
	0x9ffc0  func CKHistoricEvent._totalDuration.getter // getter 
	0xa0010  func CKHistoricEvent._totalDuration.setter // setter 
	0xa0070  func CKHistoricEvent._totalDuration.modify // modifyCoroutine 
	0xa0150  func CKHistoricEvent._metadata.getter // getter 
	0xa0190  func CKHistoricEvent._metadata.setter // setter 
	0xa01e0  func CKHistoricEvent._metadata.modify // modifyCoroutine 
	0xa02a0  func CKHistoricEvent.firstSeen.getter // getter 
	0xa0390  func CKHistoricEvent.lastSeen.getter // getter 
	0xa0450  func CKHistoricEvent.frequency.getter // getter 
	0xa0500  func CKHistoricEvent.lastDuration.getter // getter 
	0xa05b0  func CKHistoricEvent.totalDuration.getter // getter 
	0xa0690  func CKHistoricEvent.metadata.getter // getter 
	0x9f530  class func CKHistoricEvent.__allocating_init(identifier:firstSeen:lastSeen:frequency:lastDuration:totalDuration:metadata:) // init 
	0xa08b0  func CKHistoricEvent.encode(with:) // method 
	0xa0da0  class func CKHistoricEvent.__allocating_init(coder:) // init 
	0xa1a60  class func CKHistoricEvent.__allocating_init(_:) // init 
	0xa1be0  func CKHistoricEvent.copy(with:) // method 
 }

 class CoreKnowledge.CKClosure : NSObject /usr/lib/libobjc.A.dylib, CKExecutableClosure {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)
	let entity : CKEntity // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xa3490  @objc CKClosure.initWithCoder: <stripped>
	0xa3700  @objc CKClosure.encodeWithCoder: <stripped>
	0xa37b0  @objc CKClosure.init <stripped>
	0xa3830  @objc CKClosure..cxx_destruct <stripped>

	// Swift methods
	0xa2cd0  class func CKClosure.__allocating_init(coder:) // init 
	0xa34c0  func CKClosure.encode(with:) // method 
	0xa3750  func CKClosure.execute() // method 
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
	0xa5500  @objc CKLogic.hash <stripped>
	0xa5b00  @objc CKLogic.identifier <stripped>
	0xa6200  @objc CKLogic.andExistsLink:to:error: <stripped>
	0xa6810  @objc CKLogic.andNotExistsLink:to:error: <stripped>
	0xa6bb0  @objc CKLogic.and: <stripped>
	0xa6c60  @objc CKLogic.init <stripped>
	0xa6ce0  @objc CKLogic..cxx_destruct <stripped>

	// Swift methods
	0xa52d0  func CKLogic.body.getter // getter 
	0xa52f0  func CKLogic.body.setter // setter 
	0xa5310  func CKLogic.body.modify // modifyCoroutine 
	0xa53f0  func CKLogic.negatedBody.getter // getter 
	0xa5450  func CKLogic.negatedBody.setter // setter 
	0xa54b0  func CKLogic.negatedBody.modify // modifyCoroutine 
	0xa5b60  func CKLogic.identifier.getter // getter 
	0xa5c90  class func static CKLogic.ifExistsLink(_:to:) // method 
	0xa5cc0  func CKLogic.andExistsLink(_:to:) // method 
	0xa6220  class func static CKLogic.ifNotExistsLink(_:to:) // method 
	0xa62d0  func CKLogic.andNotExistsLink(_:to:) // method 
	0xa6920  func CKLogic.and(_:) // method 
 }

 enum CoreKnowledge.ErrorTracker { }

 class CoreKnowledge.ScrubOldRecords : DeferrableXPCOperation {

	// Properties
	let cutoffDate : Date? // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0xac0c0  @objc ScrubOldRecords.main <stripped>
	0xac140  @objc ScrubOldRecords.init <stripped>
	0xac1d0  @objc ScrubOldRecords..cxx_destruct <stripped>

	// Swift methods
	0xab170  class func ScrubOldRecords.__allocating_init(olderThan:) // init 
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
	0xb30d0  @objc CKEntity.isEqual: <stripped>
	0xb3170  @objc CKEntity.hash <stripped>
	0xb3340  @objc CKEntity.description <stripped>
	0xb39a0  @objc CKEntity.valueForKey: <stripped>
	0xb3aa0  @objc CKEntity.valueForKey:completionHandler: <stripped>
	0xb4440  @objc CKEntity.valuesForKeys:completionHandler: <stripped>
	0xb4810  @objc CKEntity.setValue:forKey:completionHandler: <stripped>
	0xb5170  @objc CKEntity.setValuesForKeys:completionHandler: <stripped>
	0xb5280  @objc CKEntity.removeValueForKey:completionHandler: <stripped>
	0xb6350  @objc CKEntity.linkTo:withPredicate:completionHandler: <stripped>
	0xb6820  @objc CKEntity.linkTo:withPredicate:error: <stripped>
	0xb6a40  @objc CKEntity.unlinkTo:withPredicate:ignoreWeights:completionHandler: <stripped>
	0xb6fa0  @objc CKEntity.removeWithCompletionHandler: <stripped>
	0xbb860  @objc CKEntity.linksTo:matchType:completionHandler: <stripped>
	0xbbd30  @objc CKEntity.linksTo:matchType:error: <stripped>
	0xbbe50  @objc CKEntity.init <stripped>
	0xbbed0  @objc CKEntity..cxx_destruct <stripped>

	// Swift methods
	0xb2dc0  class func CKEntity.__allocating_init(identifier:knowledgeStore:) // init 
	0xb3a60  func CKEntity.value(forKey:completionHandler:) // method 
	0xb3b80  func CKEntity.values(forKeys:completionHandler:) // method 
	0xb3d90  func CKEntity.values(forKeys:completionHandler:) // method 
	0xb44f0  func CKEntity.setValue(_:forKey:completionHandler:) // method 
	0xb4900  func CKEntity.setValues(forKeys:completionHandler:) // method 
	0xb5240  func CKEntity.removeValue(forKey:completionHandler:) // method 
	0xb5e10  func CKEntity.link(to:withPredicate:completionHandler:) // method 
	0xb6410  func CKEntity.link(to:withPredicate:) // method 
	0xb6910  func CKEntity.unlink(to:withPredicate:ignoreWeights:completionHandler:) // method 
	0xb6b20  func CKEntity.unlink(to:withPredicate:ignoreWeights:) // method 
	0xb6f20  func CKEntity.remove(completionHandler:) // method 
	0xb7080  func CKEntity.remove() // method 
	0xb7410  func CKEntity.path(to:withRadius:completionHandler:) // method 
	0xb79a0  func CKEntity.path(to:withRadius:) // method 
	0xb79c0  func CKEntity.path(to:radius:) // method 
	0xb8680  func CKEntity.linkedEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xb8c90  func CKEntity.linkedEntities(withPredicate:matchType:complement:) // method 
	0xb8ca0  func CKEntity.linkedEntities(completionHandler:) // method 
	0xb96d0  func CKEntity.linkedEntities() // method 
	0xb9aa0  func CKEntity.linkingEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xba0a0  func CKEntity.linkingEntities(withPredicate:matchType:complement:) // method 
	0xba0b0  func CKEntity.linkingEntities(completionHandler:) // method 
	0xba4b0  func CKEntity.linkingEntities() // method 
	0xbaeb0  func CKEntity.links(to:matchType:completionHandler:) // method 
	0xbb8e0  func CKEntity.links(to:matchType:) // method 
 }

 class CoreKnowledge.CKTimedDispatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x10 (0x8)
	let semaphore : OS_dispatch_semaphore // +0x18 (0x8)
	var _interruptError : Error? // +0x20 (0x8)
	let _timeout : DispatchTime // +0x45545f5f (0x0)
	var _group : OS_dispatch_group? // +0x0 (0x8)

	// Swift methods
	0xc0f10  func CKTimedDispatch._interruptError.getter // getter 
	0xc0f40  func CKTimedDispatch._interruptError.setter // setter 
	0xc0f80  func CKTimedDispatch._interruptError.modify // modifyCoroutine 
	0xc1080  func CKTimedDispatch._group.getter // getter 
	0xc10c0  func CKTimedDispatch._group.setter // setter 
	0xc1110  func CKTimedDispatch._group.modify // modifyCoroutine 
	0xc1150  func CKTimedDispatch.group.getter // getter 
	0xc0180  class func CKTimedDispatch.__allocating_init(timeout:) // init 
	0xc14a0  func CKTimedDispatch.interrupt(_:) // method 
	0xc1520  func CKTimedDispatch.wait() // method 
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
	0xc2f50  @objc CKKnowledgeStore.delegate <stripped>
	0xc2fa0  @objc CKKnowledgeStore.setDelegate: <stripped>
	0xc3000  @objc CKKnowledgeStore.name <stripped>
	0xc31e0  @objc CKKnowledgeStore.filePathURL <stripped>
	0xc3270  @objc CKKnowledgeStore.hash <stripped>
	0xc3530  @objc CKKnowledgeStore.isEqual: <stripped>
	0xc3820  @objc CKKnowledgeStore.init <stripped>
	0xc38a0  @objc CKKnowledgeStore..cxx_destruct <stripped>

	// Swift methods
	0xc1ff0  func CKKnowledgeStore.delegate.getter // getter 
	0xc2030  func CKKnowledgeStore.delegate.setter // setter 
	0xc2080  func CKKnowledgeStore.delegate.modify // modifyCoroutine 
	0xc20d0  func CKKnowledgeStore.name.getter // getter 
	0xc2110  func CKKnowledgeStore.filePath.getter // getter 
	0xc23a0  class func static CKKnowledgeStore.defaultKnowledgeStore() // method 
	0xc2480  class func static CKKnowledgeStore.defaultSynchedKnowledgeStore() // method 
	0xc24d0  class func static CKKnowledgeStore.inMemoryKnowledgeStore() // method 
	0xc2520  class func static CKKnowledgeStore.userDefaultsKnowledgeStore() // method 
	0xc2570  class func static CKKnowledgeStore.knowledgeStore(withName:) // method 
	0xc2580  class func static CKKnowledgeStore.synchedKnowledgeStore(withName:) // method 
	0xc25f0  class func static CKKnowledgeStore.store(_:) // method 
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
	0xc4d50  @objc AppUsageProbabilityFinder.init <stripped>

	// Swift methods
	0xc4a80  class func static AppUsageProbabilityFinder.relativeAppUsageProbabilities(bundleIDs:days:) // method 
 }

 class CoreKnowledge.SRAppMatcher : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var db : Connection // +0x8 (0x8)
	var domain : String // +0x10 (0x10)
	var allowedBundleIDs : [String] // +0x20 (0x8)
	var memorableEntities : [MemorableEntity] // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0xc9350  @objc SRAppMatcher.init <stripped>
	0xc93d0  @objc SRAppMatcher..cxx_destruct <stripped>

	// Swift methods
	0xc65b0  func SRAppMatcher.appMatches() // method 
	0xc6da0  func SRAppMatcher.findEntitySignals() // method 
	0xc7460  func SRAppMatcher.findMatchingEntities(forEntity:) // method 
	0xc81d0  func SRAppMatcher.findIntentSignals(entitySignals:) // method 
	0xc9080  func SRAppMatcher.findEntityMatchSignals(allIntentSignals:) // method 
	0xc9230  func SRAppMatcher.decideResult(entityMatchSignals:appUsageSignals:) // method 
	0xc92e0  func SRAppMatcher.decide(byEntityMatch:withAppUsageSignals:) // method 
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
	0xd82a0  class func Statement.__allocating_init(_:_:) // init 
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
	0xdbb20  @objc CKDeviceActivityStore.init <stripped>
	0xdbba0  @objc CKDeviceActivityStore..cxx_destruct <stripped>

	// Swift methods
	0xdb8d0  class func CKDeviceActivityStore.__allocating_init(store:) // init 
 }

 class CoreKnowledge.CKAbstractWriteBatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var buffer : [String : Any?]
	let backingStore : CKBackingStore

	// ObjC -> Swift bridged methods
	0xdcc10  @objc CKAbstractWriteBatch.setObject:forKey: <stripped>

	// Swift methods
	0xdca60  func CKAbstractWriteBatch.buffer.getter // getter 
	0xdca90  func CKAbstractWriteBatch.buffer.setter // setter 
	0xdcad0  func CKAbstractWriteBatch.buffer.modify // modifyCoroutine 
	0xdcb20  class func CKAbstractWriteBatch.__allocating_init(backingStore:) // init 
	0xdcc00  func CKAbstractWriteBatch.setObject(_:forKey:) // method 
 }

 class CoreKnowledge.CKInMemoryWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xdcdc0  @objc CKInMemoryWriteBatch.writeWithCompletionHandler: <stripped>
	0xdd7c0  @objc CKInMemoryWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xdcd20  func CKInMemoryWriteBatch.write(completionHandler:) // method 
	0xdce70  func CKInMemoryWriteBatch.write() // method 
 }

 class CoreKnowledge.CKUserDefaultsWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xdcdc0  @objc CKUserDefaultsWriteBatch.writeWithCompletionHandler: <stripped>
	0xde2c0  @objc CKUserDefaultsWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xdd880  func CKUserDefaultsWriteBatch.write(completionHandler:) // method 
	0xdd920  func CKUserDefaultsWriteBatch.write() // method 
 }

 class CoreKnowledge.CKSQLWriteBatch : CKAbstractWriteBatch {

	// Properties
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
	0xdf870  @objc CKSQLWriteBatch.writeWithCompletionHandler: <stripped>
	0xdfdf0  @objc CKSQLWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xde3b0  func CKSQLWriteBatch.queue.getter // getter 
	0xde3e0  func CKSQLWriteBatch.queue.setter // setter 
	0xde420  func CKSQLWriteBatch.queue.modify // modifyCoroutine 
	0xdee50  func CKSQLWriteBatch.write(completionHandler:) // method 
	0xdf890  func CKSQLWriteBatch.write() // method 
 }

 class CoreKnowledge.CKCloudKitWriteBatch : CKSQLWriteBatch {
	// ObjC -> Swift bridged methods
	0xe1520  @objc CKCloudKitWriteBatch.writeWithCompletionHandler: <stripped>
 }

 class CoreKnowledge.BackfillInteractions : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let handler : (_:)? // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0xe39d0  @objc BackfillInteractions.main <stripped>
	0xe3ae0  @objc BackfillInteractions.init <stripped>
	0xe3b60  @objc BackfillInteractions..cxx_destruct <stripped>

	// Swift methods
	0xe2d30  class func BackfillInteractions.__allocating_init(handler:) // init 
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
	0xeb1f0  class func CKLogger.__allocating_init(_:) // init 
	0xeb260  func CKLogger.debug(_:_:) // method 
	0xeb280  func CKLogger.info(_:_:) // method 
	0xeb2a0  func CKLogger.error(_:_:) // method 
	0xeb2c0  func CKLogger.fault(_:_:) // method 
	0xeb320  func CKLogger.log(type:_:_:) // method 
 }

 class CoreKnowledge.SRAppMatches : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let matchType : SRAppMatchesType // +0x8 (0x8)
	let bundleIDs : [String] // +0x10 (0x8)
	let signalsJSON : Data // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0xebb60  @objc SRAppMatches.matchType <stripped>
	0xebba0  @objc SRAppMatches.bundleIDs <stripped>
	0xebc00  @objc SRAppMatches.signalsJSON <stripped>
	0xebe40  @objc SRAppMatches.initWithMatchType:bundleIDs:signalsJSON: <stripped>
	0xebf60  @objc SRAppMatches.description <stripped>
	0xec2b0  @objc SRAppMatches.copyWithZone: <stripped>
	0xec5b0  @objc SRAppMatches.encodeWithCoder: <stripped>
	0xecb90  @objc SRAppMatches.initWithCoder: <stripped>
	0xecc10  @objc SRAppMatches.init <stripped>
	0xecc90  @objc SRAppMatches..cxx_destruct <stripped>

	// Swift methods
	0xebac0  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signals:) // init 
	0xebc90  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signalsJSON:) // init 
	0xec190  func SRAppMatches.copy(with:) // method 
	0xec450  func SRAppMatches.encode(with:) // method 
	0xec600  class func SRAppMatches.__allocating_init(coder:) // init 
 }

 enum CoreKnowledge.SRAppMatchesType { }
