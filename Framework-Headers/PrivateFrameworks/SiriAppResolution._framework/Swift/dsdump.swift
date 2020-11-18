 protocol SiriAppResolution.AppFinding // 2 requirements
 {
	// method
	// method
 }
 protocol SiriAppResolution.AppResolving // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol SiriAppResolution.AppResolutionStateProviding // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol SiriAppResolution.AppSelecting // 1 requirements
 {
	// method
 }
 protocol SiriAppResolution.InstrumentedAppSelecting // 1 requirements
 {
	// method
 }

 enum __C.INSiriAuthorizationStatus { }

 enum SiriAppResolution.AppFinder { }

 class SiriAppResolution.SiriRememberedAppResolver : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x69f0  class func SiriRememberedAppResolver.__allocating_init() // init 
	0x6a20  func SiriRememberedAppResolver.selectAppFor(intent:fromEligibleApps:completion:) // method 
 }

 class SiriAppResolution.AppSelectionService {
 class SiriAppResolution.EligibleAppFinder {
 class SiriAppResolution.InstrumentedAppResolutionService {
 enum SiriAppResolution.Logger { }

 enum SiriAppResolution.Log { }

 enum SiriAppResolution.LogConst { }

 enum SiriAppResolution.Category { }

 enum SiriAppResolution.Signpost { }

 class SiriAppResolution.DefaultAppSelector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let defaultApps : App

	// Swift methods
	0xa540  class func DefaultAppSelector.__allocating_init(defaultAppBundles:) // init 
	0xa5c0  class func DefaultAppSelector.__allocating_init(defaultApps:) // init 
	0xa7e0  func DefaultAppSelector.selectAppFor(intent:fromEligibleApps:completion:) // method 
 }

 enum SiriAppResolution.AppResolutionResult {

	// Properties
	case needsConfirmation : App
	case needsDisambiguation : App
	case selected : App
	case unsuccessful : AppResolutionResultError
 }

 enum SiriAppResolution.AppResolutionResultError {

	// Properties
	case appNotSupported : App
	case noAppFound  
 }

 enum SiriAppResolution.Cardinality {

	// Properties
	case one : A
	case many : [A]
	case zero  
 }

 class SiriAppResolution.App : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appIdentifier : String?
	let pluginIdentifier : String?
	let systemExtensionBundleId : String?
	let systemUIExtensionBundleId : String?

	// Swift methods
	0xdcd0  func App.debugDescription.getter // getter 
	0xded0  func App.hash(into:) // method 
	0xe000  class func App.__allocating_init(appIdentifier:systemExtensionBundleId:systemUIExtensionBundleId:pluginIdentifier:) // init 
	0xe130  func App.hashValue.getter // getter 
 }

 enum SiriAppResolution.InstrumentedResult {

	// Properties
	case inferred : AppResolutionResult
	case defaulted : AppResolutionResult
	case userRequested : AppResolutionResult
	case userChanged : AppResolutionResult
	case failed : AppSelectionFailure
 }

 enum SiriAppResolution.AppResolutionConfirmation {

	// Properties
	case cancelled  
	case confirmed  
	case rejected  
 }

 struct SiriAppResolution.AppResolutionStateProvider: AppResolutionStateProviding {

	// Properties
	let requestedApp : App // +0x0
	let suggestedApp : App // +0x8
	let confirmationResponse : AppResolutionConfirmation // +0x10
	let correctionResponse : AppResolutionConfirmation // +0x11
 }

 enum SiriAppResolution.AppSelectionResponse {

	// Properties
	case unset  
	case rejectedAppConfirmation  
	case confirmedAppConfirmation  
	case requestedAppCorrection  
 }

 class SiriAppResolution.AppResolutionService {
 enum SiriAppResolution.AppSelectionFailure {

	// Properties
	case noAppSelected  
 }

 class SiriAppResolution.AppResolutionEventSending : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var eventHandler : AppResolutionResult

	// Swift methods
 }
