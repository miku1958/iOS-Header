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
 protocol CoreKnowledge.Memorable // 2 requirements
 {
	// getter
	// getter
 }
 protocol CoreKnowledge.USOMemorable // 2 requirements
 {
	// class base protocol
	// class base protocol
 }
 protocol CoreKnowledge.SiriKitIntent // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol CoreKnowledge.USOType // 3 requirements
 {
	// class base protocol
	// class base protocol
	// getter
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
	0x6cb0  @objc CKAppInteractionsContext.init <stripped>
	0x7100  @objc CKAppInteractionsContext.encodeWithCoder: <stripped>
	0x7640  @objc CKAppInteractionsContext.initWithCoder: <stripped>
	0x7740  @objc CKAppInteractionsContext.copyWithZone: <stripped>
	0x7c30  @objc CKAppInteractionsContext.updateDiscardedDonations:forIntentType:andBundleId: <stripped>
	0x7d40  @objc CKAppInteractionsContext..cxx_destruct <stripped>

	// Swift methods
	0x69c0  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x69e0  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.setter // setter 
	0x6a00  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6a40  func CKAppInteractionsContext.outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x6aa0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.getter // getter 
	0x6b00  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.setter // setter 
	0x6b60  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6d90  class func CKAppInteractionsContext.__allocating_init(_:) // init 
	0x6f00  func CKAppInteractionsContext.encode(with:) // method 
	0x7150  class func CKAppInteractionsContext.__allocating_init(coder:) // init 
	0x76a0  func CKAppInteractionsContext.copy(with:) // method 
	0x7780  func CKAppInteractionsContext.incrementNumberOfOutOfAppLaunchBoundaryDonations(forBundleId:intent:) // method 
	0x7c20  func CKAppInteractionsContext.updateDiscardedDonations(_:forIntentType:andBundleId:) // method 
 }

 class CoreKnowledge.CKKnowledgeStoreUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xc4e0  @objc CKKnowledgeStoreUtils.init <stripped>
 }

 class CoreKnowledge.CKUserDefaultsBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var kv : NSUserDefaults // +0x10 (0x8)

	// Swift methods
	0xc940  func CKUserDefaultsBackingStore.name.getter // getter 
	0xc960  func CKUserDefaultsBackingStore.name.setter // setter 
	0xc970  func CKUserDefaultsBackingStore.name.modify // modifyCoroutine 
	0xc9b0  class func CKUserDefaultsBackingStore.__allocating_init() // init 
	0xccf0  func CKUserDefaultsBackingStore.synchronize() // method 
	0xcd10  func CKUserDefaultsBackingStore.keys() // method 
	0xcf30  func CKUserDefaultsBackingStore.keys(matching:) // method 
	0xd250  func CKUserDefaultsBackingStore._value(forKey:) // method 
	0xd320  func CKUserDefaultsBackingStore.values() // method 
	0xd3b0  func CKUserDefaultsBackingStore.values(forKeys:) // method 
	0xd680  func CKUserDefaultsBackingStore.values(forKeysMatching:) // method 
	0xdc60  func CKUserDefaultsBackingStore.dictionaryRepresentation() // method 
	0xdcd0  func CKUserDefaultsBackingStore.dictionaryRepresentation(forKeysMatching:) // method 
	0xe250  func CKUserDefaultsBackingStore.triplesComponents(matching:) // method 
	0xe390  func CKUserDefaultsBackingStore.verify(path:completionHandler:) // method 
	0xe4f0  func CKUserDefaultsBackingStore.setValue(_:forKey:completionHandler:) // method 
	0xe500  func CKUserDefaultsBackingStore.writeBatch() // method 
	0x11310  func CKUserDefaultsBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xe5b0  func CKUserDefaultsBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xe710  func CKUserDefaultsBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0xe870  func CKUserDefaultsBackingStore.removeValue(forKey:) // method 
	0xe910  func CKUserDefaultsBackingStore.removeValues(forKeys:) // method 
	0xea10  func CKUserDefaultsBackingStore.removeValues(matching:) // method 
	0xec80  func CKUserDefaultsBackingStore.removeAllValues() // method 
	0xee20  func CKUserDefaultsBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0xef80  func CKUserDefaultsBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0xf0e0  func CKUserDefaultsBackingStore.dropLinks(between:and:completionHandler:) // method 
	0xf240  func CKUserDefaultsBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.INInteractionEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interaction : INInteraction

	// Swift methods
	0x11320  class func INInteractionEncoder.__allocating_init(_:) // init 
	0x113a0  func INInteractionEncoder.base64() // method 
 }

 class CoreKnowledge.INInteractionDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x115f0  class func INInteractionDecoder.__allocating_init() // init 
 }

 class CoreKnowledge.CKPermanentEventStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let knowledgeStore : CKKnowledgeStore

	// ObjC -> Swift bridged methods
	0xac1f0  @objc CKPermanentEventStore.backingStore <stripped>
	0xac620  @objc CKPermanentEventStore.historicEventsAndReturnError: <stripped>
	0xace50  @objc CKPermanentEventStore.historicEventsWithCompletionHandler: <stripped>
	0xad2f0  @objc CKPermanentEventStore.setFirstSeen:forEventWithIdentifier:completionHandler: <stripped>
	0xad9d0  @objc CKPermanentEventStore.setLastSeen:forEventWithIdentifier:completionHandler: <stripped>
	0xadf40  @objc CKPermanentEventStore.setFrequency:forEventWithIdentifier:completionHandler: <stripped>
	0xae410  @objc CKPermanentEventStore.setLastDuration:forEventWithIdentifier:completionHandler: <stripped>
	0xaea10  @objc CKPermanentEventStore.setTotalDuration:forEventWithIdentifier:completionHandler: <stripped>
	0xaebd0  @objc CKPermanentEventStore.deleteEventWithIdentifier:error: <stripped>
	0xaecb0  @objc CKPermanentEventStore.deleteEventWithIdentifier:completionHandler: <stripped>
	0x5e2f0  @objc CKPermanentEventStore.historicEventWithIdentifier:completionHandler: <stripped>
	0x5f090  @objc CKPermanentEventStore.historicEventsWithSourceBundleIdentifier:andIntent:completionHandler: <stripped>
	0x49be0  @objc CKPermanentEventStore.recordEvent:completionHandler: <stripped>
	0x49f80  @objc CKPermanentEventStore.recordEvent:error: <stripped>
	0x4a0c0  @objc CKPermanentEventStore.recordInteraction:error: <stripped>
	0x4a2e0  @objc CKPermanentEventStore.recordInteraction:completionHandler: <stripped>
	0x4a7d0  @objc CKPermanentEventStore.recordInteraction:bundleId:error: <stripped>
	0x4b420  @objc CKPermanentEventStore.recordInteraction:bundleId:completionHandler: <stripped>
	0x4b890  @objc CKPermanentEventStore.deleteInteractionsWithBundleId:error: <stripped>
	0x4b970  @objc CKPermanentEventStore.deleteInteractionsWithBundleId:completionHandler: <stripped>
	0x11760  @objc CKPermanentEventStore.initWithKnowledgeStore: <stripped>
	0x119a0  @objc CKPermanentEventStore.init <stripped>
	0x11a20  @objc CKPermanentEventStore..cxx_destruct <stripped>

	// Swift methods
	0x11690  class func CKPermanentEventStore.__allocating_init(knowledgeStore:) // init 
 }

 class CoreKnowledge.CKInMemoryBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let inMemoryStoreHandler : CKPersistentStoreHandler // +0x10 (0x8)

	// Swift methods
	0x12500  func CKInMemoryBackingStore.name.getter // getter 
	0x12520  func CKInMemoryBackingStore.name.setter // setter 
	0x12530  func CKInMemoryBackingStore.name.modify // modifyCoroutine 
	0x12580  class func CKInMemoryBackingStore.__allocating_init() // init 
	0x12740  func CKInMemoryBackingStore.keys(completionHandler:) // method 
	0x12830  func CKInMemoryBackingStore.keys(matching:completionHandler:) // method 
	0x12910  func CKInMemoryBackingStore.value(forKey:completionHandler:) // method 
	0x12b50  func CKInMemoryBackingStore.values(completionHandler:) // method 
	0x12c40  func CKInMemoryBackingStore.values(forKeys:completionHandler:) // method 
	0x12d50  func CKInMemoryBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x12e30  func CKInMemoryBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x12f20  func CKInMemoryBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x13000  func CKInMemoryBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x13120  func CKInMemoryBackingStore.verify(path:completionHandler:) // method 
	0x131e0  func CKInMemoryBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x132b0  func CKInMemoryBackingStore.writeBatch() // method 
	0x13360  func CKInMemoryBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x13420  func CKInMemoryBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x136a0  func CKInMemoryBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x13920  func CKInMemoryBackingStore.removeValue(forKey:completionHandler:) // method 
	0x13ae0  func CKInMemoryBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x13ca0  func CKInMemoryBackingStore.removeValues(matching:completionHandler:) // method 
	0x13e70  func CKInMemoryBackingStore.removeAllValues(completionHandler:) // method 
	0x13f20  func CKInMemoryBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x13fd0  func CKInMemoryBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x14080  func CKInMemoryBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x14130  func CKInMemoryBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
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
	0x1d700  @objc CKPersistentStoreHandler.init <stripped>
	0x1e150  @objc CKPersistentStoreHandler.initWithName: <stripped>
	0x1e950  @objc CKPersistentStoreHandler.keysAndReturnError: <stripped>
	0x1f360  @objc CKPersistentStoreHandler.keysMatching:error: <stripped>
	0x1fc40  @objc CKPersistentStoreHandler.valuesAndReturnError: <stripped>
	0x20690  @objc CKPersistentStoreHandler.valuesForKeysMatching:error: <stripped>
	0x21090  @objc CKPersistentStoreHandler.keysAndValuesAndReturnError: <stripped>
	0x21c20  @objc CKPersistentStoreHandler.keysAndValuesForKeysMatching:error: <stripped>
	0x22700  @objc CKPersistentStoreHandler._valuesForKeys:error: <stripped>
	0x23ba0  @objc CKPersistentStoreHandler.saveKeysAndValues:error: <stripped>
	0x242d0  @objc CKPersistentStoreHandler.removeValueForKey:error: <stripped>
	0x24d30  @objc CKPersistentStoreHandler.removeValuesForKeys:error: <stripped>
	0x25820  @objc CKPersistentStoreHandler.removeValuesMatching:error: <stripped>
	0x260e0  @objc CKPersistentStoreHandler.removeAllValuesAndReturnError: <stripped>
	0x26e80  @objc CKPersistentStoreHandler.tripleComponentsMatching:error: <stripped>
	0x26f80  @objc CKPersistentStoreHandler.setWeightForLinkWithLabel:between:and:toValue:error: <stripped>
	0x27100  @objc CKPersistentStoreHandler.increaseWeightForLinkWithLabel:between:and: <stripped>
	0x27130  @objc CKPersistentStoreHandler.decreaseWeightForLinkWithLabel:between:and: <stripped>
	0x27a10  @objc CKPersistentStoreHandler.dropLinkWithLabel:between:and:error: <stripped>
	0x27b90  @objc CKPersistentStoreHandler.dropLinksWithLabel:from:error: <stripped>
	0x28190  @objc CKPersistentStoreHandler.dropLinksBetween:and:error: <stripped>
	0x288f0  @objc CKPersistentStoreHandler..cxx_destruct <stripped>

	// Swift methods
	0x1d480  func CKPersistentStoreHandler.connection.getter // getter 
	0x1d4c0  func CKPersistentStoreHandler.connection.setter // setter 
	0x1d510  func CKPersistentStoreHandler.connection.modify // modifyCoroutine 
	0x1d560  class func static CKPersistentStoreHandler.inMemoryHandler() // method 
	0x1d780  class func CKPersistentStoreHandler.__allocating_init(name:) // init 
	0x1e180  func CKPersistentStoreHandler.keys() // method 
	0x1e9f0  func CKPersistentStoreHandler.keys(matching:) // method 
	0x1f430  func CKPersistentStoreHandler.values() // method 
	0x1fce0  func CKPersistentStoreHandler.values(forKeysMatching:) // method 
	0x20760  func CKPersistentStoreHandler.keysAndValues() // method 
	0x21140  func CKPersistentStoreHandler.keysAndValues(forKeysMatching:) // method 
	0x21d00  func CKPersistentStoreHandler.selectQuery(project:whereField:isIn:) // method 
	0x21d10  func CKPersistentStoreHandler._values(forKeys:) // method 
	0x227e0  func CKPersistentStoreHandler.save(keysAndValues:) // method 
	0x23c80  func CKPersistentStoreHandler.removeValue(forKey:) // method 
	0x243a0  func CKPersistentStoreHandler._removeValues(forKeys:) // method 
	0x24be0  func CKPersistentStoreHandler.removeValues(forKeys:) // method 
	0x24e00  func CKPersistentStoreHandler._removeValues(matching:) // method 
	0x256b0  func CKPersistentStoreHandler.removeValues(matching:) // method 
	0x258c0  func CKPersistentStoreHandler.removeAllValues() // method 
	0x26200  func CKPersistentStoreHandler.tripleComponents(matching:) // method 
	0x26f50  func CKPersistentStoreHandler.setWeight(forLinkWithLabel:between:and:toValue:) // method 
	0x270e0  func CKPersistentStoreHandler.increaseWeight(forLinkWithLabel:between:and:) // method 
	0x27120  func CKPersistentStoreHandler.decreaseWeight(forLinkWithLabel:between:and:) // method 
	0x27240  func CKPersistentStoreHandler.decreaseWeights(between:and:) // method 
	0x279f0  func CKPersistentStoreHandler.dropLink(withLabel:between:and:) // method 
	0x27b70  func CKPersistentStoreHandler.dropLinks(withLabel:from:) // method 
	0x27ca0  func CKPersistentStoreHandler.dropLinks(between:and:) // method 
	0x282b0  func CKPersistentStoreHandler.deserializeValue(_:) // method 
 }

 class CoreKnowledge.CKSiriRemembers : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x31930  @objc CKSiriRemembers.init <stripped>
	0x319d0  @objc CKSiriRemembers..cxx_destruct <stripped>

	// Swift methods
	0x30ea0  class func static CKSiriRemembers.saveInteraction(interaction:) // method 
	0x30f20  class func static CKSiriRemembers.findAppMatches(forIntent:candidateBundleIDs:completionHandler:) // method 
	0x31060  class func static CKSiriRemembers.findAppMatches(forJSONIntent:candidateBundleIDs:completionHandler:) // method 
	0x31180  class func static CKSiriRemembers.findRelativeAppUsageProbabilities(bundleIDs:days:completionHandler:) // method 
 }

 class CoreKnowledge.CKSQLBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var name : String // +0x10 (0x10)
	let connection : NSXPCConnection // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x3e230  @objc CKSQLBackingStore.initWithName: <stripped>

	// Swift methods
	0x3dfb0  func CKSQLBackingStore.name.getter // getter 
	0x3dff0  func CKSQLBackingStore.name.setter // setter 
	0x3e030  func CKSQLBackingStore.name.modify // modifyCoroutine 
	0x3e080  class func CKSQLBackingStore.__allocating_init(name:) // init 
	0x3e2e0  class func static CKSQLBackingStore.mainInstance() // method 
	0x3e340  func CKSQLBackingStore.daemon(errorHandler:) // method 
	0x3edb0  func CKSQLBackingStore.keys(completionHandler:) // method 
	0x3f030  func CKSQLBackingStore.keys(matching:completionHandler:) // method 
	0x3f240  func CKSQLBackingStore.value(forKey:completionHandler:) // method 
	0x3f500  func CKSQLBackingStore.values(completionHandler:) // method 
	0x3f7b0  func CKSQLBackingStore.values(forKeys:completionHandler:) // method 
	0x3fc20  func CKSQLBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x3fe30  func CKSQLBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x400f0  func CKSQLBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x40300  func CKSQLBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x405b0  func CKSQLBackingStore.verify(path:completionHandler:) // method 
	0x40710  func CKSQLBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x40b00  func CKSQLBackingStore.writeBatch() // method 
	0x40b80  func CKSQLBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x40e20  func CKSQLBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x41160  func CKSQLBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x41440  func CKSQLBackingStore.removeValue(forKey:completionHandler:) // method 
	0x41660  func CKSQLBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x41880  func CKSQLBackingStore.removeValues(matching:completionHandler:) // method 
	0x41a70  func CKSQLBackingStore.removeAllValues(completionHandler:) // method 
	0x41c50  func CKSQLBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x41ef0  func CKSQLBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x42180  func CKSQLBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x423f0  func CKSQLBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 struct CoreKnowledge.MemorableEntity {

	// Properties
	let paramName : String // +0x0
	let entityType : String // +0x10
	let siriRemembersID : String? // +0x20
	let siriRemembersTokens : [String] // +0x30
 }

 struct CoreKnowledge.USOMemorableEntityIterator {

	// Properties
	var inner : [String : Any].Iterator // +0x0
	var memoized : USOMemorable // +0x28
 }

 class CoreKnowledge.INMemorableEntityIterator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let intent : INIntent // +0x10 (0x8)
	var attrs : [NSNumber : INCodableAttribute].Values.Iterator // +0x18 (0x28)
	var currentAttr : INCodableAttribute? // +0x40 (0x8)
	var currentAttrValues : NSMutableArray // +0x48 (0x8)

	// Swift methods
	0x445c0  class func INMemorableEntityIterator.__allocating_init(forIntent:) // init 
	0x44660  func INMemorableEntityIterator.next() // method 
 }

 class CoreKnowledge.SRInternalDatabaseURLSetter : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x47730  @objc SRInternalDatabaseURLSetter.init <stripped>
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
	0x4ce90  class func Connection.__allocating_init(_:readonly:) // init 
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
	0x61420  @objc CKCloudKitBackingStore.initWithName: <stripped>

	// Swift methods
	0x5f900  func CKCloudKitBackingStore.triplesComponents(matching:) // method 
 }

 class CoreKnowledge.CKTriple : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : (String, String, String, Int) // +0x8 (0x38)

	// ObjC -> Swift bridged methods
	0x61930  @objc CKTriple.subject <stripped>
	0x619c0  @objc CKTriple.predicate <stripped>
	0x61a90  @objc CKTriple.object <stripped>
	0x61b60  @objc CKTriple.weight <stripped>
	0x61ba0  @objc CKTriple.description <stripped>
	0x61f90  @objc CKTriple.hash <stripped>
	0x62a30  @objc CKTriple.isEqual: <stripped>
	0x62ce0  @objc CKTriple.initWithSubject:predicate:object:weight: <stripped>
	0x630c0  @objc CKTriple.encodeWithCoder: <stripped>
	0x63620  @objc CKTriple.initWithCoder: <stripped>
	0x639f0  @objc CKTriple.init <stripped>
	0x63a70  @objc CKTriple..cxx_destruct <stripped>

	// Swift methods
	0x61990  func CKTriple.subject.getter // getter 
	0x61a40  func CKTriple.predicate.getter // getter 
	0x61b10  func CKTriple.object.getter // getter 
	0x61b80  func CKTriple.weight.getter // getter 
	0x62ad0  class func CKTriple.__allocating_init(tuple:) // init 
	0x617d0  class func CKTriple.__allocating_init(subject:predicate:object:weight:) // init 
	0x62e40  func CKTriple.encode(with:) // method 
	0x63110  class func CKTriple.__allocating_init(coder:) // init 
	0x63680  func CKTriple.dictionary() // method 
 }

 struct CoreKnowledge.SendMessage: SiriKitIntent {

	// Properties
	let parameters : Parameters // +0x0
 }

 struct CoreKnowledge.Parameters {

	// Properties
	let recipients : Person // +0x0
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

 struct CoreKnowledge.ContactAddress: USOType {

	// Properties
	let _type : String? // +0x0
	let value : String? // +0x10
	let label : String? // +0x20
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
	case recipients  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case parameters  
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
	0x72a10  @objc CoreKnowledgeXPCUtils.init <stripped>
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
	0x763a0  @objc CKJSONLDGraph.initWithEntities: <stripped>
	0x763f0  @objc CKJSONLDGraph.entities <stripped>
	0x77130  @objc CKJSONLDGraph.linkedDataWithCompletionHandler: <stripped>
	0x772a0  @objc CKJSONLDGraph.init <stripped>
	0x77320  @objc CKJSONLDGraph..cxx_destruct <stripped>

	// Swift methods
	0x76310  class func CKJSONLDGraph.__allocating_init(withEntities:) // init 
	0x76450  func CKJSONLDGraph.entities.getter // getter 
	0x76700  func CKJSONLDGraph.linkedData(completionHandler:) // method 
 }

 class CoreKnowledge.CKEphemeralEventSequence : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x6f290  @objc CKEphemeralEventSequence.loadFromKnowledgeStreamNamed:between:and:completionHandler: <stripped>
	0x6f6a0  @objc CKEphemeralEventSequence.removeAllEventsSavedInKnowledgeStreamNamed:completionHandler: <stripped>
	0x6fa90  @objc CKEphemeralEventSequence.appendEvent: <stripped>
	0x705f0  @objc CKEphemeralEventSequence.writeEventsToKnowledgeStreamNamed:completionHandler: <stripped>
	0x33360  @objc CKEphemeralEventSequence.eventsBetween:and: <stripped>
	0x334d0  @objc CKEphemeralEventSequence.eventsWithIdentifier: <stripped>
	0x33c90  @objc CKEphemeralEventSequence.first <stripped>
	0x33ce0  @objc CKEphemeralEventSequence.last <stripped>
	0x84500  @objc CKEphemeralEventSequence.init <stripped>
	0x84600  @objc CKEphemeralEventSequence..cxx_destruct <stripped>

	// Swift methods
	0x84520  func CKEphemeralEventSequence.historyStartEvent.getter // getter 
 }

 class CoreKnowledge.SRJobScheduler : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x871e0  @objc SRJobScheduler.init <stripped>
	0x87280  @objc SRJobScheduler..cxx_destruct <stripped>

	// Swift methods
	0x869f0  class func static SRJobScheduler.scheduleAllJobs() // method 
	0x86a10  func SRJobScheduler.add(job:) // method 
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
	0x89000  class func Matcher.__allocating_init(_:value:) // init 
	0x890a0  func Matcher.evaluate(on:) // method 
	0x89640  func Matcher.sql.getter // getter 
	0x89930  func Matcher.sql.setter // setter 
	0x89950  func Matcher.sql.modify // modifyCoroutine 
 }

 class CoreKnowledge.CKGenericCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : ConditionType
	var negated : Bool
	var $__lazy_storage_$_sql : String?

	// ObjC -> Swift bridged methods
	0x89ab0  @objc CKGenericCondition.predicate <stripped>
	0x89d50  @objc CKGenericCondition.description <stripped>
	0x89ff0  @objc CKGenericCondition.initWithValue: <stripped>
	0x8a170  @objc CKGenericCondition.initWithMatchType:value:negated: <stripped>
	0x8a410  @objc CKGenericCondition.and: <stripped>
	0x8a530  @objc CKGenericCondition.or: <stripped>
	0x8b1f0  @objc CKGenericCondition.evaluateOn: <stripped>
	0x8b370  @objc CKGenericCondition.copyWithZone: <stripped>
	0x8b810  @objc CKGenericCondition.encodeWithCoder: <stripped>
	0x8bf80  @objc CKGenericCondition.initWithCoder: <stripped>
	0x8bfe0  @objc CKGenericCondition.init <stripped>
	0x8c030  @objc CKGenericCondition..cxx_destruct <stripped>

	// Swift methods
	0x89bb0  func CKGenericCondition.predicate.getter // getter 
	0x89ec0  class func CKGenericCondition.__allocating_init(value:) // init 
	0x887e0  class func CKGenericCondition.__allocating_init(_:value:negated:) // init 
	0x8a310  func CKGenericCondition.and(_:) // method 
	0x8a430  func CKGenericCondition.or(_:) // method 
	0x8a660  func CKGenericCondition.sql.getter // getter 
	0x8ae00  func CKGenericCondition.sql.setter // setter 
	0x8ae30  func CKGenericCondition.sql.modify // modifyCoroutine 
	0x8af60  func CKGenericCondition.evaluate(on:) // method 
	0x8b290  func CKGenericCondition.copy(with:) // method 
	0x8b4d0  func CKGenericCondition.encode(with:) // method 
	0x8b860  class func CKGenericCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKTripleCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var rawCondition : CKGenericCondition

	// ObjC -> Swift bridged methods
	0x8c1f0  @objc CKTripleCondition.description <stripped>
	0x8c710  @objc CKTripleCondition.initWithValue: <stripped>
	0x8f870  @objc CKTripleCondition.initWithSubject:predicate:object: <stripped>
	0x8fa50  @objc CKTripleCondition.and: <stripped>
	0x8fca0  @objc CKTripleCondition.or: <stripped>
	0x8fe90  @objc CKTripleCondition.evaluateOn: <stripped>
	0x90040  @objc CKTripleCondition.copyWithZone: <stripped>
	0x90300  @objc CKTripleCondition.encodeWithCoder: <stripped>
	0x906a0  @objc CKTripleCondition.initWithCoder: <stripped>
	0x90720  @objc CKTripleCondition.init <stripped>
	0x907b0  @objc CKTripleCondition..cxx_destruct <stripped>

	// Swift methods
	0x8c110  func CKTripleCondition.rawCondition.getter // getter 
	0x8c150  func CKTripleCondition.rawCondition.setter // setter 
	0x8c1a0  func CKTripleCondition.rawCondition.modify // modifyCoroutine 
	0x8c340  class func CKTripleCondition.__allocating_init(_:) // init 
	0x8f910  func CKTripleCondition.and(_:) // method 
	0x8fb60  func CKTripleCondition.or(_:) // method 
	0x8fdb0  func CKTripleCondition.evaluate(on:) // method 
	0x8ff60  func CKTripleCondition.copy(with:) // method 
	0x90260  func CKTripleCondition.encode(with:) // method 
	0x903a0  class func CKTripleCondition.__allocating_init(coder:) // init 
 }

 struct CoreKnowledge.LegacySendMessageIntent {

	// Properties
	let typeName : String // +0x0
	let parameters : LegacySendMessageIntentParameters // +0x10
 }

 struct CoreKnowledge.LegacySendMessageIntentParameters {

	// Properties
	let recipients : LegacyPerson // +0x0
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
	case recipients  
 }

 enum CoreKnowledge.CodingKeys {

	// Properties
	case typeName  
	case parameters  
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
	0x9bdd0  @objc SRIngestor.init <stripped>
	0x9be40  @objc SRIngestor..cxx_destruct <stripped>

	// Swift methods
	0x999e0  func SRIngestor.upsertIntent() // method 
	0x9a660  func SRIngestor.upsertEntity(_:entity:) // method 
 }

 class CoreKnowledge.CKHistoricEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
	var _firstSeen : Date // +0x0 (0x0)
	var _lastSeen : Date // +0x74735f5f (0x0)
	var _frequency : Int // +0x0 (0x8)
	var _lastDuration : Double // +0x45545f5f (0x8)
	var _totalDuration : Double // +0x0 (0x8)
	var _metadata : [String : Any] // +0x162d9c (0x8)

	// ObjC -> Swift bridged methods
	0x9d010  @objc CKHistoricEvent.identifier <stripped>
	0x9d960  @objc CKHistoricEvent.firstSeen <stripped>
	0x9da50  @objc CKHistoricEvent.lastSeen <stripped>
	0x9db40  @objc CKHistoricEvent.frequency <stripped>
	0x9dbf0  @objc CKHistoricEvent.lastDuration <stripped>
	0x9dca0  @objc CKHistoricEvent.totalDuration <stripped>
	0x9dd50  @objc CKHistoricEvent.metadata <stripped>
	0x9e490  @objc CKHistoricEvent.encodeWithCoder: <stripped>
	0x9f140  @objc CKHistoricEvent.initWithCoder: <stripped>
	0x9f230  @objc CKHistoricEvent.init: <stripped>
	0x9f2d0  @objc CKHistoricEvent.initFrom:withIdentifier: <stripped>
	0x9f3e0  @objc CKHistoricEvent.copyWithZone: <stripped>
	0x9f470  @objc CKHistoricEvent.init <stripped>
	0x9f4e0  @objc CKHistoricEvent..cxx_destruct <stripped>

	// Swift methods
	0x9d160  func CKHistoricEvent._firstSeen.getter // getter 
	0x9d180  func CKHistoricEvent._firstSeen.setter // setter 
	0x9d1a0  func CKHistoricEvent._firstSeen.modify // modifyCoroutine 
	0x9d2c0  func CKHistoricEvent._lastSeen.getter // getter 
	0x9d330  func CKHistoricEvent._lastSeen.setter // setter 
	0x9d3b0  func CKHistoricEvent._lastSeen.modify // modifyCoroutine 
	0x9d490  func CKHistoricEvent._frequency.getter // getter 
	0x9d4c0  func CKHistoricEvent._frequency.setter // setter 
	0x9d500  func CKHistoricEvent._frequency.modify // modifyCoroutine 
	0x9d5e0  func CKHistoricEvent._lastDuration.getter // getter 
	0x9d600  func CKHistoricEvent._lastDuration.setter // setter 
	0x9d620  func CKHistoricEvent._lastDuration.modify // modifyCoroutine 
	0x9d700  func CKHistoricEvent._totalDuration.getter // getter 
	0x9d750  func CKHistoricEvent._totalDuration.setter // setter 
	0x9d7b0  func CKHistoricEvent._totalDuration.modify // modifyCoroutine 
	0x9d890  func CKHistoricEvent._metadata.getter // getter 
	0x9d8d0  func CKHistoricEvent._metadata.setter // setter 
	0x9d920  func CKHistoricEvent._metadata.modify // modifyCoroutine 
	0x9d9e0  func CKHistoricEvent.firstSeen.getter // getter 
	0x9dad0  func CKHistoricEvent.lastSeen.getter // getter 
	0x9db90  func CKHistoricEvent.frequency.getter // getter 
	0x9dc40  func CKHistoricEvent.lastDuration.getter // getter 
	0x9dcf0  func CKHistoricEvent.totalDuration.getter // getter 
	0x9ddd0  func CKHistoricEvent.metadata.getter // getter 
	0x9cc70  class func CKHistoricEvent.__allocating_init(identifier:firstSeen:lastSeen:frequency:lastDuration:totalDuration:metadata:) // init 
	0x9dff0  func CKHistoricEvent.encode(with:) // method 
	0x9e4e0  class func CKHistoricEvent.__allocating_init(coder:) // init 
	0x9f1a0  class func CKHistoricEvent.__allocating_init(_:) // init 
	0x9f320  func CKHistoricEvent.copy(with:) // method 
 }

 class CoreKnowledge.DataScrubber : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xa09e0  @objc DataScrubber.init <stripped>
 }

 class CoreKnowledge.CKClosure : NSObject /usr/lib/libobjc.A.dylib, CKExecutableClosure {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)
	let entity : CKEntity // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0xa2080  @objc CKClosure.initWithCoder: <stripped>
	0xa22f0  @objc CKClosure.encodeWithCoder: <stripped>
	0xa23a0  @objc CKClosure.init <stripped>
	0xa2420  @objc CKClosure..cxx_destruct <stripped>

	// Swift methods
	0xa18c0  class func CKClosure.__allocating_init(coder:) // init 
	0xa20b0  func CKClosure.encode(with:) // method 
	0xa2340  func CKClosure.execute() // method 
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
	0xa40f0  @objc CKLogic.hash <stripped>
	0xa46f0  @objc CKLogic.identifier <stripped>
	0xa4df0  @objc CKLogic.andExistsLink:to:error: <stripped>
	0xa5400  @objc CKLogic.andNotExistsLink:to:error: <stripped>
	0xa57a0  @objc CKLogic.and: <stripped>
	0xa5850  @objc CKLogic.init <stripped>
	0xa58d0  @objc CKLogic..cxx_destruct <stripped>

	// Swift methods
	0xa3ec0  func CKLogic.body.getter // getter 
	0xa3ee0  func CKLogic.body.setter // setter 
	0xa3f00  func CKLogic.body.modify // modifyCoroutine 
	0xa3fe0  func CKLogic.negatedBody.getter // getter 
	0xa4040  func CKLogic.negatedBody.setter // setter 
	0xa40a0  func CKLogic.negatedBody.modify // modifyCoroutine 
	0xa4750  func CKLogic.identifier.getter // getter 
	0xa4880  class func static CKLogic.ifExistsLink(_:to:) // method 
	0xa48b0  func CKLogic.andExistsLink(_:to:) // method 
	0xa4e10  class func static CKLogic.ifNotExistsLink(_:to:) // method 
	0xa4ec0  func CKLogic.andNotExistsLink(_:to:) // method 
	0xa5510  func CKLogic.and(_:) // method 
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
	0xb0940  @objc CKEntity.isEqual: <stripped>
	0xb09e0  @objc CKEntity.hash <stripped>
	0xb0bb0  @objc CKEntity.description <stripped>
	0xb1210  @objc CKEntity.valueForKey: <stripped>
	0xb1310  @objc CKEntity.valueForKey:completionHandler: <stripped>
	0xb1cb0  @objc CKEntity.valuesForKeys:completionHandler: <stripped>
	0xb2080  @objc CKEntity.setValue:forKey:completionHandler: <stripped>
	0xb29e0  @objc CKEntity.setValuesForKeys:completionHandler: <stripped>
	0xb2af0  @objc CKEntity.removeValueForKey:completionHandler: <stripped>
	0xb3bc0  @objc CKEntity.linkTo:withPredicate:completionHandler: <stripped>
	0xb4090  @objc CKEntity.linkTo:withPredicate:error: <stripped>
	0xb42b0  @objc CKEntity.unlinkTo:withPredicate:ignoreWeights:completionHandler: <stripped>
	0xb4810  @objc CKEntity.removeWithCompletionHandler: <stripped>
	0xb90d0  @objc CKEntity.linksTo:matchType:completionHandler: <stripped>
	0xb95a0  @objc CKEntity.linksTo:matchType:error: <stripped>
	0xb96c0  @objc CKEntity.init <stripped>
	0xb9740  @objc CKEntity..cxx_destruct <stripped>

	// Swift methods
	0xb0630  class func CKEntity.__allocating_init(identifier:knowledgeStore:) // init 
	0xb12d0  func CKEntity.value(forKey:completionHandler:) // method 
	0xb13f0  func CKEntity.values(forKeys:completionHandler:) // method 
	0xb1600  func CKEntity.values(forKeys:completionHandler:) // method 
	0xb1d60  func CKEntity.setValue(_:forKey:completionHandler:) // method 
	0xb2170  func CKEntity.setValues(forKeys:completionHandler:) // method 
	0xb2ab0  func CKEntity.removeValue(forKey:completionHandler:) // method 
	0xb3680  func CKEntity.link(to:withPredicate:completionHandler:) // method 
	0xb3c80  func CKEntity.link(to:withPredicate:) // method 
	0xb4180  func CKEntity.unlink(to:withPredicate:ignoreWeights:completionHandler:) // method 
	0xb4390  func CKEntity.unlink(to:withPredicate:ignoreWeights:) // method 
	0xb4790  func CKEntity.remove(completionHandler:) // method 
	0xb48f0  func CKEntity.remove() // method 
	0xb4c80  func CKEntity.path(to:withRadius:completionHandler:) // method 
	0xb5210  func CKEntity.path(to:withRadius:) // method 
	0xb5230  func CKEntity.path(to:radius:) // method 
	0xb5ef0  func CKEntity.linkedEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xb6500  func CKEntity.linkedEntities(withPredicate:matchType:complement:) // method 
	0xb6510  func CKEntity.linkedEntities(completionHandler:) // method 
	0xb6f40  func CKEntity.linkedEntities() // method 
	0xb7310  func CKEntity.linkingEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0xb7910  func CKEntity.linkingEntities(withPredicate:matchType:complement:) // method 
	0xb7920  func CKEntity.linkingEntities(completionHandler:) // method 
	0xb7d20  func CKEntity.linkingEntities() // method 
	0xb8720  func CKEntity.links(to:matchType:completionHandler:) // method 
	0xb9150  func CKEntity.links(to:matchType:) // method 
 }

 class CoreKnowledge.CKTimedDispatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x10 (0x8)
	let semaphore : OS_dispatch_semaphore // +0x18 (0x8)
	var _interruptError : Error? // +0x20 (0x8)
	let _timeout : DispatchTime // +0x67 (0x0)
	var _group : OS_dispatch_group? // +0x45545f5f (0x8)

	// Swift methods
	0xbe780  func CKTimedDispatch._interruptError.getter // getter 
	0xbe7b0  func CKTimedDispatch._interruptError.setter // setter 
	0xbe7f0  func CKTimedDispatch._interruptError.modify // modifyCoroutine 
	0xbe8f0  func CKTimedDispatch._group.getter // getter 
	0xbe930  func CKTimedDispatch._group.setter // setter 
	0xbe980  func CKTimedDispatch._group.modify // modifyCoroutine 
	0xbe9c0  func CKTimedDispatch.group.getter // getter 
	0xbd9f0  class func CKTimedDispatch.__allocating_init(timeout:) // init 
	0xbed10  func CKTimedDispatch.interrupt(_:) // method 
	0xbed90  func CKTimedDispatch.wait() // method 
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
	0xa5d10  @objc CKKnowledgeStore.inferLinkTo:withPredicate:when:error: <stripped>
	0xa8050  @objc CKKnowledgeStore.inferLinkTo:withPredicate:when:completionHandler: <stripped>
	0x77520  @objc CKKnowledgeStore.subgraphWithEntities: <stripped>
	0x7ab50  @objc CKKnowledgeStore.importContentsOfJSONLDAtPath:completionHandler: <stripped>
	0x3a6a0  @objc CKKnowledgeStore.dictionaryRepresentationWithCompletionHandler: <stripped>
	0x3a860  @objc CKKnowledgeStore.dictionaryRepresentationAndReturnError: <stripped>
	0x3a9b0  @objc CKKnowledgeStore.dictionaryRepresentationForKeysMatching:completionHandler: <stripped>
	0x3aae0  @objc CKKnowledgeStore.dictionaryRepresentationForKeysMatching:error: <stripped>
	0x3ac60  @objc CKKnowledgeStore.keysWithCompletionHandler: <stripped>
	0x3adf0  @objc CKKnowledgeStore.keysAndReturnError: <stripped>
	0x3af30  @objc CKKnowledgeStore.keysMatching:completionHandler: <stripped>
	0x3b060  @objc CKKnowledgeStore.keysMatching:error: <stripped>
	0x3b1d0  @objc CKKnowledgeStore.valuesWithCompletionHandler: <stripped>
	0x3b360  @objc CKKnowledgeStore.valuesAndReturnError: <stripped>
	0x3b4b0  @objc CKKnowledgeStore.valueForKey:completionHandler: <stripped>
	0x3b8d0  @objc CKKnowledgeStore.valueForKey: <stripped>
	0x3bdf0  @objc CKKnowledgeStore.valuesForKeys:completionHandler: <stripped>
	0x3bf80  @objc CKKnowledgeStore.valuesForKeysMatching:completionHandler: <stripped>
	0x3c0b0  @objc CKKnowledgeStore.valuesForKeysMatching:error: <stripped>
	0x3c240  @objc CKKnowledgeStore.entityWithIdentifier: <stripped>
	0x3c910  @objc CKKnowledgeStore.entitiesWithCompletionHandler: <stripped>
	0x3cef0  @objc CKKnowledgeStore.entitiesAndReturnError: <stripped>
	0x3cfe0  @objc CKKnowledgeStore.triplesMatching:error: <stripped>
	0x3d150  @objc CKKnowledgeStore.triplesMatching:completionHandler: <stripped>
	0x3d7f0  @objc CKKnowledgeStore.sparqlResultsForQuery:completionHandler: <stripped>
	0x14700  @objc CKKnowledgeStore.writeBatch <stripped>
	0x14b90  @objc CKKnowledgeStore.setValue:forKey:completionHandler: <stripped>
	0x14ce0  @objc CKKnowledgeStore.setValue:forKey: <stripped>
	0x15330  @objc CKKnowledgeStore.importTriplesFromFileAtPath:completionHandler: <stripped>
	0x15450  @objc CKKnowledgeStore.removeEntity:completionHandler: <stripped>
	0x15570  @objc CKKnowledgeStore.removeEntity:error: <stripped>
	0x15600  @objc CKKnowledgeStore.removeValueForKey:completionHandler: <stripped>
	0x15ae0  @objc CKKnowledgeStore.removeValueForKey:error: <stripped>
	0x15c30  @objc CKKnowledgeStore.removeValuesForKeys:completionHandler: <stripped>
	0x160c0  @objc CKKnowledgeStore.removeValuesForKeys:error: <stripped>
	0x161f0  @objc CKKnowledgeStore.removeValuesMatching:completionHandler: <stripped>
	0x16640  @objc CKKnowledgeStore.removeValuesMatching:error: <stripped>
	0x167d0  @objc CKKnowledgeStore.removeAllValuesWithCompletionHandler: <stripped>
	0x16c40  @objc CKKnowledgeStore.removeAllValuesAndReturnError: <stripped>
	0x16d10  @objc CKKnowledgeStore.disableSyncAndDeleteCloudDataWithCompletionHandler: <stripped>
	0xc07c0  @objc CKKnowledgeStore.delegate <stripped>
	0xc0810  @objc CKKnowledgeStore.setDelegate: <stripped>
	0xc0870  @objc CKKnowledgeStore.name <stripped>
	0xc0a50  @objc CKKnowledgeStore.filePathURL <stripped>
	0xc0ae0  @objc CKKnowledgeStore.hash <stripped>
	0xc0da0  @objc CKKnowledgeStore.isEqual: <stripped>
	0xc1090  @objc CKKnowledgeStore.init <stripped>
	0xc1110  @objc CKKnowledgeStore..cxx_destruct <stripped>

	// Swift methods
	0xbf860  func CKKnowledgeStore.delegate.getter // getter 
	0xbf8a0  func CKKnowledgeStore.delegate.setter // setter 
	0xbf8f0  func CKKnowledgeStore.delegate.modify // modifyCoroutine 
	0xbf940  func CKKnowledgeStore.name.getter // getter 
	0xbf980  func CKKnowledgeStore.filePath.getter // getter 
	0xbfc10  class func static CKKnowledgeStore.defaultKnowledgeStore() // method 
	0xbfcf0  class func static CKKnowledgeStore.defaultSynchedKnowledgeStore() // method 
	0xbfd40  class func static CKKnowledgeStore.inMemoryKnowledgeStore() // method 
	0xbfd90  class func static CKKnowledgeStore.userDefaultsKnowledgeStore() // method 
	0xbfde0  class func static CKKnowledgeStore.knowledgeStore(withName:) // method 
	0xbfdf0  class func static CKKnowledgeStore.synchedKnowledgeStore(withName:) // method 
	0xbfe60  class func static CKKnowledgeStore.store(_:) // method 
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
	0xc25c0  @objc AppUsageProbabilityFinder.init <stripped>

	// Swift methods
	0xc22f0  class func static AppUsageProbabilityFinder.relativeAppUsageProbabilities(bundleIDs:days:) // method 
 }

 class CoreKnowledge.SRAppMatcher : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var db : Connection // +0x8 (0x8)
	var domain : String // +0x10 (0x10)
	var allowedBundleIDs : [String] // +0x20 (0x8)
	var memorableEntities : [MemorableEntity] // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0xc6700  @objc SRAppMatcher.init <stripped>
	0xc6780  @objc SRAppMatcher..cxx_destruct <stripped>

	// Swift methods
	0xc39b0  func SRAppMatcher.appMatches() // method 
	0xc41a0  func SRAppMatcher.findEntitySignals() // method 
	0xc4860  func SRAppMatcher.findMatchingEntities(forEntity:) // method 
	0xc55d0  func SRAppMatcher.findIntentSignals(entitySignals:) // method 
	0xc6420  func SRAppMatcher.findEntityMatchSignals(allIntentSignals:) // method 
	0xc65e0  func SRAppMatcher.decideResult(entityMatchSignals:appUsageSignals:) // method 
	0xc6690  func SRAppMatcher.decide(byEntityMatch:withAppUsageSignals:) // method 
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
	var idfScore : Double
 }

 struct CoreKnowledge.EntityMatchSignals {

	// Properties
	let bundleID : String // +0x0
	let isMostRecentAppForEntity : Bool // +0x10
	let maxIDFScore : Double // +0x18
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
	0xd56c0  class func Statement.__allocating_init(_:_:) // init 
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
	0xd8f40  @objc CKDeviceActivityStore.init <stripped>
	0xd8fc0  @objc CKDeviceActivityStore..cxx_destruct <stripped>

	// Swift methods
	0xd8cf0  class func CKDeviceActivityStore.__allocating_init(store:) // init 
 }

 class CoreKnowledge.CKAbstractWriteBatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var buffer : [String : Any?]
	let backingStore : CKBackingStore

	// ObjC -> Swift bridged methods
	0xda030  @objc CKAbstractWriteBatch.setObject:forKey: <stripped>

	// Swift methods
	0xd9e80  func CKAbstractWriteBatch.buffer.getter // getter 
	0xd9eb0  func CKAbstractWriteBatch.buffer.setter // setter 
	0xd9ef0  func CKAbstractWriteBatch.buffer.modify // modifyCoroutine 
	0xd9f40  class func CKAbstractWriteBatch.__allocating_init(backingStore:) // init 
	0xda020  func CKAbstractWriteBatch.setObject(_:forKey:) // method 
 }

 class CoreKnowledge.CKInMemoryWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xda1e0  @objc CKInMemoryWriteBatch.writeWithCompletionHandler: <stripped>
	0xdabe0  @objc CKInMemoryWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xda140  func CKInMemoryWriteBatch.write(completionHandler:) // method 
	0xda290  func CKInMemoryWriteBatch.write() // method 
 }

 class CoreKnowledge.CKUserDefaultsWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xda1e0  @objc CKUserDefaultsWriteBatch.writeWithCompletionHandler: <stripped>
	0xdb6e0  @objc CKUserDefaultsWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xdaca0  func CKUserDefaultsWriteBatch.write(completionHandler:) // method 
	0xdad40  func CKUserDefaultsWriteBatch.write() // method 
 }

 class CoreKnowledge.CKSQLWriteBatch : CKAbstractWriteBatch {

	// Properties
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
	0xdcc90  @objc CKSQLWriteBatch.writeWithCompletionHandler: <stripped>
	0xdd210  @objc CKSQLWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xdb7d0  func CKSQLWriteBatch.queue.getter // getter 
	0xdb800  func CKSQLWriteBatch.queue.setter // setter 
	0xdb840  func CKSQLWriteBatch.queue.modify // modifyCoroutine 
	0xdc270  func CKSQLWriteBatch.write(completionHandler:) // method 
	0xdccb0  func CKSQLWriteBatch.write() // method 
 }

 class CoreKnowledge.CKCloudKitWriteBatch : CKSQLWriteBatch {
	// ObjC -> Swift bridged methods
	0xde940  @objc CKCloudKitWriteBatch.writeWithCompletionHandler: <stripped>
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
	0xe5780  class func CKLogger.__allocating_init(_:) // init 
	0xe57f0  func CKLogger.debug(_:_:) // method 
	0xe5810  func CKLogger.info(_:_:) // method 
	0xe5830  func CKLogger.error(_:_:) // method 
	0xe5850  func CKLogger.fault(_:_:) // method 
	0xe58b0  func CKLogger.log(type:_:_:) // method 
 }

 class CoreKnowledge.SRAppMatches : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let matchType : SRAppMatchesType // +0x8 (0x8)
	let bundleIDs : [String] // +0x10 (0x8)
	let signalsJSON : Data // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0xe60f0  @objc SRAppMatches.matchType <stripped>
	0xe6130  @objc SRAppMatches.bundleIDs <stripped>
	0xe6190  @objc SRAppMatches.signalsJSON <stripped>
	0xe63d0  @objc SRAppMatches.initWithMatchType:bundleIDs:signalsJSON: <stripped>
	0xe64f0  @objc SRAppMatches.description <stripped>
	0xe6840  @objc SRAppMatches.copyWithZone: <stripped>
	0xe6b40  @objc SRAppMatches.encodeWithCoder: <stripped>
	0xe7120  @objc SRAppMatches.initWithCoder: <stripped>
	0xe71a0  @objc SRAppMatches.init <stripped>
	0xe7220  @objc SRAppMatches..cxx_destruct <stripped>

	// Swift methods
	0xe6050  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signals:) // init 
	0xe6220  class func SRAppMatches.__allocating_init(matchType:bundleIDs:signalsJSON:) // init 
	0xe6720  func SRAppMatches.copy(with:) // method 
	0xe69e0  func SRAppMatches.encode(with:) // method 
	0xe6b90  class func SRAppMatches.__allocating_init(coder:) // init 
 }

 enum CoreKnowledge.SRAppMatchesType { }
