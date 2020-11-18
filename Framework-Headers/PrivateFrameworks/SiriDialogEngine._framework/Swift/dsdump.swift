 protocol SiriDialogEngine.CatCallable // 0 requirements
 {
 }
 protocol SiriDialogEngine.CATComputable // 2 requirements
 {
	// class base protocol
	// method
 }
 protocol SiriDialogEngine.CATType // 9 requirements
 {
	// class base protocol
	// class base protocol
	// getter
	// class getter
	// class getter
	// getter
	// setter
	// modify coroutine
	// method
 }

 class SiriDialogEngine.DialogLocation : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let values : DialogLocationValue

	// Swift methods
	0x29a0  class func <stripped> // getter 
	0x29c0  class func <stripped> // getter 
	0x2a60  func <stripped> // getter 
	0x2aa0  func <stripped> // setter 
	0x2ae0  func <stripped> // modifyCoroutine 
	0x28c0  class func DialogLocation.__allocating_init(builder:) // init 
	0x2b90  func <stripped> // method 
	0x2d10  func <stripped> // getter 
	0x7c40  func <stripped> // getter 
	0x7f30  class func DialogLocation.__allocating_init(from:) // init 
	0x8180  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var values : DialogLocationValue

	// Swift methods
	0x26d0  func <stripped> // getter 
	0x2700  func <stripped> // setter 
	0x2740  func <stripped> // modifyCoroutine 
	0x2770  class func DialogLocation.Builder.__allocating_init() // init 
	0x2800  func <stripped> // method 
	0x2850  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case values  
 }

 class SiriDialogEngine.SirikitDeviceState : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let isHomePod : Bool
	let isWatch : Bool
	let isMac : Bool
	let isAppleTV : Bool
	let isPhone : Bool
	let isPad : Bool
	let isCarPlay : Bool
	let isCarDnD : Bool
	let isTextToSpeechEnabled : Bool
	let isLockedWithPasscode : Bool
	let isEyesFree : Bool
	let isVoiceTriggerEnabled : Bool
	let isVOX : Bool
	let interactionType : SpeakableString
	let inputOrigin : SpeakableString
	let multiUserState : SpeakableString
	let voiceGender : SpeakableString
	let userAssignedDeviceName : SpeakableString
	let deviceName : SpeakableString
	let companionName : SpeakableString
	let siriLocale : SpeakableString

	// Swift methods
	0xc240  class func <stripped> // getter 
	0xc270  class func <stripped> // getter 
	0xc310  func <stripped> // getter 
	0xc350  func <stripped> // setter 
	0xc390  func <stripped> // modifyCoroutine 
	0xc0c0  class func SirikitDeviceState.__allocating_init(builder:) // init 
	0xc6a0  func <stripped> // method 
	0xd030  func <stripped> // getter 
	0xd060  func <stripped> // getter 
	0xd090  func <stripped> // getter 
	0xd0c0  func <stripped> // getter 
	0xd0f0  func <stripped> // getter 
	0xd120  func <stripped> // getter 
	0xd6e0  class func SirikitDeviceState.__allocating_init(from:) // init 
	0xdf80  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var isHomePod : Bool
	var isWatch : Bool
	var isMac : Bool
	var isAppleTV : Bool
	var isPhone : Bool
	var isPad : Bool
	var isCarPlay : Bool
	var isCarDnD : Bool
	var isTextToSpeechEnabled : Bool
	var isLockedWithPasscode : Bool
	var isEyesFree : Bool
	var isVoiceTriggerEnabled : Bool
	var isVOX : Bool
	var interactionType : SpeakableString
	var inputOrigin : SpeakableString
	var multiUserState : SpeakableString
	var voiceGender : SpeakableString
	var userAssignedDeviceName : SpeakableString
	var deviceName : SpeakableString
	var companionName : SpeakableString
	var siriLocale : SpeakableString

	// Swift methods
	0x8f40  func <stripped> // getter 
	0x8f70  func <stripped> // setter 
	0x8fa0  func <stripped> // modifyCoroutine 
	0x9050  func <stripped> // getter 
	0x9080  func <stripped> // setter 
	0x90b0  func <stripped> // modifyCoroutine 
	0x9160  func <stripped> // getter 
	0x9190  func <stripped> // setter 
	0x91c0  func <stripped> // modifyCoroutine 
	0x9270  func <stripped> // getter 
	0x92a0  func <stripped> // setter 
	0x92d0  func <stripped> // modifyCoroutine 
	0x9380  func <stripped> // getter 
	0x93b0  func <stripped> // setter 
	0x93e0  func <stripped> // modifyCoroutine 
	0x9490  func <stripped> // getter 
	0x94c0  func <stripped> // setter 
	0x94f0  func <stripped> // modifyCoroutine 
	0x95a0  func <stripped> // getter 
	0x95d0  func <stripped> // setter 
	0x9600  func <stripped> // modifyCoroutine 
	0x96b0  func <stripped> // getter 
	0x96e0  func <stripped> // setter 
	0x9710  func <stripped> // modifyCoroutine 
	0x97c0  func <stripped> // getter 
	0x97f0  func <stripped> // setter 
	0x9820  func <stripped> // modifyCoroutine 
	0x98d0  func <stripped> // getter 
	0x9900  func <stripped> // setter 
	0x9930  func <stripped> // modifyCoroutine 
	0x99e0  func <stripped> // getter 
	0x9a10  func <stripped> // setter 
	0x9a40  func <stripped> // modifyCoroutine 
	0x9af0  func <stripped> // getter 
	0x9b20  func <stripped> // setter 
	0x9b50  func <stripped> // modifyCoroutine 
	0x9c00  func <stripped> // getter 
	0x9c30  func <stripped> // setter 
	0x9c60  func <stripped> // modifyCoroutine 
	0x9d80  func <stripped> // getter 
	0x9e00  func <stripped> // setter 
	0x9e90  func <stripped> // modifyCoroutine 
	0x9fb0  func <stripped> // getter 
	0xa000  func <stripped> // setter 
	0xa060  func <stripped> // modifyCoroutine 
	0xa180  func <stripped> // getter 
	0xa1d0  func <stripped> // setter 
	0xa230  func <stripped> // modifyCoroutine 
	0xa380  func <stripped> // getter 
	0xa3e0  func <stripped> // setter 
	0xa450  func <stripped> // modifyCoroutine 
	0xa5a0  func <stripped> // getter 
	0xa600  func <stripped> // setter 
	0xa670  func <stripped> // modifyCoroutine 
	0xa7d0  func <stripped> // getter 
	0xa830  func <stripped> // setter 
	0xa8a0  func <stripped> // modifyCoroutine 
	0xaa00  func <stripped> // getter 
	0xaa60  func <stripped> // setter 
	0xaad0  func <stripped> // modifyCoroutine 
	0xac30  func <stripped> // getter 
	0xac90  func <stripped> // setter 
	0xad00  func <stripped> // modifyCoroutine 
	0xad40  class func SirikitDeviceState.Builder.__allocating_init() // init 
	0xb0f0  func <stripped> // method 
	0xb130  func <stripped> // method 
	0xb170  func <stripped> // method 
	0xb1b0  func <stripped> // method 
	0xb1f0  func <stripped> // method 
	0xb230  func <stripped> // method 
	0xb270  func <stripped> // method 
	0xb2b0  func <stripped> // method 
	0xb2f0  func <stripped> // method 
	0xb330  func <stripped> // method 
	0xb370  func <stripped> // method 
	0xb3b0  func <stripped> // method 
	0xb3f0  func <stripped> // method 
	0xb430  func <stripped> // method 
	0xb4d0  func <stripped> // method 
	0xb590  func <stripped> // method 
	0xb630  func <stripped> // method 
	0xb6f0  func <stripped> // method 
	0xb790  func <stripped> // method 
	0xb850  func <stripped> // method 
	0xb910  func <stripped> // method 
	0xb9f0  func <stripped> // method 
	0xbab0  func <stripped> // method 
	0xbb90  func <stripped> // method 
	0xbc50  func <stripped> // method 
	0xbd30  func <stripped> // method 
	0xbdf0  func <stripped> // method 
	0xbed0  func <stripped> // method 
	0xbf90  func <stripped> // method 
	0xc070  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case isHomePod  
	case isWatch  
	case isMac  
	case isAppleTV  
	case isPhone  
	case isPad  
	case isCarPlay  
	case isCarDnD  
	case isTextToSpeechEnabled  
	case isLockedWithPasscode  
	case isEyesFree  
	case isVoiceTriggerEnabled  
	case isVOX  
	case interactionType  
	case inputOrigin  
	case multiUserState  
	case voiceGender  
	case userAssignedDeviceName  
	case deviceName  
	case companionName  
	case siriLocale  
 }

 class SiriDialogEngine.DialogPersonHandle : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let type : SpeakableString
	let value : SpeakableString
	let label : SpeakableString

	// Swift methods
	0x10cd0  class func <stripped> // getter 
	0x10d00  class func <stripped> // getter 
	0x10da0  func <stripped> // getter 
	0x10de0  func <stripped> // setter 
	0x10e20  func <stripped> // modifyCoroutine 
	0x10a90  class func DialogPersonHandle.__allocating_init(builder:) // init 
	0x11040  func <stripped> // method 
	0x11450  func <stripped> // getter 
	0x11470  func <stripped> // getter 
	0x11490  func <stripped> // getter 
	0x114b0  func <stripped> // getter 
	0x114e0  func <stripped> // getter 
	0x11500  func <stripped> // getter 
	0x11520  func <stripped> // getter 
	0x11980  class func DialogPersonHandle.__allocating_init(from:) // init 
	0x11c70  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var type : SpeakableString
	var value : SpeakableString
	var label : SpeakableString

	// Swift methods
	0xff10  func <stripped> // getter 
	0xff60  func <stripped> // setter 
	0xffc0  func <stripped> // modifyCoroutine 
	0x100e0  func <stripped> // getter 
	0x10130  func <stripped> // setter 
	0x10190  func <stripped> // modifyCoroutine 
	0x102b0  func <stripped> // getter 
	0x10300  func <stripped> // setter 
	0x10360  func <stripped> // modifyCoroutine 
	0x10390  class func DialogPersonHandle.Builder.__allocating_init() // init 
	0x10510  func <stripped> // method 
	0x105b0  func <stripped> // method 
	0x10670  func <stripped> // method 
	0x10710  func <stripped> // method 
	0x107d0  func <stripped> // method 
	0x10870  func <stripped> // method 
	0x10930  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case type  
	case value  
	case label  
 }

 class SiriDialogEngine.CATResultProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriDialogEngine.CATWrapper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let bundle : NSBundle
	let options : CATOption
	let mockGlobals : CATGlobals

	// Swift methods
	0x15060  class func CATWrapper.__allocating_init(options:globals:) // init 
	0x15140  func <stripped> // method 
	0x15a50  func <stripped> // method 
	0x15e20  func <stripped> // method 
 }

 class SiriDialogEngine.CATWrapperCallback : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let parameters : ßU

	// Swift methods
	0x16330  func <stripped> // method 
	0x166c0  func <stripped> // method 
	0x17410  func <stripped> // method 
	0x17710  func <stripped> // method 
 }

 class SiriDialogEngine.SirikitApp : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let appId : SpeakableString
	let localizedAppNames : SirikitLocalizedAppName

	// Swift methods
	0x19b10  class func <stripped> // getter 
	0x19b30  class func <stripped> // getter 
	0x19bd0  func <stripped> // getter 
	0x19c10  func <stripped> // setter 
	0x19c50  func <stripped> // modifyCoroutine 
	0x199b0  class func SirikitApp.__allocating_init(builder:) // init 
	0x19d90  func <stripped> // method 
	0x1a000  func <stripped> // getter 
	0x1a020  func <stripped> // getter 
	0x1a480  class func SirikitApp.__allocating_init(from:) // init 
	0x1a710  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var appId : SpeakableString
	var localizedAppNames : SirikitLocalizedAppName

	// Swift methods
	0x19430  func <stripped> // getter 
	0x19480  func <stripped> // setter 
	0x194e0  func <stripped> // modifyCoroutine 
	0x195a0  func <stripped> // getter 
	0x195d0  func <stripped> // setter 
	0x19610  func <stripped> // modifyCoroutine 
	0x19640  class func SirikitApp.Builder.__allocating_init() // init 
	0x19730  func <stripped> // method 
	0x197d0  func <stripped> // method 
	0x19890  func <stripped> // method 
	0x198e0  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case appId  
	case localizedAppNames  
 }

 class SiriDialogEngine.CATVersion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x1afe0  func <stripped> // method 
	0x1b030  func <stripped> // method 
 }

 class SiriDialogEngine.CATTester : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriDialogEngine.DialogPerson : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let givenName : SpeakableString
	let middleName : SpeakableString
	let familyName : SpeakableString
	let nickname : SpeakableString
	let fullNameFromInput : SpeakableString
	let company : SpeakableString
	let useConversationalName : Bool
	let related : Bool
	let personHandle : DialogPersonHandle
	let friendlyPhoneNumberName : Bool

	// Swift methods
	0x1ff70  class func <stripped> // getter 
	0x1ff90  class func <stripped> // getter 
	0x20030  func <stripped> // getter 
	0x20070  func <stripped> // setter 
	0x200b0  func <stripped> // modifyCoroutine 
	0x1fe20  class func DialogPerson.__allocating_init(builder:) // init 
	0x202c0  func <stripped> // method 
	0x209b0  func <stripped> // getter 
	0x209d0  func <stripped> // getter 
	0x20a40  func <stripped> // getter 
	0x20a60  func <stripped> // getter 
	0x20a90  func <stripped> // getter 
	0x20e80  class func DialogPerson.__allocating_init(from:) // init 
	0x21580  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var givenName : SpeakableString
	var middleName : SpeakableString
	var familyName : SpeakableString
	var nickname : SpeakableString
	var fullName : SpeakableString
	var company : SpeakableString
	var useConversationalName : Bool
	var related : Bool
	var personHandle : DialogPersonHandle
	var friendlyPhoneNumberName : Bool

	// Swift methods
	0x1e180  func <stripped> // getter 
	0x1e1d0  func <stripped> // setter 
	0x1e230  func <stripped> // modifyCoroutine 
	0x1e350  func <stripped> // getter 
	0x1e3a0  func <stripped> // setter 
	0x1e400  func <stripped> // modifyCoroutine 
	0x1e520  func <stripped> // getter 
	0x1e570  func <stripped> // setter 
	0x1e5d0  func <stripped> // modifyCoroutine 
	0x1e710  func <stripped> // getter 
	0x1e760  func <stripped> // setter 
	0x1e7d0  func <stripped> // modifyCoroutine 
	0x1e920  func <stripped> // getter 
	0x1e980  func <stripped> // setter 
	0x1e9f0  func <stripped> // modifyCoroutine 
	0x1eb50  func <stripped> // getter 
	0x1ebb0  func <stripped> // setter 
	0x1ec20  func <stripped> // modifyCoroutine 
	0x1ece0  func <stripped> // getter 
	0x1ed10  func <stripped> // setter 
	0x1ed50  func <stripped> // modifyCoroutine 
	0x1ee10  func <stripped> // getter 
	0x1ee40  func <stripped> // setter 
	0x1ee80  func <stripped> // modifyCoroutine 
	0x1ef60  func <stripped> // getter 
	0x1efa0  func <stripped> // setter 
	0x1efe0  func <stripped> // modifyCoroutine 
	0x1f0a0  func <stripped> // getter 
	0x1f0d0  func <stripped> // setter 
	0x1f110  func <stripped> // modifyCoroutine 
	0x1e060  class func DialogPerson.Builder.__allocating_init() // init 
	0x1f360  func <stripped> // method 
	0x1f400  func <stripped> // method 
	0x1f4c0  func <stripped> // method 
	0x1f560  func <stripped> // method 
	0x1f620  func <stripped> // method 
	0x1f6c0  func <stripped> // method 
	0x1f780  func <stripped> // method 
	0x1f830  func <stripped> // method 
	0x1f900  func <stripped> // method 
	0x1f9c0  func <stripped> // method 
	0x1faa0  func <stripped> // method 
	0x1fb60  func <stripped> // method 
	0x1fc40  func <stripped> // method 
	0x1fc80  func <stripped> // method 
	0x1fcc0  func <stripped> // method 
	0x1fd20  func <stripped> // method 
	0x1fd90  func <stripped> // method 
	0x1fdd0  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case givenName  
	case middleName  
	case familyName  
	case nickname  
	case fullNameFromInput  
	case company  
	case useConversationalName  
	case related  
	case personHandle  
	case friendlyPhoneNumberName  
 }

 class SiriDialogEngine.SirikitLocalizedAppName : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let locale : SpeakableString
	let appName : SpeakableString

	// Swift methods
	0x231c0  class func <stripped> // getter 
	0x231f0  class func <stripped> // getter 
	0x23290  func <stripped> // getter 
	0x232d0  func <stripped> // setter 
	0x23310  func <stripped> // modifyCoroutine 
	0x23020  class func SirikitLocalizedAppName.__allocating_init(builder:) // init 
	0x234a0  func <stripped> // method 
	0x239e0  class func SirikitLocalizedAppName.__allocating_init(from:) // init 
	0x23c60  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var locale : SpeakableString
	var appName : SpeakableString

	// Swift methods
	0x22b40  func <stripped> // getter 
	0x22ba0  func <stripped> // setter 
	0x22c00  func <stripped> // modifyCoroutine 
	0x22d20  func <stripped> // getter 
	0x22d80  func <stripped> // setter 
	0x22de0  func <stripped> // modifyCoroutine 
	0x22e10  class func SirikitLocalizedAppName.Builder.__allocating_init(locale:appName:) // init 
	0x22f40  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case locale  
	case appName  
 }

 class SiriDialogEngine.CATEvaluator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriDialogEngine.CATExecutor : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class SiriDialogEngine.DialogAbstractMeasurement : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let value : Double
	let units : SpeakableString

	// Swift methods
	0x26ce0  class func <stripped> // getter 
	0x26d10  class func <stripped> // getter 
	0x26db0  func <stripped> // getter 
	0x26df0  func <stripped> // setter 
	0x26e30  func <stripped> // modifyCoroutine 
	0x26bc0  class func DialogAbstractMeasurement.__allocating_init(builder:) // init 
	0x26f40  func <stripped> // method 
	0x27410  class func DialogAbstractMeasurement.__allocating_init(from:) // init 
	0x27630  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : Double
	var units : SpeakableString

	// Swift methods
	0x26650  func <stripped> // getter 
	0x26680  func <stripped> // setter 
	0x266c0  func <stripped> // modifyCoroutine 
	0x267e0  func <stripped> // getter 
	0x26830  func <stripped> // setter 
	0x26890  func <stripped> // modifyCoroutine 
	0x268c0  class func DialogAbstractMeasurement.Builder.__allocating_init(value:) // init 
	0x269c0  func <stripped> // method 
	0x26a60  func <stripped> // method 
	0x26b20  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case value  
	case units  
 }

 class SiriDialogEngine.DialogCalendar : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let secs : Double
	let utcOffsetSecs : Double?

	// Swift methods
	0x28290  class func <stripped> // getter 
	0x282b0  class func <stripped> // getter 
	0x28350  func <stripped> // getter 
	0x28390  func <stripped> // setter 
	0x283d0  func <stripped> // modifyCoroutine 
	0x281b0  class func DialogCalendar.__allocating_init(builder:) // init 
	0x284b0  func <stripped> // method 
	0x28ab0  func <stripped> // getter 
	0x28ae0  func <stripped> // getter 
	0x28b10  func <stripped> // getter 
	0x28b40  func <stripped> // getter 
	0x28b70  func <stripped> // getter 
	0x28ba0  func <stripped> // getter 
	0x28bc0  func <stripped> // getter 
	0x28bf0  func <stripped> // getter 
	0x28c20  func <stripped> // getter 
	0x28c40  func <stripped> // getter 
	0x28c70  func <stripped> // getter 
	0x28ca0  func <stripped> // getter 
	0x28cd0  func <stripped> // getter 
	0x290b0  class func DialogCalendar.__allocating_init(from:) // init 
	0x292b0  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var secs : Double
	var utcOffsetSecs : Double?

	// Swift methods
	0x27e30  func <stripped> // getter 
	0x27e60  func <stripped> // setter 
	0x27ea0  func <stripped> // modifyCoroutine 
	0x27f50  func <stripped> // getter 
	0x27f80  func <stripped> // setter 
	0x27fc0  func <stripped> // modifyCoroutine 
	0x27ff0  class func DialogCalendar.Builder.__allocating_init(secs:) // init 
	0x280d0  func <stripped> // method 
	0x28120  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case secs  
	case utcOffsetSecs  
 }

 class SiriDialogEngine.DialogPhoneNumber : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let value : SpeakableString
	let countryCode : SpeakableString

	// Swift methods
	0x2a360  class func <stripped> // getter 
	0x2a390  class func <stripped> // getter 
	0x2a430  func <stripped> // getter 
	0x2a470  func <stripped> // setter 
	0x2a4b0  func <stripped> // modifyCoroutine 
	0x2a1b0  class func DialogPhoneNumber.__allocating_init(builder:) // init 
	0x2a640  func <stripped> // method 
	0x2a890  func <stripped> // getter 
	0x2a8b0  func <stripped> // getter 
	0x2ad10  class func DialogPhoneNumber.__allocating_init(from:) // init 
	0x2af90  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : SpeakableString
	var countryCode : SpeakableString

	// Swift methods
	0x29b80  func <stripped> // getter 
	0x29be0  func <stripped> // setter 
	0x29c40  func <stripped> // modifyCoroutine 
	0x29d60  func <stripped> // getter 
	0x29db0  func <stripped> // setter 
	0x29e10  func <stripped> // modifyCoroutine 
	0x29e40  class func DialogPhoneNumber.Builder.__allocating_init(value:) // init 
	0x29f60  func <stripped> // method 
	0x2a000  func <stripped> // method 
	0x2a0c0  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case value  
	case countryCode  
 }

 class SiriDialogEngine.DialogUser : DialogPerson {
	// Swift methods
	0x2ba60  func <stripped> // getter 
	0x2ba90  func <stripped> // getter 
 }

 class SiriDialogEngine.Builder : DialogPerson.Builder { }

 class SiriDialogEngine.DialogCurrency : DialogAbstractMeasurement {
	// Swift methods
	0x2c080  func <stripped> // getter 
	0x2c0a0  func <stripped> // getter 
 }

 class SiriDialogEngine.Builder : DialogAbstractMeasurement.Builder { }

 class SiriDialogEngine.DialogDuration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let secs : Double

	// Swift methods
	0x2c580  class func <stripped> // getter 
	0x2c5a0  class func <stripped> // getter 
	0x2c640  func <stripped> // getter 
	0x2c680  func <stripped> // setter 
	0x2c6c0  func <stripped> // modifyCoroutine 
	0x2c4c0  class func DialogDuration.__allocating_init(builder:) // init 
	0x2c770  func <stripped> // method 
	0x2cb20  func <stripped> // getter 
	0x2cb40  func <stripped> // getter 
	0x2cb60  func <stripped> // getter 
	0x2cb80  func <stripped> // getter 
	0x2cba0  func <stripped> // getter 
	0x2cbc0  func <stripped> // getter 
	0x2cbf0  func <stripped> // getter 
	0x2cc20  func <stripped> // getter 
	0x2cc40  func <stripped> // getter 
	0x2cef0  class func DialogDuration.__allocating_init(from:) // init 
	0x2d1c0  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var secs : Double

	// Swift methods
	0x2c320  func <stripped> // getter 
	0x2c350  func <stripped> // setter 
	0x2c390  func <stripped> // modifyCoroutine 
	0x2c3c0  class func DialogDuration.Builder.__allocating_init(secs:) // init 
	0x2c450  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case secs  
 }

 enum SiriDialogEngine.PhonemeDataParser { }

 class SiriDialogEngine.CATGlobals : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriLocale : N
	let siriVoiceGender : String
	let isMultiUserEnabled : Bool
	let requiresUserGrounding : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let randomSeed : aR
	let currentTime : Int
	let globalParameters : [String : Any]?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5ecf000117b0 (0x6cf000117b0) in binary!
	0x5ecb  @objc CATGlobals.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x784ffff5648  @objc CATGlobals.(null) <stripped>

	// Swift methods
	0x2e350  class func CATGlobals.__allocating_init(builder:) // init 
	0x2ec60  func <stripped> // getter 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var siriLocale : N // +0x0 (0x0)
	var siriVoiceGender : String // +0x0 (0x10)
	var isMultiUserEnabled : Bool // +0x0 (0x1)
	var requiresUserGrounding : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var randomSeed : aR // +0x0 (0x4)
	var currentTime : Int // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var device : kN // +0x0 (0x28)

	// Swift methods
	0x2de80  class func CATGlobals.Builder.__allocating_init(siriLocale:) // init 
	0x2e1b0  func <stripped> // method 
	0x2e1f0  func <stripped> // method 
	0x2e210  func <stripped> // method 
	0x2e250  func <stripped> // method 
	0x2e270  func <stripped> // method 
	0x2e290  func <stripped> // method 
	0x2e300  func <stripped> // method 
 }

 class SiriDialogEngine.DialogPercent : DialogAbstractMeasurement {
	// Swift methods
	0x31420  func <stripped> // getter 
 }

 class SiriDialogEngine.Builder : DialogAbstractMeasurement.Builder { }

 class SiriDialogEngine.DialogLocationAddress : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let name : SpeakableString
	let country : SpeakableString
	let countryCode : SpeakableString
	let administrativeArea : SpeakableString
	let administrativeAreaCode : SpeakableString
	let subAdministrativeArea : SpeakableString
	let locality : SpeakableString
	let postCode : SpeakableString
	let thoroughfare : SpeakableString
	let subThoroughfare : SpeakableString
	let fullThoroughfare : SpeakableString

	// Swift methods
	0x35ec0  class func <stripped> // getter 
	0x35ef0  class func <stripped> // getter 
	0x35f90  func <stripped> // getter 
	0x35fd0  func <stripped> // setter 
	0x36010  func <stripped> // modifyCoroutine 
	0x35ce0  class func DialogLocationAddress.__allocating_init(builder:) // init 
	0x36310  func <stripped> // method 
	0x36d70  class func DialogLocationAddress.__allocating_init(from:) // init 
	0x375d0  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var name : SpeakableString
	var country : SpeakableString
	var countryCode : SpeakableString
	var administrativeArea : SpeakableString
	var administrativeAreaCode : SpeakableString
	var subAdministrativeArea : SpeakableString
	var locality : SpeakableString
	var postCode : SpeakableString
	var thoroughfare : SpeakableString
	var subThoroughfare : SpeakableString
	var fullThoroughfare : SpeakableString

	// Swift methods
	0x332b0  func <stripped> // getter 
	0x33300  func <stripped> // setter 
	0x33360  func <stripped> // modifyCoroutine 
	0x33480  func <stripped> // getter 
	0x334d0  func <stripped> // setter 
	0x33530  func <stripped> // modifyCoroutine 
	0x33650  func <stripped> // getter 
	0x336a0  func <stripped> // setter 
	0x33700  func <stripped> // modifyCoroutine 
	0x33840  func <stripped> // getter 
	0x33890  func <stripped> // setter 
	0x33900  func <stripped> // modifyCoroutine 
	0x33a50  func <stripped> // getter 
	0x33ab0  func <stripped> // setter 
	0x33b20  func <stripped> // modifyCoroutine 
	0x33c80  func <stripped> // getter 
	0x33ce0  func <stripped> // setter 
	0x33d50  func <stripped> // modifyCoroutine 
	0x33eb0  func <stripped> // getter 
	0x33f10  func <stripped> // setter 
	0x33f80  func <stripped> // modifyCoroutine 
	0x340e0  func <stripped> // getter 
	0x34140  func <stripped> // setter 
	0x341b0  func <stripped> // modifyCoroutine 
	0x34310  func <stripped> // getter 
	0x34370  func <stripped> // setter 
	0x343e0  func <stripped> // modifyCoroutine 
	0x34540  func <stripped> // getter 
	0x345a0  func <stripped> // setter 
	0x34610  func <stripped> // modifyCoroutine 
	0x34770  func <stripped> // getter 
	0x347d0  func <stripped> // setter 
	0x34840  func <stripped> // modifyCoroutine 
	0x34880  class func DialogLocationAddress.Builder.__allocating_init() // init 
	0x34b90  func <stripped> // method 
	0x34c30  func <stripped> // method 
	0x34cf0  func <stripped> // method 
	0x34d90  func <stripped> // method 
	0x34e50  func <stripped> // method 
	0x34ef0  func <stripped> // method 
	0x34fb0  func <stripped> // method 
	0x35060  func <stripped> // method 
	0x35130  func <stripped> // method 
	0x351f0  func <stripped> // method 
	0x352d0  func <stripped> // method 
	0x35390  func <stripped> // method 
	0x35470  func <stripped> // method 
	0x35530  func <stripped> // method 
	0x35610  func <stripped> // method 
	0x356d0  func <stripped> // method 
	0x357b0  func <stripped> // method 
	0x35870  func <stripped> // method 
	0x35950  func <stripped> // method 
	0x35a10  func <stripped> // method 
	0x35af0  func <stripped> // method 
	0x35bb0  func <stripped> // method 
	0x35c90  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case name  
	case country  
	case countryCode  
	case administrativeArea  
	case administrativeAreaCode  
	case subAdministrativeArea  
	case locality  
	case postCode  
	case thoroughfare  
	case subThoroughfare  
	case fullThoroughfare  
 }

 enum SiriDialogEngine.CATValidatorStatus {

	// Properties
	case Valid  
	case Invalid  
	case Warnings  
	case Error  
 }

 struct SiriDialogEngine.CATValidatorEntry {

	// Properties
	var text : String // +0x0
	var formattedText : String // +0x10
	var lineNumber : Int // +0x20
	var filename : String // +0x28
 }

 struct SiriDialogEngine.CATValidatorResult {

	// Properties
	var status : CATValidatorStatus // +0x0
	var errors : CATValidatorEntry // +0x8
	var warnings : CATValidatorEntry // +0x10
	var catId : String // +0x18
	var locale : String // +0x28
 }

 class SiriDialogEngine.CATValidator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct SiriDialogEngine.CATOption {

	// Properties
	let rawValue : Int // +0x0
 }

 class SiriDialogEngine.DialogTemperature : DialogAbstractMeasurement {
	// Swift methods
	0x3cb00  func <stripped> // getter 
	0x3cb20  func <stripped> // getter 
	0x3cb40  func <stripped> // getter 
 }

 class SiriDialogEngine.Builder : DialogAbstractMeasurement.Builder { }

 class SiriDialogEngine.CATCallbackParams : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var params : NSDictionary?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x620600011780 (0x20600011780) in binary!
	0x5ea3  @objc CATCallbackParams.(null) <stripped>
WARNING: couldn't find address 0x5e9f00011770 (0x69f00011770) in binary!
	0x0  @objc CATCallbackParams.(null) <stripped>
WARNING: couldn't find address 0x474f525029232840 (0x25029232840) in binary!
	0x76f6c616944  @objc CATCallbackParams.(null) <stripped>

	// Swift methods
	0x3cd50  class func CATCallbackParams.__allocating_init(fromParams:) // init 
 }

 class SiriDialogEngine.DialogLocationValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let address : DialogLocationAddress

	// Swift methods
	0x3eae0  class func <stripped> // getter 
	0x3eb10  class func <stripped> // getter 
	0x3ebb0  func <stripped> // getter 
	0x3ebf0  func <stripped> // setter 
	0x3ec30  func <stripped> // modifyCoroutine 
	0x3ea00  class func DialogLocationValue.__allocating_init(builder:) // init 
	0x3ece0  func <stripped> // method 
	0x3efd0  class func DialogLocationValue.__allocating_init(from:) // init 
	0x3f1b0  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var address : DialogLocationAddress

	// Swift methods
	0x3e7c0  func <stripped> // getter 
	0x3e7f0  func <stripped> // setter 
	0x3e830  func <stripped> // modifyCoroutine 
	0x3e860  class func DialogLocationValue.Builder.__allocating_init() // init 
	0x3e8e0  func <stripped> // method 
	0x3e930  func <stripped> // method 
	0x3e990  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case address  
 }

 struct SiriDialogEngine.PhonemeData {

	// Properties
	let phonemeInformation : PhonemeDataLocaleEntry // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let nameChecksum : çO // +0x8
 }

 struct SiriDialogEngine.PhonemeDataLocaleEntry {

	// Properties
	let firstName : TokenPhonemeDataList // +0x0
	let lastName : TokenPhonemeDataList // +0x18
	let nickName : TokenPhonemeDataList // +0x30
 }

 struct SiriDialogEngine.TokenPhonemeDataList {

	// Properties
	let tokenPhonemeDataList : TokenPhonemeData // +0x0
	let value : String // +0x8
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case phonemeInformation  
	case nameChecksum  
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case tokenPhonemeDataList  
	case value  
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case firstName  
	case lastName  
	case nickName  
 }

 struct SiriDialogEngine.TokenPhonemeData {

	// Properties
	let apgId : String? // +0x0
	let ttsData : String? // +0x10
	let tokenOffset : Int? // +0x20
	let orthography : String? // +0x30
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case apgId  
	case ttsData  
	case tokenOffset  
	case orthography  
 }

 struct SiriDialogEngine.SpeakableString {

	// Properties
	let print : String // +0x0
	let speak : String // +0x10
 }

 struct __C.URLResourceKey {

	// Properties
	var _rawValue : NSString
 }
