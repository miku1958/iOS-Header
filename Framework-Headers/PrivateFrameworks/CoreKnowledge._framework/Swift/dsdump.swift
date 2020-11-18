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

 enum __C.ComparisonResult { }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 class CoreKnowledge.CKAppInteractionsContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId : [String : [String : Int]] // +0x8 (0x8)
	var numberOfDiscardedDonationsByIntentTypeAndBundleId : [String : [String : Double]] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6660  @objc CKAppInteractionsContext.init <stripped>
	0x6a20  @objc CKAppInteractionsContext.encodeWithCoder: <stripped>
	0x6e00  @objc CKAppInteractionsContext.initWithCoder: <stripped>
	0x6ea0  @objc CKAppInteractionsContext.copyWithZone: <stripped>
	0x7650  @objc CKAppInteractionsContext.updateDiscardedDonations:forIntentType:andBundleId: <stripped>
	0x7740  @objc CKAppInteractionsContext..cxx_destruct <stripped>

	// Swift methods
	0x63d0  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x63f0  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.setter // setter 
	0x6410  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6450  func CKAppInteractionsContext.outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x6470  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.getter // getter 
	0x64d0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.setter // setter 
	0x6530  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6730  class func CKAppInteractionsContext.__allocating_init(_:) // init 
	0x68e0  func CKAppInteractionsContext.encode(with:) // method 
	0x6a70  class func CKAppInteractionsContext.__allocating_init(coder:) // init 
	0x6e50  func CKAppInteractionsContext.copy(with:) // method 
	0x6ee0  func CKAppInteractionsContext.incrementNumberOfOutOfAppLaunchBoundaryDonations(forBundleId:intent:) // method 
	0x74d0  func CKAppInteractionsContext.updateDiscardedDonations(_:forIntentType:andBundleId:) // method 
 }

 class CoreKnowledge.CKKnowledgeStoreUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xb3d0  @objc CKKnowledgeStoreUtils.init <stripped>
 }

 class CoreKnowledge.CKUserDefaultsBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var kv : NSUserDefaults // +0x10 (0x8)

	// Swift methods
	0xb810  func CKUserDefaultsBackingStore.name.getter // getter 
	0xb830  func CKUserDefaultsBackingStore.name.setter // setter 
	0xb840  func CKUserDefaultsBackingStore.name.modify // modifyCoroutine 
	0xb880  class func CKUserDefaultsBackingStore.__allocating_init() // init 
	0xba70  func CKUserDefaultsBackingStore.synchronize() // method 
	0xba90  func CKUserDefaultsBackingStore.keys() // method 
	0xbca0  func CKUserDefaultsBackingStore.keys(matching:) // method 
	0xbf50  func CKUserDefaultsBackingStore._value(forKey:) // method 
	0xc010  func CKUserDefaultsBackingStore.values() // method 
	0xc0a0  func CKUserDefaultsBackingStore.values(forKeys:) // method 
	0xc280  func CKUserDefaultsBackingStore.values(forKeysMatching:) // method 
	0xc680  func CKUserDefaultsBackingStore.dictionaryRepresentation() // method 
	0xc6f0  func CKUserDefaultsBackingStore.dictionaryRepresentation(forKeysMatching:) // method 
	0xcaa0  func CKUserDefaultsBackingStore.triplesComponents(matching:) // method 
	0xcb70  func CKUserDefaultsBackingStore.verify(path:completionHandler:) // method 
	0xcc50  func CKUserDefaultsBackingStore.setValue(_:forKey:completionHandler:) // method 
	0xcd20  func CKUserDefaultsBackingStore.writeBatch() // method 
	0xf3f0  func CKUserDefaultsBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xcdb0  func CKUserDefaultsBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xce90  func CKUserDefaultsBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0xcf70  func CKUserDefaultsBackingStore.removeValue(forKey:) // method 
	0xcfe0  func CKUserDefaultsBackingStore.removeValues(forKeys:) // method 
	0xd0c0  func CKUserDefaultsBackingStore.removeValues(matching:) // method 
	0xd220  func CKUserDefaultsBackingStore.removeAllValues() // method 
	0xd300  func CKUserDefaultsBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0xd3e0  func CKUserDefaultsBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0xd4c0  func CKUserDefaultsBackingStore.dropLinks(between:and:completionHandler:) // method 
	0xd5a0  func CKUserDefaultsBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.SaveInteraction : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let interaction : INInteraction // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dkEventUUID : #è // +0x25 (0x0)

	// ObjC -> Swift bridged methods
	0xf540  @objc SaveInteraction.initWithInteraction:dkEventUUID: <stripped>
	0xf850  @objc SaveInteraction.main <stripped>
	0xfa10  @objc SaveInteraction.init <stripped>
	0xf980  @objc SaveInteraction..cxx_destruct <stripped>

	// Swift methods
	0xf450  class func SaveInteraction.__allocating_init(interaction:dkEventUUID:) // init 
 }

 class CoreKnowledge.INInteractionEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interaction : INInteraction

	// Swift methods
	0xfc90  class func INInteractionEncoder.__allocating_init(_:) // init 
	0xfcd0  func INInteractionEncoder.base64() // method 
 }

 class CoreKnowledge.INInteractionDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xff20  class func INInteractionDecoder.__allocating_init() // init 
 }

 class CoreKnowledge.CKPermanentEventStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let knowledgeStore : CKKnowledgeStore

	// ObjC -> Swift bridged methods
	0xfff0  @objc CKPermanentEventStore.initWithKnowledgeStore: <stripped>
	0x10240  @objc CKPermanentEventStore.init <stripped>
	0x101d0  @objc CKPermanentEventStore..cxx_destruct <stripped>

	// Swift methods
	0xff70  class func CKPermanentEventStore.__allocating_init(knowledgeStore:) // init 
 }

 class CoreKnowledge.CKInMemoryBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let inMemoryStoreHandler : CKPersistentStoreHandler // +0x10 (0x8)

	// Swift methods
	0x10cd0  func CKInMemoryBackingStore.name.getter // getter 
	0x10cf0  func CKInMemoryBackingStore.name.setter // setter 
	0x10d00  func CKInMemoryBackingStore.name.modify // modifyCoroutine 
	0x10d50  class func CKInMemoryBackingStore.__allocating_init() // init 
	0x10e80  func CKInMemoryBackingStore.keys(completionHandler:) // method 
	0x10f20  func CKInMemoryBackingStore.keys(matching:completionHandler:) // method 
	0x10fc0  func CKInMemoryBackingStore.value(forKey:completionHandler:) // method 
	0x11180  func CKInMemoryBackingStore.values(completionHandler:) // method 
	0x11220  func CKInMemoryBackingStore.values(forKeys:completionHandler:) // method 
	0x112d0  func CKInMemoryBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x11370  func CKInMemoryBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x11410  func CKInMemoryBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x114b0  func CKInMemoryBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x11550  func CKInMemoryBackingStore.verify(path:completionHandler:) // method 
	0x115d0  func CKInMemoryBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x11680  func CKInMemoryBackingStore.writeBatch() // method 
	0x11710  func CKInMemoryBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x11790  func CKInMemoryBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x11910  func CKInMemoryBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x11a90  func CKInMemoryBackingStore.removeValue(forKey:completionHandler:) // method 
	0x11b00  func CKInMemoryBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x11b70  func CKInMemoryBackingStore.removeValues(matching:completionHandler:) // method 
	0x11be0  func CKInMemoryBackingStore.removeAllValues(completionHandler:) // method 
	0x11c50  func CKInMemoryBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x11cc0  func CKInMemoryBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x11d30  func CKInMemoryBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x11da0  func CKInMemoryBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.BackgroundQueue : NSOperationQueue /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var lock : OS_dispatch_semaphore // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x124b0  @objc BackgroundQueue.init <stripped>
	0x12800  @objc BackgroundQueue..cxx_destruct <stripped>

	// Swift methods
	0x12520  func BackgroundQueue.pause() // method 
	0x127b0  func BackgroundQueue.resume() // method 
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
	var connection : Connection // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x1ab20  @objc CKPersistentStoreHandler.init <stripped>
	0x1b260  @objc CKPersistentStoreHandler.initWithName: <stripped>
	0x1b950  @objc CKPersistentStoreHandler.keysAndReturnError: <stripped>
	0x1c150  @objc CKPersistentStoreHandler.keysMatching:error: <stripped>
	0x1c960  @objc CKPersistentStoreHandler.valuesAndReturnError: <stripped>
	0x1d1c0  @objc CKPersistentStoreHandler.valuesForKeysMatching:error: <stripped>
	0x1dab0  @objc CKPersistentStoreHandler.keysAndValuesAndReturnError: <stripped>
	0x1e450  @objc CKPersistentStoreHandler.keysAndValuesForKeysMatching:error: <stripped>
	0x1f5c0  @objc CKPersistentStoreHandler._valuesForKeys:error: <stripped>
	0x206c0  @objc CKPersistentStoreHandler.saveKeysAndValues:error: <stripped>
	0x20dd0  @objc CKPersistentStoreHandler.removeValueForKey:error: <stripped>
	0x21760  @objc CKPersistentStoreHandler.removeValuesForKeys:error: <stripped>
	0x22100  @objc CKPersistentStoreHandler.removeValuesMatching:error: <stripped>
	0x22a10  @objc CKPersistentStoreHandler.removeAllValuesAndReturnError: <stripped>
	0x23550  @objc CKPersistentStoreHandler.tripleComponentsMatching:error: <stripped>
	0x23c90  @objc CKPersistentStoreHandler.setWeightForLinkWithLabel:between:and:toValue:error: <stripped>
	0x24a60  @objc CKPersistentStoreHandler.increaseWeightForLinkWithLabel:between:and: <stripped>
	0x25260  @objc CKPersistentStoreHandler.decreaseWeightForLinkWithLabel:between:and: <stripped>
	0x25eb0  @objc CKPersistentStoreHandler.dropLinkWithLabel:between:and:error: <stripped>
	0x26680  @objc CKPersistentStoreHandler.dropLinksWithLabel:from:error: <stripped>
	0x26ac0  @objc CKPersistentStoreHandler.dropLinksBetween:and:error: <stripped>
	0x27110  @objc CKPersistentStoreHandler..cxx_destruct <stripped>

	// Swift methods
	0x1a900  func CKPersistentStoreHandler.connection.getter // getter 
	0x1a940  func CKPersistentStoreHandler.connection.setter // setter 
	0x1a990  func CKPersistentStoreHandler.connection.modify // modifyCoroutine 
	0x1a9e0  class func static CKPersistentStoreHandler.inMemoryHandler() // method 
	0x1ab80  class func CKPersistentStoreHandler.__allocating_init(name:) // init 
	0x1b290  func CKPersistentStoreHandler.keys() // method 
	0x1ba00  func CKPersistentStoreHandler.keys(matching:) // method 
	0x1c220  func CKPersistentStoreHandler.values() // method 
	0x1ca00  func CKPersistentStoreHandler.values(forKeysMatching:) // method 
	0x1d290  func CKPersistentStoreHandler.keysAndValues() // method 
	0x1db60  func CKPersistentStoreHandler.keysAndValues(forKeysMatching:) // method 
	0x1e530  func CKPersistentStoreHandler.selectQuery(project:whereField:isIn:) // method 
	0x1eca0  func CKPersistentStoreHandler._values(forKeys:) // method 
	0x1f6b0  func CKPersistentStoreHandler.save(keysAndValues:) // method 
	0x207a0  func CKPersistentStoreHandler.removeValue(forKey:) // method 
	0x20f40  func CKPersistentStoreHandler._removeValues(forKeys:) // method 
	0x21670  func CKPersistentStoreHandler.removeValues(forKeys:) // method 
	0x21900  func CKPersistentStoreHandler._removeValues(matching:) // method 
	0x21fe0  func CKPersistentStoreHandler.removeValues(matching:) // method 
	0x22270  func CKPersistentStoreHandler.removeAllValues() // method 
	0x22b10  func CKPersistentStoreHandler.tripleComponents(matching:) // method 
	0x23620  func CKPersistentStoreHandler.setWeight(forLinkWithLabel:between:and:toValue:) // method 
	0x23df0  func CKPersistentStoreHandler.increaseWeight(forLinkWithLabel:between:and:) // method 
	0x24a80  func CKPersistentStoreHandler.decreaseWeight(forLinkWithLabel:between:and:) // method 
	0x25370  func CKPersistentStoreHandler.decreaseWeights(between:and:) // method 
	0x25a30  func CKPersistentStoreHandler.dropLink(withLabel:between:and:) // method 
	0x26000  func CKPersistentStoreHandler.dropLinks(withLabel:from:) // method 
	0x267a0  func CKPersistentStoreHandler.dropLinks(between:and:) // method 
	0x26be0  func CKPersistentStoreHandler.deserializeValue(_:) // method 
 }

 class CoreKnowledge.CKSiriRemembers : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x2bc90  @objc CKSiriRemembers.init <stripped>
	0x2bc30  @objc CKSiriRemembers..cxx_destruct <stripped>

	// Swift methods
	0x2b2e0  class func static CKSiriRemembers.saveInteraction(interaction:) // method 
	0x2b360  class func static CKSiriRemembers.findAppMatches(forIntent:candidateBundleIDs:completionHandler:) // method 
	0x2b530  class func static CKSiriRemembers.findAppMatches(forJSONIntent:candidateBundleIDs:completionHandler:) // method 
	0x2b620  class func static CKSiriRemembers.findRelativeAppUsageProbabilities(bundleIDs:days:completionHandler:) // method 
 }

 struct CoreKnowledge.SRXPCInterruptionError { }

 class CoreKnowledge.DeferrableXPCOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var activity : OS_xpc_object? // +0x8 (0x8)
	var isDeferred : Bool // +0x10 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completionKVObservation : Uá // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x37720  @objc DeferrableXPCOperation.init <stripped>
	0x37870  @objc DeferrableXPCOperation..cxx_destruct <stripped>

	// Swift methods
	0x37280  func DeferrableXPCOperation.activity.getter // getter 
	0x372c0  func DeferrableXPCOperation.activity.setter // setter 
	0x37310  func DeferrableXPCOperation.activity.modify // modifyCoroutine 
	0x373f0  func DeferrableXPCOperation.isDeferred.getter // getter 
	0x37420  func DeferrableXPCOperation.isDeferred.setter // setter 
	0x37460  func DeferrableXPCOperation.isDeferred.modify // modifyCoroutine 
	0x37550  func DeferrableXPCOperation.completionKVObservation.getter // getter 
	0x37590  func DeferrableXPCOperation.completionKVObservation.setter // setter 
	0x375e0  func DeferrableXPCOperation.completionKVObservation.modify // modifyCoroutine 
	0x37740  class func DeferrableXPCOperation.__allocating_init(activity:) // init 
	0x377b0  func DeferrableXPCOperation.isCancelledOrDeferred.getter // getter 
 }

 class CoreKnowledge.CKSQLBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var name : String // +0x10 (0x10)
	let connection : NSXPCConnection // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x381c0  @objc CKSQLBackingStore.initWithName: <stripped>

	// Swift methods
	0x37fb0  func CKSQLBackingStore.name.getter // getter 
	0x37ff0  func CKSQLBackingStore.name.setter // setter 
	0x38030  func CKSQLBackingStore.name.modify // modifyCoroutine 
	0x38080  class func CKSQLBackingStore.__allocating_init(name:) // init 
	0x38270  class func static CKSQLBackingStore.mainInstance() // method 
	0x38290  func CKSQLBackingStore.daemon(errorHandler:) // method 
	0x38b40  func CKSQLBackingStore.keys(completionHandler:) // method 
	0x38d40  func CKSQLBackingStore.keys(matching:completionHandler:) // method 
	0x38ee0  func CKSQLBackingStore.value(forKey:completionHandler:) // method 
	0x39110  func CKSQLBackingStore.values(completionHandler:) // method 
	0x39340  func CKSQLBackingStore.values(forKeys:completionHandler:) // method 
	0x396f0  func CKSQLBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x39890  func CKSQLBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x39ad0  func CKSQLBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x39c70  func CKSQLBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x39eb0  func CKSQLBackingStore.verify(path:completionHandler:) // method 
	0x39f90  func CKSQLBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x3a270  func CKSQLBackingStore.writeBatch() // method 
	0x3a2c0  func CKSQLBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x3a4a0  func CKSQLBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x3a700  func CKSQLBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x3a900  func CKSQLBackingStore.removeValue(forKey:completionHandler:) // method 
	0x3aa90  func CKSQLBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x3ac20  func CKSQLBackingStore.removeValues(matching:completionHandler:) // method 
	0x3ad90  func CKSQLBackingStore.removeAllValues(completionHandler:) // method 
	0x3aef0  func CKSQLBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x3b0e0  func CKSQLBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x3b2c0  func CKSQLBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x3b480  func CKSQLBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	var inner : }ã // +0x0
	var memoized : Memorable // +0x28
	var memoizedCount : Int // +0x40
 }

 class CoreKnowledge.SRInternalDatabaseManager : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x3ec80  @objc SRInternalDatabaseManager.init <stripped>
 }

 enum CoreKnowledge.SRDatabaseManager { }

 class CoreKnowledge.Connection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _handle : 	å // +0x10 (0x8)
	var busyTimeout : Double // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var busyHandler : ­å // +0x20 (0x8)
	var trace : @convention(block) (_:)? // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateHook :  empty-list  // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var commitHook : {å // +0x38 (0x8)
	var rollbackHook : @convention(block) ()? // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var functions :  empty-list  // +0x48 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var collations : String // +0x50 (0x8)
	var queue : OS_dispatch_queue // +0x58 (0x8)
	var $__lazy_storage_$_queueContext : Int? // +0x60 (0x9)

	// Swift methods
	0x43f80  class func Connection.__allocating_init(_:readonly:) // init 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	case error :  first-element-marker 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let bytes :  empty-list  // +0x0
 }

 class CoreKnowledge.CKCloudKitBackingStore : CKSQLBackingStore {
	// ObjC -> Swift bridged methods
	0x55bf0  @objc CKCloudKitBackingStore.initWithName: <stripped>

	// Swift methods
	0x54910  func CKCloudKitBackingStore.triplesComponents(matching:) // method 
 }

 class CoreKnowledge.CKTriple : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : (String, String, String, Int) // +0x8 (0x38)

	// ObjC -> Swift bridged methods
	0x55fe0  @objc CKTriple.subject <stripped>
	0x56070  @objc CKTriple.predicate <stripped>
	0x56140  @objc CKTriple.object <stripped>
	0x56210  @objc CKTriple.weight <stripped>
	0x56250  @objc CKTriple.description <stripped>
	0x564b0  @objc CKTriple.hash <stripped>
	0x56880  @objc CKTriple.isEqual: <stripped>
	0x56a70  @objc CKTriple.initWithSubject:predicate:object:weight: <stripped>
	0x56cb0  @objc CKTriple.encodeWithCoder: <stripped>
	0x57060  @objc CKTriple.initWithCoder: <stripped>
	0x57280  @objc CKTriple.init <stripped>
	0x572e0  @objc CKTriple..cxx_destruct <stripped>

	// Swift methods
	0x56040  func CKTriple.subject.getter // getter 
	0x560f0  func CKTriple.predicate.getter // getter 
	0x561c0  func CKTriple.object.getter // getter 
	0x56230  func CKTriple.weight.getter // getter 
	0x56910  class func CKTriple.__allocating_init(tuple:) // init 
	0x55f10  class func CKTriple.__allocating_init(subject:predicate:object:weight:) // init 
	0x56b10  func CKTriple.encode(with:) // method 
	0x56d00  class func CKTriple.__allocating_init(coder:) // init 
	0x570b0  func CKTriple.dictionary() // method 
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
	case _type  
	case value  
	case label  
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
	case recipients  
	case speakableGroupName  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case parameters  
 }

 class CoreKnowledge.ScrubDeletedRecords : DeferrableXPCOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let oldestDate : WÙ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0x60ff0  @objc ScrubDeletedRecords.initSinceDate: <stripped>
	0x61ab0  @objc ScrubDeletedRecords.main <stripped>
	0x61ba0  @objc ScrubDeletedRecords.init <stripped>
	0x61b30  @objc ScrubDeletedRecords..cxx_destruct <stripped>

	// Swift methods
	0x60e90  class func ScrubDeletedRecords.__allocating_init(sinceDate:) // init 
 }

 struct CoreKnowledge.CKOntology { }

 class CoreKnowledge.CoreKnowledgeXPCUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x677d0  @objc CoreKnowledgeXPCUtils.init <stripped>
 }

 enum CoreKnowledge.JSONLDParseError {

	// Properties
	case unexpectedFormat  
	case resourceNotAvailable  
 }

 class CoreKnowledge.CKJSONLDGraph : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let _entities : CKEntity // +0x8 (0x8)
	let queue : OS_dispatch_queue // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x6b340  @objc CKJSONLDGraph.initWithEntities: <stripped>
	0x6b390  @objc CKJSONLDGraph.entities <stripped>
	0x6be80  @objc CKJSONLDGraph.linkedDataWithCompletionHandler: <stripped>
	0x6c020  @objc CKJSONLDGraph.init <stripped>
	0x6bfa0  @objc CKJSONLDGraph..cxx_destruct <stripped>

	// Swift methods
	0x6b2d0  class func CKJSONLDGraph.__allocating_init(withEntities:) // init 
	0x6b3f0  func CKJSONLDGraph.entities.getter // getter 
	0x6b5e0  func CKJSONLDGraph.linkedData(completionHandler:) // method 
 }

 class CoreKnowledge.CKEphemeralEventSequence : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x75cf0  @objc CKEphemeralEventSequence.init <stripped>
	0x75dc0  @objc CKEphemeralEventSequence..cxx_destruct <stripped>

	// Swift methods
	0x75d10  func CKEphemeralEventSequence.historyStartEvent.getter // getter 
 }

 class CoreKnowledge.XPCTaskScheduler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : BackgroundQueue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x78100  @objc XPCTaskScheduler.initWithQueue: <stripped>
	0x782c0  @objc XPCTaskScheduler.scheduleAllTasks <stripped>
	0x78980  @objc XPCTaskScheduler.init <stripped>
	0x78910  @objc XPCTaskScheduler..cxx_destruct <stripped>

	// Swift methods
	0x78050  class func XPCTaskScheduler.__allocating_init(queue:) // init 
	0x78150  func XPCTaskScheduler.scheduleAllTasks() // method 
	0x78360  func XPCTaskScheduler.add(id:repeatInterval:makeOp:) // method 
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
	0x798e0  class func Matcher.__allocating_init(_:value:) // init 
	0x79960  func Matcher.evaluate(on:) // method 
	0x79ea0  func Matcher.sql.getter // getter 
	0x7a200  func Matcher.sql.setter // setter 
	0x7a220  func Matcher.sql.modify // modifyCoroutine 
 }

 class CoreKnowledge.CKGenericCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : ConditionType
	var negated : Bool
	var $__lazy_storage_$_sql : String?

	// ObjC -> Swift bridged methods
	0x7a330  @objc CKGenericCondition.predicate <stripped>
	0x7a5d0  @objc CKGenericCondition.description <stripped>
	0x7a870  @objc CKGenericCondition.initWithValue: <stripped>
	0x7a9a0  @objc CKGenericCondition.initWithMatchType:value:negated: <stripped>
	0x7aac0  @objc CKGenericCondition.and: <stripped>
	0x7abc0  @objc CKGenericCondition.or: <stripped>
	0x7b4e0  @objc CKGenericCondition.evaluateOn: <stripped>
	0x7b630  @objc CKGenericCondition.copyWithZone: <stripped>
	0x7bae0  @objc CKGenericCondition.encodeWithCoder: <stripped>
	0x7c130  @objc CKGenericCondition.initWithCoder: <stripped>
	0x7c190  @objc CKGenericCondition.init <stripped>
	0x7c1e0  @objc CKGenericCondition..cxx_destruct <stripped>

	// Swift methods
	0x7a430  func CKGenericCondition.predicate.getter // getter 
	0x7a770  class func CKGenericCondition.__allocating_init(value:) // init 
	0x790f0  class func CKGenericCondition.__allocating_init(_:value:negated:) // init 
	0x7a9e0  func CKGenericCondition.and(_:) // method 
	0x7aae0  func CKGenericCondition.or(_:) // method 
	0x7acf0  func CKGenericCondition.sql.getter // getter 
	0x7b210  func CKGenericCondition.sql.setter // setter 
	0x7b240  func CKGenericCondition.sql.modify // modifyCoroutine 
	0x7b330  func CKGenericCondition.evaluate(on:) // method 
	0x7b570  func CKGenericCondition.copy(with:) // method 
	0x7b7b0  func CKGenericCondition.encode(with:) // method 
	0x7bb30  class func CKGenericCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKTripleCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var rawCondition : CKGenericCondition

	// ObjC -> Swift bridged methods
	0x7c3a0  @objc CKTripleCondition.description <stripped>
	0x7c710  @objc CKTripleCondition.initWithValue: <stripped>
	0x7c7a0  @objc CKTripleCondition.initWithSubject:predicate:object: <stripped>
	0x7c940  @objc CKTripleCondition.and: <stripped>
	0x7cb00  @objc CKTripleCondition.or: <stripped>
	0x7cc90  @objc CKTripleCondition.evaluateOn: <stripped>
	0x7cde0  @objc CKTripleCondition.copyWithZone: <stripped>
	0x7d000  @objc CKTripleCondition.encodeWithCoder: <stripped>
	0x7d1b0  @objc CKTripleCondition.initWithCoder: <stripped>
	0x7d230  @objc CKTripleCondition.init <stripped>
	0x7d2b0  @objc CKTripleCondition..cxx_destruct <stripped>

	// Swift methods
	0x7c2c0  func CKTripleCondition.rawCondition.getter // getter 
	0x7c300  func CKTripleCondition.rawCondition.setter // setter 
	0x7c350  func CKTripleCondition.rawCondition.modify // modifyCoroutine 
	0x7c4c0  class func CKTripleCondition.__allocating_init(_:) // init 
	0x7c880  func CKTripleCondition.and(_:) // method 
	0x7ca40  func CKTripleCondition.or(_:) // method 
	0x7cc00  func CKTripleCondition.evaluate(on:) // method 
	0x7cd50  func CKTripleCondition.copy(with:) // method 
	0x7cf90  func CKTripleCondition.encode(with:) // method 
	0x7d0a0  class func CKTripleCondition.__allocating_init(coder:) // init 
 }

 struct CoreKnowledge.LegacySendMessageIntent {

	// Properties
	let typeName : String // +0x0
	let parameters : LegacySendMessageIntentParameters // +0x10
 }

 struct CoreKnowledge.LegacySendMessageIntentParameters {

	// Properties
	let recipients : LegacyPerson // +0x0
	let speakableGroupName : SpeakableString // +0x8
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
	case type  
	case value  
	case label  
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
	case recipients  
	case speakableGroupName  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case typeName  
	case parameters  
 }

 class CoreKnowledge.SRIngestor : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let db : Connection // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : KÕ // +0x0 (0x0)
	let intent : INIntent // +0x0 (0x8)
	let intentUUID : String // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dkEventUUID : GÕ // +0x0 (0x0)
	let bundleID : String? // +0x0 (0x10)
	let direction : INInteractionDirection // +0x0 (0x8)
	let inintentHandlingStatus : INIntentHandlingStatus // +0x0 (0x9)
	let engagementSignals : [String : Any]? // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x8af00  @objc SRIngestor.init <stripped>
	0x8af60  @objc SRIngestor..cxx_destruct <stripped>

	// Swift methods
	0x888e0  func SRIngestor.saveInteraction() // method 
	0x88dd0  func SRIngestor.upsertIntent() // method 
	0x898f0  func SRIngestor.upsertEntity(_:entity:) // method 
	0x88550  class func SRIngestor.__allocating_init(db:interaction:dkEventUUID:) // init 
 }

 class CoreKnowledge.CKHistoricEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _firstSeen : KÕ // +0x14a8e6 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSeen : KÕ // +0x19d0 (0x0)
	var _frequency : Int // +0x0 (0x8)
	var _lastDuration : Double // +0x80000400 (0x8)
	var _totalDuration : Double // +0x0 (0x8)
	var _metadata : [String : Any] // +0x74735f5f (0x8)

	// ObjC -> Swift bridged methods
	0x8bab0  @objc CKHistoricEvent.identifier <stripped>
	0x8c400  @objc CKHistoricEvent.firstSeen <stripped>
	0x8c4a0  @objc CKHistoricEvent.lastSeen <stripped>
	0x8c540  @objc CKHistoricEvent.frequency <stripped>
	0x8c5b0  @objc CKHistoricEvent.lastDuration <stripped>
	0x8c620  @objc CKHistoricEvent.totalDuration <stripped>
	0x8c690  @objc CKHistoricEvent.metadata <stripped>
	0x8cc00  @objc CKHistoricEvent.encodeWithCoder: <stripped>
	0x8d610  @objc CKHistoricEvent.initWithCoder: <stripped>
	0x8d6d0  @objc CKHistoricEvent.init: <stripped>
	0x8dff0  @objc CKHistoricEvent.initFrom:withIdentifier: <stripped>
	0x8e090  @objc CKHistoricEvent.copyWithZone: <stripped>
	0x8e120  @objc CKHistoricEvent.init <stripped>
	0x8e180  @objc CKHistoricEvent..cxx_destruct <stripped>

	// Swift methods
	0x8bc00  func CKHistoricEvent._firstSeen.getter // getter 
	0x8bc20  func CKHistoricEvent._firstSeen.setter // setter 
	0x8bc40  func CKHistoricEvent._firstSeen.modify // modifyCoroutine 
	0x8bd60  func CKHistoricEvent._lastSeen.getter // getter 
	0x8bdd0  func CKHistoricEvent._lastSeen.setter // setter 
	0x8be50  func CKHistoricEvent._lastSeen.modify // modifyCoroutine 
	0x8bf30  func CKHistoricEvent._frequency.getter // getter 
	0x8bf60  func CKHistoricEvent._frequency.setter // setter 
	0x8bfa0  func CKHistoricEvent._frequency.modify // modifyCoroutine 
	0x8c080  func CKHistoricEvent._lastDuration.getter // getter 
	0x8c0a0  func CKHistoricEvent._lastDuration.setter // setter 
	0x8c0c0  func CKHistoricEvent._lastDuration.modify // modifyCoroutine 
	0x8c1a0  func CKHistoricEvent._totalDuration.getter // getter 
	0x8c1f0  func CKHistoricEvent._totalDuration.setter // setter 
	0x8c250  func CKHistoricEvent._totalDuration.modify // modifyCoroutine 
	0x8c330  func CKHistoricEvent._metadata.getter // getter 
	0x8c370  func CKHistoricEvent._metadata.setter // setter 
	0x8c3c0  func CKHistoricEvent._metadata.modify // modifyCoroutine 
	0x8c480  func CKHistoricEvent.firstSeen.getter // getter 
	0x8c520  func CKHistoricEvent.lastSeen.getter // getter 
	0x8c590  func CKHistoricEvent.frequency.getter // getter 
	0x8c600  func CKHistoricEvent.lastDuration.getter // getter 
	0x8c670  func CKHistoricEvent.totalDuration.getter // getter 
	0x8c710  func CKHistoricEvent.metadata.getter // getter 
	0x8b700  class func CKHistoricEvent.__allocating_init(identifier:firstSeen:lastSeen:frequency:lastDuration:totalDuration:metadata:) // init 
	0x8c8d0  func CKHistoricEvent.encode(with:) // method 
	0x8cc50  class func CKHistoricEvent.__allocating_init(coder:) // init 
	0x8d660  class func CKHistoricEvent.__allocating_init(_:) // init 
	0x8e040  func CKHistoricEvent.copy(with:) // method 
 }

 class CoreKnowledge.CKClosure : NSObject /usr/lib/libobjc.A.dylib, CKExecutableClosure {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)
	let entity : CKEntity // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x8ec00  @objc CKClosure.initWithCoder: <stripped>
	0x8ee50  @objc CKClosure.encodeWithCoder: <stripped>
	0x8ef70  @objc CKClosure.init <stripped>
	0x8eee0  @objc CKClosure..cxx_destruct <stripped>

	// Swift methods
	0x8e670  class func CKClosure.__allocating_init(coder:) // init 
	0x8ec30  func CKClosure.encode(with:) // method 
	0x8eea0  func CKClosure.execute() // method 
 }

 enum CoreKnowledge.CKLogicError {

	// Properties
	case missingRuleBody  
	case unsatisfiableRule  
 }

 class CoreKnowledge.CKLogic : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var body : CKEntity // +0x8 (0x8)
	var negatedBody : CKEntity // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x90450  @objc CKLogic.hash <stripped>
	0x90980  @objc CKLogic.identifier <stripped>
	0x91210  @objc CKLogic.andExistsLink:to:error: <stripped>
	0x91960  @objc CKLogic.andNotExistsLink:to:error: <stripped>
	0x91bb0  @objc CKLogic.and: <stripped>
	0x91cc0  @objc CKLogic.init <stripped>
	0x91c40  @objc CKLogic..cxx_destruct <stripped>

	// Swift methods
	0x90220  func CKLogic.body.getter // getter 
	0x90240  func CKLogic.body.setter // setter 
	0x90260  func CKLogic.body.modify // modifyCoroutine 
	0x90340  func CKLogic.negatedBody.getter // getter 
	0x903a0  func CKLogic.negatedBody.setter // setter 
	0x90400  func CKLogic.negatedBody.modify // modifyCoroutine 
	0x909e0  func CKLogic.identifier.getter // getter 
	0x90ae0  class func static CKLogic.ifExistsLink(_:to:) // method 
	0x90cf0  func CKLogic.andExistsLink(_:to:) // method 
	0x91230  class func static CKLogic.ifNotExistsLink(_:to:) // method 
	0x91440  func CKLogic.andNotExistsLink(_:to:) // method 
	0x91a70  func CKLogic.and(_:) // method 
 }

 enum CoreKnowledge.ErrorTracker { }

 class CoreKnowledge.ScrubOldRecords : DeferrableXPCOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cutoffDate : WÙ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0x953a0  @objc ScrubOldRecords.main <stripped>
	0x95420  @objc ScrubOldRecords.init <stripped>
	0x954a0  @objc ScrubOldRecords..cxx_destruct <stripped>

	// Swift methods
	0x94a00  class func ScrubOldRecords.__allocating_init(olderThan:) // init 
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
	0x9b880  @objc CKEntity.isEqual: <stripped>
	0x9b910  @objc CKEntity.hash <stripped>
	0x9ba00  @objc CKEntity.description <stripped>
	0x9bef0  @objc CKEntity.valueForKey: <stripped>
	0x9bff0  @objc CKEntity.valueForKey:completionHandler: <stripped>
	0x9c630  @objc CKEntity.valuesForKeys:completionHandler: <stripped>
	0x9cb60  @objc CKEntity.setValue:forKey:completionHandler: <stripped>
	0x9d2f0  @objc CKEntity.setValuesForKeys:completionHandler: <stripped>
	0x9d500  @objc CKEntity.removeValueForKey:completionHandler: <stripped>
	0x9dcf0  @objc CKEntity.linkTo:withPredicate:completionHandler: <stripped>
	0x9e120  @objc CKEntity.linkTo:withPredicate:error: <stripped>
	0x9e340  @objc CKEntity.unlinkTo:withPredicate:ignoreWeights:completionHandler: <stripped>
	0x9e7f0  @objc CKEntity.removeWithCompletionHandler: <stripped>
	0xa3980  @objc CKEntity.linksTo:matchType:completionHandler: <stripped>
	0xa3da0  @objc CKEntity.linksTo:matchType:error: <stripped>
	0xa3ec0  @objc CKEntity.init <stripped>
	0xa3f20  @objc CKEntity..cxx_destruct <stripped>

	// Swift methods
	0x9b640  class func CKEntity.__allocating_init(identifier:knowledgeStore:) // init 
	0x9bfb0  func CKEntity.value(forKey:completionHandler:) // method 
	0x9c020  func CKEntity.values(forKeys:completionHandler:) // method 
	0x9c220  func CKEntity.values(forKeys:completionHandler:) // method 
	0x9c6e0  func CKEntity.setValue(_:forKey:completionHandler:) // method 
	0x9cc50  func CKEntity.setValues(forKeys:completionHandler:) // method 
	0x9d3c0  func CKEntity.removeValue(forKey:completionHandler:) // method 
	0x9d9a0  func CKEntity.link(to:withPredicate:completionHandler:) // method 
	0x9ddb0  func CKEntity.link(to:withPredicate:) // method 
	0x9e210  func CKEntity.unlink(to:withPredicate:ignoreWeights:completionHandler:) // method 
	0x9e420  func CKEntity.unlink(to:withPredicate:ignoreWeights:) // method 
	0x9e770  func CKEntity.remove(completionHandler:) // method 
	0x9e8d0  func CKEntity.remove() // method 
	0x9eb80  func CKEntity.path(to:withRadius:completionHandler:) // method 
	0x9f020  func CKEntity.path(to:withRadius:) // method 
	0x9f040  func CKEntity.path(to:radius:) // method 
	0x9fad0  func CKEntity.linkedEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xa0700  func CKEntity.linkedEntities(withPredicate:matchType:complement:) // method 
	0xa0ac0  func CKEntity.linkedEntities(completionHandler:) // method 
	0xa1250  func CKEntity.linkedEntities() // method 
	0xa15b0  func CKEntity.linkingEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xa2300  func CKEntity.linkingEntities(withPredicate:matchType:complement:) // method 
	0xa26c0  func CKEntity.linkingEntities(completionHandler:) // method 
	0xa29d0  func CKEntity.linkingEntities() // method 
	0xa3240  func CKEntity.links(to:matchType:completionHandler:) // method 
	0xa3a00  func CKEntity.links(to:matchType:) // method 
 }

 class CoreKnowledge.CKTimedDispatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x10 (0x8)
	let semaphore : OS_dispatch_semaphore // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _interruptError : _î // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _timeout : áÓ // +0x45545f5f (0x0)
	var _group : OS_dispatch_group? // +0x0 (0x8)

	// Swift methods
	0xa6600  func CKTimedDispatch._interruptError.getter // getter 
	0xa6630  func CKTimedDispatch._interruptError.setter // setter 
	0xa6680  func CKTimedDispatch._interruptError.modify // modifyCoroutine 
	0xa6780  func CKTimedDispatch._group.getter // getter 
	0xa67c0  func CKTimedDispatch._group.setter // setter 
	0xa6810  func CKTimedDispatch._group.modify // modifyCoroutine 
	0xa6850  func CKTimedDispatch.group.getter // getter 
	0xa59d0  class func CKTimedDispatch.__allocating_init(timeout:) // init 
	0xa6ca0  func CKTimedDispatch.interrupt(_:) // method 
	0xa6ce0  func CKTimedDispatch.wait() // method 
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
	0xa8170  @objc CKKnowledgeStore.delegate <stripped>
	0xa81c0  @objc CKKnowledgeStore.setDelegate: <stripped>
	0xa8220  @objc CKKnowledgeStore.name <stripped>
	0xa8400  @objc CKKnowledgeStore.filePathURL <stripped>
	0xa8490  @objc CKKnowledgeStore.hash <stripped>
	0xa8620  @objc CKKnowledgeStore.isEqual: <stripped>
	0xa88a0  @objc CKKnowledgeStore.init <stripped>
	0xa8900  @objc CKKnowledgeStore..cxx_destruct <stripped>

	// Swift methods
	0xa73d0  func CKKnowledgeStore.delegate.getter // getter 
	0xa7410  func CKKnowledgeStore.delegate.setter // setter 
	0xa7460  func CKKnowledgeStore.delegate.modify // modifyCoroutine 
	0xa74b0  func CKKnowledgeStore.name.getter // getter 
	0xa74f0  func CKKnowledgeStore.filePath.getter // getter 
	0xa7720  class func static CKKnowledgeStore.defaultKnowledgeStore() // method 
	0xa77d0  class func static CKKnowledgeStore.defaultSynchedKnowledgeStore() // method 
	0xa7810  class func static CKKnowledgeStore.inMemoryKnowledgeStore() // method 
	0xa7840  class func static CKKnowledgeStore.userDefaultsKnowledgeStore() // method 
	0xa7870  class func static CKKnowledgeStore.knowledgeStore(withName:) // method 
	0xa7880  class func static CKKnowledgeStore.synchedKnowledgeStore(withName:) // method 
	0xa78e0  class func static CKKnowledgeStore.store(_:) // method 
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
	0xa9bd0  @objc AppUsageProbabilityFinder.init <stripped>

	// Swift methods
	0xa9940  class func static AppUsageProbabilityFinder.relativeAppUsageProbabilities(bundleIDs:days:) // method 
 }

 class CoreKnowledge.SRAppMatcher : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var db : Connection // +0x8 (0x8)
	var domain : String // +0x10 (0x10)
	var allowedBundleIDs : [String] // +0x20 (0x8)
	var entitySet : RequestEntity // +0x28 (0x8)
	var memorableEntities : MemorableEntity // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0xb0310  @objc SRAppMatcher.init <stripped>
	0xb0260  @objc SRAppMatcher..cxx_destruct <stripped>

	// Swift methods
	0xaacf0  func SRAppMatcher.appMatches() // method 
	0xab2b0  func SRAppMatcher.findEntitySignals() // method 
	0xabd60  func SRAppMatcher.findMatchingEntities(forEntity:) // method 
	0xacd00  func SRAppMatcher.findIntentSignals(entityIDs:) // method 
	0xacfa0  func SRAppMatcher.findBaseIntentSignals(entityIDs:) // method 
	0xade90  func SRAppMatcher.calculateEntityMatchSignals(intentSignals:) // method 
	0xaf320  func SRAppMatcher.findAppSignals(intentSignals:) // method 
	0xafce0  func SRAppMatcher.makeDecision(appSignals:) // method 
 }

 struct CoreKnowledge.EntitySignals {

	// Properties
	let intentIndex : Int // +0x0
	let idfScore : Double // +0x8
	let paramSize : Int // +0x10
 }

 class CoreKnowledge.IntentSignals : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intentID : oÛ // +0x10 (0x8)
	var entities : IntentParameter // +0x18 (0x8)
	let bundleID : String // +0x20 (0x10)
	let direction : INInteractionDirection // +0x30 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let modifiedAt : KÕ // +0x14cfc0 (0x0)
	var recencyOrder : Int // +0x15c8 (0x8)
	var ftsRankSum : Double // +0x14cfc0 (0x8)
	var requestEntityMatchRate : Double // +0x0 (0x8)
	var intentEntityMatchRate : Double // +0x80000400 (0x8)
	var maxEntityMatchRate : Double // +0x0 (0x8)

	// Swift methods
	0xb0420  func IntentSignals.entities.getter // getter 
	0xb0450  func IntentSignals.entities.setter // setter 
	0xb0490  func IntentSignals.entities.modify // modifyCoroutine 
	0xb05b0  func IntentSignals.recencyOrder.getter // getter 
	0xb05e0  func IntentSignals.recencyOrder.setter // setter 
	0xb0620  func IntentSignals.recencyOrder.modify // modifyCoroutine 
	0xb06f0  func IntentSignals.ftsRankSum.getter // getter 
	0xb0720  func IntentSignals.ftsRankSum.setter // setter 
	0xb0760  func IntentSignals.ftsRankSum.modify // modifyCoroutine 
	0xb0840  func IntentSignals.requestEntityMatchRate.getter // getter 
	0xb0870  func IntentSignals.requestEntityMatchRate.setter // setter 
	0xb08b0  func IntentSignals.requestEntityMatchRate.modify // modifyCoroutine 
	0xb0980  func IntentSignals.intentEntityMatchRate.getter // getter 
	0xb09b0  func IntentSignals.intentEntityMatchRate.setter // setter 
	0xb09f0  func IntentSignals.intentEntityMatchRate.modify // modifyCoroutine 
	0xb0ac0  func IntentSignals.maxEntityMatchRate.getter // getter 
	0xb0af0  func IntentSignals.maxEntityMatchRate.setter // setter 
	0xb0b30  func IntentSignals.maxEntityMatchRate.modify // modifyCoroutine 
	0xade20  class func IntentSignals.__allocating_init(intentID:entities:bundleID:direction:modifiedAt:recencyOrder:) // init 
 }

 struct CoreKnowledge.IntentParameter {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var cardinality : oÛ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var entityIDs :  empty-list  // +0x8
 }

 class CoreKnowledge.RequestEntity : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let entity : MemorableEntity // +0x10 (0x40)
	var matches : DBEntityMatch // +0x50 (0x8)

	// Swift methods
	0xb0f20  func RequestEntity.matches.getter // getter 
	0xb0f50  func RequestEntity.matches.setter // setter 
	0xb0f90  func RequestEntity.matches.modify // modifyCoroutine 
	0xaac50  class func RequestEntity.__allocating_init(entity:) // init 
 }

 struct CoreKnowledge.DBEntityMatch {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let entityID : oÛ // +0x0
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handle : 	å // +0x10 (0x8)
	let connection : Connection // +0x18 (0x8)
	var $__lazy_storage_$_columnCount : Int? // +0x20 (0x9)
	var $__lazy_storage_$_columnNames : [String]? // +0x30 (0x8)
	var $__lazy_storage_$_row : Cursor // +0x38 (0x10)

	// Swift methods
	0xbe9d0  class func Statement.__allocating_init(_:_:) // init 
 }

 struct CoreKnowledge.Cursor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : Ô // +0x0
	let columnCount : Int // +0x8
 }

 class CoreKnowledge.CKDeviceActivityStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xc1c90  @objc CKDeviceActivityStore.init <stripped>
	0xc1c20  @objc CKDeviceActivityStore..cxx_destruct <stripped>

	// Swift methods
	0xc1a50  class func CKDeviceActivityStore.__allocating_init(store:) // init 
 }

 class CoreKnowledge.CKAbstractWriteBatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var buffer : [String : Any?]
	let backingStore : CKBackingStore

	// ObjC -> Swift bridged methods
	0xc2d10  @objc CKAbstractWriteBatch.setObject:forKey: <stripped>

	// Swift methods
	0xc2ae0  func CKAbstractWriteBatch.buffer.getter // getter 
	0xc2b10  func CKAbstractWriteBatch.buffer.setter // setter 
	0xc2b50  func CKAbstractWriteBatch.buffer.modify // modifyCoroutine 
	0xc2ba0  class func CKAbstractWriteBatch.__allocating_init(backingStore:) // init 
	0xc2c60  func CKAbstractWriteBatch.setObject(_:forKey:) // method 
 }

 class CoreKnowledge.CKInMemoryWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xc2e80  @objc CKInMemoryWriteBatch.writeWithCompletionHandler: <stripped>
	0xc3590  @objc CKInMemoryWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xc2e20  func CKInMemoryWriteBatch.write(completionHandler:) // method 
	0xc2f30  func CKInMemoryWriteBatch.write() // method 
 }

 class CoreKnowledge.CKUserDefaultsWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xc7f60  @objc CKUserDefaultsWriteBatch.writeWithCompletionHandler: <stripped>
	0xc3bd0  @objc CKUserDefaultsWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xc8000  func CKUserDefaultsWriteBatch.write(completionHandler:) // method 
	0xc36a0  func CKUserDefaultsWriteBatch.write() // method 
 }

 class CoreKnowledge.CKSQLWriteBatch : CKAbstractWriteBatch {

	// Properties
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
	0xc4d00  @objc CKSQLWriteBatch.writeWithCompletionHandler: <stripped>
	0xc5060  @objc CKSQLWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xc3cf0  func CKSQLWriteBatch.queue.getter // getter 
	0xc3d20  func CKSQLWriteBatch.queue.setter // setter 
	0xc3d60  func CKSQLWriteBatch.queue.modify // modifyCoroutine 
	0xc4590  func CKSQLWriteBatch.write(completionHandler:) // method 
	0xc4d20  func CKSQLWriteBatch.write() // method 
 }

 class CoreKnowledge.CKCloudKitWriteBatch : CKSQLWriteBatch {
	// ObjC -> Swift bridged methods
	0xc60f0  @objc CKCloudKitWriteBatch.writeWithCompletionHandler: <stripped>
 }

 class CoreKnowledge.BackfillInteractions : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handler :  empty-list  // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0xc8ad0  @objc BackfillInteractions.main <stripped>
	0xc8bd0  @objc BackfillInteractions.init <stripped>
	0xc8c30  @objc BackfillInteractions..cxx_destruct <stripped>

	// Swift methods
	0xc8090  class func BackfillInteractions.__allocating_init(handler:) // init 
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
	0xcf3d0  class func CKLogger.__allocating_init(_:) // init 
	0xcf420  func CKLogger.debug(_:_:) // method 
	0xcf440  func CKLogger.info(_:_:) // method 
	0xcf460  func CKLogger.error(_:_:) // method 
	0xcf480  func CKLogger.fault(_:_:) // method 
	0xcf4e0  func CKLogger.log(type:_:_:) // method 
 }

 class CoreKnowledge.SRAppMatches : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let matchType : SRAppMatchesType // +0x8 (0x8)
	let bundleIDs : [String] // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let signalsJSON : Ø // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0xcfa60  @objc SRAppMatches.matchType <stripped>
	0xcfaa0  @objc SRAppMatches.bundleIDs <stripped>
	0xcfb00  @objc SRAppMatches.signalsJSON <stripped>
	0xcfc90  @objc SRAppMatches.initWithMatchType:bundleIDs:signalsJSON: <stripped>
	0xcfd60  @objc SRAppMatches.description <stripped>
	0xd0080  @objc SRAppMatches.copyWithZone: <stripped>
	0xd0340  @objc SRAppMatches.encodeWithCoder: <stripped>
	0xd0780  @objc SRAppMatches.initWithCoder: <stripped>
	0xd0800  @objc SRAppMatches.init <stripped>
	0xd0860  @objc SRAppMatches..cxx_destruct <stripped>

	// Swift methods
	0xcfa10  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signals:) // init 
	0xcfbc0  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signalsJSON:) // init 
	0xcffb0  func SRAppMatches.copy(with:) // method 
	0xd0210  func SRAppMatches.encode(with:) // method 
	0xd0390  class func SRAppMatches.__allocating_init(coder:) // init 
 }

 enum CoreKnowledge.SRAppMatchesType { }
