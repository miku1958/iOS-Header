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
	var reachability : SCNetworkReachability // +0x10 (0x8)

	// Swift methods
	0x4aa0  func NetworkReachability.status.getter // getter 
	0x4c60  class func NetworkReachability.__allocating_init() // init 
 }

 class SPShared.UserDefaultsObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let defaults : NSUserDefaults // +0x8 (0x8)
	let monitoredKeys : [String] // +0x10 (0x8)
	var notify : (_:) // +0x18 (0x10)

	// ObjC -> Swift bridged methods
	0x7620  @objc UserDefaultsObserver.dealloc <stripped>
	0x78f0  @objc UserDefaultsObserver.observeValueForKeyPath:ofObject:change:context: <stripped>
	0x7ac0  @objc UserDefaultsObserver.init <stripped>
	0x7670  @objc UserDefaultsObserver..cxx_destruct <stripped>

	// Swift methods
	0x7430  class func UserDefaultsObserver.__allocating_init(keys:defaults:notificationBlock:) // init 
	0x76c0  func UserDefaultsObserver.start() // method 
	0x77a0  func UserDefaultsObserver.stop() // method 
 }

 enum SPShared.FutureError {

	// Properties
	case cancelled  
 }

 class SPShared.Future {
 class SPShared.Promise {
 class SPShared.DispatchTimer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let nanosecondsPerSecond : Double // +0x10 (0x8)
	let queue : OS_dispatch_queue // +0x18 (0x8)
	let deadline : Int // +0x20 (0x8)
	let repeating : Int // +0x28 (0x8)
	let leeway : Int // +0x30 (0x8)
	let source : OS_dispatch_source_timer // +0x38 (0x8)
	let block : () // +0x40 (0x10)

	// Swift methods
	0xb020  func DispatchTimer.isCancelled.getter // getter 
	0xb050  class func DispatchTimer.__allocating_init(queue:deadline:repeating:leeway:block:) // init 
	0xb110  func DispatchTimer.resume() // method 
	0xb140  func DispatchTimer.cancel() // method 
 }

 class SPShared.DarwinNotificationManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var helpers : DarwinNotificationHelper // +0x10 (0x8)

	// Swift methods
	0xba40  func DarwinNotificationManager.registerHelper(helper:) // method 
	0xbb00  func DarwinNotificationManager.unregisterHelper(helper:) // method 
	0xbce0  func DarwinNotificationManager.setUp() // method 
 }

 enum SPShared.Relativity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rightRelative : CB
WARNING: couldn't find address 0x0 (0x0) in binary!
	case leftRelative : CB
	case absolute  
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
	let baseNumber : Int // +0x0
	let baseLetter : Character // +0x8
	let buildNumber : Int // +0x18
	let suffix : Character? // +0x20
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
	let identifier : C
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
	let initializationVector : ‹@ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tag : ‹@ // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cipherText : ‹@ // +0x20
 }

 class SPShared.XPCSession {
 enum SPShared.Scheduler { }

 class SPShared.CancellationToken : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Cancellable {

	// Properties
	var _isCanceled : Bool
	var _cancellationBlocks : [()]
	let accessQueue : OS_dispatch_queue

	// Swift methods
	0x21720  func <stripped> // method 
	0x218e0  func <stripped> // getter 
 }

 class SPShared._ImmediateScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
 }

 class SPShared._MainThreadScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
	0x21cc0  func <stripped> // method 
	0x21e80  func <stripped> // method 
 }

 class SPShared._QueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : OS_dispatch_queue

	// Swift methods
	0x22520  func <stripped> // method 
	0x226f0  func <stripped> // method 
	0x22900  func <stripped> // method 
 }

 class SPShared._OperationQueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : NSOperationQueue

	// Swift methods
	0x22c00  func <stripped> // method 
	0x22d40  func <stripped> // method 
 }

 enum SPShared.LegacyResult {

	// Properties
	case success : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failure : ¿J
 }

 class SPShared.DarwinNotificationHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var notificationHandlers : CFString // +0x10 (0x8)

	// Swift methods
	0x24320  class func DarwinNotificationHelper.__allocating_init(notificationHandlers:) // init 
	0x24ab0  func DarwinNotificationHelper.onNotification(notificationName:) // method 
 }

 enum SPShared.DispatchUtilities { }

 class SPShared.PerformanceCapture : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let flag : String // +0x10 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let start : ·> // +0x0 (0x0)
	var duration : Double // +0x0 (0x8)

	// Swift methods
	0x26f00  func PerformanceCapture.duration.getter // getter 
	0x26f30  class func PerformanceCapture.__allocating_init(flag:) // init 
	0x27080  func PerformanceCapture.finished() // method 
 }

 class SPShared.XPCSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : String
	let serialQueue : OS_dispatch_queue
	var $__lazy_storage_$_listenerTrampoline : _XPCListenerDelegateTrampoline
	var listeners : MachServiceName

	// Swift methods
	0x276b0  class func XPCSessionManager.__allocating_init(name:) // init 
	0x27730  func XPCSessionManager.register(service:) // method 
 }

 class SPShared._XPCListenerDelegateTrampoline : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessionManager : XPCSessionManager

	// ObjC -> Swift bridged methods
	0x28120  @objc _XPCListenerDelegateTrampoline.listener:shouldAcceptNewConnection: <stripped>
	0x281b0  @objc _XPCListenerDelegateTrampoline.init <stripped>
	0x28210  @objc _XPCListenerDelegateTrampoline..cxx_destruct <stripped>

	// Swift methods
 }

 struct SPShared.ListenerRecord {

	// Properties
	let service : XPCServiceDescription // +0x0
	let listener : NSXPCListener // +0x60
 }

 class __C.CFString {
 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 class __C.SCNetworkReachability {
 struct __C.NSKeyValueChangeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.sockaddr {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_len : ±J
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_family : ±J
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_data : EJ
 }

 struct __C.sockaddr_in {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_len : ±J
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_family : ±J
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_port : ÃJ
	var sin_addr : in_addr
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_zero : WJ
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
	var s_addr : ×I
 }
