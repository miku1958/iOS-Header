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
	0x61d0  @objc CKAppInteractionsContext.init <stripped>
	0x6590  @objc CKAppInteractionsContext.encodeWithCoder: <stripped>
	0x6970  @objc CKAppInteractionsContext.initWithCoder: <stripped>
	0x6a10  @objc CKAppInteractionsContext.copyWithZone: <stripped>
	0x71c0  @objc CKAppInteractionsContext.updateDiscardedDonations:forIntentType:andBundleId: <stripped>
	0x72b0  @objc CKAppInteractionsContext..cxx_destruct <stripped>

	// Swift methods
	0x5f40  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x5f60  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.setter // setter 
	0x5f80  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x5fc0  func CKAppInteractionsContext.outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x5fe0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.getter // getter 
	0x6040  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.setter // setter 
	0x60a0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x62a0  class func CKAppInteractionsContext.__allocating_init(_:) // init 
	0x6450  func CKAppInteractionsContext.encode(with:) // method 
	0x65e0  class func CKAppInteractionsContext.__allocating_init(coder:) // init 
	0x69c0  func CKAppInteractionsContext.copy(with:) // method 
	0x6a50  func CKAppInteractionsContext.incrementNumberOfOutOfAppLaunchBoundaryDonations(forBundleId:intent:) // method 
	0x7040  func CKAppInteractionsContext.updateDiscardedDonations(_:forIntentType:andBundleId:) // method 
 }

 class CoreKnowledge.CKKnowledgeStoreUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xaf40  @objc CKKnowledgeStoreUtils.init <stripped>
 }

 class CoreKnowledge.CKUserDefaultsBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var kv : NSUserDefaults // +0x10 (0x8)

	// Swift methods
	0xb380  func CKUserDefaultsBackingStore.name.getter // getter 
	0xb3a0  func CKUserDefaultsBackingStore.name.setter // setter 
	0xb3b0  func CKUserDefaultsBackingStore.name.modify // modifyCoroutine 
	0xb3f0  class func CKUserDefaultsBackingStore.__allocating_init() // init 
	0xb5e0  func CKUserDefaultsBackingStore.synchronize() // method 
	0xb600  func CKUserDefaultsBackingStore.keys() // method 
	0xb810  func CKUserDefaultsBackingStore.keys(matching:) // method 
	0xbac0  func CKUserDefaultsBackingStore._value(forKey:) // method 
	0xbb80  func CKUserDefaultsBackingStore.values() // method 
	0xbc10  func CKUserDefaultsBackingStore.values(forKeys:) // method 
	0xbdf0  func CKUserDefaultsBackingStore.values(forKeysMatching:) // method 
	0xc1f0  func CKUserDefaultsBackingStore.dictionaryRepresentation() // method 
	0xc260  func CKUserDefaultsBackingStore.dictionaryRepresentation(forKeysMatching:) // method 
	0xc610  func CKUserDefaultsBackingStore.triplesComponents(matching:) // method 
	0xc6e0  func CKUserDefaultsBackingStore.verify(path:completionHandler:) // method 
	0xc7c0  func CKUserDefaultsBackingStore.setValue(_:forKey:completionHandler:) // method 
	0xc890  func CKUserDefaultsBackingStore.writeBatch() // method 
	0xef60  func CKUserDefaultsBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xc920  func CKUserDefaultsBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xca00  func CKUserDefaultsBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0xcae0  func CKUserDefaultsBackingStore.removeValue(forKey:) // method 
	0xcb50  func CKUserDefaultsBackingStore.removeValues(forKeys:) // method 
	0xcc30  func CKUserDefaultsBackingStore.removeValues(matching:) // method 
	0xcd90  func CKUserDefaultsBackingStore.removeAllValues() // method 
	0xce70  func CKUserDefaultsBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0xcf50  func CKUserDefaultsBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0xd030  func CKUserDefaultsBackingStore.dropLinks(between:and:completionHandler:) // method 
	0xd110  func CKUserDefaultsBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.SaveInteraction : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let interaction : INInteraction // +0x8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dkEventUUID : #è // +0x25 (0x0)

	// ObjC -> Swift bridged methods
	0xf0b0  @objc SaveInteraction.initWithInteraction:dkEventUUID: <stripped>
	0xf3c0  @objc SaveInteraction.main <stripped>
	0xf580  @objc SaveInteraction.init <stripped>
	0xf4f0  @objc SaveInteraction..cxx_destruct <stripped>

	// Swift methods
	0xefc0  class func SaveInteraction.__allocating_init(interaction:dkEventUUID:) // init 
 }

 class CoreKnowledge.INInteractionEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interaction : INInteraction

	// Swift methods
	0xf800  class func INInteractionEncoder.__allocating_init(_:) // init 
	0xf840  func INInteractionEncoder.base64() // method 
 }

 class CoreKnowledge.INInteractionDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xfa90  class func INInteractionDecoder.__allocating_init() // init 
 }

 class CoreKnowledge.CKPermanentEventStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let knowledgeStore : CKKnowledgeStore

	// ObjC -> Swift bridged methods
	0xfb60  @objc CKPermanentEventStore.initWithKnowledgeStore: <stripped>
	0xfdb0  @objc CKPermanentEventStore.init <stripped>
	0xfd40  @objc CKPermanentEventStore..cxx_destruct <stripped>

	// Swift methods
	0xfae0  class func CKPermanentEventStore.__allocating_init(knowledgeStore:) // init 
 }

 class CoreKnowledge.CKInMemoryBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let inMemoryStoreHandler : CKPersistentStoreHandler // +0x10 (0x8)

	// Swift methods
	0x10840  func CKInMemoryBackingStore.name.getter // getter 
	0x10860  func CKInMemoryBackingStore.name.setter // setter 
	0x10870  func CKInMemoryBackingStore.name.modify // modifyCoroutine 
	0x108c0  class func CKInMemoryBackingStore.__allocating_init() // init 
	0x109f0  func CKInMemoryBackingStore.keys(completionHandler:) // method 
	0x10a90  func CKInMemoryBackingStore.keys(matching:completionHandler:) // method 
	0x10b30  func CKInMemoryBackingStore.value(forKey:completionHandler:) // method 
	0x10cf0  func CKInMemoryBackingStore.values(completionHandler:) // method 
	0x10d90  func CKInMemoryBackingStore.values(forKeys:completionHandler:) // method 
	0x10e40  func CKInMemoryBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x10ee0  func CKInMemoryBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x10f80  func CKInMemoryBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x11020  func CKInMemoryBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x110c0  func CKInMemoryBackingStore.verify(path:completionHandler:) // method 
	0x11140  func CKInMemoryBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x111f0  func CKInMemoryBackingStore.writeBatch() // method 
	0x11280  func CKInMemoryBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x11300  func CKInMemoryBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x11480  func CKInMemoryBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x11600  func CKInMemoryBackingStore.removeValue(forKey:completionHandler:) // method 
	0x11670  func CKInMemoryBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x116e0  func CKInMemoryBackingStore.removeValues(matching:completionHandler:) // method 
	0x11750  func CKInMemoryBackingStore.removeAllValues(completionHandler:) // method 
	0x117c0  func CKInMemoryBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x11830  func CKInMemoryBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x118a0  func CKInMemoryBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x11910  func CKInMemoryBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.BackgroundQueue : NSOperationQueue /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var lock : OS_dispatch_semaphore // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x12020  @objc BackgroundQueue.init <stripped>
	0x12370  @objc BackgroundQueue..cxx_destruct <stripped>

	// Swift methods
	0x12090  func BackgroundQueue.pause() // method 
	0x12320  func BackgroundQueue.resume() // method 
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
	0x1a690  @objc CKPersistentStoreHandler.init <stripped>
	0x1add0  @objc CKPersistentStoreHandler.initWithName: <stripped>
	0x1b4c0  @objc CKPersistentStoreHandler.keysAndReturnError: <stripped>
	0x1bcc0  @objc CKPersistentStoreHandler.keysMatching:error: <stripped>
	0x1c4d0  @objc CKPersistentStoreHandler.valuesAndReturnError: <stripped>
	0x1cd30  @objc CKPersistentStoreHandler.valuesForKeysMatching:error: <stripped>
	0x1d620  @objc CKPersistentStoreHandler.keysAndValuesAndReturnError: <stripped>
	0x1dfc0  @objc CKPersistentStoreHandler.keysAndValuesForKeysMatching:error: <stripped>
	0x1f130  @objc CKPersistentStoreHandler._valuesForKeys:error: <stripped>
	0x20230  @objc CKPersistentStoreHandler.saveKeysAndValues:error: <stripped>
	0x20940  @objc CKPersistentStoreHandler.removeValueForKey:error: <stripped>
	0x212d0  @objc CKPersistentStoreHandler.removeValuesForKeys:error: <stripped>
	0x21c70  @objc CKPersistentStoreHandler.removeValuesMatching:error: <stripped>
	0x22580  @objc CKPersistentStoreHandler.removeAllValuesAndReturnError: <stripped>
	0x230c0  @objc CKPersistentStoreHandler.tripleComponentsMatching:error: <stripped>
	0x23800  @objc CKPersistentStoreHandler.setWeightForLinkWithLabel:between:and:toValue:error: <stripped>
	0x245d0  @objc CKPersistentStoreHandler.increaseWeightForLinkWithLabel:between:and: <stripped>
	0x24dd0  @objc CKPersistentStoreHandler.decreaseWeightForLinkWithLabel:between:and: <stripped>
	0x25a20  @objc CKPersistentStoreHandler.dropLinkWithLabel:between:and:error: <stripped>
	0x261f0  @objc CKPersistentStoreHandler.dropLinksWithLabel:from:error: <stripped>
	0x26630  @objc CKPersistentStoreHandler.dropLinksBetween:and:error: <stripped>
	0x26c80  @objc CKPersistentStoreHandler..cxx_destruct <stripped>

	// Swift methods
	0x1a470  func CKPersistentStoreHandler.connection.getter // getter 
	0x1a4b0  func CKPersistentStoreHandler.connection.setter // setter 
	0x1a500  func CKPersistentStoreHandler.connection.modify // modifyCoroutine 
	0x1a550  class func static CKPersistentStoreHandler.inMemoryHandler() // method 
	0x1a6f0  class func CKPersistentStoreHandler.__allocating_init(name:) // init 
	0x1ae00  func CKPersistentStoreHandler.keys() // method 
	0x1b570  func CKPersistentStoreHandler.keys(matching:) // method 
	0x1bd90  func CKPersistentStoreHandler.values() // method 
	0x1c570  func CKPersistentStoreHandler.values(forKeysMatching:) // method 
	0x1ce00  func CKPersistentStoreHandler.keysAndValues() // method 
	0x1d6d0  func CKPersistentStoreHandler.keysAndValues(forKeysMatching:) // method 
	0x1e0a0  func CKPersistentStoreHandler.selectQuery(project:whereField:isIn:) // method 
	0x1e810  func CKPersistentStoreHandler._values(forKeys:) // method 
	0x1f220  func CKPersistentStoreHandler.save(keysAndValues:) // method 
	0x20310  func CKPersistentStoreHandler.removeValue(forKey:) // method 
	0x20ab0  func CKPersistentStoreHandler._removeValues(forKeys:) // method 
	0x211e0  func CKPersistentStoreHandler.removeValues(forKeys:) // method 
	0x21470  func CKPersistentStoreHandler._removeValues(matching:) // method 
	0x21b50  func CKPersistentStoreHandler.removeValues(matching:) // method 
	0x21de0  func CKPersistentStoreHandler.removeAllValues() // method 
	0x22680  func CKPersistentStoreHandler.tripleComponents(matching:) // method 
	0x23190  func CKPersistentStoreHandler.setWeight(forLinkWithLabel:between:and:toValue:) // method 
	0x23960  func CKPersistentStoreHandler.increaseWeight(forLinkWithLabel:between:and:) // method 
	0x245f0  func CKPersistentStoreHandler.decreaseWeight(forLinkWithLabel:between:and:) // method 
	0x24ee0  func CKPersistentStoreHandler.decreaseWeights(between:and:) // method 
	0x255a0  func CKPersistentStoreHandler.dropLink(withLabel:between:and:) // method 
	0x25b70  func CKPersistentStoreHandler.dropLinks(withLabel:from:) // method 
	0x26310  func CKPersistentStoreHandler.dropLinks(between:and:) // method 
	0x26750  func CKPersistentStoreHandler.deserializeValue(_:) // method 
 }

 class CoreKnowledge.CKSiriRemembers : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x2b800  @objc CKSiriRemembers.init <stripped>
	0x2b7a0  @objc CKSiriRemembers..cxx_destruct <stripped>

	// Swift methods
	0x2ae50  class func static CKSiriRemembers.saveInteraction(interaction:) // method 
	0x2aed0  class func static CKSiriRemembers.findAppMatches(forIntent:candidateBundleIDs:completionHandler:) // method 
	0x2b0a0  class func static CKSiriRemembers.findAppMatches(forJSONIntent:candidateBundleIDs:completionHandler:) // method 
	0x2b190  class func static CKSiriRemembers.findRelativeAppUsageProbabilities(bundleIDs:days:completionHandler:) // method 
 }

 struct CoreKnowledge.SRXPCInterruptionError { }

 class CoreKnowledge.DeferrableXPCOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	var activity : OS_xpc_object? // +0x8 (0x8)
	var isDeferred : Bool // +0x10 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var completionKVObservation : Uá // +0x18 (0x8)

	// ObjC -> Swift bridged methods
	0x37290  @objc DeferrableXPCOperation.init <stripped>
	0x373e0  @objc DeferrableXPCOperation..cxx_destruct <stripped>

	// Swift methods
	0x36df0  func DeferrableXPCOperation.activity.getter // getter 
	0x36e30  func DeferrableXPCOperation.activity.setter // setter 
	0x36e80  func DeferrableXPCOperation.activity.modify // modifyCoroutine 
	0x36f60  func DeferrableXPCOperation.isDeferred.getter // getter 
	0x36f90  func DeferrableXPCOperation.isDeferred.setter // setter 
	0x36fd0  func DeferrableXPCOperation.isDeferred.modify // modifyCoroutine 
	0x370c0  func DeferrableXPCOperation.completionKVObservation.getter // getter 
	0x37100  func DeferrableXPCOperation.completionKVObservation.setter // setter 
	0x37150  func DeferrableXPCOperation.completionKVObservation.modify // modifyCoroutine 
	0x372b0  class func DeferrableXPCOperation.__allocating_init(activity:) // init 
	0x37320  func DeferrableXPCOperation.isCancelledOrDeferred.getter // getter 
 }

 class CoreKnowledge.CKSQLBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var name : String // +0x10 (0x10)
	let connection : NSXPCConnection // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x37d30  @objc CKSQLBackingStore.initWithName: <stripped>

	// Swift methods
	0x37b20  func CKSQLBackingStore.name.getter // getter 
	0x37b60  func CKSQLBackingStore.name.setter // setter 
	0x37ba0  func CKSQLBackingStore.name.modify // modifyCoroutine 
	0x37bf0  class func CKSQLBackingStore.__allocating_init(name:) // init 
	0x37de0  class func static CKSQLBackingStore.mainInstance() // method 
	0x37e00  func CKSQLBackingStore.daemon(errorHandler:) // method 
	0x386b0  func CKSQLBackingStore.keys(completionHandler:) // method 
	0x388b0  func CKSQLBackingStore.keys(matching:completionHandler:) // method 
	0x38a50  func CKSQLBackingStore.value(forKey:completionHandler:) // method 
	0x38c80  func CKSQLBackingStore.values(completionHandler:) // method 
	0x38eb0  func CKSQLBackingStore.values(forKeys:completionHandler:) // method 
	0x39260  func CKSQLBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x39400  func CKSQLBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x39640  func CKSQLBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x397e0  func CKSQLBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x39a20  func CKSQLBackingStore.verify(path:completionHandler:) // method 
	0x39b00  func CKSQLBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x39de0  func CKSQLBackingStore.writeBatch() // method 
	0x39e30  func CKSQLBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x3a010  func CKSQLBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x3a270  func CKSQLBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x3a470  func CKSQLBackingStore.removeValue(forKey:completionHandler:) // method 
	0x3a600  func CKSQLBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x3a790  func CKSQLBackingStore.removeValues(matching:completionHandler:) // method 
	0x3a900  func CKSQLBackingStore.removeAllValues(completionHandler:) // method 
	0x3aa60  func CKSQLBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x3ac50  func CKSQLBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x3ae30  func CKSQLBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x3aff0  func CKSQLBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
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
	0x3e7f0  @objc SRInternalDatabaseManager.init <stripped>
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
	0x43af0  class func Connection.__allocating_init(_:readonly:) // init 
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
	0x55760  @objc CKCloudKitBackingStore.initWithName: <stripped>

	// Swift methods
	0x54480  func CKCloudKitBackingStore.triplesComponents(matching:) // method 
 }

 class CoreKnowledge.CKTriple : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : (String, String, String, Int) // +0x8 (0x38)

	// ObjC -> Swift bridged methods
	0x55b50  @objc CKTriple.subject <stripped>
	0x55be0  @objc CKTriple.predicate <stripped>
	0x55cb0  @objc CKTriple.object <stripped>
	0x55d80  @objc CKTriple.weight <stripped>
	0x55dc0  @objc CKTriple.description <stripped>
	0x56020  @objc CKTriple.hash <stripped>
	0x563f0  @objc CKTriple.isEqual: <stripped>
	0x565e0  @objc CKTriple.initWithSubject:predicate:object:weight: <stripped>
	0x56820  @objc CKTriple.encodeWithCoder: <stripped>
	0x56bd0  @objc CKTriple.initWithCoder: <stripped>
	0x56df0  @objc CKTriple.init <stripped>
	0x56e50  @objc CKTriple..cxx_destruct <stripped>

	// Swift methods
	0x55bb0  func CKTriple.subject.getter // getter 
	0x55c60  func CKTriple.predicate.getter // getter 
	0x55d30  func CKTriple.object.getter // getter 
	0x55da0  func CKTriple.weight.getter // getter 
	0x56480  class func CKTriple.__allocating_init(tuple:) // init 
	0x55a80  class func CKTriple.__allocating_init(subject:predicate:object:weight:) // init 
	0x56680  func CKTriple.encode(with:) // method 
	0x56870  class func CKTriple.__allocating_init(coder:) // init 
	0x56c20  func CKTriple.dictionary() // method 
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
	0x60b60  @objc ScrubDeletedRecords.initSinceDate: <stripped>
	0x61620  @objc ScrubDeletedRecords.main <stripped>
	0x61710  @objc ScrubDeletedRecords.init <stripped>
	0x616a0  @objc ScrubDeletedRecords..cxx_destruct <stripped>

	// Swift methods
	0x60a00  class func ScrubDeletedRecords.__allocating_init(sinceDate:) // init 
 }

 struct CoreKnowledge.CKOntology { }

 class CoreKnowledge.CoreKnowledgeXPCUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x67340  @objc CoreKnowledgeXPCUtils.init <stripped>
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
	0x6aeb0  @objc CKJSONLDGraph.initWithEntities: <stripped>
	0x6af00  @objc CKJSONLDGraph.entities <stripped>
	0x6b9f0  @objc CKJSONLDGraph.linkedDataWithCompletionHandler: <stripped>
	0x6bb90  @objc CKJSONLDGraph.init <stripped>
	0x6bb10  @objc CKJSONLDGraph..cxx_destruct <stripped>

	// Swift methods
	0x6ae40  class func CKJSONLDGraph.__allocating_init(withEntities:) // init 
	0x6af60  func CKJSONLDGraph.entities.getter // getter 
	0x6b150  func CKJSONLDGraph.linkedData(completionHandler:) // method 
 }

 class CoreKnowledge.CKEphemeralEventSequence : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x75860  @objc CKEphemeralEventSequence.init <stripped>
	0x75930  @objc CKEphemeralEventSequence..cxx_destruct <stripped>

	// Swift methods
	0x75880  func CKEphemeralEventSequence.historyStartEvent.getter // getter 
 }

 class CoreKnowledge.XPCTaskScheduler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : BackgroundQueue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x77c70  @objc XPCTaskScheduler.initWithQueue: <stripped>
	0x77e30  @objc XPCTaskScheduler.scheduleAllTasks <stripped>
	0x784f0  @objc XPCTaskScheduler.init <stripped>
	0x78480  @objc XPCTaskScheduler..cxx_destruct <stripped>

	// Swift methods
	0x77bc0  class func XPCTaskScheduler.__allocating_init(queue:) // init 
	0x77cc0  func XPCTaskScheduler.scheduleAllTasks() // method 
	0x77ed0  func XPCTaskScheduler.add(id:repeatInterval:makeOp:) // method 
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
	0x79450  class func Matcher.__allocating_init(_:value:) // init 
	0x794d0  func Matcher.evaluate(on:) // method 
	0x79a10  func Matcher.sql.getter // getter 
	0x79d70  func Matcher.sql.setter // setter 
	0x79d90  func Matcher.sql.modify // modifyCoroutine 
 }

 class CoreKnowledge.CKGenericCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : ConditionType
	var negated : Bool
	var $__lazy_storage_$_sql : String?

	// ObjC -> Swift bridged methods
	0x79ea0  @objc CKGenericCondition.predicate <stripped>
	0x7a140  @objc CKGenericCondition.description <stripped>
	0x7a3e0  @objc CKGenericCondition.initWithValue: <stripped>
	0x7a510  @objc CKGenericCondition.initWithMatchType:value:negated: <stripped>
	0x7a630  @objc CKGenericCondition.and: <stripped>
	0x7a730  @objc CKGenericCondition.or: <stripped>
	0x7b050  @objc CKGenericCondition.evaluateOn: <stripped>
	0x7b1a0  @objc CKGenericCondition.copyWithZone: <stripped>
	0x7b650  @objc CKGenericCondition.encodeWithCoder: <stripped>
	0x7bca0  @objc CKGenericCondition.initWithCoder: <stripped>
	0x7bd00  @objc CKGenericCondition.init <stripped>
	0x7bd50  @objc CKGenericCondition..cxx_destruct <stripped>

	// Swift methods
	0x79fa0  func CKGenericCondition.predicate.getter // getter 
	0x7a2e0  class func CKGenericCondition.__allocating_init(value:) // init 
	0x78c60  class func CKGenericCondition.__allocating_init(_:value:negated:) // init 
	0x7a550  func CKGenericCondition.and(_:) // method 
	0x7a650  func CKGenericCondition.or(_:) // method 
	0x7a860  func CKGenericCondition.sql.getter // getter 
	0x7ad80  func CKGenericCondition.sql.setter // setter 
	0x7adb0  func CKGenericCondition.sql.modify // modifyCoroutine 
	0x7aea0  func CKGenericCondition.evaluate(on:) // method 
	0x7b0e0  func CKGenericCondition.copy(with:) // method 
	0x7b320  func CKGenericCondition.encode(with:) // method 
	0x7b6a0  class func CKGenericCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKTripleCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var rawCondition : CKGenericCondition

	// ObjC -> Swift bridged methods
	0x7bf10  @objc CKTripleCondition.description <stripped>
	0x7c280  @objc CKTripleCondition.initWithValue: <stripped>
	0x7c310  @objc CKTripleCondition.initWithSubject:predicate:object: <stripped>
	0x7c4b0  @objc CKTripleCondition.and: <stripped>
	0x7c670  @objc CKTripleCondition.or: <stripped>
	0x7c800  @objc CKTripleCondition.evaluateOn: <stripped>
	0x7c950  @objc CKTripleCondition.copyWithZone: <stripped>
	0x7cb70  @objc CKTripleCondition.encodeWithCoder: <stripped>
	0x7cd20  @objc CKTripleCondition.initWithCoder: <stripped>
	0x7cda0  @objc CKTripleCondition.init <stripped>
	0x7ce20  @objc CKTripleCondition..cxx_destruct <stripped>

	// Swift methods
	0x7be30  func CKTripleCondition.rawCondition.getter // getter 
	0x7be70  func CKTripleCondition.rawCondition.setter // setter 
	0x7bec0  func CKTripleCondition.rawCondition.modify // modifyCoroutine 
	0x7c030  class func CKTripleCondition.__allocating_init(_:) // init 
	0x7c3f0  func CKTripleCondition.and(_:) // method 
	0x7c5b0  func CKTripleCondition.or(_:) // method 
	0x7c770  func CKTripleCondition.evaluate(on:) // method 
	0x7c8c0  func CKTripleCondition.copy(with:) // method 
	0x7cb00  func CKTripleCondition.encode(with:) // method 
	0x7cc10  class func CKTripleCondition.__allocating_init(coder:) // init 
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
	0x8aa70  @objc SRIngestor.init <stripped>
	0x8aad0  @objc SRIngestor..cxx_destruct <stripped>

	// Swift methods
	0x88450  func SRIngestor.saveInteraction() // method 
	0x88940  func SRIngestor.upsertIntent() // method 
	0x89460  func SRIngestor.upsertEntity(_:entity:) // method 
	0x880c0  class func SRIngestor.__allocating_init(db:interaction:dkEventUUID:) // init 
 }

 class CoreKnowledge.CKHistoricEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _firstSeen : KÕ // +0x14a8e6 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSeen : KÕ // +0x1540 (0x0)
	var _frequency : Int // +0x0 (0x8)
	var _lastDuration : Double // +0x80000400 (0x8)
	var _totalDuration : Double // +0x0 (0x8)
	var _metadata : [String : Any] // +0x74735f5f (0x8)

	// ObjC -> Swift bridged methods
	0x8b620  @objc CKHistoricEvent.identifier <stripped>
	0x8bf70  @objc CKHistoricEvent.firstSeen <stripped>
	0x8c010  @objc CKHistoricEvent.lastSeen <stripped>
	0x8c0b0  @objc CKHistoricEvent.frequency <stripped>
	0x8c120  @objc CKHistoricEvent.lastDuration <stripped>
	0x8c190  @objc CKHistoricEvent.totalDuration <stripped>
	0x8c200  @objc CKHistoricEvent.metadata <stripped>
	0x8c770  @objc CKHistoricEvent.encodeWithCoder: <stripped>
	0x8d180  @objc CKHistoricEvent.initWithCoder: <stripped>
	0x8d240  @objc CKHistoricEvent.init: <stripped>
	0x8db60  @objc CKHistoricEvent.initFrom:withIdentifier: <stripped>
	0x8dc00  @objc CKHistoricEvent.copyWithZone: <stripped>
	0x8dc90  @objc CKHistoricEvent.init <stripped>
	0x8dcf0  @objc CKHistoricEvent..cxx_destruct <stripped>

	// Swift methods
	0x8b770  func CKHistoricEvent._firstSeen.getter // getter 
	0x8b790  func CKHistoricEvent._firstSeen.setter // setter 
	0x8b7b0  func CKHistoricEvent._firstSeen.modify // modifyCoroutine 
	0x8b8d0  func CKHistoricEvent._lastSeen.getter // getter 
	0x8b940  func CKHistoricEvent._lastSeen.setter // setter 
	0x8b9c0  func CKHistoricEvent._lastSeen.modify // modifyCoroutine 
	0x8baa0  func CKHistoricEvent._frequency.getter // getter 
	0x8bad0  func CKHistoricEvent._frequency.setter // setter 
	0x8bb10  func CKHistoricEvent._frequency.modify // modifyCoroutine 
	0x8bbf0  func CKHistoricEvent._lastDuration.getter // getter 
	0x8bc10  func CKHistoricEvent._lastDuration.setter // setter 
	0x8bc30  func CKHistoricEvent._lastDuration.modify // modifyCoroutine 
	0x8bd10  func CKHistoricEvent._totalDuration.getter // getter 
	0x8bd60  func CKHistoricEvent._totalDuration.setter // setter 
	0x8bdc0  func CKHistoricEvent._totalDuration.modify // modifyCoroutine 
	0x8bea0  func CKHistoricEvent._metadata.getter // getter 
	0x8bee0  func CKHistoricEvent._metadata.setter // setter 
	0x8bf30  func CKHistoricEvent._metadata.modify // modifyCoroutine 
	0x8bff0  func CKHistoricEvent.firstSeen.getter // getter 
	0x8c090  func CKHistoricEvent.lastSeen.getter // getter 
	0x8c100  func CKHistoricEvent.frequency.getter // getter 
	0x8c170  func CKHistoricEvent.lastDuration.getter // getter 
	0x8c1e0  func CKHistoricEvent.totalDuration.getter // getter 
	0x8c280  func CKHistoricEvent.metadata.getter // getter 
	0x8b270  class func CKHistoricEvent.__allocating_init(identifier:firstSeen:lastSeen:frequency:lastDuration:totalDuration:metadata:) // init 
	0x8c440  func CKHistoricEvent.encode(with:) // method 
	0x8c7c0  class func CKHistoricEvent.__allocating_init(coder:) // init 
	0x8d1d0  class func CKHistoricEvent.__allocating_init(_:) // init 
	0x8dbb0  func CKHistoricEvent.copy(with:) // method 
 }

 class CoreKnowledge.CKClosure : NSObject /usr/lib/libobjc.A.dylib, CKExecutableClosure {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)
	let entity : CKEntity // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x8e770  @objc CKClosure.initWithCoder: <stripped>
	0x8e9c0  @objc CKClosure.encodeWithCoder: <stripped>
	0x8eae0  @objc CKClosure.init <stripped>
	0x8ea50  @objc CKClosure..cxx_destruct <stripped>

	// Swift methods
	0x8e1e0  class func CKClosure.__allocating_init(coder:) // init 
	0x8e7a0  func CKClosure.encode(with:) // method 
	0x8ea10  func CKClosure.execute() // method 
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
	0x8ffc0  @objc CKLogic.hash <stripped>
	0x904f0  @objc CKLogic.identifier <stripped>
	0x90d80  @objc CKLogic.andExistsLink:to:error: <stripped>
	0x914d0  @objc CKLogic.andNotExistsLink:to:error: <stripped>
	0x91720  @objc CKLogic.and: <stripped>
	0x91830  @objc CKLogic.init <stripped>
	0x917b0  @objc CKLogic..cxx_destruct <stripped>

	// Swift methods
	0x8fd90  func CKLogic.body.getter // getter 
	0x8fdb0  func CKLogic.body.setter // setter 
	0x8fdd0  func CKLogic.body.modify // modifyCoroutine 
	0x8feb0  func CKLogic.negatedBody.getter // getter 
	0x8ff10  func CKLogic.negatedBody.setter // setter 
	0x8ff70  func CKLogic.negatedBody.modify // modifyCoroutine 
	0x90550  func CKLogic.identifier.getter // getter 
	0x90650  class func static CKLogic.ifExistsLink(_:to:) // method 
	0x90860  func CKLogic.andExistsLink(_:to:) // method 
	0x90da0  class func static CKLogic.ifNotExistsLink(_:to:) // method 
	0x90fb0  func CKLogic.andNotExistsLink(_:to:) // method 
	0x915e0  func CKLogic.and(_:) // method 
 }

 enum CoreKnowledge.ErrorTracker { }

 class CoreKnowledge.ScrubOldRecords : DeferrableXPCOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cutoffDate : WÙ // +0x0 (0x0)

	// ObjC -> Swift bridged methods
	0x94f10  @objc ScrubOldRecords.main <stripped>
	0x94f90  @objc ScrubOldRecords.init <stripped>
	0x95010  @objc ScrubOldRecords..cxx_destruct <stripped>

	// Swift methods
	0x94570  class func ScrubOldRecords.__allocating_init(olderThan:) // init 
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
	0x9b3f0  @objc CKEntity.isEqual: <stripped>
	0x9b480  @objc CKEntity.hash <stripped>
	0x9b570  @objc CKEntity.description <stripped>
	0x9ba60  @objc CKEntity.valueForKey: <stripped>
	0x9bb60  @objc CKEntity.valueForKey:completionHandler: <stripped>
	0x9c1a0  @objc CKEntity.valuesForKeys:completionHandler: <stripped>
	0x9c6d0  @objc CKEntity.setValue:forKey:completionHandler: <stripped>
	0x9ce60  @objc CKEntity.setValuesForKeys:completionHandler: <stripped>
	0x9d070  @objc CKEntity.removeValueForKey:completionHandler: <stripped>
	0x9d860  @objc CKEntity.linkTo:withPredicate:completionHandler: <stripped>
	0x9dc90  @objc CKEntity.linkTo:withPredicate:error: <stripped>
	0x9deb0  @objc CKEntity.unlinkTo:withPredicate:ignoreWeights:completionHandler: <stripped>
	0x9e360  @objc CKEntity.removeWithCompletionHandler: <stripped>
	0xa34f0  @objc CKEntity.linksTo:matchType:completionHandler: <stripped>
	0xa3910  @objc CKEntity.linksTo:matchType:error: <stripped>
	0xa3a30  @objc CKEntity.init <stripped>
	0xa3a90  @objc CKEntity..cxx_destruct <stripped>

	// Swift methods
	0x9b1b0  class func CKEntity.__allocating_init(identifier:knowledgeStore:) // init 
	0x9bb20  func CKEntity.value(forKey:completionHandler:) // method 
	0x9bb90  func CKEntity.values(forKeys:completionHandler:) // method 
	0x9bd90  func CKEntity.values(forKeys:completionHandler:) // method 
	0x9c250  func CKEntity.setValue(_:forKey:completionHandler:) // method 
	0x9c7c0  func CKEntity.setValues(forKeys:completionHandler:) // method 
	0x9cf30  func CKEntity.removeValue(forKey:completionHandler:) // method 
	0x9d510  func CKEntity.link(to:withPredicate:completionHandler:) // method 
	0x9d920  func CKEntity.link(to:withPredicate:) // method 
	0x9dd80  func CKEntity.unlink(to:withPredicate:ignoreWeights:completionHandler:) // method 
	0x9df90  func CKEntity.unlink(to:withPredicate:ignoreWeights:) // method 
	0x9e2e0  func CKEntity.remove(completionHandler:) // method 
	0x9e440  func CKEntity.remove() // method 
	0x9e6f0  func CKEntity.path(to:withRadius:completionHandler:) // method 
	0x9eb90  func CKEntity.path(to:withRadius:) // method 
	0x9ebb0  func CKEntity.path(to:radius:) // method 
	0x9f640  func CKEntity.linkedEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xa0270  func CKEntity.linkedEntities(withPredicate:matchType:complement:) // method 
	0xa0630  func CKEntity.linkedEntities(completionHandler:) // method 
	0xa0dc0  func CKEntity.linkedEntities() // method 
	0xa1120  func CKEntity.linkingEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xa1e70  func CKEntity.linkingEntities(withPredicate:matchType:complement:) // method 
	0xa2230  func CKEntity.linkingEntities(completionHandler:) // method 
	0xa2540  func CKEntity.linkingEntities() // method 
	0xa2db0  func CKEntity.links(to:matchType:completionHandler:) // method 
	0xa3570  func CKEntity.links(to:matchType:) // method 
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
	0xa6170  func CKTimedDispatch._interruptError.getter // getter 
	0xa61a0  func CKTimedDispatch._interruptError.setter // setter 
	0xa61f0  func CKTimedDispatch._interruptError.modify // modifyCoroutine 
	0xa62f0  func CKTimedDispatch._group.getter // getter 
	0xa6330  func CKTimedDispatch._group.setter // setter 
	0xa6380  func CKTimedDispatch._group.modify // modifyCoroutine 
	0xa63c0  func CKTimedDispatch.group.getter // getter 
	0xa5540  class func CKTimedDispatch.__allocating_init(timeout:) // init 
	0xa6810  func CKTimedDispatch.interrupt(_:) // method 
	0xa6850  func CKTimedDispatch.wait() // method 
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
	0xa7ce0  @objc CKKnowledgeStore.delegate <stripped>
	0xa7d30  @objc CKKnowledgeStore.setDelegate: <stripped>
	0xa7d90  @objc CKKnowledgeStore.name <stripped>
	0xa7f70  @objc CKKnowledgeStore.filePathURL <stripped>
	0xa8000  @objc CKKnowledgeStore.hash <stripped>
	0xa8190  @objc CKKnowledgeStore.isEqual: <stripped>
	0xa8410  @objc CKKnowledgeStore.init <stripped>
	0xa8470  @objc CKKnowledgeStore..cxx_destruct <stripped>

	// Swift methods
	0xa6f40  func CKKnowledgeStore.delegate.getter // getter 
	0xa6f80  func CKKnowledgeStore.delegate.setter // setter 
	0xa6fd0  func CKKnowledgeStore.delegate.modify // modifyCoroutine 
	0xa7020  func CKKnowledgeStore.name.getter // getter 
	0xa7060  func CKKnowledgeStore.filePath.getter // getter 
	0xa7290  class func static CKKnowledgeStore.defaultKnowledgeStore() // method 
	0xa7340  class func static CKKnowledgeStore.defaultSynchedKnowledgeStore() // method 
	0xa7380  class func static CKKnowledgeStore.inMemoryKnowledgeStore() // method 
	0xa73b0  class func static CKKnowledgeStore.userDefaultsKnowledgeStore() // method 
	0xa73e0  class func static CKKnowledgeStore.knowledgeStore(withName:) // method 
	0xa73f0  class func static CKKnowledgeStore.synchedKnowledgeStore(withName:) // method 
	0xa7450  class func static CKKnowledgeStore.store(_:) // method 
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
	0xa9740  @objc AppUsageProbabilityFinder.init <stripped>

	// Swift methods
	0xa94b0  class func static AppUsageProbabilityFinder.relativeAppUsageProbabilities(bundleIDs:days:) // method 
 }

 class CoreKnowledge.SRAppMatcher : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var db : Connection // +0x8 (0x8)
	var domain : String // +0x10 (0x10)
	var allowedBundleIDs : [String] // +0x20 (0x8)
	var entitySet : RequestEntity // +0x28 (0x8)
	var memorableEntities : MemorableEntity // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0xafe80  @objc SRAppMatcher.init <stripped>
	0xafdd0  @objc SRAppMatcher..cxx_destruct <stripped>

	// Swift methods
	0xaa860  func SRAppMatcher.appMatches() // method 
	0xaae20  func SRAppMatcher.findEntitySignals() // method 
	0xab8d0  func SRAppMatcher.findMatchingEntities(forEntity:) // method 
	0xac870  func SRAppMatcher.findIntentSignals(entityIDs:) // method 
	0xacb10  func SRAppMatcher.findBaseIntentSignals(entityIDs:) // method 
	0xada00  func SRAppMatcher.calculateEntityMatchSignals(intentSignals:) // method 
	0xaee90  func SRAppMatcher.findAppSignals(intentSignals:) // method 
	0xaf850  func SRAppMatcher.makeDecision(appSignals:) // method 
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
	let modifiedAt : KÕ // +0x14cb30 (0x0)
	var recencyOrder : Int // +0x15c8 (0x8)
	var ftsRankSum : Double // +0x14cb30 (0x8)
	var requestEntityMatchRate : Double // +0x0 (0x8)
	var intentEntityMatchRate : Double // +0x80000400 (0x8)
	var maxEntityMatchRate : Double // +0x0 (0x8)

	// Swift methods
	0xaff90  func IntentSignals.entities.getter // getter 
	0xaffc0  func IntentSignals.entities.setter // setter 
	0xb0000  func IntentSignals.entities.modify // modifyCoroutine 
	0xb0120  func IntentSignals.recencyOrder.getter // getter 
	0xb0150  func IntentSignals.recencyOrder.setter // setter 
	0xb0190  func IntentSignals.recencyOrder.modify // modifyCoroutine 
	0xb0260  func IntentSignals.ftsRankSum.getter // getter 
	0xb0290  func IntentSignals.ftsRankSum.setter // setter 
	0xb02d0  func IntentSignals.ftsRankSum.modify // modifyCoroutine 
	0xb03b0  func IntentSignals.requestEntityMatchRate.getter // getter 
	0xb03e0  func IntentSignals.requestEntityMatchRate.setter // setter 
	0xb0420  func IntentSignals.requestEntityMatchRate.modify // modifyCoroutine 
	0xb04f0  func IntentSignals.intentEntityMatchRate.getter // getter 
	0xb0520  func IntentSignals.intentEntityMatchRate.setter // setter 
	0xb0560  func IntentSignals.intentEntityMatchRate.modify // modifyCoroutine 
	0xb0630  func IntentSignals.maxEntityMatchRate.getter // getter 
	0xb0660  func IntentSignals.maxEntityMatchRate.setter // setter 
	0xb06a0  func IntentSignals.maxEntityMatchRate.modify // modifyCoroutine 
	0xad990  class func IntentSignals.__allocating_init(intentID:entities:bundleID:direction:modifiedAt:recencyOrder:) // init 
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
	0xb0a90  func RequestEntity.matches.getter // getter 
	0xb0ac0  func RequestEntity.matches.setter // setter 
	0xb0b00  func RequestEntity.matches.modify // modifyCoroutine 
	0xaa7c0  class func RequestEntity.__allocating_init(entity:) // init 
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
	0xbe540  class func Statement.__allocating_init(_:_:) // init 
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
	0xc1800  @objc CKDeviceActivityStore.init <stripped>
	0xc1790  @objc CKDeviceActivityStore..cxx_destruct <stripped>

	// Swift methods
	0xc15c0  class func CKDeviceActivityStore.__allocating_init(store:) // init 
 }

 class CoreKnowledge.CKAbstractWriteBatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var buffer : [String : Any?]
	let backingStore : CKBackingStore

	// ObjC -> Swift bridged methods
	0xc2880  @objc CKAbstractWriteBatch.setObject:forKey: <stripped>

	// Swift methods
	0xc2650  func CKAbstractWriteBatch.buffer.getter // getter 
	0xc2680  func CKAbstractWriteBatch.buffer.setter // setter 
	0xc26c0  func CKAbstractWriteBatch.buffer.modify // modifyCoroutine 
	0xc2710  class func CKAbstractWriteBatch.__allocating_init(backingStore:) // init 
	0xc27d0  func CKAbstractWriteBatch.setObject(_:forKey:) // method 
 }

 class CoreKnowledge.CKInMemoryWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xc29f0  @objc CKInMemoryWriteBatch.writeWithCompletionHandler: <stripped>
	0xc3100  @objc CKInMemoryWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xc2990  func CKInMemoryWriteBatch.write(completionHandler:) // method 
	0xc2aa0  func CKInMemoryWriteBatch.write() // method 
 }

 class CoreKnowledge.CKUserDefaultsWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xc7ad0  @objc CKUserDefaultsWriteBatch.writeWithCompletionHandler: <stripped>
	0xc3740  @objc CKUserDefaultsWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xc7b70  func CKUserDefaultsWriteBatch.write(completionHandler:) // method 
	0xc3210  func CKUserDefaultsWriteBatch.write() // method 
 }

 class CoreKnowledge.CKSQLWriteBatch : CKAbstractWriteBatch {

	// Properties
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
	0xc4870  @objc CKSQLWriteBatch.writeWithCompletionHandler: <stripped>
	0xc4bd0  @objc CKSQLWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xc3860  func CKSQLWriteBatch.queue.getter // getter 
	0xc3890  func CKSQLWriteBatch.queue.setter // setter 
	0xc38d0  func CKSQLWriteBatch.queue.modify // modifyCoroutine 
	0xc4100  func CKSQLWriteBatch.write(completionHandler:) // method 
	0xc4890  func CKSQLWriteBatch.write() // method 
 }

 class CoreKnowledge.CKCloudKitWriteBatch : CKSQLWriteBatch {
	// ObjC -> Swift bridged methods
	0xc5c60  @objc CKCloudKitWriteBatch.writeWithCompletionHandler: <stripped>
 }

 class CoreKnowledge.BackfillInteractions : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handler :  empty-list  // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0xc8640  @objc BackfillInteractions.main <stripped>
	0xc8740  @objc BackfillInteractions.init <stripped>
	0xc87a0  @objc BackfillInteractions..cxx_destruct <stripped>

	// Swift methods
	0xc7c00  class func BackfillInteractions.__allocating_init(handler:) // init 
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
	0xcef40  class func CKLogger.__allocating_init(_:) // init 
	0xcef90  func CKLogger.debug(_:_:) // method 
	0xcefb0  func CKLogger.info(_:_:) // method 
	0xcefd0  func CKLogger.error(_:_:) // method 
	0xceff0  func CKLogger.fault(_:_:) // method 
	0xcf050  func CKLogger.log(type:_:_:) // method 
 }

 class CoreKnowledge.SRAppMatches : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let matchType : SRAppMatchesType // +0x8 (0x8)
	let bundleIDs : [String] // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let signalsJSON : Ø // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0xcf5d0  @objc SRAppMatches.matchType <stripped>
	0xcf610  @objc SRAppMatches.bundleIDs <stripped>
	0xcf670  @objc SRAppMatches.signalsJSON <stripped>
	0xcf800  @objc SRAppMatches.initWithMatchType:bundleIDs:signalsJSON: <stripped>
	0xcf8d0  @objc SRAppMatches.description <stripped>
	0xcfbf0  @objc SRAppMatches.copyWithZone: <stripped>
	0xcfeb0  @objc SRAppMatches.encodeWithCoder: <stripped>
	0xd02f0  @objc SRAppMatches.initWithCoder: <stripped>
	0xd0370  @objc SRAppMatches.init <stripped>
	0xd03d0  @objc SRAppMatches..cxx_destruct <stripped>

	// Swift methods
	0xcf580  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signals:) // init 
	0xcf730  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signalsJSON:) // init 
	0xcfb20  func SRAppMatches.copy(with:) // method 
	0xcfd80  func SRAppMatches.encode(with:) // method 
	0xcff00  class func SRAppMatches.__allocating_init(coder:) // init 
 }

 enum CoreKnowledge.SRAppMatchesType { }
