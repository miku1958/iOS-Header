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

 enum __C.ComparisonResult { }

 class CoreKnowledge.CKAppInteractionsContext : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId : [String : [String : Int]]
	var numberOfDiscardedDonationsByIntentTypeAndBundleId : [String : [String : Double]]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xeb540003c9e0 (0x3540003c9e0) in binary!
	0xdc74  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0xeb440003c9a8 (0x3440003c9a8) in binary!
	0x100d0  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0xdc5c0003c980 (0x45c0003c980) in binary!
	0xfd14  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff077d8  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff07780  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x94fff31b88  @objc CKAppInteractionsContext.(null) <stripped>

	// Swift methods
	0x5980  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x59a0  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.setter // setter 
	0x59c0  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x5a00  func CKAppInteractionsContext.outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x5a20  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.getter // getter 
	0x5a80  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.setter // setter 
	0x5ae0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x5ce0  class func CKAppInteractionsContext.__allocating_init(_:) // init 
	0x5e90  func CKAppInteractionsContext.encode(with:) // method 
	0x6020  class func CKAppInteractionsContext.__allocating_init(coder:) // init 
	0x6400  func CKAppInteractionsContext.copy(with:) // method 
	0x6490  func CKAppInteractionsContext.incrementNumberOfOutOfAppLaunchBoundaryDonations(forBundleId:intent:) // method 
	0x68c0  func CKAppInteractionsContext.updateDiscardedDonations(_:forIntentType:andBundleId:) // method 
 }

 class CoreKnowledge.CKKnowledgeStoreUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xeaec0003c978 (0x2ec0003c978) in binary!
	0x28000000c  @objc CKKnowledgeStoreUtils.(null) <stripped>
 }

 class CoreKnowledge.CKUserDefaultsBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var kv : NSUserDefaults // +0x10 (0x8)

	// Swift methods
	0xc560  func CKUserDefaultsBackingStore.name.getter // getter 
	0xc580  func CKUserDefaultsBackingStore.name.setter // setter 
	0xc590  func CKUserDefaultsBackingStore.name.modify // modifyCoroutine 
	0xc5d0  class func CKUserDefaultsBackingStore.__allocating_init() // init 
	0xc7c0  func CKUserDefaultsBackingStore.synchronize() // method 
	0xc7e0  func CKUserDefaultsBackingStore.keys() // method 
	0xd180  func CKUserDefaultsBackingStore.keys(matching:) // method 
	0xd260  func CKUserDefaultsBackingStore._value(forKey:) // method 
	0xd320  func CKUserDefaultsBackingStore.values() // method 
	0xd3b0  func CKUserDefaultsBackingStore.values(forKeys:) // method 
	0xd560  func CKUserDefaultsBackingStore.values(forKeysMatching:) // method 
	0xd920  func CKUserDefaultsBackingStore.dictionaryRepresentation() // method 
	0xd990  func CKUserDefaultsBackingStore.dictionaryRepresentation(forKeysMatching:) // method 
	0xdc00  func CKUserDefaultsBackingStore.triplesComponents(matching:) // method 
	0xdcd0  func CKUserDefaultsBackingStore.verify(path:completionHandler:) // method 
	0xddb0  func CKUserDefaultsBackingStore.setValue(_:forKey:completionHandler:) // method 
	0xde80  func CKUserDefaultsBackingStore.writeBatch() // method 
	0xf810  func CKUserDefaultsBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xdf10  func CKUserDefaultsBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xdff0  func CKUserDefaultsBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0xe0d0  func CKUserDefaultsBackingStore.removeValue(forKey:) // method 
	0xe140  func CKUserDefaultsBackingStore.removeValues(forKeys:) // method 
	0xe220  func CKUserDefaultsBackingStore.removeValues(matching:) // method 
	0xe380  func CKUserDefaultsBackingStore.removeAllValues() // method 
	0xe460  func CKUserDefaultsBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0xe540  func CKUserDefaultsBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0xe620  func CKUserDefaultsBackingStore.dropLinks(between:and:completionHandler:) // method 
	0xe700  func CKUserDefaultsBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.INInteractionEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interaction : INInteraction

	// Swift methods
	0xf820  class func INInteractionEncoder.__allocating_init(_:) // init 
	0xf860  func INInteractionEncoder.base64() // method 
 }

 class CoreKnowledge.INInteractionDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xfa90  class func INInteractionDecoder.__allocating_init() // init 
 }

 class CoreKnowledge.CKPermanentEventStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let knowledgeStore : CKKnowledgeStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xeab40003c8f8 (0x2b40003c8f8) in binary!
	0xeabb  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe6f20003ce68 (0x6f20003ce68) in binary!
	0xdc48  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xdc3c0003c8b0 (0x43c0003c8b0) in binary!
	0x103c0  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0x103d40003c888 (0x3d40003c888) in binary!
	0x103c8  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xea820003c860 (0x2820003c860) in binary!
	0xe680  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe6740003cc80 (0x6740003cc80) in binary!
	0xdbe8  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe65c0003cc70 (0x65c0003cc70) in binary!
	0xea46  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xea3a0003c7f8 (0x23a0003c7f8) in binary!
	0xe638  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xea9c0003cc58 (0x29c0003cc58) in binary!
	0xdba0  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xea0a0003c7b8 (0x20a0003c7b8) in binary!
	0xe608  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9cc0003cac8 (0x1cc0003cac8) in binary!
	0xe9b8  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xfba80003c828 (0x3a80003c828) in binary!
	0x18000000c  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9940003c6c0 (0x1940003c6c0) in binary!
	0x168000000c  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe97c0003c808 (0x17c0003c808) in binary!
	0xe978  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9770003c720 (0x1770003c720) in binary!
	0xeefa  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe95f0003c6f8 (0x15f0003c6f8) in binary!
	0xeee2  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9470003c6d0 (0x1470003c6d0) in binary!
	0xeeca  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xeebe0003c6a8 (0x6be0003c6a8) in binary!
	0xe93e  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9320003cce0 (0x1320003cce0) in binary!
	0xe926  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe91a0003c660 (0x11a0003c660) in binary!
	0xe542  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xee760003c638 (0x6760003c638) in binary!
	0xe910  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9240003c610 (0x1240003c610) in binary!
	0xe918  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe92c0003c5e8 (0x12c0003c5e8) in binary!
	0xe940  @objc CKPermanentEventStore.(null) <stripped>

	// Swift methods
	0xfae0  class func CKPermanentEventStore.__allocating_init(knowledgeStore:) // init 
 }

 class CoreKnowledge.CKInMemoryBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let inMemoryStoreHandler : CKPersistentStoreHandler

	// Swift methods
	0x10500  func CKInMemoryBackingStore.name.getter // getter 
	0x10520  func CKInMemoryBackingStore.name.setter // setter 
	0x10530  func CKInMemoryBackingStore.name.modify // modifyCoroutine 
	0x10580  class func CKInMemoryBackingStore.__allocating_init() // init 
	0x106b0  func CKInMemoryBackingStore.keys(completionHandler:) // method 
	0x10750  func CKInMemoryBackingStore.keys(matching:completionHandler:) // method 
	0x107f0  func CKInMemoryBackingStore.value(forKey:completionHandler:) // method 
	0x109b0  func CKInMemoryBackingStore.values(completionHandler:) // method 
	0x10a50  func CKInMemoryBackingStore.values(forKeys:completionHandler:) // method 
	0x10b00  func CKInMemoryBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x10ba0  func CKInMemoryBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x10c40  func CKInMemoryBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x10ce0  func CKInMemoryBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x10d80  func CKInMemoryBackingStore.verify(path:completionHandler:) // method 
	0x10e00  func CKInMemoryBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x10eb0  func CKInMemoryBackingStore.writeBatch() // method 
	0x10f40  func CKInMemoryBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x10fc0  func CKInMemoryBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x11130  func CKInMemoryBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x112a0  func CKInMemoryBackingStore.removeValue(forKey:completionHandler:) // method 
	0x11310  func CKInMemoryBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x11380  func CKInMemoryBackingStore.removeValues(matching:completionHandler:) // method 
	0x113f0  func CKInMemoryBackingStore.removeAllValues(completionHandler:) // method 
	0x11460  func CKInMemoryBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x114d0  func CKInMemoryBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x11540  func CKInMemoryBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x115b0  func CKInMemoryBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
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
	var connection : Connection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe97c0003c808 (0x17c0003c808) in binary!
	0xe978  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9770003c720 (0x1770003c720) in binary!
	0xeefa  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe95f0003c6f8 (0x15f0003c6f8) in binary!
	0xeee2  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9470003c6d0 (0x1470003c6d0) in binary!
	0xeeca  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xeebe0003c6a8 (0x6be0003c6a8) in binary!
	0xe93e  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9320003cce0 (0x1320003cce0) in binary!
	0xe926  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe91a0003c660 (0x11a0003c660) in binary!
	0xe542  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xee760003c638 (0x6760003c638) in binary!
	0xe910  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9240003c610 (0x1240003c610) in binary!
	0xe918  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe92c0003c5e8 (0x12c0003c5e8) in binary!
	0xe940  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9340003c5c0 (0x1340003c5c0) in binary!
	0xfa7c  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x57cfff2d960  @objc CKPersistentStoreHandler.(null) <stripped>
	0x540003c610  @objc CKPersistentStoreHandler. <stripped>
WARNING: couldn't find address 0xfff2d280 (0xfff2d280) in binary!
	0x3c0003c5f8  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xfff415c8 (0xfff415c8) in binary!
	0x11a0003c670  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xfff42b20 (0xfff42b20) in binary!
	0x3c748  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3c74cfff41978 (0x74cfff41978) in binary!
	0x7ec0003c738  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3c4f4fff41ac0 (0x4f4fff41ac0) in binary!
	0x7d40003cb40  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3c684fff41bb8 (0x684fff41bb8) in binary!
	0x6100003caa8  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3cab4fff421c0 (0x2b4fff421c0) in binary!
	0xd00003c618  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3c604fff42628 (0x604fff42628) in binary!
	0x78c0003c618  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3c5fcfff42c80 (0x5fcfff42c80) in binary!
	0x18000000c  @objc CKPersistentStoreHandler.(null) <stripped>

	// Swift methods
	0x194b0  func CKPersistentStoreHandler.connection.getter // getter 
	0x194f0  func CKPersistentStoreHandler.connection.setter // setter 
	0x19540  func CKPersistentStoreHandler.connection.modify // modifyCoroutine 
	0x19590  class func static CKPersistentStoreHandler.inMemoryHandler() // method 
	0x19720  class func CKPersistentStoreHandler.__allocating_init(name:) // init 
	0x19ec0  func CKPersistentStoreHandler.keys() // method 
	0x1a660  func CKPersistentStoreHandler.keys(matching:) // method 
	0x1ae80  func CKPersistentStoreHandler.values() // method 
	0x1b680  func CKPersistentStoreHandler.values(forKeysMatching:) // method 
	0x1bf50  func CKPersistentStoreHandler.keysAndValues() // method 
	0x1c840  func CKPersistentStoreHandler.keysAndValues(forKeysMatching:) // method 
	0x1d210  func CKPersistentStoreHandler.selectQuery(project:whereField:isIn:) // method 
	0x1d830  func CKPersistentStoreHandler._values(forKeys:) // method 
	0x1e810  func CKPersistentStoreHandler.save(keysAndValues:) // method 
	0x1f810  func CKPersistentStoreHandler.removeValue(forKey:) // method 
	0x1ff00  func CKPersistentStoreHandler._removeValues(forKeys:) // method 
	0x205e0  func CKPersistentStoreHandler.removeValues(forKeys:) // method 
	0x20870  func CKPersistentStoreHandler._removeValues(matching:) // method 
	0x20ec0  func CKPersistentStoreHandler.removeValues(matching:) // method 
	0x21150  func CKPersistentStoreHandler.removeAllValues() // method 
	0x21940  func CKPersistentStoreHandler.tripleComponents(matching:) // method 
	0x223f0  func CKPersistentStoreHandler.setWeight(forLinkWithLabel:between:and:toValue:) // method 
	0x22b10  func CKPersistentStoreHandler.increaseWeight(forLinkWithLabel:between:and:) // method 
	0x23770  func CKPersistentStoreHandler.decreaseWeight(forLinkWithLabel:between:and:) // method 
	0x24180  func CKPersistentStoreHandler.decreaseWeights(between:and:) // method 
	0x248b0  func CKPersistentStoreHandler.dropLink(withLabel:between:and:) // method 
	0x24e10  func CKPersistentStoreHandler.dropLinks(withLabel:from:) // method 
	0x254f0  func CKPersistentStoreHandler.dropLinks(between:and:) // method 
	0x25930  func CKPersistentStoreHandler.deserializeValue(_:) // method 
 }

 class CoreKnowledge.CKSQLBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var name : String
	let connection : NSXPCConnection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe8540003c610 (0x540003c610) in binary!
	0x18000000c  @objc CKSQLBackingStore.(null) <stripped>

	// Swift methods
	0x31cf0  func CKSQLBackingStore.name.getter // getter 
	0x31d30  func CKSQLBackingStore.name.setter // setter 
	0x31d70  func CKSQLBackingStore.name.modify // modifyCoroutine 
	0x31dc0  class func CKSQLBackingStore.__allocating_init(name:) // init 
	0x31fb0  class func static CKSQLBackingStore.mainInstance() // method 
	0x31fd0  func CKSQLBackingStore.daemon(errorHandler:) // method 
	0x328a0  func CKSQLBackingStore.keys(completionHandler:) // method 
	0x32a80  func CKSQLBackingStore.keys(matching:completionHandler:) // method 
	0x32c10  func CKSQLBackingStore.value(forKey:completionHandler:) // method 
	0x32e20  func CKSQLBackingStore.values(completionHandler:) // method 
	0x33040  func CKSQLBackingStore.values(forKeys:completionHandler:) // method 
	0x33400  func CKSQLBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x33590  func CKSQLBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x337c0  func CKSQLBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x33950  func CKSQLBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x33b70  func CKSQLBackingStore.verify(path:completionHandler:) // method 
	0x33c50  func CKSQLBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x33f20  func CKSQLBackingStore.writeBatch() // method 
	0x33f70  func CKSQLBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x34140  func CKSQLBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x34380  func CKSQLBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x34570  func CKSQLBackingStore.removeValue(forKey:completionHandler:) // method 
	0x346f0  func CKSQLBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x34870  func CKSQLBackingStore.removeValues(matching:completionHandler:) // method 
	0x349d0  func CKSQLBackingStore.removeAllValues(completionHandler:) // method 
	0x34b30  func CKSQLBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x34d00  func CKSQLBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x34ec0  func CKSQLBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x35070  func CKSQLBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.Connection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _handle : €ú
	var busyTimeout : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var busyHandler : ?ù
	var trace : @convention(block) (_:)?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateHook :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var commitHook : ù
	var rollbackHook : @convention(block) ()?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var functions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var collations : String
	var queue : OS_dispatch_queue
	var $__lazy_storage_$_queueContext : Int?

	// Swift methods
	0x3a010  class func Connection.__allocating_init(_:readonly:) // init 
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
WARNING: couldn't find address 0xe83c0003c5f8 (0x3c0003c5f8) in binary!
	0x18000000c  @objc CKCloudKitBackingStore.(null) <stripped>

	// Swift methods
	0x44fe0  func CKCloudKitBackingStore.triplesComponents(matching:) // method 
 }

 class CoreKnowledge.CKTriple : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : (String, String, String, Int)

	// ObjC -> Swift bridged methods
	0xe7f8  @objc CKTriple.ç Ä <stripped>
WARNING: couldn't find address 0xe7ec0003c738 (0x7ec0003c738) in binary!
	0xf62c  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0xe7d40003cb40 (0x7d40003cb40) in binary!
	0xf614  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0xf6100003caa8 (0x6100003caa8) in binary!
	0xf618  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0xd8d00003c618 (0xd00003c618) in binary!
	0xe7a0  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0xe78c0003c618 (0x78c0003c618) in binary!
	0xf97c  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff47470  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff47418  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x434fff4a1c0  @objc CKTriple.(null) <stripped>
	0x5a4fff4ab28  @objc CKTriple. <stripped>
	0xfff4abb0  @objc CKTriple.dÉ <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x3d4fff45168  @objc CKTriple.(null) <stripped>

	// Swift methods
	0x466a0  func CKTriple.subject.getter // getter 
	0x46750  func CKTriple.predicate.getter // getter 
	0x46820  func CKTriple.object.getter // getter 
	0x46890  func CKTriple.weight.getter // getter 
	0x46f60  class func CKTriple.__allocating_init(tuple:) // init 
	0x46570  class func CKTriple.__allocating_init(subject:predicate:object:weight:) // init 
	0x471b0  func CKTriple.encode(with:) // method 
	0x473a0  class func CKTriple.__allocating_init(coder:) // init 
	0x477f0  func CKTriple.dictionary() // method 
 }

 struct CoreKnowledge.CKOntology { }

 class CoreKnowledge.CoreKnowledgeXPCUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe7540003c5e0 (0x7540003c5e0) in binary!
	0x58000000c  @objc CoreKnowledgeXPCUtils.(null) <stripped>
 }

 enum CoreKnowledge.JSONLDParseError {

	// Properties
	case unexpectedFormat  
	case resourceNotAvailable  
 }

 class CoreKnowledge.CKJSONLDGraph : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let _entities : CKEntity
	let queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe7440003c448 (0x7440003c448) in binary!
	0xe730  @objc CKJSONLDGraph.(null) <stripped>
WARNING: couldn't find address 0xe37a0003c420 (0x37a0003c420) in binary!
	0xe718  @objc CKJSONLDGraph.(null) <stripped>
WARNING: couldn't find address 0xf9080003c588 (0x1080003c588) in binary!
	0xa8000000c  @objc CKJSONLDGraph.(null) <stripped>
WARNING: couldn't find address 0xd90c0003c3e8 (0x10c0003c3e8) in binary!
	0xe320  @objc CKJSONLDGraph.(null) <stripped>
WARNING: couldn't find address 0xf5300003ca10 (0x5300003ca10) in binary!
	0xe308  @objc CKJSONLDGraph.(null) <stripped>

	// Swift methods
	0x4eee0  class func CKJSONLDGraph.__allocating_init(withEntities:) // init 
	0x4f000  func CKJSONLDGraph.entities.getter // getter 
	0x4f210  func CKJSONLDGraph.linkedData(completionHandler:) // method 
 }

 class CoreKnowledge.CKEphemeralEventSequence : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd90c0003c3e8 (0x10c0003c3e8) in binary!
	0xe320  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xf5300003ca10 (0x5300003ca10) in binary!
	0xe308  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xea780003c3a0 (0x2780003c3a0) in binary!
	0xe6c0  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xe6ac0003c378 (0x6ac0003c378) in binary!
	0xe6a0  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xe6940003c520 (0x6940003c520) in binary!
	0xf884  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x304fff56008  @objc CKEphemeralEventSequence.(null) <stripped>
	0x7520003c4a8  @objc CKEphemeralEventSequence. <stripped>
WARNING: couldn't find address 0x3c2e4fff576f8 (0x2e4fff576f8) in binary!
	0x28000000c  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xf9ec0003c180 (0x1ec0003c180) in binary!
	0xe9dc  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x174fff54e18  @objc CKEphemeralEventSequence.(null) <stripped>

	// Swift methods
	0x57550  func CKEphemeralEventSequence.historyStartEvent.getter // getter 
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
	0x59570  class func Matcher.__allocating_init(_:value:) // init 
	0x595f0  func Matcher.evaluate(on:) // method 
	0x598d0  func Matcher.sql.getter // getter 
	0x59c10  func Matcher.sql.setter // setter 
	0x59c30  func Matcher.sql.modify // modifyCoroutine 
 }

 class CoreKnowledge.CKGenericCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : ConditionType
	var negated : Bool
	var $__lazy_storage_$_sql : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe6140003c568 (0x6140003c568) in binary!
	0xe608  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xf9360003c2c0 (0x1360003c2c0) in binary!
	0xf938  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xe5ec0003c298 (0x5ec0003c298) in binary!
	0xe5e0  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xf4200003c270 (0x4200003c270) in binary!
	0xfb60  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xd6e00003c428 (0x6e00003c428) in binary!
	0xe5b0  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xe59c0003c428 (0x59c0003c428) in binary!
	0xf78c  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x234fff56b20  @objc CKGenericCondition.(null) <stripped>
	0x20cfff56ee8  @objc CKGenericCondition. <stripped>
	0x1e4fff57210  @objc CKGenericCondition. <stripped>
	0x39cfff574f8  @objc CKGenericCondition.@ <stripped>
	0x39cfff578b0  @objc CKGenericCondition. <stripped>
	0xfff57998  @objc CKGenericCondition.[A\A]A^A_]È\N <stripped>

	// Swift methods
	0x59dc0  func CKGenericCondition.predicate.getter // getter 
	0x5a0f0  class func CKGenericCondition.__allocating_init(value:) // init 
	0x58e30  class func CKGenericCondition.__allocating_init(_:value:negated:) // init 
	0x5a380  func CKGenericCondition.and(_:) // method 
	0x5a490  func CKGenericCondition.or(_:) // method 
	0x5a680  func CKGenericCondition.sql.getter // getter 
	0x5aa30  func CKGenericCondition.sql.setter // setter 
	0x5aa60  func CKGenericCondition.sql.modify // modifyCoroutine 
	0x5aac0  func CKGenericCondition.evaluate(on:) // method 
	0x5ace0  func CKGenericCondition.copy(with:) // method 
	0x5af30  func CKGenericCondition.encode(with:) // method 
	0x5b210  class func CKGenericCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKTripleCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var rawCondition : CKGenericCondition

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe57c0003c8e8 (0x57c0003c8e8) in binary!
	0xf8aa  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xf8fc0003c590 (0xfc0003c590) in binary!
	0xe560  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe5540003c1f8 (0x5540003c1f8) in binary!
	0xf394  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xfad40003c398 (0x2d40003c398) in binary!
	0xd654  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe5240003c388 (0x5240003c388) in binary!
	0xe510  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xf7000003c380 (0x7000003c380) in binary!
	0x18000000c  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xd5ea0003c340 (0x5ea0003c340) in binary!
	0xe8000000c  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe4d40003c368 (0x4d40003c368) in binary!
	0xe4c8  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe4bc0003c148 (0x4bc0003c148) in binary!
	0xf2fc  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xfa380003c120 (0x2380003c120) in binary!
	0xfa2c  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe48c0003c358 (0x48c0003c358) in binary!
	0xd5ac  @objc CKTripleCondition.(null) <stripped>

	// Swift methods
	0x5b990  func CKTripleCondition.rawCondition.getter // getter 
	0x5b9d0  func CKTripleCondition.rawCondition.setter // setter 
	0x5ba20  func CKTripleCondition.rawCondition.modify // modifyCoroutine 
	0x5bb90  class func CKTripleCondition.__allocating_init(_:) // init 
	0x5bf10  func CKTripleCondition.and(_:) // method 
	0x5c0d0  func CKTripleCondition.or(_:) // method 
	0x5c290  func CKTripleCondition.evaluate(on:) // method 
	0x5c400  func CKTripleCondition.copy(with:) // method 
	0x5c640  func CKTripleCondition.encode(with:) // method 
	0x5c750  class func CKTripleCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKHistoricEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _firstSeen : eï // +0x131000 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSeen : eï // +0x5 (0x0)
	var _frequency : Int // +0x16 (0x8)
	var _lastDuration : Double // +0x65745f5f (0x8)
	var _totalDuration : Double // +0x0 (0x8)
	var _metadata : [String : Any] // +0x45545f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe4d40003c368 (0x4d40003c368) in binary!
	0xe4c8  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe4bc0003c148 (0x4bc0003c148) in binary!
	0xf2fc  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xfa380003c120 (0x2380003c120) in binary!
	0xfa2c  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe48c0003c358 (0x48c0003c358) in binary!
	0xd5ac  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe47c0003c2e0 (0x47c0003c2e0) in binary!
	0xe470  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe8100003c0c0 (0x100003c0c0) in binary!
	0xf9f0  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe4440003c2d0 (0x4440003c2d0) in binary!
	0xf634  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x28cfff5e5e8  @objc CKHistoricEvent.(null) <stripped>
	0x27cfff5e950  @objc CKHistoricEvent.MâÙHÉƒP[A]A^A_]√f.Ñ <stripped>
	0x7a00003c038  @objc CKHistoricEvent.ˇ√Hâ]†Lâ˜LçΩ`ˇˇˇLâ˛Ë\ ˇˇLâˇLâˆË1 ˇˇHã  <stripped>
WARNING: couldn't find address 0x3c024fff606c0 (0x24fff606c0) in binary!
	0x78000000c  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xf2180003c288 (0x2180003c288) in binary!
	0xe3c0  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xfbcc0003c010 (0x3cc0003c010) in binary!
	0xfbc0  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe3a40003c050 (0x3a40003c050) in binary!
	0xe390  @objc CKHistoricEvent.(null) <stripped>

	// Swift methods
	0x60640  func CKHistoricEvent._firstSeen.getter // getter 
	0x60660  func CKHistoricEvent._firstSeen.setter // setter 
	0x60680  func CKHistoricEvent._firstSeen.modify // modifyCoroutine 
	0x60770  func CKHistoricEvent._lastSeen.getter // getter 
	0x607e0  func CKHistoricEvent._lastSeen.setter // setter 
	0x60860  func CKHistoricEvent._lastSeen.modify // modifyCoroutine 
	0x60900  func CKHistoricEvent._frequency.getter // getter 
	0x60930  func CKHistoricEvent._frequency.setter // setter 
	0x60970  func CKHistoricEvent._frequency.modify // modifyCoroutine 
	0x60a10  func CKHistoricEvent._lastDuration.getter // getter 
	0x60a30  func CKHistoricEvent._lastDuration.setter // setter 
	0x60a50  func CKHistoricEvent._lastDuration.modify // modifyCoroutine 
	0x60af0  func CKHistoricEvent._totalDuration.getter // getter 
	0x60b40  func CKHistoricEvent._totalDuration.setter // setter 
	0x60ba0  func CKHistoricEvent._totalDuration.modify // modifyCoroutine 
	0x60c50  func CKHistoricEvent._metadata.getter // getter 
	0x60c90  func CKHistoricEvent._metadata.setter // setter 
	0x60ce0  func CKHistoricEvent._metadata.modify // modifyCoroutine 
	0x60da0  func CKHistoricEvent.firstSeen.getter // getter 
	0x60e40  func CKHistoricEvent.lastSeen.getter // getter 
	0x60eb0  func CKHistoricEvent.frequency.getter // getter 
	0x60f20  func CKHistoricEvent.lastDuration.getter // getter 
	0x60f90  func CKHistoricEvent.totalDuration.getter // getter 
	0x61030  func CKHistoricEvent.metadata.getter // getter 
	0x60170  class func CKHistoricEvent.__allocating_init(identifier:firstSeen:lastSeen:frequency:lastDuration:totalDuration:metadata:) // init 
	0x611f0  func CKHistoricEvent.encode(with:) // method 
	0x61570  class func CKHistoricEvent.__allocating_init(coder:) // init 
	0x61fb0  class func CKHistoricEvent.__allocating_init(_:) // init 
	0x62a60  func CKHistoricEvent.copy(with:) // method 
 }

 class CoreKnowledge.CKClosure : NSObject /usr/lib/libobjc.A.dylib, CKExecutableClosure {

	// Properties
	let store : CKKnowledgeStore
	let entity : CKEntity

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe42c0003c290 (0x42c0003c290) in binary!
	0xd544  @objc CKClosure.(null) <stripped>
WARNING: couldn't find address 0xe40c0003c298 (0x40c0003c298) in binary!
	0xf5fc  @objc CKClosure.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x24fff606c0  @objc CKClosure.(null) <stripped>
	0x2180003c288  @objc CKClosure.Iã}ˇj. <stripped>

	// Swift methods
	0x630d0  class func CKClosure.__allocating_init(coder:) // init 
	0x636c0  func CKClosure.encode(with:) // method 
	0x63940  func CKClosure.execute() // method 
 }

 enum CoreKnowledge.CKLogicError {

	// Properties
	case missingRuleBody  
	case unsatisfiableRule  
 }

 class CoreKnowledge.CKLogic : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var body : CKEntity
	var negatedBody : CKEntity

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf2180003c288 (0x2180003c288) in binary!
	0xe3c0  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xfbcc0003c010 (0x3cc0003c010) in binary!
	0xfbc0  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xe3a40003c050 (0x3a40003c050) in binary!
	0xe390  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xf5800003c200 (0x5800003c200) in binary!
	0x118000000c  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xf1c00003c658 (0x1c00003c658) in binary!
	0xf1ac  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xe3540003c6c0 (0x3540003c6c0) in binary!
	0xe350  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xdf740003c5f0 (0x7740003c5f0) in binary!
	0xdf68  @objc CKLogic.(null) <stripped>

	// Swift methods
	0x64e10  func CKLogic.body.getter // getter 
	0x64e30  func CKLogic.body.setter // setter 
	0x64e50  func CKLogic.body.modify // modifyCoroutine 
	0x64f00  func CKLogic.negatedBody.getter // getter 
	0x64f60  func CKLogic.negatedBody.setter // setter 
	0x64fc0  func CKLogic.negatedBody.modify // modifyCoroutine 
	0x65580  func CKLogic.identifier.getter // getter 
	0x65680  class func static CKLogic.ifExistsLink(_:to:) // method 
	0x658b0  func CKLogic.andExistsLink(_:to:) // method 
	0x65ca0  class func static CKLogic.ifNotExistsLink(_:to:) // method 
	0x65eb0  func CKLogic.andNotExistsLink(_:to:) // method 
	0x66390  func CKLogic.and(_:) // method 
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
	let identifier : String
	let store : CKKnowledgeStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xf1c00003c658 (0x1c00003c658) in binary!
	0xf1ac  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe3540003c6c0 (0x3540003c6c0) in binary!
	0xe350  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xdf740003c5f0 (0x7740003c5f0) in binary!
	0xdf68  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xd4dc0003c5b0 (0x4dc0003c5b0) in binary!
	0xdf50  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xdf440003c3e8 (0x7440003c3e8) in binary!
	0xd4b8  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe39c0003c218 (0x39c0003c218) in binary!
	0xff30  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xdf320003bef8 (0x7320003bef8) in binary!
	0xff38  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xf67c0003bed0 (0x67c0003bed0) in binary!
	0xe2b8  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xf4a80003c128 (0x4a80003c128) in binary!
	0x78000000c  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2940003be10 (0x2940003be10) in binary!
	0xe288  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe27c0003bde8 (0x27c0003bde8) in binary!
	0xe270  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2640003bdc0 (0x2640003bdc0) in binary!
	0xe260  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2540003bda0 (0x2540003bda0) in binary!
	0x308000000c  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2bc0003be38 (0x2bc0003be38) in binary!
	0xd440  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2240003be18 (0x2240003be18) in binary!
	0xde48  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xde5a0003c5d8 (0x65a0003c5d8) in binary!
	0xe20b  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xde240003bdd0 (0x6240003bdd0) in binary!
	0xe782  @objc CKEntity.(null) <stripped>

	// Swift methods
	0x6e470  class func CKEntity.__allocating_init(identifier:knowledgeStore:) // init 
	0x6edd0  func CKEntity.value(forKey:completionHandler:) // method 
	0x6ee30  func CKEntity.values(forKeys:completionHandler:) // method 
	0x6f030  func CKEntity.values(forKeys:completionHandler:) // method 
	0x6f520  func CKEntity.setValue(_:forKey:completionHandler:) // method 
	0x6fa50  func CKEntity.setValues(forKeys:completionHandler:) // method 
	0x70180  func CKEntity.removeValue(forKey:completionHandler:) // method 
	0x70390  func CKEntity.link(to:withPredicate:completionHandler:) // method 
	0x707c0  func CKEntity.link(to:withPredicate:) // method 
	0x70be0  func CKEntity.unlink(to:withPredicate:ignoreWeights:completionHandler:) // method 
	0x70e30  func CKEntity.unlink(to:withPredicate:ignoreWeights:) // method 
	0x71120  func CKEntity.remove(completionHandler:) // method 
	0x71280  func CKEntity.remove() // method 
	0x71510  func CKEntity.path(to:withRadius:completionHandler:) // method 
	0x719b0  func CKEntity.path(to:withRadius:) // method 
	0x719d0  func CKEntity.path(to:radius:) // method 
	0x724b0  func CKEntity.linkedEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0x72f50  func CKEntity.linkedEntities(withPredicate:matchType:complement:) // method 
	0x732e0  func CKEntity.linkedEntities(completionHandler:) // method 
	0x738d0  func CKEntity.linkedEntities() // method 
	0x73c20  func CKEntity.linkingEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0x747f0  func CKEntity.linkingEntities(withPredicate:matchType:complement:) // method 
	0x74b80  func CKEntity.linkingEntities(completionHandler:) // method 
	0x74eb0  func CKEntity.linkingEntities() // method 
	0x75200  func CKEntity.links(to:matchType:completionHandler:) // method 
	0x75940  func CKEntity.links(to:matchType:) // method 
 }

 class CoreKnowledge.CKTimedDispatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x10 (0x8)
	let semaphore : OS_dispatch_semaphore // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _interruptError : Õ£ // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _timeout : óì // +0x0 (0x0)
	var _group : OS_dispatch_group? // +0x102a9a (0x8)

	// Swift methods
	0x77f10  func CKTimedDispatch._interruptError.getter // getter 
	0x77f40  func CKTimedDispatch._interruptError.setter // setter 
	0x77f90  func CKTimedDispatch._interruptError.modify // modifyCoroutine 
	0x78060  func CKTimedDispatch._group.getter // getter 
	0x780a0  func CKTimedDispatch._group.setter // setter 
	0x780f0  func CKTimedDispatch._group.modify // modifyCoroutine 
	0x78130  func CKTimedDispatch.group.getter // getter 
	0x77670  class func CKTimedDispatch.__allocating_init(timeout:) // init 
	0x78620  func CKTimedDispatch.interrupt(_:) // method 
	0x78660  func CKTimedDispatch.wait() // method 
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
	let backingStore : CKBackingStore
	let sparqlQueue : OS_dispatch_queue
	let location : Location
	var delegate : CKKnowledgeStoreDelegate?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe2bc0003be38 (0x2bc0003be38) in binary!
	0xd440  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe2240003be18 (0x2240003be18) in binary!
	0xde48  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xde5a0003c5d8 (0x65a0003c5d8) in binary!
	0xe20b  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xde240003bdd0 (0x6240003bdd0) in binary!
	0xe782  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xde2a0003bda8 (0x62a0003bda8) in binary!
	0xe1db  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xddf40003bd88 (0x5f40003bd88) in binary!
	0xe752  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xddfa0003bd68 (0x5fa0003bd68) in binary!
	0xe1ab  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xddc40003c440 (0x5c40003c440) in binary!
	0xe188  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xddac0003bdb0 (0x5ac0003bdb0) in binary!
	0xdda0  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe6fe0003bf00 (0x6fe0003bf00) in binary!
	0xe158  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdd9a0003c290 (0x59a0003c290) in binary!
	0xe14b  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe6ce0003c450 (0x6ce0003c450) in binary!
	0xdd58  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdd4c0003bcc0 (0x54c0003bcc0) in binary!
	0xe108  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xd2b40003c388 (0x2b40003c388) in binary!
	0xdd1a  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdd1c0003bc88 (0x51c0003bc88) in binary!
	0xdd10  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0fa0003bc68 (0xfa0003bc68) in binary!
	0xdcf8  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0e20003c490 (0xe20003c490) in binary!
	0xdce0  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0ca0003be18 (0xca0003be18) in binary!
	0xdcc8  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0b20003bdf8 (0xb20003bdf8) in binary!
	0xdcce  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdcce0003bdd8 (0x4ce0003bdd8) in binary!
	0xdcb6  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0540003bbe8 (0x540003bbe8) in binary!
	0xd174  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe03c0003bf30 (0x3c0003bf30) in binary!
	0xe030  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xee700003bee0 (0x6700003bee0) in binary!
	0xee6c  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe00c0003be98 (0xc0003be98) in binary!
	0xf1fc  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x65cfff7abf0  @objc CKKnowledgeStore.(null) <stripped>
	0x540003bb08  @objc CKKnowledgeStore.Hãı# <stripped>
WARNING: couldn't find address 0x3c3a4fff7b0a0 (0x3a4fff7b0a0) in binary!
	0x28000000c  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdc020003c070 (0x4020003c070) in binary!
	0xdc02  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7bad0  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7dd08  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x1cfff7bc10  @objc CKKnowledgeStore.(null) <stripped>
	0x3920003c000  @objc CKKnowledgeStore.Lã}¿LâˇËvW <stripped>
WARNING: couldn't find address 0x3bffcfff800b0 (0x7fcfff800b0) in binary!
	0x25029232840  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x65726f433a4d4152 (0x7433a4d4152) in binary!
	0x75250202065  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x4b65726f433a5443 (0x26f433a5443) in binary!
	0xa312d  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x3ff0000000000000 (0x0) in binary!
	0x2  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x17070414b43  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x6e6f697463617265 (0x17463617265) in binary!
	0x0  @objc CKKnowledgeStore.(null) <stripped>
	0x98fff061c0  @objc CKKnowledgeStore.œ˙Ì˛ <stripped>
WARNING: couldn't find address 0x2000217ae (0x2000217ae) in binary!
	0xa00000002  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xd0000000c (0xd0000000c) in binary!
	0x144983  @objc CKKnowledgeStore.(null) <stripped>
	0x144982  @objc CKKnowledgeStore.® <stripped>
	0x144971  @objc CKKnowledgeStore. <stripped>
	0x144980  @objc CKKnowledgeStore.$ <stripped>
	0x435f5f  @objc CKKnowledgeStore.$ <stripped>
	0x57365526e6f  @objc CKKnowledgeStore.œ˙Ì˛ <stripped>
WARNING: couldn't find address 0x706d6f43534e4e00 (0x743534e4e00) in binary!
	0x746c7573  @objc CKKnowledgeStore.(null) <stripped>
	0x0  @objc CKKnowledgeStore.H!¡HâH«G <stripped>

	// Swift methods
	0x78bd0  func CKKnowledgeStore.delegate.getter // getter 
	0x78c10  func CKKnowledgeStore.delegate.setter // setter 
	0x78c60  func CKKnowledgeStore.delegate.modify // modifyCoroutine 
	0x78cb0  func CKKnowledgeStore.name.getter // getter 
	0x78cf0  func CKKnowledgeStore.filePath.getter // getter 
	0x78f40  class func static CKKnowledgeStore.defaultKnowledgeStore() // method 
	0x78ff0  class func static CKKnowledgeStore.defaultSynchedKnowledgeStore() // method 
	0x79030  class func static CKKnowledgeStore.inMemoryKnowledgeStore() // method 
	0x79060  class func static CKKnowledgeStore.userDefaultsKnowledgeStore() // method 
	0x79090  class func static CKKnowledgeStore.knowledgeStore(withName:) // method 
	0x790a0  class func static CKKnowledgeStore.synchedKnowledgeStore(withName:) // method 
	0x79100  class func static CKKnowledgeStore.store(_:) // method 
 }

 enum CoreKnowledge.Location {

	// Properties
	case sql : String
	case sqlSynched : String
	case inMemory  
	case userDefaults  
 }

 class CoreKnowledge.Statement : _SwiftObject /usr/lib/swift/libswiftCore.dylib, FailableIterator {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var handle : €ú
	let connection : Connection
	var $__lazy_storage_$_columnCount : Int?
	var $__lazy_storage_$_columnNames : [String]?
	var $__lazy_storage_$_row : Cursor

	// Swift methods
	0x7d370  class func Statement.__allocating_init(_:_:) // init 
 }

 struct CoreKnowledge.Cursor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : sî // +0x0
	let columnCount : Int // +0x8
 }

 class CoreKnowledge.CKDeviceActivityStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : CKKnowledgeStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdfec0003be78 (0x7ec0003be78) in binary!
	0xf1dc  @objc CKDeviceActivityStore.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x3a4fff7b0a0  @objc CKDeviceActivityStore.(null) <stripped>

	// Swift methods
	0x7fea0  class func CKDeviceActivityStore.__allocating_init(store:) // init 
 }

 class CoreKnowledge.CKAbstractWriteBatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var buffer : [String : Any?]
	let backingStore : CKBackingStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdbb60003bec0 (0x3b60003bec0) in binary!
	0x18000000c  @objc CKAbstractWriteBatch.(null) <stripped>

	// Swift methods
	0x80db0  func CKAbstractWriteBatch.buffer.getter // getter 
	0x80de0  func CKAbstractWriteBatch.buffer.setter // setter 
	0x80e20  func CKAbstractWriteBatch.buffer.modify // modifyCoroutine 
	0x80e70  class func CKAbstractWriteBatch.__allocating_init(backingStore:) // init 
	0x80f40  func CKAbstractWriteBatch.setObject(_:forKey:) // method 
 }

 class CoreKnowledge.CKInMemoryWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdbb20003c020 (0x3b20003c020) in binary!
	0xdbb2  @objc CKInMemoryWriteBatch.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7fcfff800b0  @objc CKInMemoryWriteBatch.(null) <stripped>

	// Swift methods
	0x81120  func CKInMemoryWriteBatch.write(completionHandler:) // method 
	0x81210  func CKInMemoryWriteBatch.write() // method 
 }

 class CoreKnowledge.CKUserDefaultsWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdb920003c000 (0x3920003c000) in binary!
	0xdb92  @objc CKUserDefaultsWriteBatch.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x56c776f6e4b  @objc CKUserDefaultsWriteBatch.(null) <stripped>

	// Swift methods
	0x85600  func CKUserDefaultsWriteBatch.write(completionHandler:) // method 
	0x81870  func CKUserDefaultsWriteBatch.write() // method 
 }

 class CoreKnowledge.CKSQLWriteBatch : CKAbstractWriteBatch {

	// Properties
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdc020003c070 (0x4020003c070) in binary!
	0xdc02  @objc CKSQLWriteBatch.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7bad0  @objc CKSQLWriteBatch.(null) <stripped>

	// Swift methods
	0x81f40  func CKSQLWriteBatch.queue.getter // getter 
	0x81f70  func CKSQLWriteBatch.queue.setter // setter 
	0x81fb0  func CKSQLWriteBatch.queue.modify // modifyCoroutine 
	0x81ff0  func CKSQLWriteBatch.write(completionHandler:) // method 
	0x82700  func CKSQLWriteBatch.write() // method 
 }

 class CoreKnowledge.CKCloudKitWriteBatch : CKSQLWriteBatch {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdbca0003c038 (0x3ca0003c038) in binary!
	0x28000000c  @objc CKCloudKitWriteBatch.(null) <stripped>
 }

 class CoreKnowledge.CKLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let osLog : OS_os_log

	// Swift methods
	0x875d0  class func CKLogger.__allocating_init(_:) // init 
	0x87620  func CKLogger.debug(_:_:) // method 
	0x87640  func CKLogger.info(_:_:) // method 
	0x87660  func CKLogger.error(_:_:) // method 
	0x87680  func CKLogger.fault(_:_:) // method 
	0x876e0  func CKLogger.log(type:_:_:) // method 
 }
