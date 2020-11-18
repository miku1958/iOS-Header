 protocol SiriIntentEvents.IntentEventLogger // 3 requirements
 {
	// method
	// method
	// method
 }

 class SiriIntentEvents.IntentStart : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let intentType : String // +0x10 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intentData : i // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ƒ // +0xfeedfacf (0x0)

	// Swift methods
	0x12d0  class func IntentStart.__allocating_init(intentType:intent:) // init 
	0x13a0  class func IntentStart.__allocating_init(intentType:intent:timestamp:) // init 
	0x16a0  class func IntentStart.__allocating_init(from:) // init 
	0x1930  func <stripped> // method 
 }

 enum SiriIntentEvents.CodingKeys {

	// Properties
	case intentType  
	case intentData  
	case timestamp  
 }

 class SiriIntentEvents.ConfirmationOffer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let parameterName : String // +0x10 (0x10)
	let intentType : String // +0x20 (0x10)
	let multicardinalIndexValue : Int? // +0x30 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let item : i // +0x40 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ƒ // +0x3 (0x0)

	// Swift methods
	0x24c0  class func ConfirmationOffer.__allocating_init(parameterName:intentType:multicardinalIndexValue:item:timestamp:) // init 
	0x25c0  class func ConfirmationOffer.__allocating_init(parameterName:intentType:multicardinalIndexValue:item:) // init 
	0x2940  class func ConfirmationOffer.__allocating_init(from:) // init 
	0x2c40  func <stripped> // method 
 }

 enum SiriIntentEvents.CodingKeys {

	// Properties
	case parameterName  
	case intentType  
	case multicardinalIndexValue  
	case item  
	case timestamp  
 }

 class SiriIntentEvents.IntentEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let intentId : String // +0x10 (0x10)
	let eventType : IntentEventType // +0x20 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let eventData : i // +0x28 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdAt : ƒ // +0x1d (0x0)

	// Swift methods
	0x3890  class func IntentEvent.__allocating_init(intentId:intentStart:createdAt:) // init 
	0x3990  class func IntentEvent.__allocating_init(intentId:disambiguationOffer:createdAt:) // init 
	0x3aa0  class func IntentEvent.__allocating_init(intentId:disambiguationResult:createdAt:) // init 
	0x3bb0  class func IntentEvent.__allocating_init(intentId:confirmationOffer:createdAt:) // init 
	0x3cc0  class func IntentEvent.__allocating_init(intentId:confirmationResult:createdAt:) // init 
	0x3dd0  class func IntentEvent.__allocating_init(intentId:intentResult:createdAt:) // init 
 }

 enum SiriIntentEvents.IntentEventLoggerError {

	// Properties
	case unexpectedLoggingError : String
 }

 class SiriIntentEvents.DisambiguationOffer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let parameterName : String // +0x10 (0x10)
	let intentType : String // +0x20 (0x10)
	let multicardinalIndexValue : Int? // +0x30 (0x9)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let disambiguationItems : i // +0x40 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ƒ // +0x0 (0x0)

	// Swift methods
	0x4680  class func DisambiguationOffer.__allocating_init(parameterName:intentType:multicardinalIndexValue:disambiguationItems:) // init 
	0x4790  class func DisambiguationOffer.__allocating_init(parameterName:intentType:multicardinalIndexValue:disambiguationItems:timestamp:) // init 
	0x4b30  class func DisambiguationOffer.__allocating_init(from:) // init 
	0x4e30  func <stripped> // method 
 }

 enum SiriIntentEvents.CodingKeys {

	// Properties
	case parameterName  
	case intentType  
	case multicardinalIndexValue  
	case disambiguationItems  
	case timestamp  
 }

 enum SiriIntentEvents.DisambiguationResolution {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case resolved : 5
WARNING: couldn't find address 0x0 (0x0) in binary!
	case partiallyResolved : '
	case notResolved  
 }

 class SiriIntentEvents.DisambiguationResult : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let parameterName : String // +0x10 (0x10)
	let multicardinalIndexValue : Int? // +0x20 (0x9)
	let intentType : String // +0x30 (0x10)
	let resolution : DisambiguationResolution // +0x40 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ƒ // +0x13000 (0x0)

	// Swift methods
	0x62b0  class func DisambiguationResult.__allocating_init(parameterName:intentType:multicardinalIndexValue:resolution:) // init 
	0x6470  class func DisambiguationResult.__allocating_init(parameterName:intentType:multicardinalIndexValue:resolvedValue:) // init 
	0x6570  class func DisambiguationResult.__allocating_init(parameterName:intentType:multicardinalIndexValue:resolution:timestamp:) // init 
	0x6670  class func DisambiguationResult.__allocating_init(parameterName:intentType:multicardinalIndexValue:resolvedValue:timestamp:) // init 
	0x6a00  class func DisambiguationResult.__allocating_init(from:) // init 
	0x6cf0  func <stripped> // method 
 }

 enum SiriIntentEvents.CodingKeys {

	// Properties
	case parameterName  
	case multicardinalIndexValue  
	case intentType  
	case resolution  
	case timestamp  
 }

 enum SiriIntentEvents.DecoderError {

	// Properties
	case invalidValueForType  
 }

 enum SiriIntentEvents.CodingKeys {

	// Properties
	case type  
	case value  
 }

 class SiriIntentEvents.CoreDuetIntentEventLogger : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let store : _DKKnowledgeSaving

	// Swift methods
	0x7f20  class func CoreDuetIntentEventLogger.__allocating_init() // init 
	0x7fc0  func <stripped> // method 
	0x8630  func <stripped> // method 
	0x8a30  func <stripped> // method 
 }

 enum SiriIntentEvents.ConfirmationResolution {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case confirmed : '
	case rejected  
	case cancelled  
	case unset  
 }

 class SiriIntentEvents.ConfirmationResult : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let parameterName : String // +0x10 (0x10)
	let multicardinalIndexValue : Int? // +0x20 (0x9)
	let intentType : String // +0x30 (0x10)
	let resolution : ConfirmationResolution // +0x40 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ƒ // +0x0 (0x0)

	// Swift methods
	0xb3a0  class func ConfirmationResult.__allocating_init(parameterName:intentType:multicardinalIndexValue:resolution:) // init 
	0xb550  class func ConfirmationResult.__allocating_init(parameterName:intentType:multicardinalIndexValue:confirmedValue:) // init 
	0xb650  class func ConfirmationResult.__allocating_init(parameterName:intentType:multicardinalIndexValue:resolution:timestamp:) // init 
	0xb750  class func ConfirmationResult.__allocating_init(parameterName:intentType:multicardinalIndexValue:confirmedValue:timestamp:) // init 
	0xbae0  class func ConfirmationResult.__allocating_init(from:) // init 
	0xbdd0  func <stripped> // method 
 }

 enum SiriIntentEvents.CodingKeys {

	// Properties
	case parameterName  
	case multicardinalIndexValue  
	case intentType  
	case resolution  
	case timestamp  
 }

 enum SiriIntentEvents.DecoderError {

	// Properties
	case invalidValueForType  
 }

 enum SiriIntentEvents.CodingKeys {

	// Properties
	case type  
	case value  
 }

 enum SiriIntentEvents.IntentEventType {

	// Properties
	case intentStart  
	case intentResult  
	case disambiguationOffer  
	case disambiguationResult  
	case confirmationOffer  
	case confirmationResult  
 }

 enum SiriIntentEvents.IntentResultType {

	// Properties
	case completedWithinSiri  
	case userPunchedOutToApp  
	case autoPunchedOutToApp  
	case handedOffToCompanionDevice  
	case failed  
 }

 class SiriIntentEvents.IntentResult : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let intentType : String // +0x10 (0x10)
	let type : IntentResultType // +0x20 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intentData : i // +0x28 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ƒ // +0x13000 (0x0)

	// Swift methods
	0xdd40  class func IntentResult.__allocating_init(intentType:type:intent:) // init 
	0xde10  class func IntentResult.__allocating_init(intentType:type:intent:timestamp:) // init 
	0xe150  class func IntentResult.__allocating_init(from:) // init 
	0xe420  func <stripped> // method 
 }

 enum SiriIntentEvents.CodingKeys {

	// Properties
	case intentType  
	case type  
	case intentData  
	case timestamp  
 }
