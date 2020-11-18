 struct __C._opaque_pthread_mutex_t {

	// Properties
	var __sig : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __opaque : 7
 }

 struct __C._opaque_pthread_t {

	// Properties
	var __sig : Int
	var __cleanup_stack : __darwin_pthread_handler_rec
 }

 struct __C.__darwin_pthread_handler_rec {

	// Properties
	var __routine : @convention(c) (_:)?
	var __arg : UnsafeMutableRawPointer?
	var __next : __darwin_pthread_handler_rec
 }

 class CoreUtilsSwift.PThread : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _threadHandle : _opaque_pthread_t

	// Swift methods
	0x1bf0  class func PThread.__allocating_init(_:) // init 
	0x1df0  class func static PThread.exit() // method 
	0x1e00  func PThread.exit() // method 
	0x1e40  func PThread.detach() // method 
	0x1e90  func PThread.join() // method 
 }

 class CoreUtilsSwift.ClosureWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let closure : ()

	// Swift methods
 }

 class CoreUtilsSwift.PThreadMutex : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var _pthreadMutex : _opaque_pthread_mutex_t

	// Swift methods
	0x1f40  class func PThreadMutex.__allocating_init() // init 
	0x2170  func PThreadMutex.lock() // method 
	0x2190  func PThreadMutex.unlock() // method 
 }

 enum CoreUtilsSwift.PrintUtilsTimeDuration {

	// Properties
	case duration  
 }
