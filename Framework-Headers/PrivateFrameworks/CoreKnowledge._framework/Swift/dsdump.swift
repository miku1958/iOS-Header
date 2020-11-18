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
WARNING: couldn't find address 0xeb540003b3f0 (0x3540003b3f0) in binary!
	0xdc74  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0xeb440003b3b8 (0x3440003b3b8) in binary!
	0x100d0  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0xdc5c0003b390 (0x45c0003b390) in binary!
	0xfd14  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff076d8  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff07680  @objc CKAppInteractionsContext.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x2a4fff31b08  @objc CKAppInteractionsContext.(null) <stripped>

	// Swift methods
	0x5e30  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x5e50  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.setter // setter 
	0x5e70  func CKAppInteractionsContext._outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x5eb0  func CKAppInteractionsContext.outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId.getter // getter 
	0x5ed0  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.getter // getter 
	0x5f30  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.setter // setter 
	0x5f90  func CKAppInteractionsContext.numberOfDiscardedDonationsByIntentTypeAndBundleId.modify // modifyCoroutine 
	0x6190  class func CKAppInteractionsContext.__allocating_init(_:) // init 
	0x6340  func CKAppInteractionsContext.encode(with:) // method 
	0x64d0  class func CKAppInteractionsContext.__allocating_init(coder:) // init 
	0x68b0  func CKAppInteractionsContext.copy(with:) // method 
	0x6940  func CKAppInteractionsContext.incrementNumberOfOutOfAppLaunchBoundaryDonations(forBundleId:intent:) // method 
	0x6d70  func CKAppInteractionsContext.updateDiscardedDonations(_:forIntentType:andBundleId:) // method 
 }

 class CoreKnowledge.CKKnowledgeStoreUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xeaec0003b388 (0x2ec0003b388) in binary!
	0x28000000c  @objc CKKnowledgeStoreUtils.(null) <stripped>
 }

 class CoreKnowledge.CKUserDefaultsBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var kv : NSUserDefaults // +0x10 (0x8)

	// Swift methods
	0xca50  func CKUserDefaultsBackingStore.name.getter // getter 
	0xca70  func CKUserDefaultsBackingStore.name.setter // setter 
	0xca80  func CKUserDefaultsBackingStore.name.modify // modifyCoroutine 
	0xcac0  class func CKUserDefaultsBackingStore.__allocating_init() // init 
	0xccb0  func CKUserDefaultsBackingStore.synchronize() // method 
	0xccd0  func CKUserDefaultsBackingStore.keys() // method 
	0xd670  func CKUserDefaultsBackingStore.keys(matching:) // method 
	0xd750  func CKUserDefaultsBackingStore._value(forKey:) // method 
	0xd810  func CKUserDefaultsBackingStore.values() // method 
	0xd8a0  func CKUserDefaultsBackingStore.values(forKeys:) // method 
	0xda50  func CKUserDefaultsBackingStore.values(forKeysMatching:) // method 
	0xde10  func CKUserDefaultsBackingStore.dictionaryRepresentation() // method 
	0xde80  func CKUserDefaultsBackingStore.dictionaryRepresentation(forKeysMatching:) // method 
	0xe0f0  func CKUserDefaultsBackingStore.triplesComponents(matching:) // method 
	0xe1c0  func CKUserDefaultsBackingStore.verify(path:completionHandler:) // method 
	0xe2a0  func CKUserDefaultsBackingStore.setValue(_:forKey:completionHandler:) // method 
	0xe370  func CKUserDefaultsBackingStore.writeBatch() // method 
	0xfd20  func CKUserDefaultsBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xe400  func CKUserDefaultsBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0xe4e0  func CKUserDefaultsBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0xe5c0  func CKUserDefaultsBackingStore.removeValue(forKey:) // method 
	0xe630  func CKUserDefaultsBackingStore.removeValues(forKeys:) // method 
	0xe710  func CKUserDefaultsBackingStore.removeValues(matching:) // method 
	0xe870  func CKUserDefaultsBackingStore.removeAllValues() // method 
	0xe950  func CKUserDefaultsBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0xea30  func CKUserDefaultsBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0xeb10  func CKUserDefaultsBackingStore.dropLinks(between:and:completionHandler:) // method 
	0xebf0  func CKUserDefaultsBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.INInteractionEncoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interaction : INInteraction

	// Swift methods
	0xfd30  class func INInteractionEncoder.__allocating_init(_:) // init 
	0xfd70  func INInteractionEncoder.base64() // method 
 }

 class CoreKnowledge.INInteractionDecoder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xffa0  class func INInteractionDecoder.__allocating_init() // init 
 }

 class CoreKnowledge.CKPermanentEventStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let knowledgeStore : CKKnowledgeStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xeab40003b308 (0x2b40003b308) in binary!
	0xeabb  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe6f20003b878 (0x6f20003b878) in binary!
	0xdc48  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xdc3c0003b2c0 (0x43c0003b2c0) in binary!
	0x103c0  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0x103d40003b298 (0x3d40003b298) in binary!
	0x103c8  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xea820003b270 (0x2820003b270) in binary!
	0xe680  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe6740003b690 (0x6740003b690) in binary!
	0xdbe8  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe65c0003b680 (0x65c0003b680) in binary!
	0xea46  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xea3a0003b208 (0x23a0003b208) in binary!
	0xe638  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xea9c0003b668 (0x29c0003b668) in binary!
	0xdba0  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xea0a0003b1c8 (0x20a0003b1c8) in binary!
	0xe608  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9cc0003b4d8 (0x1cc0003b4d8) in binary!
	0xe9b8  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xfba80003b238 (0x3a80003b238) in binary!
	0x18000000c  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9940003b0d0 (0x1940003b0d0) in binary!
	0x168000000c  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe97c0003b218 (0x17c0003b218) in binary!
	0xe978  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9770003b130 (0x1770003b130) in binary!
	0xeefa  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe95f0003b108 (0x15f0003b108) in binary!
	0xeee2  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9470003b0e0 (0x1470003b0e0) in binary!
	0xeeca  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xeebe0003b0b8 (0x6be0003b0b8) in binary!
	0xe93e  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9320003b6f0 (0x1320003b6f0) in binary!
	0xe926  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe91a0003b070 (0x11a0003b070) in binary!
	0xe542  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xee760003b048 (0x6760003b048) in binary!
	0xe910  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe9240003b020 (0x1240003b020) in binary!
	0xe918  @objc CKPermanentEventStore.(null) <stripped>
WARNING: couldn't find address 0xe92c0003aff8 (0x12c0003aff8) in binary!
	0xe940  @objc CKPermanentEventStore.(null) <stripped>

	// Swift methods
	0xfff0  class func CKPermanentEventStore.__allocating_init(knowledgeStore:) // init 
 }

 class CoreKnowledge.CKInMemoryBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let inMemoryStoreHandler : CKPersistentStoreHandler

	// Swift methods
	0x10a10  func CKInMemoryBackingStore.name.getter // getter 
	0x10a30  func CKInMemoryBackingStore.name.setter // setter 
	0x10a40  func CKInMemoryBackingStore.name.modify // modifyCoroutine 
	0x10a90  class func CKInMemoryBackingStore.__allocating_init() // init 
	0x10bc0  func CKInMemoryBackingStore.keys(completionHandler:) // method 
	0x10c60  func CKInMemoryBackingStore.keys(matching:completionHandler:) // method 
	0x10d00  func CKInMemoryBackingStore.value(forKey:completionHandler:) // method 
	0x10ec0  func CKInMemoryBackingStore.values(completionHandler:) // method 
	0x10f60  func CKInMemoryBackingStore.values(forKeys:completionHandler:) // method 
	0x11010  func CKInMemoryBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x110b0  func CKInMemoryBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x11150  func CKInMemoryBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x111f0  func CKInMemoryBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x11290  func CKInMemoryBackingStore.verify(path:completionHandler:) // method 
	0x11300  func CKInMemoryBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x113b0  func CKInMemoryBackingStore.writeBatch() // method 
	0x11440  func CKInMemoryBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x114c0  func CKInMemoryBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x11630  func CKInMemoryBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x117a0  func CKInMemoryBackingStore.removeValue(forKey:completionHandler:) // method 
	0x11810  func CKInMemoryBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x11880  func CKInMemoryBackingStore.removeValues(matching:completionHandler:) // method 
	0x118f0  func CKInMemoryBackingStore.removeAllValues(completionHandler:) // method 
	0x11960  func CKInMemoryBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x119d0  func CKInMemoryBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x11a40  func CKInMemoryBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x11ab0  func CKInMemoryBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
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
WARNING: couldn't find address 0xe97c0003b218 (0x17c0003b218) in binary!
	0xe978  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9770003b130 (0x1770003b130) in binary!
	0xeefa  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe95f0003b108 (0x15f0003b108) in binary!
	0xeee2  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9470003b0e0 (0x1470003b0e0) in binary!
	0xeeca  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xeebe0003b0b8 (0x6be0003b0b8) in binary!
	0xe93e  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9320003b6f0 (0x1320003b6f0) in binary!
	0xe926  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe91a0003b070 (0x11a0003b070) in binary!
	0xe542  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xee760003b048 (0x6760003b048) in binary!
	0xe910  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9240003b020 (0x1240003b020) in binary!
	0xe918  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe92c0003aff8 (0x12c0003aff8) in binary!
	0xe940  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xe9340003afd0 (0x1340003afd0) in binary!
	0xfa7c  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x78cfff2d8e0  @objc CKPersistentStoreHandler.(null) <stripped>
	0x540003b020  @objc CKPersistentStoreHandler.ã]¿vIIâMI¡ÊKçt5 Hç}òHç7X <stripped>
WARNING: couldn't find address 0xfff2d200 (0xfff2d200) in binary!
	0x3c0003b008  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xfff41568 (0xfff41568) in binary!
	0x11a0003b080  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0xfff42ac0 (0xfff42ac0) in binary!
	0x3b158  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3b15cfff41918 (0x15cfff41918) in binary!
	0x7ec0003b148  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3af04fff41a60 (0x704fff41a60) in binary!
	0x7d40003b550  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3b094fff41b58 (0x94fff41b58) in binary!
	0x6100003b4b8  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3b4c4fff42160 (0x4c4fff42160) in binary!
	0xd00003b028  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3b014fff425c8 (0x14fff425c8) in binary!
	0x78c0003b028  @objc CKPersistentStoreHandler.(null) <stripped>
WARNING: couldn't find address 0x3b00cfff42c20 (0xcfff42c20) in binary!
	0x18000000c  @objc CKPersistentStoreHandler.(null) <stripped>

	// Swift methods
	0x199c0  func CKPersistentStoreHandler.connection.getter // getter 
	0x19a00  func CKPersistentStoreHandler.connection.setter // setter 
	0x19a50  func CKPersistentStoreHandler.connection.modify // modifyCoroutine 
	0x19aa0  class func static CKPersistentStoreHandler.inMemoryHandler() // method 
	0x19c30  class func CKPersistentStoreHandler.__allocating_init(name:) // init 
	0x1a3d0  func CKPersistentStoreHandler.keys() // method 
	0x1ab70  func CKPersistentStoreHandler.keys(matching:) // method 
	0x1b390  func CKPersistentStoreHandler.values() // method 
	0x1bb90  func CKPersistentStoreHandler.values(forKeysMatching:) // method 
	0x1c460  func CKPersistentStoreHandler.keysAndValues() // method 
	0x1cd50  func CKPersistentStoreHandler.keysAndValues(forKeysMatching:) // method 
	0x1d720  func CKPersistentStoreHandler.selectQuery(project:whereField:isIn:) // method 
	0x1dd40  func CKPersistentStoreHandler._values(forKeys:) // method 
	0x1ed20  func CKPersistentStoreHandler.save(keysAndValues:) // method 
	0x1fd20  func CKPersistentStoreHandler.removeValue(forKey:) // method 
	0x20410  func CKPersistentStoreHandler._removeValues(forKeys:) // method 
	0x20af0  func CKPersistentStoreHandler.removeValues(forKeys:) // method 
	0x20d80  func CKPersistentStoreHandler._removeValues(matching:) // method 
	0x213d0  func CKPersistentStoreHandler.removeValues(matching:) // method 
	0x21660  func CKPersistentStoreHandler.removeAllValues() // method 
	0x21e50  func CKPersistentStoreHandler.tripleComponents(matching:) // method 
	0x22900  func CKPersistentStoreHandler.setWeight(forLinkWithLabel:between:and:toValue:) // method 
	0x23020  func CKPersistentStoreHandler.increaseWeight(forLinkWithLabel:between:and:) // method 
	0x23c80  func CKPersistentStoreHandler.decreaseWeight(forLinkWithLabel:between:and:) // method 
	0x24690  func CKPersistentStoreHandler.decreaseWeights(between:and:) // method 
	0x24dc0  func CKPersistentStoreHandler.dropLink(withLabel:between:and:) // method 
	0x25320  func CKPersistentStoreHandler.dropLinks(withLabel:from:) // method 
	0x25a00  func CKPersistentStoreHandler.dropLinks(between:and:) // method 
	0x25e40  func CKPersistentStoreHandler.deserializeValue(_:) // method 
 }

 class CoreKnowledge.CKSQLBackingStore : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var name : String
	let connection : NSXPCConnection

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe8540003b020 (0x540003b020) in binary!
	0x18000000c  @objc CKSQLBackingStore.(null) <stripped>

	// Swift methods
	0x32260  func CKSQLBackingStore.name.getter // getter 
	0x322a0  func CKSQLBackingStore.name.setter // setter 
	0x322e0  func CKSQLBackingStore.name.modify // modifyCoroutine 
	0x32330  class func CKSQLBackingStore.__allocating_init(name:) // init 
	0x32520  class func static CKSQLBackingStore.mainInstance() // method 
	0x32540  func CKSQLBackingStore.daemon(errorHandler:) // method 
	0x32e10  func CKSQLBackingStore.keys(completionHandler:) // method 
	0x32ff0  func CKSQLBackingStore.keys(matching:completionHandler:) // method 
	0x33180  func CKSQLBackingStore.value(forKey:completionHandler:) // method 
	0x33390  func CKSQLBackingStore.values(completionHandler:) // method 
	0x335b0  func CKSQLBackingStore.values(forKeys:completionHandler:) // method 
	0x33970  func CKSQLBackingStore.values(forKeysMatching:completionHandler:) // method 
	0x33b00  func CKSQLBackingStore.dictionaryRepresentation(completionHandler:) // method 
	0x33d30  func CKSQLBackingStore.dictionaryRepresentation(forKeysMatching:completionHandler:) // method 
	0x33ec0  func CKSQLBackingStore.triplesComponents(matching:completionHandler:) // method 
	0x340e0  func CKSQLBackingStore.verify(path:completionHandler:) // method 
	0x341c0  func CKSQLBackingStore.setValue(_:forKey:completionHandler:) // method 
	0x34490  func CKSQLBackingStore.writeBatch() // method 
	0x344e0  func CKSQLBackingStore.setWeight(forLinkWithLabel:between:and:toValue:completionHandler:) // method 
	0x346b0  func CKSQLBackingStore.increaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x348f0  func CKSQLBackingStore.decreaseWeight(forLinkWithLabel:between:and:completionHandler:) // method 
	0x34ae0  func CKSQLBackingStore.removeValue(forKey:completionHandler:) // method 
	0x34c60  func CKSQLBackingStore.removeValues(forKeys:completionHandler:) // method 
	0x34de0  func CKSQLBackingStore.removeValues(matching:completionHandler:) // method 
	0x34f40  func CKSQLBackingStore.removeAllValues(completionHandler:) // method 
	0x350a0  func CKSQLBackingStore.dropLink(withLabel:between:and:completionHandler:) // method 
	0x35270  func CKSQLBackingStore.dropLinks(withLabel:from:completionHandler:) // method 
	0x35430  func CKSQLBackingStore.dropLinks(between:and:completionHandler:) // method 
	0x355e0  func CKSQLBackingStore.disableSyncAndDeleteCloudData(completionHandler:) // method 
 }

 class CoreKnowledge.Connection : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _handle : Îñ
	var busyTimeout : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	var busyHandler : Oó
	var trace : @convention(block) (_:)?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var updateHook :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var commitHook : ó
	var rollbackHook : @convention(block) ()?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var functions :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var collations : String
	var queue : OS_dispatch_queue
	var $__lazy_storage_$_queueContext : Int?

	// Swift methods
	0x3a5a0  class func Connection.__allocating_init(_:readonly:) // init 
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
WARNING: couldn't find address 0xe83c0003b008 (0x3c0003b008) in binary!
	0x18000000c  @objc CKCloudKitBackingStore.(null) <stripped>

	// Swift methods
	0x45570  func CKCloudKitBackingStore.triplesComponents(matching:) // method 
 }

 class CoreKnowledge.CKTriple : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let value : (String, String, String, Int)

	// ObjC -> Swift bridged methods
	0xe7f8  @objc CKTriple.@ËàÉ <stripped>
WARNING: couldn't find address 0xe7ec0003b148 (0x7ec0003b148) in binary!
	0xf62c  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0xe7d40003b550 (0x7d40003b550) in binary!
	0xf614  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0xf6100003b4b8 (0x6100003b4b8) in binary!
	0xf618  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0xd8d00003b028 (0xd00003b028) in binary!
	0xe7a0  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0xe78c0003b028 (0x78c0003b028) in binary!
	0xf97c  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff47410  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff473b8  @objc CKTriple.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x644fff4a160  @objc CKTriple.(null) <stripped>
	0x7b4fff4aac8  @objc CKTriple.Ö‰Ö <stripped>
	0xfff4ab50  @objc CKTriple.AUSHÉÏ`Iâ˛IãE <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x5e4fff45108  @objc CKTriple.(null) <stripped>

	// Swift methods
	0x46c30  func CKTriple.subject.getter // getter 
	0x46ce0  func CKTriple.predicate.getter // getter 
	0x46db0  func CKTriple.object.getter // getter 
	0x46e20  func CKTriple.weight.getter // getter 
	0x474f0  class func CKTriple.__allocating_init(tuple:) // init 
	0x46b00  class func CKTriple.__allocating_init(subject:predicate:object:weight:) // init 
	0x47740  func CKTriple.encode(with:) // method 
	0x47930  class func CKTriple.__allocating_init(coder:) // init 
	0x47d80  func CKTriple.dictionary() // method 
 }

 struct CoreKnowledge.CKOntology { }

 class CoreKnowledge.CoreKnowledgeXPCUtils : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe7540003aff0 (0x7540003aff0) in binary!
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
WARNING: couldn't find address 0xe7440003ae58 (0x7440003ae58) in binary!
	0xe730  @objc CKJSONLDGraph.(null) <stripped>
WARNING: couldn't find address 0xe37a0003ae30 (0x37a0003ae30) in binary!
	0xe718  @objc CKJSONLDGraph.(null) <stripped>
WARNING: couldn't find address 0xf9080003af98 (0x1080003af98) in binary!
	0xa8000000c  @objc CKJSONLDGraph.(null) <stripped>
WARNING: couldn't find address 0xd90c0003adf8 (0x10c0003adf8) in binary!
	0xe320  @objc CKJSONLDGraph.(null) <stripped>
WARNING: couldn't find address 0xf5300003b420 (0x5300003b420) in binary!
	0xe308  @objc CKJSONLDGraph.(null) <stripped>

	// Swift methods
	0x4f470  class func CKJSONLDGraph.__allocating_init(withEntities:) // init 
	0x4f590  func CKJSONLDGraph.entities.getter // getter 
	0x4f7a0  func CKJSONLDGraph.linkedData(completionHandler:) // method 
 }

 class CoreKnowledge.CKEphemeralEventSequence : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xd90c0003adf8 (0x10c0003adf8) in binary!
	0xe320  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xf5300003b420 (0x5300003b420) in binary!
	0xe308  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xea780003adb0 (0x2780003adb0) in binary!
	0xe6c0  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xe6ac0003ad88 (0x6ac0003ad88) in binary!
	0xe6a0  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xe6940003af30 (0x6940003af30) in binary!
	0xf884  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x514fff55fb8  @objc CKEphemeralEventSequence.(null) <stripped>
	0x7520003aeb8  @objc CKEphemeralEventSequence.Ö…HI¡H¡¯HçD <stripped>
WARNING: couldn't find address 0x3acf4fff576a8 (0x4f4fff576a8) in binary!
	0x28000000c  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xf9ec0003ab90 (0x1ec0003ab90) in binary!
	0xe9dc  @objc CKEphemeralEventSequence.(null) <stripped>
WARNING: couldn't find address 0xc8000000c (0xc8000000c) in binary!
	0x384fff54dc8  @objc CKEphemeralEventSequence.(null) <stripped>

	// Swift methods
	0x57ae0  func CKEphemeralEventSequence.historyStartEvent.getter // getter 
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
	0x59b10  class func Matcher.__allocating_init(_:value:) // init 
	0x59b90  func Matcher.evaluate(on:) // method 
	0x59e70  func Matcher.sql.getter // getter 
	0x5a1b0  func Matcher.sql.setter // setter 
	0x5a1d0  func Matcher.sql.modify // modifyCoroutine 
 }

 class CoreKnowledge.CKGenericCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let type : ConditionType
	var negated : Bool
	var $__lazy_storage_$_sql : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe6140003af78 (0x6140003af78) in binary!
	0xe608  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xf9360003acd0 (0x1360003acd0) in binary!
	0xf938  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xe5ec0003aca8 (0x5ec0003aca8) in binary!
	0xe5e0  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xf4200003ac80 (0x4200003ac80) in binary!
	0xfb60  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xd6e00003ae38 (0x6e00003ae38) in binary!
	0xe5b0  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xe59c0003ae38 (0x59c0003ae38) in binary!
	0xf78c  @objc CKGenericCondition.(null) <stripped>
WARNING: couldn't find address 0xb8000000c (0xb8000000c) in binary!
	0x444fff56ad0  @objc CKGenericCondition.(null) <stripped>
	0x41cfff56e98  @objc CKGenericCondition.ÁË4A <stripped>
	0x3f4fff571c0  @objc CKGenericCondition. <stripped>
	0x5acfff574a8  @objc CKGenericCondition.AWAVATSHâÛAâ˛Mã} <stripped>
	0x5acfff57860  @objc CKGenericCondition.òc <stripped>
	0xfff57948  @objc CKGenericCondition.E <stripped>

	// Swift methods
	0x5a360  func CKGenericCondition.predicate.getter // getter 
	0x5a690  class func CKGenericCondition.__allocating_init(value:) // init 
	0x593d0  class func CKGenericCondition.__allocating_init(_:value:negated:) // init 
	0x5a920  func CKGenericCondition.and(_:) // method 
	0x5aa30  func CKGenericCondition.or(_:) // method 
	0x5ac20  func CKGenericCondition.sql.getter // getter 
	0x5afd0  func CKGenericCondition.sql.setter // setter 
	0x5b000  func CKGenericCondition.sql.modify // modifyCoroutine 
	0x5b060  func CKGenericCondition.evaluate(on:) // method 
	0x5b280  func CKGenericCondition.copy(with:) // method 
	0x5b4d0  func CKGenericCondition.encode(with:) // method 
	0x5b7b0  class func CKGenericCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKTripleCondition : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var rawCondition : CKGenericCondition

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe57c0003b2f8 (0x57c0003b2f8) in binary!
	0xf8aa  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xf8fc0003afa0 (0xfc0003afa0) in binary!
	0xe560  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe5540003ac08 (0x5540003ac08) in binary!
	0xf394  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xfad40003ada8 (0x2d40003ada8) in binary!
	0xd654  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe5240003ad98 (0x5240003ad98) in binary!
	0xe510  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xf7000003ad90 (0x7000003ad90) in binary!
	0x18000000c  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xd5ea0003ad50 (0x5ea0003ad50) in binary!
	0xe8000000c  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe4d40003ad78 (0x4d40003ad78) in binary!
	0xe4c8  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe4bc0003ab58 (0x4bc0003ab58) in binary!
	0xf2fc  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xfa380003ab30 (0x2380003ab30) in binary!
	0xfa2c  @objc CKTripleCondition.(null) <stripped>
WARNING: couldn't find address 0xe48c0003ad68 (0x48c0003ad68) in binary!
	0xd5ac  @objc CKTripleCondition.(null) <stripped>

	// Swift methods
	0x5bf30  func CKTripleCondition.rawCondition.getter // getter 
	0x5bf70  func CKTripleCondition.rawCondition.setter // setter 
	0x5bfc0  func CKTripleCondition.rawCondition.modify // modifyCoroutine 
	0x5c130  class func CKTripleCondition.__allocating_init(_:) // init 
	0x5c4b0  func CKTripleCondition.and(_:) // method 
	0x5c670  func CKTripleCondition.or(_:) // method 
	0x5c830  func CKTripleCondition.evaluate(on:) // method 
	0x5c9a0  func CKTripleCondition.copy(with:) // method 
	0x5cbe0  func CKTripleCondition.encode(with:) // method 
	0x5ccf0  class func CKTripleCondition.__allocating_init(coder:) // init 
 }

 class CoreKnowledge.CKHistoricEvent : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let identifier : String // +0x8 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _firstSeen : uè // +0x131000 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _lastSeen : uè // +0x5 (0x0)
	var _frequency : Int // +0x16 (0x8)
	var _lastDuration : Double // +0x65745f5f (0x8)
	var _totalDuration : Double // +0x0 (0x8)
	var _metadata : [String : Any] // +0x45545f5f (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe4d40003ad78 (0x4d40003ad78) in binary!
	0xe4c8  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe4bc0003ab58 (0x4bc0003ab58) in binary!
	0xf2fc  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xfa380003ab30 (0x2380003ab30) in binary!
	0xfa2c  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe48c0003ad68 (0x48c0003ad68) in binary!
	0xd5ac  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe47c0003acf0 (0x47c0003acf0) in binary!
	0xe470  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe8100003aad0 (0x100003aad0) in binary!
	0xf9f0  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe4440003ace0 (0x4440003ace0) in binary!
	0xf634  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x49cfff5e5b8  @objc CKHistoricEvent.(null) <stripped>
	0x48cfff5e920  @objc CKHistoricEvent.IãNH—ÈH;M»s∂¯Lçm–Hãu»1“Ë› <stripped>
	0x7a00003aa48  @objc CKHistoricEvent.SPHâÛAâ˛Mã} <stripped>
WARNING: couldn't find address 0x3aa34fff60690 (0x234fff60690) in binary!
	0x78000000c  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xf2180003ac98 (0x2180003ac98) in binary!
	0xe3c0  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xfbcc0003aa20 (0x3cc0003aa20) in binary!
	0xfbc0  @objc CKHistoricEvent.(null) <stripped>
WARNING: couldn't find address 0xe3a40003aa60 (0x3a40003aa60) in binary!
	0xe390  @objc CKHistoricEvent.(null) <stripped>

	// Swift methods
	0x60bf0  func CKHistoricEvent._firstSeen.getter // getter 
	0x60c10  func CKHistoricEvent._firstSeen.setter // setter 
	0x60c30  func CKHistoricEvent._firstSeen.modify // modifyCoroutine 
	0x60d20  func CKHistoricEvent._lastSeen.getter // getter 
	0x60d90  func CKHistoricEvent._lastSeen.setter // setter 
	0x60e10  func CKHistoricEvent._lastSeen.modify // modifyCoroutine 
	0x60eb0  func CKHistoricEvent._frequency.getter // getter 
	0x60ee0  func CKHistoricEvent._frequency.setter // setter 
	0x60f20  func CKHistoricEvent._frequency.modify // modifyCoroutine 
	0x60fc0  func CKHistoricEvent._lastDuration.getter // getter 
	0x60fe0  func CKHistoricEvent._lastDuration.setter // setter 
	0x61000  func CKHistoricEvent._lastDuration.modify // modifyCoroutine 
	0x610a0  func CKHistoricEvent._totalDuration.getter // getter 
	0x610f0  func CKHistoricEvent._totalDuration.setter // setter 
	0x61150  func CKHistoricEvent._totalDuration.modify // modifyCoroutine 
	0x61200  func CKHistoricEvent._metadata.getter // getter 
	0x61240  func CKHistoricEvent._metadata.setter // setter 
	0x61290  func CKHistoricEvent._metadata.modify // modifyCoroutine 
	0x61350  func CKHistoricEvent.firstSeen.getter // getter 
	0x613f0  func CKHistoricEvent.lastSeen.getter // getter 
	0x61460  func CKHistoricEvent.frequency.getter // getter 
	0x614d0  func CKHistoricEvent.lastDuration.getter // getter 
	0x61540  func CKHistoricEvent.totalDuration.getter // getter 
	0x615e0  func CKHistoricEvent.metadata.getter // getter 
	0x60720  class func CKHistoricEvent.__allocating_init(identifier:firstSeen:lastSeen:frequency:lastDuration:totalDuration:metadata:) // init 
	0x617a0  func CKHistoricEvent.encode(with:) // method 
	0x61b20  class func CKHistoricEvent.__allocating_init(coder:) // init 
	0x62560  class func CKHistoricEvent.__allocating_init(_:) // init 
	0x63010  func CKHistoricEvent.copy(with:) // method 
 }

 class CoreKnowledge.CKClosure : NSObject /usr/lib/libobjc.A.dylib, CKExecutableClosure {

	// Properties
	let store : CKKnowledgeStore
	let entity : CKEntity

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xe42c0003aca0 (0x42c0003aca0) in binary!
	0xd544  @objc CKClosure.(null) <stripped>
WARNING: couldn't find address 0xe40c0003aca8 (0x40c0003aca8) in binary!
	0xf5fc  @objc CKClosure.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x234fff60690  @objc CKClosure.(null) <stripped>
	0x2180003ac98  @objc CKClosure.∞Lâ˛Ë”J <stripped>

	// Swift methods
	0x63690  class func CKClosure.__allocating_init(coder:) // init 
	0x63c80  func CKClosure.encode(with:) // method 
	0x63f00  func CKClosure.execute() // method 
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
WARNING: couldn't find address 0xf2180003ac98 (0x2180003ac98) in binary!
	0xe3c0  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xfbcc0003aa20 (0x3cc0003aa20) in binary!
	0xfbc0  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xe3a40003aa60 (0x3a40003aa60) in binary!
	0xe390  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xf5800003ac10 (0x5800003ac10) in binary!
	0x118000000c  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xf1c00003b068 (0x1c00003b068) in binary!
	0xf1ac  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xe3540003b0d0 (0x3540003b0d0) in binary!
	0xe350  @objc CKLogic.(null) <stripped>
WARNING: couldn't find address 0xdf740003b000 (0x7740003b000) in binary!
	0xdf68  @objc CKLogic.(null) <stripped>

	// Swift methods
	0x653d0  func CKLogic.body.getter // getter 
	0x653f0  func CKLogic.body.setter // setter 
	0x65410  func CKLogic.body.modify // modifyCoroutine 
	0x654c0  func CKLogic.negatedBody.getter // getter 
	0x65520  func CKLogic.negatedBody.setter // setter 
	0x65580  func CKLogic.negatedBody.modify // modifyCoroutine 
	0x65b40  func CKLogic.identifier.getter // getter 
	0x65c40  class func static CKLogic.ifExistsLink(_:to:) // method 
	0x65e70  func CKLogic.andExistsLink(_:to:) // method 
	0x66260  class func static CKLogic.ifNotExistsLink(_:to:) // method 
	0x66470  func CKLogic.andNotExistsLink(_:to:) // method 
	0x66950  func CKLogic.and(_:) // method 
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
WARNING: couldn't find address 0xf1c00003b068 (0x1c00003b068) in binary!
	0xf1ac  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe3540003b0d0 (0x3540003b0d0) in binary!
	0xe350  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xdf740003b000 (0x7740003b000) in binary!
	0xdf68  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xd4dc0003afc0 (0x4dc0003afc0) in binary!
	0xdf50  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xdf440003adf8 (0x7440003adf8) in binary!
	0xd4b8  @objc CKEntity.(null) <stripped>
	0xff30  INInteractionEncoder.__deallocating_deinit
WARNING: couldn't find address 0xdf320003a908 (0x7320003a908) in binary!
	0xff38  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xf67c0003a8e0 (0x67c0003a8e0) in binary!
	0xe2b8  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xf4a80003ab38 (0x4a80003ab38) in binary!
	0x78000000c  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2940003a820 (0x2940003a820) in binary!
	0xe288  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe27c0003a7f8 (0x27c0003a7f8) in binary!
	0xe270  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2640003a7d0 (0x2640003a7d0) in binary!
	0xe260  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2540003a7b0 (0x2540003a7b0) in binary!
	0x308000000c  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2bc0003a848 (0x2bc0003a848) in binary!
	0xd440  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xe2240003a828 (0x2240003a828) in binary!
	0xde48  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xde5a0003afe8 (0x65a0003afe8) in binary!
	0xe20b  @objc CKEntity.(null) <stripped>
WARNING: couldn't find address 0xde240003a7e0 (0x6240003a7e0) in binary!
	0xe782  @objc CKEntity.(null) <stripped>

	// Swift methods
	0x6ea10  class func CKEntity.__allocating_init(identifier:knowledgeStore:) // init 
	0x6f370  func CKEntity.value(forKey:completionHandler:) // method 
	0x6f3d0  func CKEntity.values(forKeys:completionHandler:) // method 
	0x6f5d0  func CKEntity.values(forKeys:completionHandler:) // method 
	0x6fac0  func CKEntity.setValue(_:forKey:completionHandler:) // method 
	0x6fff0  func CKEntity.setValues(forKeys:completionHandler:) // method 
	0x70720  func CKEntity.removeValue(forKey:completionHandler:) // method 
	0x70930  func CKEntity.link(to:withPredicate:completionHandler:) // method 
	0x70d60  func CKEntity.link(to:withPredicate:) // method 
	0x71180  func CKEntity.unlink(to:withPredicate:ignoreWeights:completionHandler:) // method 
	0x713d0  func CKEntity.unlink(to:withPredicate:ignoreWeights:) // method 
	0x716c0  func CKEntity.remove(completionHandler:) // method 
	0x71820  func CKEntity.remove() // method 
	0x71ab0  func CKEntity.path(to:withRadius:completionHandler:) // method 
	0x71f50  func CKEntity.path(to:withRadius:) // method 
	0x71f70  func CKEntity.path(to:radius:) // method 
	0x72a50  func CKEntity.linkedEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0x734f0  func CKEntity.linkedEntities(withPredicate:matchType:complement:) // method 
	0x73880  func CKEntity.linkedEntities(completionHandler:) // method 
	0x73e70  func CKEntity.linkedEntities() // method 
	0x741c0  func CKEntity.linkingEntities(withPredicate:matchType:complement:completionHandler:) // method 
	0x74d90  func CKEntity.linkingEntities(withPredicate:matchType:complement:) // method 
	0x75120  func CKEntity.linkingEntities(completionHandler:) // method 
	0x75450  func CKEntity.linkingEntities() // method 
	0x757a0  func CKEntity.links(to:matchType:completionHandler:) // method 
	0x75ee0  func CKEntity.links(to:matchType:) // method 
 }

 class CoreKnowledge.CKTimedDispatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let queue : OS_dispatch_queue // +0x10 (0x8)
	let semaphore : OS_dispatch_semaphore // +0x18 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _interruptError : ›ù // +0x20 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let _timeout : ßç // +0x0 (0x0)
	var _group : OS_dispatch_group? // +0x10308a (0x8)

	// Swift methods
	0x784c0  func CKTimedDispatch._interruptError.getter // getter 
	0x784f0  func CKTimedDispatch._interruptError.setter // setter 
	0x78540  func CKTimedDispatch._interruptError.modify // modifyCoroutine 
	0x78610  func CKTimedDispatch._group.getter // getter 
	0x78650  func CKTimedDispatch._group.setter // setter 
	0x786a0  func CKTimedDispatch._group.modify // modifyCoroutine 
	0x786e0  func CKTimedDispatch.group.getter // getter 
	0x77c20  class func CKTimedDispatch.__allocating_init(timeout:) // init 
	0x78bd0  func CKTimedDispatch.interrupt(_:) // method 
	0x78c10  func CKTimedDispatch.wait() // method 
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
WARNING: couldn't find address 0xe2bc0003a848 (0x2bc0003a848) in binary!
	0xd440  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe2240003a828 (0x2240003a828) in binary!
	0xde48  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xde5a0003afe8 (0x65a0003afe8) in binary!
	0xe20b  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xde240003a7e0 (0x6240003a7e0) in binary!
	0xe782  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xde2a0003a7b8 (0x62a0003a7b8) in binary!
	0xe1db  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xddf40003a798 (0x5f40003a798) in binary!
	0xe752  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xddfa0003a778 (0x5fa0003a778) in binary!
	0xe1ab  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xddc40003ae50 (0x5c40003ae50) in binary!
	0xe188  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xddac0003a7c0 (0x5ac0003a7c0) in binary!
	0xdda0  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe6fe0003a910 (0x6fe0003a910) in binary!
	0xe158  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdd9a0003aca0 (0x59a0003aca0) in binary!
	0xe14b  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe6ce0003ae60 (0x6ce0003ae60) in binary!
	0xdd58  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdd4c0003a6d0 (0x54c0003a6d0) in binary!
	0xe108  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xd2b40003ad98 (0x2b40003ad98) in binary!
	0xdd1a  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdd1c0003a698 (0x51c0003a698) in binary!
	0xdd10  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0fa0003a678 (0xfa0003a678) in binary!
	0xdcf8  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0e20003aea0 (0xe20003aea0) in binary!
	0xdce0  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0ca0003a828 (0xca0003a828) in binary!
	0xdcc8  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0b20003a808 (0xb20003a808) in binary!
	0xdcce  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdcce0003a7e8 (0x4ce0003a7e8) in binary!
	0xdcb6  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe0540003a5f8 (0x540003a5f8) in binary!
	0xd174  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe03c0003a940 (0x3c0003a940) in binary!
	0xe030  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xee700003a8f0 (0x6700003a8f0) in binary!
	0xee6c  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xe00c0003a8a8 (0xc0003a8a8) in binary!
	0xf1fc  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6cfff7abd0  @objc CKKnowledgeStore.(null) <stripped>
	0x540003a518  @objc CKKnowledgeStore.âCHâﬂË˝G <stripped>
WARNING: couldn't find address 0x3adb4fff7b080 (0x5b4fff7b080) in binary!
	0x28000000c  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xdc020003aa80 (0x4020003aa80) in binary!
	0xdc02  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7bab0  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7dce8  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x22cfff7bbf0  @objc CKKnowledgeStore.(null) <stripped>
	0x3920003aa10  @objc CKKnowledgeStore.ãEÿHãpHˇ∆1ˇ∫ <stripped>
WARNING: couldn't find address 0x3aa0cfff800b0 (0x20cfff800b0) in binary!
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
	0x98fff06080  @objc CKKnowledgeStore.œ˙Ì˛ <stripped>
WARNING: couldn't find address 0x2000217ae (0x2000217ae) in binary!
	0xa00000002  @objc CKKnowledgeStore.(null) <stripped>
WARNING: couldn't find address 0xd0000000c (0xd0000000c) in binary!
	0x144ec3  @objc CKKnowledgeStore.(null) <stripped>
	0x144ec2  @objc CKKnowledgeStore.® <stripped>
	0x144eb1  @objc CKKnowledgeStore. <stripped>
	0x144ec0  @objc CKKnowledgeStore.$ <stripped>
	0x435f5f  @objc CKKnowledgeStore.$ <stripped>
	0x57365526e6f  @objc CKKnowledgeStore.œ˙Ì˛ <stripped>
WARNING: couldn't find address 0x706d6f43534e4e00 (0x743534e4e00) in binary!
	0x746c7573  @objc CKKnowledgeStore.(null) <stripped>
	0x0  @objc CKKnowledgeStore.ç=¿" <stripped>

	// Swift methods
	0x79180  func CKKnowledgeStore.delegate.getter // getter 
	0x791c0  func CKKnowledgeStore.delegate.setter // setter 
	0x79210  func CKKnowledgeStore.delegate.modify // modifyCoroutine 
	0x79260  func CKKnowledgeStore.name.getter // getter 
	0x792a0  func CKKnowledgeStore.filePath.getter // getter 
	0x794f0  class func static CKKnowledgeStore.defaultKnowledgeStore() // method 
	0x795a0  class func static CKKnowledgeStore.defaultSynchedKnowledgeStore() // method 
	0x795e0  class func static CKKnowledgeStore.inMemoryKnowledgeStore() // method 
	0x79610  class func static CKKnowledgeStore.userDefaultsKnowledgeStore() // method 
	0x79640  class func static CKKnowledgeStore.knowledgeStore(withName:) // method 
	0x79650  class func static CKKnowledgeStore.synchedKnowledgeStore(withName:) // method 
	0x796b0  class func static CKKnowledgeStore.store(_:) // method 
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
	var handle : Îñ
	let connection : Connection
	var $__lazy_storage_$_columnCount : Int?
	var $__lazy_storage_$_columnNames : [String]?
	var $__lazy_storage_$_row : Cursor

	// Swift methods
	0x7d930  class func Statement.__allocating_init(_:_:) // init 
 }

 struct CoreKnowledge.Cursor {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let handle : Éé // +0x0
	let columnCount : Int // +0x8
 }

 class CoreKnowledge.CKDeviceActivityStore : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let store : CKKnowledgeStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdfec0003a888 (0x7ec0003a888) in binary!
	0xf1dc  @objc CKDeviceActivityStore.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x5b4fff7b080  @objc CKDeviceActivityStore.(null) <stripped>

	// Swift methods
	0x80470  class func CKDeviceActivityStore.__allocating_init(store:) // init 
 }

 class CoreKnowledge.CKAbstractWriteBatch : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var buffer : [String : Any?]
	let backingStore : CKBackingStore

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdbb60003a8d0 (0x3b60003a8d0) in binary!
	0x18000000c  @objc CKAbstractWriteBatch.(null) <stripped>

	// Swift methods
	0x81380  func CKAbstractWriteBatch.buffer.getter // getter 
	0x813b0  func CKAbstractWriteBatch.buffer.setter // setter 
	0x813f0  func CKAbstractWriteBatch.buffer.modify // modifyCoroutine 
	0x81440  class func CKAbstractWriteBatch.__allocating_init(backingStore:) // init 
	0x81510  func CKAbstractWriteBatch.setObject(_:forKey:) // method 
 }

 class CoreKnowledge.CKInMemoryWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdbb20003aa30 (0x3b20003aa30) in binary!
	0xdbb2  @objc CKInMemoryWriteBatch.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x20cfff800b0  @objc CKInMemoryWriteBatch.(null) <stripped>

	// Swift methods
	0x816f0  func CKInMemoryWriteBatch.write(completionHandler:) // method 
	0x817e0  func CKInMemoryWriteBatch.write() // method 
 }

 class CoreKnowledge.CKUserDefaultsWriteBatch : CKAbstractWriteBatch {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdb920003aa10 (0x3920003aa10) in binary!
	0xdb92  @objc CKUserDefaultsWriteBatch.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x56c776f6e4b  @objc CKUserDefaultsWriteBatch.(null) <stripped>

	// Swift methods
	0x85bf0  func CKUserDefaultsWriteBatch.write(completionHandler:) // method 
	0x81e40  func CKUserDefaultsWriteBatch.write() // method 
 }

 class CoreKnowledge.CKSQLWriteBatch : CKAbstractWriteBatch {

	// Properties
	var queue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdc020003aa80 (0x4020003aa80) in binary!
	0xdc02  @objc CKSQLWriteBatch.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7bab0  @objc CKSQLWriteBatch.(null) <stripped>

	// Swift methods
	0x82510  func CKSQLWriteBatch.queue.getter // getter 
	0x82540  func CKSQLWriteBatch.queue.setter // setter 
	0x82580  func CKSQLWriteBatch.queue.modify // modifyCoroutine 
	0x825c0  func CKSQLWriteBatch.write(completionHandler:) // method 
	0x82cd0  func CKSQLWriteBatch.write() // method 
 }

 class CoreKnowledge.CKCloudKitWriteBatch : CKSQLWriteBatch {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xdbca0003aa48 (0x3ca0003aa48) in binary!
	0x28000000c  @objc CKCloudKitWriteBatch.(null) <stripped>
 }

 class CoreKnowledge.CKLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let osLog : OS_os_log

	// Swift methods
	0x87bc0  class func CKLogger.__allocating_init(_:) // init 
	0x87c10  func CKLogger.debug(_:_:) // method 
	0x87c30  func CKLogger.info(_:_:) // method 
	0x87c50  func CKLogger.error(_:_:) // method 
	0x87c70  func CKLogger.fault(_:_:) // method 
	0x87cd0  func CKLogger.log(type:_:_:) // method 
 }
