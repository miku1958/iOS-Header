 protocol SiriAppResolution.AppResolving // 2 requirements
 {
	// class associated type access function
	// method
 }
 protocol SiriAppResolution.AppResolutionStateProviding // 3 requirements
 {
	// method
	// method
	// method
 }

 enum SiriAppResolution.AppFinder { }

 enum SiriAppResolution.Log { }

 enum SiriAppResolution.LogConst { }

 enum SiriAppResolution.Category { }

 enum SiriAppResolution.Signpost { }

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

 class SiriAppResolution.App : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let appIdentifier : String? // +0x10 (0x10)
	let pluginIdentifier : String? // +0x20 (0x10)
	let systemExtensionBundleId : String? // +0x30 (0x10)
	let systemUIExtensionBundleId : String? // +0x40 (0x10)

	// Swift methods
	0x6700  func App.debugDescription.getter // getter 
	0x6950  func App.hash(into:) // method 
	0x6a80  class func App.__allocating_init(appIdentifier:systemExtensionBundleId:systemUIExtensionBundleId:pluginIdentifier:) // init 
	0x6bf0  func App.hashValue.getter // getter 
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
 }

 class SiriAppResolution.AppResolutionService {
