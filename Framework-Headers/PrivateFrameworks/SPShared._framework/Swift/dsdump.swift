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
	0x4210  func <stripped> // getter 
	0x43f0  class func NetworkReachability.__allocating_init() // init 
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
WARNING: couldn't find address 0x4ddc0000f8f0 (0x5dc0000f8f0) in binary!
	0x3f78  @objc UserDefaultsObserver.(null) <stripped>
WARNING: couldn't find address 0x4dbc0000f8c8 (0x5bc0000f8c8) in binary!
	0x4db8  @objc UserDefaultsObserver.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x9cffffc2f8  @objc UserDefaultsObserver.(null) <stripped>
	0xffffc3d0  @objc UserDefaultsObserver.H��1�1��8 <stripped>

	// Swift methods
	0x5ae0  class func UserDefaultsObserver.__allocating_init(keys:defaults:notificationBlock:) // init 
	0x5d60  func <stripped> // method 
	0x5e40  func <stripped> // method 
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
	0xac10  func <stripped> // getter 
	0xac40  class func DispatchTimer.__allocating_init(queue:deadline:repeating:leeway:block:) // init 
	0xad00  func <stripped> // method 
	0xad30  func <stripped> // method 
 }

 struct SPShared.BinaryEncoder { }

 class SPShared.BinaryDataEncoderStorage : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var data : qS

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
	let publisher : T
WARNING: couldn't find address 0x0 (0x0) in binary!
	let notificationPublisher : T

	// Swift methods
	0xc270  func <stripped> // method 
 }

 enum SPShared.Relativity {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rightRelative : �R
WARNING: couldn't find address 0x0 (0x0) in binary!
	case leftRelative : �R
WARNING: couldn't find address 0x0 (0x0) in binary!
	case absolute : �R
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
	let identifier : ?T
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
	let initializationVector : qS // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tag : qS // +0x10
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cipherText : qS // +0x20
 }

 enum SPShared.UTAlertContextMode {

	// Properties
	case itemFollowingYou  
	case itemDetectedWithYou  
 }

 struct SPShared.UTAlertContext {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : �P
	let mode : UTAlertContextMode
	let roleId : Int?
	let roleEmoji : String?
	let title : String?
	let subtitle : String?
	let latitude : Double?
	let longitude : Double?
 }

 enum SPShared.CodingKeys {

	// Properties
	case uuid  
	case mode  
	case roleId  
	case roleEmoji  
	case title  
	case subtitle  
	case latitude  
	case longitude  
 }

 struct SPShared.MACAddress {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let data : qS // +0x0
 }

 class SPShared.XPCSession {
 enum SPShared.DataError {

	// Properties
	case invalidRangeForType  
	case invalidRangeOutsideDataBoundary  
 }

 class SPShared.BufferedData : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var buffer : qS
	var cursor : Int

	// Swift methods
	0x2b150  class func BufferedData.__allocating_init(data:) // init 
 }

 struct SPShared.BinaryDecoder { }

 class SPShared.BinaryDecodingContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var bufferedData : BufferedData

	// Swift methods
	0x2b610  func <stripped> // getter 
	0x2b680  func <stripped> // method 
	0x2b940  func <stripped> // method 
	0x2ba70  func <stripped> // method 
	0x2baf0  func <stripped> // method 
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
	0x2c730  func <stripped> // method 
	0x2c8e0  func <stripped> // getter 
 }

 class SPShared._ImmediateScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
 }

 class SPShared._MainThreadScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {
	// Swift methods
	0x2ccc0  func <stripped> // method 
	0x2ce70  func <stripped> // method 
 }

 class SPShared._QueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : OS_dispatch_queue

	// Swift methods
	0x2d490  func <stripped> // method 
	0x2d650  func <stripped> // method 
	0x2d860  func <stripped> // method 
 }

 class SPShared._OperationQueueScheduler : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SchedulerProtocol {

	// Properties
	let queue : NSOperationQueue

	// Swift methods
	0x2db60  func <stripped> // method 
	0x2dc90  func <stripped> // method 
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
	case failure : ^
 }

 class SPShared.Lock : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let osLock : os_unfair_lock_s

	// Swift methods
	0x2f980  class func Lock.__allocating_init() // init 
 }

 enum SPShared.UTAlertCommand {

	// Properties
	case followingAllowToday  
	case followingAllowIndefinitely  
	case playSound  
	case followingLearnMore  
	case lostDetectedSeeOwnerMessage  
	case lostDetectedLearnMore  
	case followingPlaySound  
 }

 class SPShared.DarwinNotificationHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let notificationHandlers : CFString
WARNING: couldn't find address 0x0 (0x0) in binary!
	var subscription : YN

	// Swift methods
	0x31390  class func DarwinNotificationHelper.__allocating_init(notificationHandlers:) // init 
	0x31a80  func <stripped> // method 
 }

 class SPShared.LocalizationUtility : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum SPShared.DispatchUtilities { }

 class SPShared.PerformanceCapture : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let flag : String // +0x10 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let start : kM // +0x0 (0x0)
	var duration : Double // +0x19 (0x8)

	// Swift methods
	0x34ba0  func <stripped> // getter 
	0x34bd0  class func PerformanceCapture.__allocating_init(flag:) // init 
	0x34d20  func <stripped> // method 
 }

 class SPShared.XPCSessionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let name : String
	let serialQueue : OS_dispatch_queue
	var $__lazy_storage_$_listenerTrampoline : _XPCListenerDelegateTrampoline
	var listeners : MachServiceName

	// Swift methods
	0x35060  func <stripped> // getter 
	0x35150  class func XPCSessionManager.__allocating_init(name:) // init 
	0x351d0  func <stripped> // method 
 }

 class SPShared._XPCListenerDelegateTrampoline : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var sessionManager : XPCSessionManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x4d8e0000f860 (0x58e0000f860) in binary!
	0x4d90  @objc _XPCListenerDelegateTrampoline.(null) <stripped>
WARNING: couldn't find address 0x4d8c0000f850 (0x58c0000f850) in binary!
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
	var _os_unfair_lock_opaque : ^
 }

 struct __C.NSKeyValueChangeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.sockaddr {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_len : ^
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_family : ^
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sa_data : �]
 }

 struct __C.sockaddr_in {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_len : ^
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_family : ^
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_port : 1^
	var sin_addr : in_addr
WARNING: couldn't find address 0x0 (0x0) in binary!
	var sin_zero : �]
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
	var s_addr : ^
 }
