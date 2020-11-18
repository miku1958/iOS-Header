 protocol SPShared.BinaryDecodable // 1 requirements
 {
	// class init
 }
 protocol SPShared.BinaryDecoding // 1 requirements
 {
	// method
 }
 protocol SPShared.BinaryDecodingContaining // 5 requirements
 {
	// getter
	// method
	// method
	// method
	// method
 }
 protocol SPShared.BinaryEncodable // 1 requirements
 {
	// method
 }
 protocol SPShared.BinaryEncoding // 1 requirements
 {
	// method
 }
 protocol SPShared.BinaryEncodingContaining // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol SPShared.PromiseProtocol // 4 requirements
 {
	// class associated type access function
	// method
	// method
	// method
 }
 protocol SPShared.Subscribable // 5 requirements
 {
	// class associated type access function
	// getter
	// setter
	// modify coroutine
	// method
 }
 protocol SPShared.DataRepresentable // 2 requirements
 {
	// getter
	// class init
 }
 protocol SPShared.Cancellable // 1 requirements
 {
	// method
 }
 protocol SPShared.SchedulerProtocol // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol SPShared.Entitlement // 1 requirements
 {
	// class base protocol
 }

 enum SPShared.NetworkReachabilityStatus {

	// Properties
	case notReachable  
	case reachableViaWiFi  
	case reachableViaWWAN  
 }

 class SPShared.NetworkReachability : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var reachability : SCNetworkReachability

	// Swift methods
	0x4360  func <stripped> // getter 
	0x4540  class func NetworkReachability.__allocating_init() // init 
 }

 enum SPShared.BinaryDecodingError {

	// Properties
	case decodingError  
	case insufficientData  
 }

 class SPShared.UserDefaultsObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let defaults : NSUserDefaults
	let monitoredKeys : [String]
	var notify : (_:)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x448c0000e670 (0x48c0000e670) in binary!
	0x3738  @objc UserDefaultsObserver.(null) <stripped>
WARNING: couldn't find address 0x446c0000e648 (0x46c0000e648) in binary!
	0x4468  @objc UserDefaultsObserver.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x61cffffc828  @objc UserDefaultsObserver.(null) <stripped>
	0xffffc900  @objc UserDefaultsObserver.É=9Â <stripped>

	// Swift methods
	0x5c30  class func UserDefaultsObserver.__allocating_init(keys:defaults:notificationBlock:) // init 
	0x5eb0  func <stripped> // method 
	0x5f90  func <stripped> // method 
 }

 enum SPShared.BinaryEncodingError {

	// Properties
	case encodingError  
 }

 enum SPShared.FutureError {

	// Properties
	case cancelled  
 }

 class SPShared.Future {
 class SPShared.Promise {
 class SPShared.KeyedThrottle {
 class SPShared.DispatchTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let nanosecondsPerSecond : Double
	let queue : OS_dispatch_queue
	let deadline : Int
	let repeating : Int
	let leeway : Int
	let source : OS_dispatch_source_timer
	let block : ()

	// Swift methods
	0xad60  func <stripped> // getter 
	0xad90  class func DispatchTimer.__allocating_init(queue:deadline:repeating:leeway:block:) // init 
	0xae50  func <stripped> // method 
	0xae80  func <stripped> // method 
 }

 struct SPShared.BinaryEncoder { }

 class SPShared.BinaryDataEncoderStorage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data : 9J

	// Swift methods
 }

 struct SPShared._BinaryEncoder {

	// Properties
	var storage : BinaryDataEncoderStorage // +0x0
 }

 struct SPShared.BinaryEncodingContainer {

	// Properties
	let encoder : _BinaryEncoder // +0x0
 }

 class SPShared.DarwinNotificationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let publisher : ≥J
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationPublisher : ªJ

	// Swift methods
	0xc3c0  func <stripped> // method 
 }

 enum SPShared.Relativity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rightRelative : ∑I
WARNING: couldn't find address 0x0 (0x0) in binary!
	case leftRelative : ∑I
WARNING: couldn't find address 0x0 (0x0) in binary!
	case absolute : ∑I
 }

 enum SPShared.ExtendedAttributeError {

	// Properties
	case failed : (result: Int)
 }

 struct SPShared.MachServiceName {

	// Properties
	let name : String // +0x0
 }

 struct SPShared.XPCServiceDescription {

	// Properties
	let machServiceName : MachServiceName // +0x0
	let options : Options // +0x10
	let exportedObject : NSObject? // +0x18
	let exportedInterface : NSXPCInterface? // +0x20
	let remoteObjectInterface : NSXPCInterface? // +0x28
	let shouldAccept : (_:)? // +0x30
	let interruptionHandler : (_:)? // +0x40
	let invalidationHandler : (_:)? // +0x50
 }

 struct SPShared.SystemVersionNumber {

	// Properties
	let rawValue : String // +0x0
	let baseNumber : Int // +0x10
	let baseLetter : Character // +0x18
	let buildNumber : Int // +0x28
	let suffix : Character? // +0x30
 }

 enum SPShared.PrivilegeDropper { }

 enum SPShared.User {

	// Properties
	case mobile  
	case root  
 }

 enum SPShared.UserPrivilegeError {

	// Properties
	case errorSettingGID  
	case errorSettingInitGroups  
	case errorSettingUID  
	case cannotDropPriviledges  
 }

 struct SPShared.FileCombiner { }

 enum SPShared.FileCombinerError {

	// Properties
	case couldNotCreateOutputStream  
 }

 struct SPShared.Subscription {

	// Properties
	let subscriber : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : K
	let unsubscribeBlock : Subscription
 }

 enum SPShared.CryptoError {

	// Properties
	case parameterError  
	case bufferToSmall  
	case memoryFailure  
	case alignmentError  
	case decodeError  
	case unimplemented  
	case overflow  
	case rngFailure  
	case unspecifiedError  
	case callSequenceError  
	case keySizeError  
	case invalidKey  
	case encodeError  
 }

 enum SPShared.HmacAlgorithm {

	// Properties
	case sha1  
	case md5  
	case sha224  
	case sha256  
	case sha384  
	case sha512  
 }

 enum SPShared.HashAlgorithm {

	// Properties
	case sha256  
 }

 enum SPShared.FileHandleHashError {

	// Properties
	case unsupported  
 }

 struct SPShared.EncryptedData {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let initializationVector : 9J // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tag : 9J // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cipherText : 9J // +0x20
 }

 class SPShared.XPCSession {
 enum SPShared.DataError {

	// Properties
	case invalidRangeForType  
 }

 class SPShared.BufferedData : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var buffer : 9J
	var cursor : Int

	// Swift methods
	0x27280  class func BufferedData.__allocating_init(data:) // init 
 }

 struct SPShared.BinaryDecoder { }

 class SPShared.BinaryDecodingContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var bufferedData : BufferedData

	// Swift methods
	0x27740  func <stripped> // getter 
	0x277b0  func <stripped> // method 
	0x27a70  func <stripped> // method 
	0x27ba0  func <stripped> // method 
	0x27c20  func <stripped> // method 
 }

 struct SPShared._BinaryDecoder {

	// Properties
	var bufferedData : BufferedData // +0x0
	let innerContainer : BinaryDecodingContainer // +0x8
 }

 enum SPShared.Scheduler { }

 class SPShared.CancellationToken : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Cancellable {

	// Properties
	var _isCanceled : Bool
	var _cancellationBlocks : [()]
	let accessQueue : OS_dispatch_queue

	// Swift methods
	0x28860  func <stripped> // method 
	0x28a10  func <stripped> // getter 
 }

 class SPShared._ImmediateScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
 }

 class SPShared._MainThreadScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
	0x28df0  func <stripped> // method 
	0x28fa0  func <stripped> // method 
 }

 class SPShared._QueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : OS_dispatch_queue

	// Swift methods
	0x295c0  func <stripped> // method 
	0x29780  func <stripped> // method 
	0x29990  func <stripped> // method 
 }

 class SPShared._OperationQueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : NSOperationQueue

	// Swift methods
	0x29c90  func <stripped> // method 
	0x29dc0  func <stripped> // method 
 }

 enum SPShared.Endianess {

	// Properties
	case unknown  
	case little  
	case big  
 }

 enum SPShared.LegacyResult {

	// Properties
	case success : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failure : ±T
 }

 class SPShared.Lock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let osLock : os_unfair_lock_s

	// Swift methods
	0x2b980  class func Lock.__allocating_init() // init 
 }

 class SPShared.DarwinNotificationHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let notificationHandlers : CFString
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscription : ÎE

	// Swift methods
	0x2bcc0  class func DarwinNotificationHelper.__allocating_init(notificationHandlers:) // init 
	0x2c3b0  func <stripped> // method 
 }

 enum SPShared.DispatchUtilities { }

 class SPShared.PerformanceCapture : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let flag : String // +0x10 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let start : E // +0x0 (0x0)
	var duration : Double // +0x19 (0x8)

	// Swift methods
	0x2f350  func <stripped> // getter 
	0x2f380  class func PerformanceCapture.__allocating_init(flag:) // init 
	0x2f4d0  func <stripped> // method 
 }

 class SPShared.XPCSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : String
	let serialQueue : OS_dispatch_queue
	var $__lazy_storage_$_listenerTrampoline : _XPCListenerDelegateTrampoline
	var listeners : MachServiceName

	// Swift methods
	0x2f810  func <stripped> // getter 
	0x2f900  class func XPCSessionManager.__allocating_init(name:) // init 
	0x2f980  func <stripped> // method 
 }

 class SPShared._XPCListenerDelegateTrampoline : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessionManager : XPCSessionManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x443e0000e5e0 (0x43e0000e5e0) in binary!
	0x4440  @objc _XPCListenerDelegateTrampoline.(null) <stripped>
WARNING: couldn't find address 0x443c0000e5d0 (0x43c0000e5d0) in binary!
	0x0  @objc _XPCListenerDelegateTrampoline.(null) <stripped>
WARNING: couldn't find address 0x1 (0x1) in binary!
	0x2  @objc _XPCListenerDelegateTrampoline.(null) <stripped>

	// Swift methods
 }

 struct SPShared.ListenerRecord {

	// Properties
	let service : XPCServiceDescription // +0x0
	let listener : NSXPCListener // +0x60
 }

 enum SPShared.Bit {

	// Properties
	case zero  
	case one  
 }

 class __C.CFString {
 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 class __C.SCNetworkReachability {
 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : £T
 }

 struct __C.NSKeyValueChangeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.sockaddr {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_len : ∑T
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_family : ∑T
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_data : CT
 }

 struct __C.sockaddr_in {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_len : ∑T
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_family : ∑T
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_port : —T
	var sin_addr : in_addr
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_zero : UT
 }

 struct __C.DirectoryEnumerationOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.FileAttributeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.in_addr {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var s_addr : £T
 }
