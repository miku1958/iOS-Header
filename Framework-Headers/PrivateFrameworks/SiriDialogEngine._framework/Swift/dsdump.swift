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
	0x2420  class func <stripped> // getter 
	0x2440  class func <stripped> // getter 
	0x24e0  func <stripped> // getter 
	0x2520  func <stripped> // setter 
	0x2560  func <stripped> // modifyCoroutine 
	0x2340  class func DialogLocation.__allocating_init(builder:) // init 
	0x2610  func <stripped> // method 
	0x2790  func <stripped> // getter 
	0x76c0  func <stripped> // getter 
	0x79b0  class func DialogLocation.__allocating_init(from:) // init 
	0x7c10  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var values : DialogLocationValue

	// Swift methods
	0x2150  func <stripped> // getter 
	0x2180  func <stripped> // setter 
	0x21c0  func <stripped> // modifyCoroutine 
	0x21f0  class func DialogLocation.Builder.__allocating_init() // init 
	0x2280  func <stripped> // method 
	0x22d0  func <stripped> // method 
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
	0xbd20  class func <stripped> // getter 
	0xbd50  class func <stripped> // getter 
	0xbdf0  func <stripped> // getter 
	0xbe30  func <stripped> // setter 
	0xbe70  func <stripped> // modifyCoroutine 
	0xbba0  class func SirikitDeviceState.__allocating_init(builder:) // init 
	0xc180  func <stripped> // method 
	0xcb00  func <stripped> // getter 
	0xcb30  func <stripped> // getter 
	0xcb60  func <stripped> // getter 
	0xcb90  func <stripped> // getter 
	0xcbc0  func <stripped> // getter 
	0xcbf0  func <stripped> // getter 
	0xd1b0  class func SirikitDeviceState.__allocating_init(from:) // init 
	0xda50  func <stripped> // method 
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
	0x8a20  func <stripped> // getter 
	0x8a50  func <stripped> // setter 
	0x8a80  func <stripped> // modifyCoroutine 
	0x8b30  func <stripped> // getter 
	0x8b60  func <stripped> // setter 
	0x8b90  func <stripped> // modifyCoroutine 
	0x8c40  func <stripped> // getter 
	0x8c70  func <stripped> // setter 
	0x8ca0  func <stripped> // modifyCoroutine 
	0x8d50  func <stripped> // getter 
	0x8d80  func <stripped> // setter 
	0x8db0  func <stripped> // modifyCoroutine 
	0x8e60  func <stripped> // getter 
	0x8e90  func <stripped> // setter 
	0x8ec0  func <stripped> // modifyCoroutine 
	0x8f70  func <stripped> // getter 
	0x8fa0  func <stripped> // setter 
	0x8fd0  func <stripped> // modifyCoroutine 
	0x9080  func <stripped> // getter 
	0x90b0  func <stripped> // setter 
	0x90e0  func <stripped> // modifyCoroutine 
	0x9190  func <stripped> // getter 
	0x91c0  func <stripped> // setter 
	0x91f0  func <stripped> // modifyCoroutine 
	0x92a0  func <stripped> // getter 
	0x92d0  func <stripped> // setter 
	0x9300  func <stripped> // modifyCoroutine 
	0x93b0  func <stripped> // getter 
	0x93e0  func <stripped> // setter 
	0x9410  func <stripped> // modifyCoroutine 
	0x94c0  func <stripped> // getter 
	0x94f0  func <stripped> // setter 
	0x9520  func <stripped> // modifyCoroutine 
	0x95d0  func <stripped> // getter 
	0x9600  func <stripped> // setter 
	0x9630  func <stripped> // modifyCoroutine 
	0x96e0  func <stripped> // getter 
	0x9710  func <stripped> // setter 
	0x9740  func <stripped> // modifyCoroutine 
	0x9860  func <stripped> // getter 
	0x98e0  func <stripped> // setter 
	0x9970  func <stripped> // modifyCoroutine 
	0x9a90  func <stripped> // getter 
	0x9ae0  func <stripped> // setter 
	0x9b40  func <stripped> // modifyCoroutine 
	0x9c60  func <stripped> // getter 
	0x9cb0  func <stripped> // setter 
	0x9d10  func <stripped> // modifyCoroutine 
	0x9e60  func <stripped> // getter 
	0x9ec0  func <stripped> // setter 
	0x9f30  func <stripped> // modifyCoroutine 
	0xa080  func <stripped> // getter 
	0xa0e0  func <stripped> // setter 
	0xa150  func <stripped> // modifyCoroutine 
	0xa2b0  func <stripped> // getter 
	0xa310  func <stripped> // setter 
	0xa380  func <stripped> // modifyCoroutine 
	0xa4e0  func <stripped> // getter 
	0xa540  func <stripped> // setter 
	0xa5b0  func <stripped> // modifyCoroutine 
	0xa710  func <stripped> // getter 
	0xa770  func <stripped> // setter 
	0xa7e0  func <stripped> // modifyCoroutine 
	0xa820  class func SirikitDeviceState.Builder.__allocating_init() // init 
	0xabd0  func <stripped> // method 
	0xac10  func <stripped> // method 
	0xac50  func <stripped> // method 
	0xac90  func <stripped> // method 
	0xacd0  func <stripped> // method 
	0xad10  func <stripped> // method 
	0xad50  func <stripped> // method 
	0xad90  func <stripped> // method 
	0xadd0  func <stripped> // method 
	0xae10  func <stripped> // method 
	0xae50  func <stripped> // method 
	0xae90  func <stripped> // method 
	0xaed0  func <stripped> // method 
	0xaf10  func <stripped> // method 
	0xafb0  func <stripped> // method 
	0xb070  func <stripped> // method 
	0xb110  func <stripped> // method 
	0xb1d0  func <stripped> // method 
	0xb270  func <stripped> // method 
	0xb330  func <stripped> // method 
	0xb3f0  func <stripped> // method 
	0xb4d0  func <stripped> // method 
	0xb590  func <stripped> // method 
	0xb670  func <stripped> // method 
	0xb730  func <stripped> // method 
	0xb810  func <stripped> // method 
	0xb8d0  func <stripped> // method 
	0xb9b0  func <stripped> // method 
	0xba70  func <stripped> // method 
	0xbb50  func <stripped> // method 
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
	0x107b0  class func <stripped> // getter 
	0x107e0  class func <stripped> // getter 
	0x10880  func <stripped> // getter 
	0x108c0  func <stripped> // setter 
	0x10900  func <stripped> // modifyCoroutine 
	0x10570  class func DialogPersonHandle.__allocating_init(builder:) // init 
	0x10b20  func <stripped> // method 
	0x10f30  func <stripped> // getter 
	0x10f50  func <stripped> // getter 
	0x10f70  func <stripped> // getter 
	0x10f90  func <stripped> // getter 
	0x10fc0  func <stripped> // getter 
	0x10fe0  func <stripped> // getter 
	0x11000  func <stripped> // getter 
	0x11460  class func DialogPersonHandle.__allocating_init(from:) // init 
	0x11750  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var type : SpeakableString
	var value : SpeakableString
	var label : SpeakableString

	// Swift methods
	0xf9f0  func <stripped> // getter 
	0xfa40  func <stripped> // setter 
	0xfaa0  func <stripped> // modifyCoroutine 
	0xfbc0  func <stripped> // getter 
	0xfc10  func <stripped> // setter 
	0xfc70  func <stripped> // modifyCoroutine 
	0xfd90  func <stripped> // getter 
	0xfde0  func <stripped> // setter 
	0xfe40  func <stripped> // modifyCoroutine 
	0xfe70  class func DialogPersonHandle.Builder.__allocating_init() // init 
	0xfff0  func <stripped> // method 
	0x10090  func <stripped> // method 
	0x10150  func <stripped> // method 
	0x101f0  func <stripped> // method 
	0x102b0  func <stripped> // method 
	0x10350  func <stripped> // method 
	0x10410  func <stripped> // method 
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
	0x15150  class func CATWrapper.__allocating_init(options:globals:) // init 
	0x15230  func <stripped> // method 
	0x15b40  func <stripped> // method 
	0x15f10  func <stripped> // method 
 }

 class SiriDialogEngine.CATWrapperCallback : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let parameters : Q

	// Swift methods
	0x16420  func <stripped> // method 
	0x167b0  func <stripped> // method 
	0x17500  func <stripped> // method 
	0x17800  func <stripped> // method 
 }

 class SiriDialogEngine.SirikitApp : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let appId : SpeakableString
	let localizedAppNames : SirikitLocalizedAppName

	// Swift methods
	0x19ce0  class func <stripped> // getter 
	0x19d00  class func <stripped> // getter 
	0x19da0  func <stripped> // getter 
	0x19de0  func <stripped> // setter 
	0x19e20  func <stripped> // modifyCoroutine 
	0x19b80  class func SirikitApp.__allocating_init(builder:) // init 
	0x19f60  func <stripped> // method 
	0x1a1d0  func <stripped> // getter 
	0x1a1f0  func <stripped> // getter 
	0x1a650  class func SirikitApp.__allocating_init(from:) // init 
	0x1a8e0  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var appId : SpeakableString
	var localizedAppNames : SirikitLocalizedAppName

	// Swift methods
	0x19600  func <stripped> // getter 
	0x19650  func <stripped> // setter 
	0x196b0  func <stripped> // modifyCoroutine 
	0x19770  func <stripped> // getter 
	0x197a0  func <stripped> // setter 
	0x197e0  func <stripped> // modifyCoroutine 
	0x19810  class func SirikitApp.Builder.__allocating_init() // init 
	0x19900  func <stripped> // method 
	0x199a0  func <stripped> // method 
	0x19a60  func <stripped> // method 
	0x19ab0  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case appId  
	case localizedAppNames  
 }

 class SiriDialogEngine.CATVersion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x1b1b0  func <stripped> // method 
	0x1b200  func <stripped> // method 
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
	0x20160  class func <stripped> // getter 
	0x20180  class func <stripped> // getter 
	0x20220  func <stripped> // getter 
	0x20260  func <stripped> // setter 
	0x202a0  func <stripped> // modifyCoroutine 
	0x20010  class func DialogPerson.__allocating_init(builder:) // init 
	0x204b0  func <stripped> // method 
	0x20ba0  func <stripped> // getter 
	0x20bc0  func <stripped> // getter 
	0x20c30  func <stripped> // getter 
	0x20c50  func <stripped> // getter 
	0x20c80  func <stripped> // getter 
	0x21070  class func DialogPerson.__allocating_init(from:) // init 
	0x21770  func <stripped> // method 
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
	0x1e370  func <stripped> // getter 
	0x1e3c0  func <stripped> // setter 
	0x1e420  func <stripped> // modifyCoroutine 
	0x1e540  func <stripped> // getter 
	0x1e590  func <stripped> // setter 
	0x1e5f0  func <stripped> // modifyCoroutine 
	0x1e710  func <stripped> // getter 
	0x1e760  func <stripped> // setter 
	0x1e7c0  func <stripped> // modifyCoroutine 
	0x1e900  func <stripped> // getter 
	0x1e950  func <stripped> // setter 
	0x1e9c0  func <stripped> // modifyCoroutine 
	0x1eb10  func <stripped> // getter 
	0x1eb70  func <stripped> // setter 
	0x1ebe0  func <stripped> // modifyCoroutine 
	0x1ed40  func <stripped> // getter 
	0x1eda0  func <stripped> // setter 
	0x1ee10  func <stripped> // modifyCoroutine 
	0x1eed0  func <stripped> // getter 
	0x1ef00  func <stripped> // setter 
	0x1ef40  func <stripped> // modifyCoroutine 
	0x1f000  func <stripped> // getter 
	0x1f030  func <stripped> // setter 
	0x1f070  func <stripped> // modifyCoroutine 
	0x1f150  func <stripped> // getter 
	0x1f190  func <stripped> // setter 
	0x1f1d0  func <stripped> // modifyCoroutine 
	0x1f290  func <stripped> // getter 
	0x1f2c0  func <stripped> // setter 
	0x1f300  func <stripped> // modifyCoroutine 
	0x1e250  class func DialogPerson.Builder.__allocating_init() // init 
	0x1f550  func <stripped> // method 
	0x1f5f0  func <stripped> // method 
	0x1f6b0  func <stripped> // method 
	0x1f750  func <stripped> // method 
	0x1f810  func <stripped> // method 
	0x1f8b0  func <stripped> // method 
	0x1f970  func <stripped> // method 
	0x1fa20  func <stripped> // method 
	0x1faf0  func <stripped> // method 
	0x1fbb0  func <stripped> // method 
	0x1fc90  func <stripped> // method 
	0x1fd50  func <stripped> // method 
	0x1fe30  func <stripped> // method 
	0x1fe70  func <stripped> // method 
	0x1feb0  func <stripped> // method 
	0x1ff10  func <stripped> // method 
	0x1ff80  func <stripped> // method 
	0x1ffc0  func <stripped> // method 
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
	0x233b0  class func <stripped> // getter 
	0x233e0  class func <stripped> // getter 
	0x23480  func <stripped> // getter 
	0x234c0  func <stripped> // setter 
	0x23500  func <stripped> // modifyCoroutine 
	0x23210  class func SirikitLocalizedAppName.__allocating_init(builder:) // init 
	0x23690  func <stripped> // method 
	0x23bd0  class func SirikitLocalizedAppName.__allocating_init(from:) // init 
	0x23e50  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var locale : SpeakableString
	var appName : SpeakableString

	// Swift methods
	0x22d30  func <stripped> // getter 
	0x22d90  func <stripped> // setter 
	0x22df0  func <stripped> // modifyCoroutine 
	0x22f10  func <stripped> // getter 
	0x22f70  func <stripped> // setter 
	0x22fd0  func <stripped> // modifyCoroutine 
	0x23000  class func SirikitLocalizedAppName.Builder.__allocating_init(locale:appName:) // init 
	0x23130  func <stripped> // method 
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
	0x26ef0  class func <stripped> // getter 
	0x26f20  class func <stripped> // getter 
	0x26fc0  func <stripped> // getter 
	0x27000  func <stripped> // setter 
	0x27040  func <stripped> // modifyCoroutine 
	0x26dd0  class func DialogAbstractMeasurement.__allocating_init(builder:) // init 
	0x27150  func <stripped> // method 
	0x27620  class func DialogAbstractMeasurement.__allocating_init(from:) // init 
	0x27840  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : Double
	var units : SpeakableString

	// Swift methods
	0x26860  func <stripped> // getter 
	0x26890  func <stripped> // setter 
	0x268d0  func <stripped> // modifyCoroutine 
	0x269f0  func <stripped> // getter 
	0x26a40  func <stripped> // setter 
	0x26aa0  func <stripped> // modifyCoroutine 
	0x26ad0  class func DialogAbstractMeasurement.Builder.__allocating_init(value:) // init 
	0x26bd0  func <stripped> // method 
	0x26c70  func <stripped> // method 
	0x26d30  func <stripped> // method 
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
	0x284a0  class func <stripped> // getter 
	0x284c0  class func <stripped> // getter 
	0x28560  func <stripped> // getter 
	0x285a0  func <stripped> // setter 
	0x285e0  func <stripped> // modifyCoroutine 
	0x283c0  class func DialogCalendar.__allocating_init(builder:) // init 
	0x286c0  func <stripped> // method 
	0x28cc0  func <stripped> // getter 
	0x28cf0  func <stripped> // getter 
	0x28d20  func <stripped> // getter 
	0x28d50  func <stripped> // getter 
	0x28d80  func <stripped> // getter 
	0x28db0  func <stripped> // getter 
	0x28dd0  func <stripped> // getter 
	0x28e00  func <stripped> // getter 
	0x28e30  func <stripped> // getter 
	0x28e50  func <stripped> // getter 
	0x28e80  func <stripped> // getter 
	0x28eb0  func <stripped> // getter 
	0x28ee0  func <stripped> // getter 
	0x292c0  class func DialogCalendar.__allocating_init(from:) // init 
	0x294c0  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var secs : Double
	var utcOffsetSecs : Double?

	// Swift methods
	0x28040  func <stripped> // getter 
	0x28070  func <stripped> // setter 
	0x280b0  func <stripped> // modifyCoroutine 
	0x28160  func <stripped> // getter 
	0x28190  func <stripped> // setter 
	0x281d0  func <stripped> // modifyCoroutine 
	0x28200  class func DialogCalendar.Builder.__allocating_init(secs:) // init 
	0x282e0  func <stripped> // method 
	0x28330  func <stripped> // method 
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
	0x2a570  class func <stripped> // getter 
	0x2a5a0  class func <stripped> // getter 
	0x2a640  func <stripped> // getter 
	0x2a680  func <stripped> // setter 
	0x2a6c0  func <stripped> // modifyCoroutine 
	0x2a3c0  class func DialogPhoneNumber.__allocating_init(builder:) // init 
	0x2a850  func <stripped> // method 
	0x2aaa0  func <stripped> // getter 
	0x2aac0  func <stripped> // getter 
	0x2af20  class func DialogPhoneNumber.__allocating_init(from:) // init 
	0x2b1a0  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var value : SpeakableString
	var countryCode : SpeakableString

	// Swift methods
	0x29d90  func <stripped> // getter 
	0x29df0  func <stripped> // setter 
	0x29e50  func <stripped> // modifyCoroutine 
	0x29f70  func <stripped> // getter 
	0x29fc0  func <stripped> // setter 
	0x2a020  func <stripped> // modifyCoroutine 
	0x2a050  class func DialogPhoneNumber.Builder.__allocating_init(value:) // init 
	0x2a170  func <stripped> // method 
	0x2a210  func <stripped> // method 
	0x2a2d0  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case value  
	case countryCode  
 }

 class SiriDialogEngine.DialogUser : DialogPerson {
	// Swift methods
	0x2bc70  func <stripped> // getter 
	0x2bca0  func <stripped> // getter 
 }

 class SiriDialogEngine.Builder : DialogPerson.Builder { }

 class SiriDialogEngine.DialogCurrency : DialogAbstractMeasurement {
	// Swift methods
	0x2c290  func <stripped> // getter 
	0x2c2b0  func <stripped> // getter 
 }

 class SiriDialogEngine.Builder : DialogAbstractMeasurement.Builder { }

 class SiriDialogEngine.DialogDuration : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let secs : Double

	// Swift methods
	0x2c790  class func <stripped> // getter 
	0x2c7b0  class func <stripped> // getter 
	0x2c850  func <stripped> // getter 
	0x2c890  func <stripped> // setter 
	0x2c8d0  func <stripped> // modifyCoroutine 
	0x2c6d0  class func DialogDuration.__allocating_init(builder:) // init 
	0x2c980  func <stripped> // method 
	0x2cd30  func <stripped> // getter 
	0x2cd50  func <stripped> // getter 
	0x2cd70  func <stripped> // getter 
	0x2cd90  func <stripped> // getter 
	0x2cdb0  func <stripped> // getter 
	0x2cdd0  func <stripped> // getter 
	0x2ce00  func <stripped> // getter 
	0x2ce30  func <stripped> // getter 
	0x2ce50  func <stripped> // getter 
	0x2d100  class func DialogDuration.__allocating_init(from:) // init 
	0x2d3d0  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var secs : Double

	// Swift methods
	0x2c530  func <stripped> // getter 
	0x2c560  func <stripped> // setter 
	0x2c5a0  func <stripped> // modifyCoroutine 
	0x2c5d0  class func DialogDuration.Builder.__allocating_init(secs:) // init 
	0x2c660  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case secs  
 }

 enum SiriDialogEngine.PhonemeDataParser { }

 class SiriDialogEngine.CATGlobals : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let siriLocale : gI
	let siriVoiceGender : String
	let isMultiUserEnabled : Bool
	let requiresUserGrounding : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let randomSeed : …M
	let currentTime : Int
	let globalParameters : [String : Any]?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5ec700011308 (0x6c700011308) in binary!
	0x5ec3  @objc CATGlobals.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2dcffff5580  @objc CATGlobals.(null) <stripped>

	// Swift methods
	0x2e560  class func CATGlobals.__allocating_init(builder:) // init 
	0x2ee70  func <stripped> // getter 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var siriLocale : gI // +0x0 (0x0)
	var siriVoiceGender : String // +0x0 (0x10)
	var isMultiUserEnabled : Bool // +0x0 (0x1)
	var requiresUserGrounding : Bool // +0x0 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var randomSeed : …M // +0x0 (0x4)
	var currentTime : Int // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var device : √I // +0x0 (0x28)

	// Swift methods
	0x2e090  class func CATGlobals.Builder.__allocating_init(siriLocale:) // init 
	0x2e3c0  func <stripped> // method 
	0x2e400  func <stripped> // method 
	0x2e420  func <stripped> // method 
	0x2e460  func <stripped> // method 
	0x2e480  func <stripped> // method 
	0x2e4a0  func <stripped> // method 
	0x2e510  func <stripped> // method 
 }

 class SiriDialogEngine.DialogPercent : DialogAbstractMeasurement {
	// Swift methods
	0x31650  func <stripped> // getter 
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
	0x360f0  class func <stripped> // getter 
	0x36120  class func <stripped> // getter 
	0x361c0  func <stripped> // getter 
	0x36200  func <stripped> // setter 
	0x36240  func <stripped> // modifyCoroutine 
	0x35f10  class func DialogLocationAddress.__allocating_init(builder:) // init 
	0x36540  func <stripped> // method 
	0x36fa0  class func DialogLocationAddress.__allocating_init(from:) // init 
	0x37800  func <stripped> // method 
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
	0x334e0  func <stripped> // getter 
	0x33530  func <stripped> // setter 
	0x33590  func <stripped> // modifyCoroutine 
	0x336b0  func <stripped> // getter 
	0x33700  func <stripped> // setter 
	0x33760  func <stripped> // modifyCoroutine 
	0x33880  func <stripped> // getter 
	0x338d0  func <stripped> // setter 
	0x33930  func <stripped> // modifyCoroutine 
	0x33a70  func <stripped> // getter 
	0x33ac0  func <stripped> // setter 
	0x33b30  func <stripped> // modifyCoroutine 
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
	0x349a0  func <stripped> // getter 
	0x34a00  func <stripped> // setter 
	0x34a70  func <stripped> // modifyCoroutine 
	0x34ab0  class func DialogLocationAddress.Builder.__allocating_init() // init 
	0x34dc0  func <stripped> // method 
	0x34e60  func <stripped> // method 
	0x34f20  func <stripped> // method 
	0x34fc0  func <stripped> // method 
	0x35080  func <stripped> // method 
	0x35120  func <stripped> // method 
	0x351e0  func <stripped> // method 
	0x35290  func <stripped> // method 
	0x35360  func <stripped> // method 
	0x35420  func <stripped> // method 
	0x35500  func <stripped> // method 
	0x355c0  func <stripped> // method 
	0x356a0  func <stripped> // method 
	0x35760  func <stripped> // method 
	0x35840  func <stripped> // method 
	0x35900  func <stripped> // method 
	0x359e0  func <stripped> // method 
	0x35aa0  func <stripped> // method 
	0x35b80  func <stripped> // method 
	0x35c40  func <stripped> // method 
	0x35d20  func <stripped> // method 
	0x35de0  func <stripped> // method 
	0x35ec0  func <stripped> // method 
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
	0x3cee0  func <stripped> // getter 
	0x3cf00  func <stripped> // getter 
	0x3cf20  func <stripped> // getter 
 }

 class SiriDialogEngine.Builder : DialogAbstractMeasurement.Builder { }

 class SiriDialogEngine.CATCallbackParams : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var params : NSDictionary?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x61fe000112d8 (0x1fe000112d8) in binary!
	0x5e9b  @objc CATCallbackParams.(null) <stripped>
WARNING: couldn't find address 0x5e97000112c8 (0x697000112c8) in binary!
	0x25029232840  @objc CATCallbackParams.(null) <stripped>
WARNING: couldn't find address 0x697269533a4d4152 (0x1533a4d4152) in binary!
	0x20656e6967  @objc CATCallbackParams.(null) <stripped>

	// Swift methods
	0x3d130  class func CATCallbackParams.__allocating_init(fromParams:) // init 
 }

 class SiriDialogEngine.DialogLocationValue : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var mockGlobals : CATGlobals
	let address : DialogLocationAddress

	// Swift methods
	0x3eef0  class func <stripped> // getter 
	0x3ef20  class func <stripped> // getter 
	0x3efc0  func <stripped> // getter 
	0x3f000  func <stripped> // setter 
	0x3f040  func <stripped> // modifyCoroutine 
	0x3ee10  class func DialogLocationValue.__allocating_init(builder:) // init 
	0x3f0f0  func <stripped> // method 
	0x3f3e0  class func DialogLocationValue.__allocating_init(from:) // init 
	0x3f5c0  func <stripped> // method 
 }

 class SiriDialogEngine.Builder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var address : DialogLocationAddress

	// Swift methods
	0x3ebd0  func <stripped> // getter 
	0x3ec00  func <stripped> // setter 
	0x3ec40  func <stripped> // modifyCoroutine 
	0x3ec70  class func DialogLocationValue.Builder.__allocating_init() // init 
	0x3ecf0  func <stripped> // method 
	0x3ed40  func <stripped> // method 
	0x3eda0  func <stripped> // method 
 }

 enum SiriDialogEngine.CodingKeys {

	// Properties
	case address  
 }

 struct SiriDialogEngine.PhonemeData {

	// Properties
	let phonemeInformation : PhonemeDataLocaleEntry // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let nameChecksum : ÁJ // +0x8
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
