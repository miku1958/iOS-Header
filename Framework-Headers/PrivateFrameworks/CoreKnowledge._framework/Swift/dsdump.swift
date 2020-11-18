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
 protocol CoreKnowledge.SQLBinding // 0 requirements
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
 protocol CoreKnowledge.CKExecutableClosure // 2 requirements
 {
	// getter
	// method
 }
 protocol CoreKnowledge.Initiable // 1 requirements
 {
	// class init
 }

 class CoreKnowledge.CKAppInteractionsContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId : [String : [String : Int]] // +0x8 (0x8)
	var numberOfDiscardedDonationsByIntentTypeAndBundleId : [String : [String : Double]] // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x5f30  @objc CKAppInteractionsContext.init <stripped>
	0x6380  @objc CKAppInteractionsContext.encodeWithCoder: <stripped>
	0x68b0  @objc CKAppInteractionsContext.initWithCoder: <stripped>
	0x69b0  @objc CKAppInteractionsContext.copyWithZone: <stripped>
	0x72f0  @objc CKAppInteractionsContext.updateDiscardedDonations:forIntentType:andBundleId: <stripped>
	0x73f0  @objc CKAppInteractionsContext..cxx_destruct <stripped>

	// Swift methods
	0x5bf0  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x5c10  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.setter // setter 
	0x5c30  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x5c70  func CKAppInteractionsContext.outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x5cd0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.getter // getter 
	0x5d30  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.setter // setter 
	0x5d90  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6010  class func CKAppInteractionsContext.__allocating_init(_:) // init 
	0x6180  func CKAppInteractionsContext.encode(with:) // method 
	0x63d0  class func CKAppInteractionsContext.__allocating_init(coder:) // init 
	0x6910  func CKAppInteractionsContext.copy(with:) // method 
	0x69f0  func CKAppInteractionsContext.incrementNumberOfOutOfAppLaunchBoundaryDonations(forBundleId:intent:) // method 
	0x72e0  func CKAppInteractionsContext.updateDiscardedDonations(_:forIntentType:andBundleId:) // method 
 }

 class CoreKnowledge.CKKnowledgeStoreUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0xbe80  @objc CKKnowledgeStoreUtils.init <stripped>
 }

 class CoreKnowledge.CKUserDefaultsBackingStore : CKAbstractBackingStore {

	// Properties
	var kv : NSUserDefaults // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xc630  @objc CKUserDefaultsBackingStore.init <stripped>
	0xec70  @objc CKUserDefaultsBackingStore..cxx_destruct <stripped>

	// Swift methods
	0xc250  func CKUserDefaultsBackingStore.name.getter // getter 
	0xc270  func CKUserDefaultsBackingStore.name.setter // setter 
	0xc280  func CKUserDefaultsBackingStore.name.modify // modifyCoroutine 
	0xc650  func CKUserDefaultsBackingStore.synchronize() // method 
	0xc670  func CKUserDefaultsBackingStore.keys() // method 
	0xc890  func CKUserDefaultsBackingStore.keys(matching:) // method 
	0xcb80  func CKUserDefaultsBackingStore._value(forKey:) // method 
	0xcc50  func CKUserDefaultsBackingStore.values() // method 
	0xcce0  func CKUserDefaultsBackingStore.values(forKeys:) // method 
	0xcfc0  func CKUserDefaultsBackingStore.values(forKeysMatching:) // method 
	0xd600  func CKUserDefaultsBackingStore.dictionaryRepresentation() // method 
	0xd670  func CKUserDefaultsBackingStore.dictionaryRepresentation(forKeysMatching:) // method 
	0xdb30  func CKUserDefaultsBackingStore.triplesComponents(matching:) // method 
	0xdc70  func CKUserDefaultsBackingStore.verify(path:completionHandler:) // method 
	0xddd0  func CKUserDefaultsBackingStore.setValue(_:forKey:completionHandler:) // method 
	0xdde0  func CKUserDefaultsBackingStore.writeBatch() // method 
	0x10e40  func CKUserDefaultsBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xde50  func CKUserDefaultsBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xdfb0  func CKUserDefaultsBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0xe110  func CKUserDefaultsBackingStore.removeValue(forKey:) // method 
	0xe1d0  func CKUserDefaultsBackingStore.removeValues(forKeys:) // method 
	0xe2e0  func CKUserDefaultsBackingStore.removeValues(matching:) // method 
	0xe580  func CKUserDefaultsBackingStore.removeAllValues() // method 
	0xe760  func CKUserDefaultsBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0xe8c0  func CKUserDefaultsBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0xea20  func CKUserDefaultsBackingStore.dropLinks(between:and:completionHandler:) // method 
	0xeb80  func CKUserDefaultsBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.INInteractionEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interaction : INInteraction

	// Swift methods
	0x10e60  class func INInteractionEncoder.__allocating_init(_:) // init 
	0x10ee0  func INInteractionEncoder.base64() // method 
 }

 class CoreKnowledge.INInteractionDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x110f0  class func INInteractionDecoder.__allocating_init() // init 
 }

 class CoreKnowledge.CKPermanentEventStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let knowledgeStore : CKKnowledgeStore

	// ObjC -> Swift bridged methods
	0x8ee10  @objc CKPermanentEventStore.backingStore <stripped>
	0x8f260  @objc CKPermanentEventStore.historicEventsAndReturnError: <stripped>
	0x8f950  @objc CKPermanentEventStore.historicEventsWithCompletionHandler: <stripped>
	0x8fde0  @objc CKPermanentEventStore.setFirstSeen:forEventWithIdentifier:completionHandler: <stripped>
	0x904f0  @objc CKPermanentEventStore.setLastSeen:forEventWithIdentifier:completionHandler: <stripped>
	0x90a20  @objc CKPermanentEventStore.setFrequency:forEventWithIdentifier:completionHandler: <stripped>
	0x90eb0  @objc CKPermanentEventStore.setLastDuration:forEventWithIdentifier:completionHandler: <stripped>
	0x91460  @objc CKPermanentEventStore.setTotalDuration:forEventWithIdentifier:completionHandler: <stripped>
	0x91600  @objc CKPermanentEventStore.deleteEventWithIdentifier:error: <stripped>
	0x916d0  @objc CKPermanentEventStore.deleteEventWithIdentifier:completionHandler: <stripped>
	0x49e90  @objc CKPermanentEventStore.historicEventWithIdentifier:completionHandler: <stripped>
	0x4ab70  @objc CKPermanentEventStore.historicEventsWithSourceBundleIdentifier:andIntent:completionHandler: <stripped>
	0x45540  @objc CKPermanentEventStore.recordEvent:completionHandler: <stripped>
	0x458e0  @objc CKPermanentEventStore.recordEvent:error: <stripped>
	0x45a10  @objc CKPermanentEventStore.recordInteraction:error: <stripped>
	0x45c10  @objc CKPermanentEventStore.recordInteraction:completionHandler: <stripped>
	0x460f0  @objc CKPermanentEventStore.recordInteraction:bundleId:error: <stripped>
	0x46c00  @objc CKPermanentEventStore.recordInteraction:bundleId:completionHandler: <stripped>
	0x47040  @objc CKPermanentEventStore.deleteInteractionsWithBundleId:error: <stripped>
	0x47110  @objc CKPermanentEventStore.deleteInteractionsWithBundleId:completionHandler: <stripped>
	0x11270  @objc CKPermanentEventStore.initWithKnowledgeStore: <stripped>
	0x114d0  @objc CKPermanentEventStore.init <stripped>
	0x11550  @objc CKPermanentEventStore..cxx_destruct <stripped>

	// Swift methods
	0x111a0  class func CKPermanentEventStore.__allocating_init(knowledgeStore:) // init 
 }

 class CoreKnowledge.CKInMemoryBackingStore : CKAbstractBackingStore {

	// Properties
	let inMemoryStoreHandler : CKPersistentStoreHandler // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x12130  @objc CKInMemoryBackingStore.init <stripped>
	0x13e50  @objc CKInMemoryBackingStore..cxx_destruct <stripped>

	// Swift methods
	0x11fc0  func CKInMemoryBackingStore.name.getter // getter 
	0x11fe0  func CKInMemoryBackingStore.name.setter // setter 
	0x11ff0  func CKInMemoryBackingStore.name.modify // modifyCoroutine 
	0x121a0  func CKInMemoryBackingStore.keys(completionHandler:) // method 
	0x122a0  func CKInMemoryBackingStore.keys(matching:completionHandler:) // method 
	0x12380  func CKInMemoryBackingStore.value(forKey:completionHandler:) // method 
	0x12610  func CKInMemoryBackingStore.values(completionHandler:) // method 
	0x12710  func CKInMemoryBackingStore.values(forKeys:completionHandler:) // method 
	0x12830  func CKInMemoryBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x12910  func CKInMemoryBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x12a10  func CKInMemoryBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x12af0  func CKInMemoryBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x12bf0  func CKInMemoryBackingStore.verify(path:completionHandler:) // method 
	0x12cb0  func CKInMemoryBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x12d80  func CKInMemoryBackingStore.writeBatch() // method 
	0x12df0  func CKInMemoryBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x12ec0  func CKInMemoryBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x13140  func CKInMemoryBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x133c0  func CKInMemoryBackingStore.removeValue(forKey:completionHandler:) // method 
	0x135a0  func CKInMemoryBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x13780  func CKInMemoryBackingStore.removeValues(matching:completionHandler:) // method 
	0x13960  func CKInMemoryBackingStore.removeAllValues(completionHandler:) // method 
	0x13b20  func CKInMemoryBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x13be0  func CKInMemoryBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x13ca0  func CKInMemoryBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x13d60  func CKInMemoryBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
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
	var connection : CKSQLConnection? // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x15300  @objc CKPersistentStoreHandler.init <stripped>
	0x15fd0  @objc CKPersistentStoreHandler.initWithName: <stripped>
	0x16210  @objc CKPersistentStoreHandler.dealloc <stripped>
	0x16bd0  @objc CKPersistentStoreHandler.keysAndReturnError: <stripped>
	0x17750  @objc CKPersistentStoreHandler.keysMatching:error: <stripped>
	0x18210  @objc CKPersistentStoreHandler.valuesAndReturnError: <stripped>
	0x18e30  @objc CKPersistentStoreHandler.valuesForKeysMatching:error: <stripped>
	0x199e0  @objc CKPersistentStoreHandler.keysAndValuesAndReturnError: <stripped>
	0x1a690  @objc CKPersistentStoreHandler.keysAndValuesForKeysMatching:error: <stripped>
	0x1b430  @objc CKPersistentStoreHandler._valuesForKeys:error: <stripped>
	0x1cc40  @objc CKPersistentStoreHandler.saveKeysAndValues:error: <stripped>
	0x1d560  @objc CKPersistentStoreHandler.removeValueForKey:error: <stripped>
	0x1e300  @objc CKPersistentStoreHandler.removeValuesForKeys:error: <stripped>
	0x1efe0  @objc CKPersistentStoreHandler.removeValuesMatching:error: <stripped>
	0x1f9e0  @objc CKPersistentStoreHandler.removeAllValuesAndReturnError: <stripped>
	0x20560  @objc CKPersistentStoreHandler.tripleComponentsMatching:error: <stripped>
	0x20640  @objc CKPersistentStoreHandler.setWeightForLinkWithLabel:between:and:toValue:error: <stripped>
	0x207c0  @objc CKPersistentStoreHandler.increaseWeightForLinkWithLabel:between:and: <stripped>
	0x207f0  @objc CKPersistentStoreHandler.decreaseWeightForLinkWithLabel:between:and: <stripped>
	0x212c0  @objc CKPersistentStoreHandler.dropLinkWithLabel:between:and:error: <stripped>
	0x21420  @objc CKPersistentStoreHandler.dropLinksWithLabel:from:error: <stripped>
	0x21a40  @objc CKPersistentStoreHandler.dropLinksBetween:and:error: <stripped>
	0x16230  @objc CKPersistentStoreHandler..cxx_destruct <stripped>

	// Swift methods
	0x151f0  func CKPersistentStoreHandler.connection.getter // getter 
	0x15230  func CKPersistentStoreHandler.connection.setter // setter 
	0x15280  func CKPersistentStoreHandler.connection.modify // modifyCoroutine 
	0x152d0  class func static CKPersistentStoreHandler.inMemoryHandler() // method 
	0x15380  class func CKPersistentStoreHandler.__allocating_init(name:) // init 
	0x16250  func CKPersistentStoreHandler.keys() // method 
	0x16c70  func CKPersistentStoreHandler.keys(matching:) // method 
	0x17810  func CKPersistentStoreHandler.values() // method 
	0x182b0  func CKPersistentStoreHandler.values(forKeysMatching:) // method 
	0x18ef0  func CKPersistentStoreHandler.keysAndValues() // method 
	0x19a90  func CKPersistentStoreHandler.keysAndValues(forKeysMatching:) // method 
	0x1a760  func CKPersistentStoreHandler.selectQuery(project:whereField:isIn:) // method 
	0x1a770  func CKPersistentStoreHandler._values(forKeys:) // method 
	0x1b510  func CKPersistentStoreHandler.save(keysAndValues:) // method 
	0x1cd10  func CKPersistentStoreHandler.removeValue(forKey:) // method 
	0x1d720  func CKPersistentStoreHandler._removeValues(forKeys:) // method 
	0x1e180  func CKPersistentStoreHandler.removeValues(forKeys:) // method 
	0x1e4d0  func CKPersistentStoreHandler._removeValues(matching:) // method 
	0x1ee60  func CKPersistentStoreHandler.removeValues(matching:) // method 
	0x1f170  func CKPersistentStoreHandler.removeAllValues() // method 
	0x1fb50  func CKPersistentStoreHandler.tripleComponents(matching:) // method 
	0x20620  func CKPersistentStoreHandler.setWeight(forLinkWithLabel:between:and:toValue:) // method 
	0x207b0  func CKPersistentStoreHandler.increaseWeight(forLinkWithLabel:between:and:) // method 
	0x207e0  func CKPersistentStoreHandler.decreaseWeight(forLinkWithLabel:between:and:) // method 
	0x20900  func CKPersistentStoreHandler.decreaseWeights(between:and:) // method 
	0x211e0  func CKPersistentStoreHandler.dropLink(withLabel:between:and:) // method 
	0x21410  func CKPersistentStoreHandler.dropLinks(withLabel:from:) // method 
	0x21530  func CKPersistentStoreHandler.dropLinks(between:and:) // method 
	0x21b60  func CKPersistentStoreHandler.deserializeValue(_:) // method 
 }

 class CoreKnowledge.CKSQLBackingStore : CKAbstractBackingStore {

	// Properties
	var name : String // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x3e6b0  @objc CKSQLBackingStore.initWithName: <stripped>
	0x42b50  @objc CKSQLBackingStore.init <stripped>
	0x42bd0  @objc CKSQLBackingStore..cxx_destruct <stripped>

	// Swift methods
	0x3e3f0  func CKSQLBackingStore.name.getter // getter 
	0x3e440  func CKSQLBackingStore.name.setter // setter 
	0x3e490  func CKSQLBackingStore.name.modify // modifyCoroutine 
	0x3e4e0  class func CKSQLBackingStore.__allocating_init(name:) // init 
	0x3e6f0  class func static CKSQLBackingStore.mainInstance() // method 
	0x3e750  func CKSQLBackingStore.keys(completionHandler:) // method 
	0x3ea50  func CKSQLBackingStore.keys(matching:completionHandler:) // method 
	0x3ecb0  func CKSQLBackingStore.value(forKey:completionHandler:) // method 
	0x3f190  func CKSQLBackingStore.values(completionHandler:) // method 
	0x3f470  func CKSQLBackingStore.values(forKeys:completionHandler:) // method 
	0x3fab0  func CKSQLBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x3fd10  func CKSQLBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x40000  func CKSQLBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x40260  func CKSQLBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x40550  func CKSQLBackingStore.verify(path:completionHandler:) // method 
	0x406b0  func CKSQLBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x40ad0  func CKSQLBackingStore.writeBatch() // method 
	0x40b10  func CKSQLBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x40e10  func CKSQLBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x41190  func CKSQLBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x41690  func CKSQLBackingStore.removeValue(forKey:completionHandler:) // method 
	0x41ad0  func CKSQLBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x41d30  func CKSQLBackingStore.removeValues(matching:completionHandler:) // method 
	0x41f60  func CKSQLBackingStore.removeAllValues(completionHandler:) // method 
	0x42190  func CKSQLBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x42490  func CKSQLBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x42770  func CKSQLBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x42a40  func CKSQLBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 struct CoreKnowledge.Blob {

	// Properties
	let bytes : [UInt8] // +0x0
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

 class CoreKnowledge.CKSQLStatement : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var handle : OpaquePointer? // +0x10 (0x8)
	let connection : CKSQLConnection // +0x18 (0x8)
	var columnCount.storage : Int? // +0x20 (0x9)
	var columnNames.storage : [String]? // +0x30 (0x8)
	var row.storage : Cursor // +0x38 (0x11)

	// Swift methods
	0x4b2c0  class func CKSQLStatement.__allocating_init(_:_:) // init 
 }

 struct CoreKnowledge.Cursor {

	// Properties
	let handle : OpaquePointer? // +0x0
	let columnCount : Int // +0x8
 }

 class CoreKnowledge.CKSQLConnection : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _handle : OpaquePointer? // +0x8 (0x8)
	let path : String // +0x10 (0x10)
	var queue : OS_dispatch_queue // +0x20 (0x8)
	var queueContext.storage : Int? // +0x28 (0x9)

	// ObjC -> Swift bridged methods
	0x51c50  @objc CKSQLConnection.dealloc <stripped>
	0x51ca0  @objc CKSQLConnection.description <stripped>
	0x53290  @objc CKSQLConnection.init <stripped>
	0x51c70  @objc CKSQLConnection..cxx_destruct <stripped>

	// Swift methods
	0x4ed60  class func CKSQLConnection.__allocating_init(_:readonly:) // init 
 }

 enum CoreKnowledge.Location {

	// Properties
	case uri : String
	case inMemory  
	case temporary  
 }

 enum CoreKnowledge.TransactionMode {

	// Properties
	case Deferred  
	case Immediate  
	case Exclusive  
 }

 enum CoreKnowledge.SQLOperation {

	// Properties
	case insert  
	case update  
	case delete  
 }

 enum CoreKnowledge.SQLResult {

	// Properties
	case error : (message: String, code: Int32, statement: CKSQLStatement?)
 }

 class CoreKnowledge.CKCloudKitBackingStore : CKSQLBackingStore {
	// ObjC -> Swift bridged methods
	0x57070  @objc CKCloudKitBackingStore.initWithName: <stripped>

	// Swift methods
	0x551f0  func CKCloudKitBackingStore.triplesComponents(matching:) // method 
 }

 class CoreKnowledge.CKTriple : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : (String, String, String, Int) // +0x8 (0x38)

	// ObjC -> Swift bridged methods
	0x57610  @objc CKTriple.subject <stripped>
	0x576a0  @objc CKTriple.predicate <stripped>
	0x57760  @objc CKTriple.object <stripped>
	0x57820  @objc CKTriple.weight <stripped>
	0x57860  @objc CKTriple.description <stripped>
	0x57c40  @objc CKTriple.hash <stripped>
	0x58680  @objc CKTriple.isEqual: <stripped>
	0x58920  @objc CKTriple.initWithSubject:predicate:object:weight: <stripped>
	0x58ce0  @objc CKTriple.encodeWithCoder: <stripped>
	0x59250  @objc CKTriple.initWithCoder: <stripped>
	0x59640  @objc CKTriple.init <stripped>
	0x596c0  @objc CKTriple..cxx_destruct <stripped>

	// Swift methods
	0x57670  func CKTriple.subject.getter // getter 
	0x57710  func CKTriple.predicate.getter // getter 
	0x577d0  func CKTriple.object.getter // getter 
	0x57840  func CKTriple.weight.getter // getter 
	0x58710  class func CKTriple.__allocating_init(tuple:) // init 
	0x574b0  class func CKTriple.__allocating_init(subject:predicate:object:weight:) // init 
	0x58a70  func CKTriple.encode(with:) // method 
	0x58d30  class func CKTriple.__allocating_init(coder:) // init 
	0x592b0  func CKTriple.dictionary() // method 
 }

 enum CoreKnowledge.PredefinedLevel {

	// Properties
	case debug  
	case info  
	case error  
	case fault  
 }

 struct CoreKnowledge.LogLevel {

	// Properties
	var level : Int // +0x0
	var name : String // +0x8
	var label : String // +0x18
 }

 class CoreKnowledge.CKCustomLogger : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let name : String // +0x8 (0x10)
	let level : LogLevel // +0x18 (0x28)
	var settings : (format: (name: Bool, file: Bool, method: Bool), location: URL?) // +0x40 (0x10)
	var enabled : Bool // +0x50 (0x1)
	let defaultSettings : (format: (name: Bool, file: Bool, method: Bool), location: URL?) // +0x58 (0x10)

	// ObjC -> Swift bridged methods
	0x5b070  @objc CKCustomLogger.init <stripped>
	0x5b0e0  @objc CKCustomLogger..cxx_destruct <stripped>

	// Swift methods
	0x5a2c0  func CKCustomLogger.settings.getter // getter 
	0x5a3e0  func CKCustomLogger.settings.setter // setter 
	0x5a540  func CKCustomLogger.settings.modify // modifyCoroutine 
	0x5a580  func CKCustomLogger.enabled.getter // getter 
	0x5a5b0  func CKCustomLogger.enabled.setter // setter 
	0x5a5f0  func CKCustomLogger.enabled.modify // modifyCoroutine 
	0x5a730  class func CKCustomLogger.__allocating_init(name:level:) // init 
	0x5a7d0  func CKCustomLogger.defaultFileLogger(level:) // method 
	0x5aa50  func CKCustomLogger.setFormat(name:file:method:) // method 
	0x5aad0  func CKCustomLogger.log<A>(_:message:filename:line:function:) // method 
	0x5ab00  func CKCustomLogger.debug<A>(_:filename:line:function:) // method 
	0x5ac40  func CKCustomLogger.info<A>(_:filename:line:function:) // method 
	0x5ad80  func CKCustomLogger.error<A>(_:filename:line:function:) // method 
	0x5aec0  func CKCustomLogger.fault<A>(_:filename:line:function:) // method 
 }

 struct CoreKnowledge.CKOntology { }

 class CoreKnowledge.CoreKnowledgeXPCUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x648c0  @objc CoreKnowledgeXPCUtils.init <stripped>
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
	0x686c0  @objc CKJSONLDGraph.initWithEntities: <stripped>
	0x68720  @objc CKJSONLDGraph.entities <stripped>
	0x69430  @objc CKJSONLDGraph.linkedDataWithCompletionHandler: <stripped>
	0x695c0  @objc CKJSONLDGraph.init <stripped>
	0x69640  @objc CKJSONLDGraph..cxx_destruct <stripped>

	// Swift methods
	0x68630  class func CKJSONLDGraph.__allocating_init(withEntities:) // init 
	0x68780  func CKJSONLDGraph.entities.getter // getter 
	0x68a30  func CKJSONLDGraph.linkedData(completionHandler:) // method 
 }

 class CoreKnowledge.CKEphemeralEventSequence : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0x61170  @objc CKEphemeralEventSequence.loadFromKnowledgeStreamNamed:between:and:completionHandler: <stripped>
	0x61580  @objc CKEphemeralEventSequence.removeAllEventsSavedInKnowledgeStreamNamed:completionHandler: <stripped>
	0x61980  @objc CKEphemeralEventSequence.appendEvent: <stripped>
	0x624b0  @objc CKEphemeralEventSequence.writeEventsToKnowledgeStreamNamed:completionHandler: <stripped>
	0x32940  @objc CKEphemeralEventSequence.eventsBetween:and: <stripped>
	0x32aa0  @objc CKEphemeralEventSequence.eventsWithIdentifier: <stripped>
	0x33250  @objc CKEphemeralEventSequence.first <stripped>
	0x332a0  @objc CKEphemeralEventSequence.last <stripped>
	0x771b0  @objc CKEphemeralEventSequence.init <stripped>
	0x772b0  @objc CKEphemeralEventSequence..cxx_destruct <stripped>

	// Swift methods
	0x771d0  func CKEphemeralEventSequence.historyStartEvent.getter // getter 
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
	var sql.storage : String?

	// Swift methods
	0x79f20  class func Matcher.__allocating_init(_:value:) // init 
	0x79fc0  func Matcher.evaluate(on:) // method 
	0x7a4d0  func Matcher.sql.getter // getter 
	0x7a7c0  func Matcher.sql.setter // setter 
	0x7a7e0  func Matcher.sql.modify // modifyCoroutine 
 }

 class CoreKnowledge.CKGenericCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : ConditionType
	var negated : Bool
	var sql.storage : String?

	// ObjC -> Swift bridged methods
	0x7a930  @objc CKGenericCondition.predicate <stripped>
	0x7abc0  @objc CKGenericCondition.description <stripped>
	0x7ae50  @objc CKGenericCondition.initWithValue: <stripped>
	0x7afd0  @objc CKGenericCondition.initWithMatchType:value:negated: <stripped>
	0x7b250  @objc CKGenericCondition.and: <stripped>
	0x7b370  @objc CKGenericCondition.or: <stripped>
	0x7bf60  @objc CKGenericCondition.evaluateOn: <stripped>
	0x7c0d0  @objc CKGenericCondition.copyWithZone: <stripped>
	0x7c550  @objc CKGenericCondition.encodeWithCoder: <stripped>
	0x7cca0  @objc CKGenericCondition.initWithCoder: <stripped>
	0x7cd10  @objc CKGenericCondition.init <stripped>
	0x7cd60  @objc CKGenericCondition..cxx_destruct <stripped>

	// Swift methods
	0x7aa20  func CKGenericCondition.predicate.getter // getter 
	0x7ad20  class func CKGenericCondition.__allocating_init(value:) // init 
	0x79750  class func CKGenericCondition.__allocating_init(_:value:negated:) // init 
	0x7b150  func CKGenericCondition.and(_:) // method 
	0x7b270  func CKGenericCondition.or(_:) // method 
	0x7b3e0  func CKGenericCondition.sql.getter // getter 
	0x7bb90  func CKGenericCondition.sql.setter // setter 
	0x7bbc0  func CKGenericCondition.sql.modify // modifyCoroutine 
	0x7bcf0  func CKGenericCondition.evaluate(on:) // method 
	0x7bff0  func CKGenericCondition.copy(with:) // method 
	0x7c230  func CKGenericCondition.encode(with:) // method 
	0x7c5a0  class func CKGenericCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKTripleCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var rawCondition : CKGenericCondition

	// ObjC -> Swift bridged methods
	0x7ce80  @objc CKTripleCondition.description <stripped>
	0x7d3a0  @objc CKTripleCondition.initWithValue: <stripped>
	0x804d0  @objc CKTripleCondition.initWithSubject:predicate:object: <stripped>
	0x806d0  @objc CKTripleCondition.and: <stripped>
	0x80940  @objc CKTripleCondition.or: <stripped>
	0x80b40  @objc CKTripleCondition.evaluateOn: <stripped>
	0x80cf0  @objc CKTripleCondition.copyWithZone: <stripped>
	0x80fc0  @objc CKTripleCondition.encodeWithCoder: <stripped>
	0x81350  @objc CKTripleCondition.initWithCoder: <stripped>
	0x81430  @objc CKTripleCondition.init <stripped>
	0x814c0  @objc CKTripleCondition..cxx_destruct <stripped>

	// Swift methods
	0x7cda0  func CKTripleCondition.rawCondition.getter // getter 
	0x7cde0  func CKTripleCondition.rawCondition.setter // setter 
	0x7ce30  func CKTripleCondition.rawCondition.modify // modifyCoroutine 
	0x7cfd0  class func CKTripleCondition.__allocating_init(_:) // init 
	0x80570  func CKTripleCondition.and(_:) // method 
	0x807e0  func CKTripleCondition.or(_:) // method 
	0x80a50  func CKTripleCondition.evaluate(on:) // method 
	0x80c10  func CKTripleCondition.copy(with:) // method 
	0x80f20  func CKTripleCondition.encode(with:) // method 
	0x81060  class func CKTripleCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKHistoricEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
	var _firstSeen : Date // +0x18 (0x8)
	var _lastSeen : Date // +0x20 (0x8)
	var _frequency : Int // +0x28 (0x8)
	var _lastDuration : Double // +0x30 (0x8)
	var _totalDuration : Double // +0x38 (0x8)
	var _metadata : [String : Any] // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x82520  @objc CKHistoricEvent.identifier <stripped>
	0x82a50  @objc CKHistoricEvent.firstSeen <stripped>
	0x82b40  @objc CKHistoricEvent.lastSeen <stripped>
	0x82c30  @objc CKHistoricEvent.frequency <stripped>
	0x82cd0  @objc CKHistoricEvent.lastDuration <stripped>
	0x82d80  @objc CKHistoricEvent.totalDuration <stripped>
	0x82e30  @objc CKHistoricEvent.metadata <stripped>
	0x83560  @objc CKHistoricEvent.encodeWithCoder: <stripped>
	0x84340  @objc CKHistoricEvent.initWithCoder: <stripped>
	0x84430  @objc CKHistoricEvent.init: <stripped>
	0x844d0  @objc CKHistoricEvent.initFrom:withIdentifier: <stripped>
	0x845e0  @objc CKHistoricEvent.copyWithZone: <stripped>
	0x84690  @objc CKHistoricEvent.init <stripped>
	0x84700  @objc CKHistoricEvent..cxx_destruct <stripped>

	// Swift methods
	0x825a0  func CKHistoricEvent._firstSeen.getter // getter 
	0x825c0  func CKHistoricEvent._firstSeen.setter // setter 
	0x825e0  func CKHistoricEvent._firstSeen.modify // modifyCoroutine 
	0x82630  func CKHistoricEvent._lastSeen.getter // getter 
	0x826a0  func CKHistoricEvent._lastSeen.setter // setter 
	0x82720  func CKHistoricEvent._lastSeen.modify // modifyCoroutine 
	0x82760  func CKHistoricEvent._frequency.getter // getter 
	0x82790  func CKHistoricEvent._frequency.setter // setter 
	0x827d0  func CKHistoricEvent._frequency.modify // modifyCoroutine 
	0x82810  func CKHistoricEvent._lastDuration.getter // getter 
	0x82830  func CKHistoricEvent._lastDuration.setter // setter 
	0x82850  func CKHistoricEvent._lastDuration.modify // modifyCoroutine 
	0x82890  func CKHistoricEvent._totalDuration.getter // getter 
	0x828e0  func CKHistoricEvent._totalDuration.setter // setter 
	0x82940  func CKHistoricEvent._totalDuration.modify // modifyCoroutine 
	0x82980  func CKHistoricEvent._metadata.getter // getter 
	0x829c0  func CKHistoricEvent._metadata.setter // setter 
	0x82a10  func CKHistoricEvent._metadata.modify // modifyCoroutine 
	0x82ad0  func CKHistoricEvent.firstSeen.getter // getter 
	0x82bc0  func CKHistoricEvent.lastSeen.getter // getter 
	0x82c80  func CKHistoricEvent.frequency.getter // getter 
	0x82d20  func CKHistoricEvent.lastDuration.getter // getter 
	0x82dd0  func CKHistoricEvent.totalDuration.getter // getter 
	0x82eb0  func CKHistoricEvent.metadata.getter // getter 
	0x82110  class func CKHistoricEvent.__allocating_init(identifier:firstSeen:lastSeen:frequency:lastDuration:totalDuration:metadata:) // init 
	0x830d0  func CKHistoricEvent.encode(with:) // method 
	0x835b0  class func CKHistoricEvent.__allocating_init(coder:) // init 
	0x843a0  class func CKHistoricEvent.__allocating_init(_:) // init 
	0x84520  func CKHistoricEvent.copy(with:) // method 
 }

 class CoreKnowledge.CKClosure : NSObject /usr/lib/libobjc.A.dylib, CKExecutableClosure {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)
	let entity : CKEntity // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x865f0  @objc CKClosure.initWithCoder: <stripped>
	0x86850  @objc CKClosure.encodeWithCoder: <stripped>
	0x86920  @objc CKClosure.init <stripped>
	0x869a0  @objc CKClosure..cxx_destruct <stripped>

	// Swift methods
	0x85e40  class func CKClosure.__allocating_init(coder:) // init 
	0x86620  func CKClosure.encode(with:) // method 
	0x868a0  func CKClosure.execute() // method 
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
	0x88590  @objc CKLogic.hash <stripped>
	0x88b50  @objc CKLogic.identifier <stripped>
	0x89200  @objc CKLogic.andExistsLink:to:error: <stripped>
	0x897c0  @objc CKLogic.andNotExistsLink:to:error: <stripped>
	0x89b50  @objc CKLogic.and: <stripped>
	0x89c10  @objc CKLogic.init <stripped>
	0x89c90  @objc CKLogic..cxx_destruct <stripped>

	// Swift methods
	0x88400  func CKLogic.body.getter // getter 
	0x88420  func CKLogic.body.setter // setter 
	0x88440  func CKLogic.body.modify // modifyCoroutine 
	0x88480  func CKLogic.negatedBody.getter // getter 
	0x884e0  func CKLogic.negatedBody.setter // setter 
	0x88540  func CKLogic.negatedBody.modify // modifyCoroutine 
	0x88ba0  func CKLogic.identifier.getter // getter 
	0x88cd0  class func static CKLogic.ifExistsLink(_:to:) // method 
	0x88d00  func CKLogic.andExistsLink(_:to:) // method 
	0x89220  class func static CKLogic.ifNotExistsLink(_:to:) // method 
	0x892c0  func CKLogic.andNotExistsLink(_:to:) // method 
	0x898c0  func CKLogic.and(_:) // method 
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
	0x933c0  @objc CKEntity.isEqual: <stripped>
	0x93450  @objc CKEntity.hash <stripped>
	0x93610  @objc CKEntity.description <stripped>
	0x93c70  @objc CKEntity.valueForKey: <stripped>
	0x93d60  @objc CKEntity.valueForKey:completionHandler: <stripped>
	0x946d0  @objc CKEntity.valuesForKeys:completionHandler: <stripped>
	0x94ab0  @objc CKEntity.setValue:forKey:completionHandler: <stripped>
	0x953f0  @objc CKEntity.setValuesForKeys:completionHandler: <stripped>
	0x954f0  @objc CKEntity.removeValueForKey:completionHandler: <stripped>
	0x96630  @objc CKEntity.linkTo:withPredicate:completionHandler: <stripped>
	0x96ae0  @objc CKEntity.linkTo:withPredicate:error: <stripped>
	0x96d00  @objc CKEntity.unlinkTo:withPredicate:ignoreWeights:completionHandler: <stripped>
	0x9b550  @objc CKEntity.linksTo:matchType:completionHandler: <stripped>
	0x9ba00  @objc CKEntity.linksTo:matchType:error: <stripped>
	0x9bb30  @objc CKEntity.init <stripped>
	0x9bbb0  @objc CKEntity..cxx_destruct <stripped>

	// Swift methods
	0x930a0  class func CKEntity.__allocating_init(identifier:knowledgeStore:) // init 
	0x93d20  func CKEntity.value(forKey:completionHandler:) // method 
	0x93e30  func CKEntity.values(forKeys:completionHandler:) // method 
	0x94050  func CKEntity.values(forKeys:completionHandler:) // method 
	0x94780  func CKEntity.setValue(_:forKey:completionHandler:) // method 
	0x94b90  func CKEntity.setValues(forKeys:completionHandler:) // method 
	0x954b0  func CKEntity.removeValue(forKey:completionHandler:) // method 
	0x960b0  func CKEntity.link(to:withPredicate:completionHandler:) // method 
	0x966d0  func CKEntity.link(to:withPredicate:) // method 
	0x96bd0  func CKEntity.unlink(to:withPredicate:ignoreWeights:completionHandler:) // method 
	0x96de0  func CKEntity.unlink(to:withPredicate:ignoreWeights:) // method 
	0x971a0  func CKEntity.path(to:withRadius:completionHandler:) // method 
	0x97720  func CKEntity.path(to:withRadius:) // method 
	0x97740  func CKEntity.path(to:radius:) // method 
	0x98420  func CKEntity.linkedEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0x989f0  func CKEntity.linkedEntities(withPredicate:matchType:complement:) // method 
	0x98a00  func CKEntity.linkedEntities(completionHandler:) // method 
	0x993f0  func CKEntity.linkedEntities() // method 
	0x997c0  func CKEntity.linkingEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0x99dd0  func CKEntity.linkingEntities(withPredicate:matchType:complement:) // method 
	0x99de0  func CKEntity.linkingEntities(completionHandler:) // method 
	0x9a1c0  func CKEntity.linkingEntities() // method 
	0x9abb0  func CKEntity.links(to:matchType:completionHandler:) // method 
	0x9b5c0  func CKEntity.links(to:matchType:) // method 
 }

 class CoreKnowledge.CKTimedDispatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x10 (0x8)
	let semaphore : OS_dispatch_semaphore // +0x18 (0x8)
	var _interruptError : Error? // +0x20 (0x8)
	let _timeout : DispatchTime // +0x28 (0x8)
	var _group : OS_dispatch_group? // +0x30 (0x8)

	// Swift methods
	0xa0af0  func CKTimedDispatch._interruptError.getter // getter 
	0xa0b20  func CKTimedDispatch._interruptError.setter // setter 
	0xa0b60  func CKTimedDispatch._interruptError.modify // modifyCoroutine 
	0xa0be0  func CKTimedDispatch._group.getter // getter 
	0xa0c20  func CKTimedDispatch._group.setter // setter 
	0xa0c70  func CKTimedDispatch._group.modify // modifyCoroutine 
	0xa0cb0  func CKTimedDispatch.group.getter // getter 
	0x9fdc0  class func CKTimedDispatch.__allocating_init(timeout:) // init 
	0xa1000  func CKTimedDispatch.interrupt(_:) // method 
	0xa1080  func CKTimedDispatch.wait() // method 
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
	0x8a0c0  @objc CKKnowledgeStore.inferLinkTo:withPredicate:when:error: <stripped>
	0x8c450  @objc CKKnowledgeStore.inferLinkTo:withPredicate:when:completionHandler: <stripped>
	0x69840  @objc CKKnowledgeStore.subgraphWithEntities: <stripped>
	0x6cf80  @objc CKKnowledgeStore.importContentsOfJSONLDAtPath:completionHandler: <stripped>
	0x39e40  @objc CKKnowledgeStore.dictionaryRepresentationWithCompletionHandler: <stripped>
	0x39ff0  @objc CKKnowledgeStore.dictionaryRepresentationAndReturnError: <stripped>
	0x3a140  @objc CKKnowledgeStore.dictionaryRepresentationForKeysMatching:completionHandler: <stripped>
	0x3a260  @objc CKKnowledgeStore.dictionaryRepresentationForKeysMatching:error: <stripped>
	0x3a3d0  @objc CKKnowledgeStore.keysWithCompletionHandler: <stripped>
	0x3a550  @objc CKKnowledgeStore.keysAndReturnError: <stripped>
	0x3a680  @objc CKKnowledgeStore.keysMatching:completionHandler: <stripped>
	0x3a7a0  @objc CKKnowledgeStore.keysMatching:error: <stripped>
	0x3a900  @objc CKKnowledgeStore.valuesWithCompletionHandler: <stripped>
	0x3aa90  @objc CKKnowledgeStore.valuesAndReturnError: <stripped>
	0x3abe0  @objc CKKnowledgeStore.valueForKey:completionHandler: <stripped>
	0x3b000  @objc CKKnowledgeStore.valueForKey: <stripped>
	0x3b510  @objc CKKnowledgeStore.valuesForKeys:completionHandler: <stripped>
	0x3b6a0  @objc CKKnowledgeStore.valuesForKeysMatching:completionHandler: <stripped>
	0x3b7c0  @objc CKKnowledgeStore.valuesForKeysMatching:error: <stripped>
	0x3b950  @objc CKKnowledgeStore.entityWithIdentifier: <stripped>
	0x3c0b0  @objc CKKnowledgeStore.entitiesWithCompletionHandler: <stripped>
	0x3c670  @objc CKKnowledgeStore.entitiesAndReturnError: <stripped>
	0x3c760  @objc CKKnowledgeStore.triplesMatching:error: <stripped>
	0x3c8d0  @objc CKKnowledgeStore.triplesMatching:completionHandler: <stripped>
	0x3cf60  @objc CKKnowledgeStore.sparqlResultsForQuery:completionHandler: <stripped>
	0x2a160  @objc CKKnowledgeStore.writeBatch <stripped>
	0x2a5d0  @objc CKKnowledgeStore.setValue:forKey:completionHandler: <stripped>
	0x2a710  @objc CKKnowledgeStore.setValue:forKey: <stripped>
	0x2ad70  @objc CKKnowledgeStore.importTriplesFromFileAtPath:completionHandler: <stripped>
	0x2ae90  @objc CKKnowledgeStore.removeEntity:completionHandler: <stripped>
	0x2afb0  @objc CKKnowledgeStore.removeEntity:error: <stripped>
	0x2b040  @objc CKKnowledgeStore.removeValueForKey:completionHandler: <stripped>
	0x2b4f0  @objc CKKnowledgeStore.removeValueForKey:error: <stripped>
	0x2b630  @objc CKKnowledgeStore.removeValuesForKeys:completionHandler: <stripped>
	0x2baa0  @objc CKKnowledgeStore.removeValuesForKeys:error: <stripped>
	0x2bbc0  @objc CKKnowledgeStore.removeValuesMatching:completionHandler: <stripped>
	0x2c000  @objc CKKnowledgeStore.removeValuesMatching:error: <stripped>
	0x2c180  @objc CKKnowledgeStore.removeAllValuesWithCompletionHandler: <stripped>
	0x2c5e0  @objc CKKnowledgeStore.removeAllValuesAndReturnError: <stripped>
	0x2c6c0  @objc CKKnowledgeStore.disableSyncAndDeleteCloudDataWithCompletionHandler: <stripped>
	0xa2a00  @objc CKKnowledgeStore.delegate <stripped>
	0xa2a50  @objc CKKnowledgeStore.setDelegate: <stripped>
	0xa2ab0  @objc CKKnowledgeStore.name <stripped>
	0xa2bb0  @objc CKKnowledgeStore.path <stripped>
	0xa2c20  @objc CKKnowledgeStore.hash <stripped>
	0xa2ee0  @objc CKKnowledgeStore.isEqual: <stripped>
	0xa31e0  @objc CKKnowledgeStore.init <stripped>
	0xa3260  @objc CKKnowledgeStore..cxx_destruct <stripped>

	// Swift methods
	0xa1aa0  func CKKnowledgeStore.delegate.getter // getter 
	0xa1ae0  func CKKnowledgeStore.delegate.setter // setter 
	0xa1b30  func CKKnowledgeStore.delegate.modify // modifyCoroutine 
	0xa1b80  func CKKnowledgeStore.name.getter // getter 
	0xa1bc0  func CKKnowledgeStore.path.getter // getter 
	0xa1e00  class func static CKKnowledgeStore.defaultKnowledgeStore() // method 
	0xa1ee0  class func static CKKnowledgeStore.defaultSynchedKnowledgeStore() // method 
	0xa1f30  class func static CKKnowledgeStore.inMemoryKnowledgeStore() // method 
	0xa1f80  class func static CKKnowledgeStore.userDefaultsKnowledgeStore() // method 
	0xa1fd0  class func static CKKnowledgeStore.knowledgeStore(withName:) // method 
	0xa1fe0  class func static CKKnowledgeStore.synchedKnowledgeStore(withName:) // method 
	0xa2060  class func static CKKnowledgeStore.store(_:) // method 
 }

 enum CoreKnowledge.Location {

	// Properties
	case sql : String
	case sqlSynched : String
	case inMemory  
	case userDefaults  
 }

 class CoreKnowledge.CKDeviceActivityStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : CKKnowledgeStore // +0x8 (0x8)

	// ObjC -> Swift bridged methods
	0xa81c0  @objc CKDeviceActivityStore.init <stripped>
	0xa8240  @objc CKDeviceActivityStore..cxx_destruct <stripped>

	// Swift methods
	0xa7f50  class func CKDeviceActivityStore.__allocating_init(store:) // init 
 }

 class CoreKnowledge.CKAbstractWriteBatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var buffer : [String : Any?]
	let backingStore : CKAbstractBackingStore

	// ObjC -> Swift bridged methods
	0xa9110  @objc CKAbstractWriteBatch.setObject:forKey: <stripped>

	// Swift methods
	0xa8f00  func CKAbstractWriteBatch.buffer.getter // getter 
	0xa8f30  func CKAbstractWriteBatch.buffer.setter // setter 
	0xa8f70  func CKAbstractWriteBatch.buffer.modify // modifyCoroutine 
	0xa8fd0  class func CKAbstractWriteBatch.__allocating_init(backingStore:) // init 
	0xa9090  func CKAbstractWriteBatch.setObject(_:forKey:) // method 
 }

 class CoreKnowledge.CKInMemoryWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xa9300  @objc CKInMemoryWriteBatch.writeWithCompletionHandler: <stripped>
	0xa9ad0  @objc CKInMemoryWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xa9250  func CKInMemoryWriteBatch.write(completionHandler:) // method 
	0xa93b0  func CKInMemoryWriteBatch.write() // method 
 }

 class CoreKnowledge.CKUserDefaultsWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
	0xa9300  @objc CKUserDefaultsWriteBatch.writeWithCompletionHandler: <stripped>
	0xaa700  @objc CKUserDefaultsWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xa9b80  func CKUserDefaultsWriteBatch.write(completionHandler:) // method 
	0xa9c30  func CKUserDefaultsWriteBatch.write() // method 
 }

 class CoreKnowledge.CKSQLWriteBatch : CKAbstractWriteBatch {

	// Properties
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
	0xabb70  @objc CKSQLWriteBatch.writeWithCompletionHandler: <stripped>
	0xac100  @objc CKSQLWriteBatch.writeAndReturnError: <stripped>

	// Swift methods
	0xaa760  func CKSQLWriteBatch.queue.getter // getter 
	0xaa790  func CKSQLWriteBatch.queue.setter // setter 
	0xaa7d0  func CKSQLWriteBatch.queue.modify // modifyCoroutine 
	0xab1b0  func CKSQLWriteBatch.write(completionHandler:) // method 
	0xabb90  func CKSQLWriteBatch.write() // method 
 }

 class CoreKnowledge.CKCloudKitWriteBatch : CKSQLWriteBatch {
	// ObjC -> Swift bridged methods
	0xad750  @objc CKCloudKitWriteBatch.writeWithCompletionHandler: <stripped>
 }

 class CoreKnowledge._CKLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xb1430  class func _CKLogger.__allocating_init() // init 
 }

 struct CoreKnowledge.LogCategory {

	// Properties
	let handle : OS_os_log // +0x0
 }

 class CoreKnowledge.CKLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let category : LogCategory

	// Swift methods
	0xb1720  class func CKLogger.__allocating_init(_:) // init 
	0xb1780  func CKLogger.debug(_:_:) // method 
	0xb17a0  func CKLogger.info(_:_:) // method 
	0xb17c0  func CKLogger.error(_:_:) // method 
	0xb17e0  func CKLogger.fault(_:_:) // method 
	0xb1840  func CKLogger.log(type:_:_:) // method 
 }
