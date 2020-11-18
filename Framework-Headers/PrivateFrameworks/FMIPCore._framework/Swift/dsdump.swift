 protocol FMIPCore.FMIPManagerDelegate // 12 requirements
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
 }
 protocol FMIPCore.FMIPEphemeralAuthenticator // 1 requirements
 {
	// method
 }
 protocol FMIPCore.FMIPInteractionControllerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol FMIPCore.FMIPInteractionController // 5 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
	// method
 }
 protocol FMIPCore.FMIPAuthenticationUIProvider // 1 requirements
 {
	// method
 }
 protocol FMIPCore.FMIPDataManagerDelegate // 1 requirements
 {
	// method
 }
 protocol FMIPCore.FMIPGarbageCollectorDelegate // 1 requirements
 {
	// method
 }
 protocol FMIPCore.FMAPSConnectionHandlerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol FMIPCore.FMAPSConnection // 5 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
	// method
 }
 protocol FMIPCore.FMIPManagerSiriDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol FMIPCore.FMIPLocationControllerDelegate // 1 requirements
 {
	// method
 }
 protocol FMIPCore.FMIPRefreshingControllerDelegate // 6 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol FMIPCore.FMIPReverseGeocodingCacheDelegate // 1 requirements
 {
	// method
 }
 protocol FMIPCore.FMIPBeaconRefreshingControllerDelegate // 2 requirements
 {
	// method
	// method
 }

 class FMIPCore.FMIPEphemeralAuthenticationController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let authenticationController : FMIPEphemeralAuthenticator
	let action : FMIPDeviceAction
	let username : String
	let authenticationContext : AKAppleIDAuthenticationContext
	var authenticationResults : [String : Any]?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x60b40002d488 (0xb40002d488) in binary!
	0x60a0  @objc FMIPEphemeralAuthenticationController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffb3598  @objc FMIPEphemeralAuthenticationController.(null) <stripped>

	// Swift methods
 }

 enum FMIPCore.FMIPEphemeralAuthenticationError {

	// Properties
	case emptyAuthenticationResult  
	case emptyDSID  
	case emptyPassword  
 }

 class FMIPCore.FMIPCancelEraseRequest {
 class FMIPCore.FMIPValidatePasswordResponse : FMIPBaseResponse {

	// Properties
	let escrowUUID : String?
	let authToken : String?

	// Swift methods
 }

 enum FMIPCore.ValidatePasswordCodingKeys {

	// Properties
	case escrowUUID  
	case authToken  
 }

 class FMIPCore.FMIPRemoveResponse : FMIPDeviceContainingResponse { }

 struct FMIPCore.FMIPEraseMetadata {

	// Properties
	let status : FMIPActionStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : H
	let phoneNumber : String
	let message : String
	let isTextCustomized : Bool
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case message  
	case phoneNumber  
	case timestamp  
	case statusCode  
	case userText  
 }

 enum FMIPCore.FMIPActionStatus {

	// Properties
	case error  
	case unknown  
	case success  
	case inEarSafetyWarning  
	case pending  
	case notify  
	case eraseCancelled  
	case successPasscodeSet  
	case successPasscodeAlreadySet  
	case successPasscodeSetV2  
	case successFailedToSetPasscode  
	case succeedFailedToSetPasscodeV2  
 }

 class FMIPCore.FMIPDeviceActionsController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let ownerSession : SPOwnerSession
	let interactionController : FMIPInteractionController
	let authenticationUIProvider : FMIPAuthenticationUIProvider
	let mockAuthenticator : FMIPEphemeralAuthenticator
	let pendingCommandFuturesUpdateQueue : OS_dispatch_queue
	var pendingCommandFutures : [FMFuture<SPBeacon>]

	// Swift methods
	0x9de0  func <stripped> // method 
	0x9f80  func <stripped> // method 
	0xa120  func <stripped> // method 
	0xa2c0  func <stripped> // method 
	0xa460  func <stripped> // method 
	0xa980  func <stripped> // method 
	0xc060  func <stripped> // method 
	0xcf10  func <stripped> // method 
 }

 enum FMIPCore.FMIPDeviceActionsControllerError {

	// Properties
	case unknownAction  
	case missingAuthenticationInformation  
	case trustedDeviceVerificationFailed  
	case trustedDeviceConfirmationCallbackMissing  
	case trustedDeviceConfirmationCallbackDeclined  
 }

 struct FMIPCore.FMIPAudioChannel {

	// Properties
	let name : String // +0x0
	let isAvailable : Bool // +0x10
	let isPlaying : Bool // +0x11
	let isMuted : Bool // +0x12
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case name  
	case isPlaying  
	case isAvailable  
	case isMuted  
 }

 class FMIPCore.FMIPVerifyTrustedStateResponse : FMIPBaseResponse {

	// Properties
	let isLastDevice : Bool
	let isTrustedDevice : Bool

	// Swift methods
 }

 enum FMIPCore.FMIPVerifyTrustedStateCodingKeys {

	// Properties
	case isLastDevice  
	case isTrustedDevice  
 }

 class FMIPCore.FMIPInitClientResponse : FMIPBaseResponse {

	// Properties
	let devices : FMIPDevice

	// Swift methods
 }

 struct FMIPCore.FMIPReverseGeocodingRequest {

	// Properties
	let identifier : String // +0x0
	let location : CLLocation // +0x10
 }

 class FMIPCore.FMIPGetURLInfoRequest {
 class FMIPCore.FMIPNotifyAction : FMIPDeviceAction {

	// Properties
	let whenLocationFound : Bool // +0x0 (0x1)

	// Swift methods
	0x12900  class func FMIPNotifyAction.__allocating_init(device:whenLocationFound:) // init 
 }

 class FMIPCore.FMIPDeviceContainingResponse : FMIPBaseResponse {

	// Properties
	let devices : FMIPDevice

	// Swift methods
 }

 class FMIPCore.FMIPBaseRequest {
 class FMIPCore.FMIPPlaySoundDeviceAction : FMIPDeviceAction {

	// Properties
	let channels : FMIPPlaySoundChannels // +0x65745f5f (0x8)
	let safetyWarningConfirmed : Bool // +0x0 (0x1)

	// Swift methods
	0x14de0  class func FMIPPlaySoundDeviceAction.__allocating_init(device:channels:safetyWarningConfirmed:) // init 
 }

 class FMIPCore.FMIPDeviceAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let device : FMIPDevice // +0x0 (0x0)
	var authenticationContext : AKAppleIDAuthenticationContext? // +0x45545f5f (0x8)
	var trustedDeviceConfirmation : (_:_:_:)? // +0x0 (0x10)
	var dsid : String? // +0x1c00 (0x10)
	var username : String? // +0x8dcba (0x10)
	var oneTimeToken : String? // +0x1c00 (0x10)
	var escrowUUID : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var recoverySession : ÅD // +0x80000400 (0x10)

	// Swift methods
	0x151b0  func FMIPDeviceAction.isPasswordRequired.getter // getter 
	0x151c0  func FMIPDeviceAction.authenticationContext.getter // getter 
	0x15200  func FMIPDeviceAction.authenticationContext.setter // setter 
	0x15250  func FMIPDeviceAction.authenticationContext.modify // modifyCoroutine 
	0x152a0  func FMIPDeviceAction.trustedDeviceConfirmation.getter // getter 
	0x152f0  func FMIPDeviceAction.trustedDeviceConfirmation.setter // setter 
	0x15370  func FMIPDeviceAction.trustedDeviceConfirmation.modify // modifyCoroutine 
	0x153b0  func FMIPDeviceAction.isTrustedDeviceVerificationRequired.getter // getter 
	0x153e0  class func FMIPDeviceAction.__allocating_init(device:) // init 
 }

 class FMIPCore.FMIPCancelEraseAction : FMIPDeviceAction { }

 class FMIPCore.FMIPEraseRequest {
 class FMIPCore.FMIPGetURLInfoResponse : FMIPBaseResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : _D // +0x0 (0x0)

	// Swift methods
 }

 enum FMIPCore.FMIPGetURLInfoCodingKeys {

	// Properties
	case url  
 }

 struct FMIPCore.FMIPAddress {

	// Properties
	let label : String? // +0x0
	let formattedAddressLines : [String]? // +0x10
	let country : String? // +0x18
	let countryCode : String? // +0x28
	let streetName : String? // +0x38
	let streetAddress : String? // +0x48
	let locality : String? // +0x58
	let stateCode : String? // +0x68
	let administrativeArea : String? // +0x78
	let mapItemFormattedAddress : String? // +0x88
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case label  
	case formattedAddressLines  
	case country  
	case countryCode  
	case streetName  
	case streetAddress  
	case locality  
	case stateCode  
	case administrativeArea  
	case mapItemFullAddress  
 }

 struct FMIPCore.FMIPLockMetadata {

	// Properties
	let status : FMIPActionStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : H
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case timestamp  
	case statusCode  
 }

 class FMIPCore.FMIPRefreshClientResponse : FMIPBaseResponse {

	// Properties
	let devices : FMIPDevice

	// Swift methods
 }

 class FMIPCore.FMNetworkUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class FMIPCore.FMLocationShiftingRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let location : CLLocation
	let identifier : String

	// Swift methods
	0x1c150  class func FMLocationShiftingRequest.__allocating_init(identifier:location:) // init 
 }

 class FMIPCore.FMLocationShifter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let shifter : GEOLocationShifter
	let shiftingQueue : OS_dispatch_queue
	let processingQueue : OS_dispatch_queue

	// Swift methods
	0x1c200  class func FMLocationShifter.__allocating_init() // init 
	0x1c480  func FMLocationShifter.shift(requests:completion:) // method 
 }

 class FMIPCore.FMIPEraseAction : FMIPDeviceAction {

	// Properties
	let isUserTextEnabled : Bool // +0x8f8ba (0x1)
	let message : String? // +0x75c (0x10)
	let passcode : String? // +0x8f8ba (0x10)
	let phoneNumber : String? // +0x0 (0x10)

	// Swift methods
	0x1f1d0  class func FMIPEraseAction.__allocating_init(device:message:phoneNumber:passcode:) // init 
 }

 class FMIPCore.FMIPDemoDataGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let maximumLocationAge : Double
	let maximumLocatingAge : Double
	let mutabilityFactor : Double

	// Swift methods
 }

 enum FMIPCore.FMIPURLAction {

	// Properties
	case lostMode  
	case playSound  
	case unknown  
	case selectDevice  
	case showActions  
	case showAllDevices  
 }

 class FMIPCore.FMIPURLHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interactionController : FMIPInteractionController

	// Swift methods
	0x22060  func <stripped> // method 
 }

 enum FMIPCore.FMIPURLHandlerError {

	// Properties
	case actionNotSupported  
	case invalidDeviceIdentifier  
	case urlNotSupported  
	case schemeNotSupported  
 }

 class FMIPCore.FMIPManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPManagerDelegate // +0x10 (0x10)
	var siriDelegate : FMIPManagerSiriDelegate // +0x20 (0x10)
	var refreshingController : FMIPRefreshingController // +0x30 (0x8)
	var beaconRefreshingController : FMIPBeaconRefreshingController // +0x38 (0x8)
	var dataManager : FMIPDataManager // +0x40 (0x8)
	let garbageCollector : FMIPGarbageCollector // +0x48 (0x8)
	let locationController : FMIPLocationController // +0x50 (0x8)
	var interactionController : FMIPInteractionController // +0x58 (0x28)
	var actionsController : FMIPDeviceActionsController // +0x80 (0x8)
	let authenticationUIProvider : FMIPAuthenticationUIProvider // +0x88 (0x28)
	var ownerSession : SPOwnerSession // +0xb0 (0x8)
	var ownerInterface : SPOwnerInterface // +0xb8 (0x8)
	let urlHandler : FMIPURLHandler // +0xc0 (0x8)
	var isUpdatingSingleDevices : Bool // +0xc8 (0x1)
	let locationShifter : FMLocationShifter // +0xd0 (0x8)
	let dataQueue : OS_dispatch_queue // +0xd8 (0x8)
	let unknownItemQueue : OS_dispatch_queue // +0xe0 (0x8)
	let delegateQueue : OS_dispatch_queue // +0xe8 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var stopRefreshTimestamp : ÂD // +0x0 (0x0)
	var isRefreshing : Bool // +0x0 (0x1)
	var selectedDevice : FMIPDevice // +0x6 (0x0)
	var isInitialized : Bool // +0x74735f5f (0x1)

	// Swift methods
	0x246e0  func FMIPManager.delegate.getter // getter 
	0x24710  func FMIPManager.delegate.setter // setter 
	0x24770  func FMIPManager.delegate.modify // modifyCoroutine 
	0x24840  func FMIPManager.siriDelegate.getter // getter 
	0x24870  func FMIPManager.siriDelegate.setter // setter 
	0x248c0  func FMIPManager.siriDelegate.modify // modifyCoroutine 
	0x24990  func FMIPManager.devices.getter // getter 
	0x249b0  func FMIPManager.owner.getter // getter 
	0x24a50  func FMIPManager.familyMembers.getter // getter 
	0x24ad0  func FMIPManager.selectedDevice.getter // getter 
	0x24b10  func FMIPManager.selectedDevice.setter // setter 
	0x24c00  func FMIPManager.selectedDevice.modify // modifyCoroutine 
	0x24da0  func FMIPManager.isInitialized.getter // getter 
	0x24dd0  func <stripped> // setter 
	0x24fb0  class func FMIPManager.__allocating_init(authenticationUIProvider:) // init 
	0x25e10  func FMIPManager.initialize() // method 
	0x263f0  func FMIPManager.startRefreshing() // method 
	0x268c0  func FMIPManager.forceStartRefreshing() // method 
	0x26ad0  func FMIPManager.stopRefreshing() // method 
	0x26cd0  func FMIPManager.updateLastActiveTimestamp() // method 
	0x26d10  func FMIPManager.refresh() // method 
	0x26e90  func FMIPManager.refreshBeacons(completion:) // method 
	0x26ed0  func FMIPManager.perform(action:completion:) // method 
	0x27990  func FMIPManager.updateLastLocationStatus(enabled:) // method 
	0x28090  func <stripped> // method 
	0x282a0  func FMIPManager.handle(url:completion:) // method 
	0x28430  func <stripped> // method 
	0x28d80  func <stripped> // method 
	0x299e0  func FMIPManager.debugDescription.getter // getter 
 }

 class FMIPCore.FMDemoManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum FMIPCore.DemoContext {

	// Properties
	case people  
	case devices  
 }

 enum FMIPCore.Error {

	// Properties
	case unableToAccessSharedAppGroup  
 }

 class FMIPCore.FMIPDataManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPDataManagerDelegate
	var isCacheDataValid : Bool
	var devices : FMIPDevice
	var owner : FMIPPerson
	var familyMembers : FMIPPerson
	var crowdSourcedOriginalLocations : FMIPLocation
	var crowdSourcedLocations : FMIPLocation
WARNING: couldn't find address 0x0 (0x0) in binary!
	var crowdSourcedLocating :  empty-list 
	var devicesCache : FMDiskIO
	var familyCache : FMDiskIO
	var ownerCache : FMDiskIO
	let geocodingCache : FMIPReverseGeocodingCache
	let updateQueue : OS_dispatch_queue

	// Swift methods
	0x31f90  func <stripped> // method 
	0x32130  func <stripped> // method 
	0x32320  func <stripped> // method 
	0x32b20  func <stripped> // method 
 }

 class FMIPCore.FMIPDemoDataInjector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dataSource : FMIPDemoDataSource // +0x10 (0x8)
	var hostDevice : FMIPDevice // +0xc54 (0x0)

	// Swift methods
	0x3d6b0  func <stripped> // method 
	0x3d720  func <stripped> // method 
	0x3d740  func <stripped> // method 
	0x3dad0  func <stripped> // method 
 }

 struct FMIPCore.FMIPDemoDeviceTemplate {

	// Properties
	let name : String // +0x0
	let categoryTemplate : FMIPDemoDeviceCategoryTemplate // +0x10
	let location : FMDemoLocation // +0x18
	let owner : String? // +0x68
	let overrides : FMIPDemoDeviceTemplateOverrides // +0x78
	let isOnline : Bool // +0xc8
 }

 struct FMIPCore.FMIPDemoDeviceTemplateOverrides {

	// Properties
	let deviceColor : String? // +0x0
	let rawDeviceModel : String? // +0x10
	let modelDisplayName : String? // +0x20
	let deviceClass : String? // +0x30
	let deviceModel : String? // +0x40
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case deviceColor  
	case rawDeviceModel  
	case modelDisplayName  
	case deviceClass  
	case deviceModel  
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case name  
	case categoryTemplate  
	case location  
	case owner  
	case overrides  
	case isOnline  
 }

 class FMIPCore.FMIPVerifyTrustedStateRequest {
 class FMIPCore.FMIPLockAction : FMIPDeviceAction {

	// Properties
	let isSoundEnabled : Bool // +0x45545f5f (0x1)
	let isUserTextEnabled : Bool // +0x0 (0x1)
	let message : String? // +0x626f5f5f (0x10)
	let passcode : String? // +0x6c687465 (0x10)

	// Swift methods
	0x42060  class func FMIPLockAction.__allocating_init(device:message:passcode:) // init 
 }

 class FMIPCore.FMIPEraseResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPInitClientRequest {
 enum FMIPCore.FMIPLocationType {

	// Properties
	case unknown  
	case crowdsourced  
	case gps  
	case wifi  
	case safeLocation  
	case realtime  
	case pairedLocation  
	case lastConnected  
	case lastConnectionMaintenance  
	case lastDisconnected  
	case nearOwner  
	case nearOwnerWildObservation  
	case peerProxied  
	case selfPublished  
	case localReductiveFilter  
	case cached  
	case intentResponse  
	case intentLocationUpdate  
 }

 struct FMIPCore.FMIPLocation {

	// Properties
	let isOld : Bool // +0x0
	let isInaccurate : Bool // +0x1
	let isLocationFinished : Bool // +0x2
	let locationType : FMIPLocationType // +0x3
	let location : CLLocation // +0x8
	let floor : Double // +0x10
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case altitude  
	case floor  
	case horizontalAccuracy  
	case isInaccurate  
	case isLocationFinished  
	case isOld  
	case latitude  
	case locationType  
	case longitude  
	case positionType  
	case timestamp  
	case verticalAccuracy  
 }

 class FMIPCore.FMIPGarbageCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let garbageCollectorIdentityKey : String
	let accountStore : ACAccountStore
	var isAccountVerificationPending : Bool
	var delegate : FMIPGarbageCollectorDelegate
	let paths : [String]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x60740002d770 (0x740002d770) in binary!
	0x38000000c  @objc FMIPGarbageCollector.(null) <stripped>

	// Swift methods
	0x461d0  func <stripped> // method 
	0x46b20  func <stripped> // method 
	0x47120  func <stripped> // method 
 }

 class FMIPCore.FMIPPlaySoundResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMAPSConnectionHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : FMAPSConnectionHandlerDelegate
	let topic : String
	let preferenceDomain : String
	let connectionQueue : OS_dispatch_queue
	var connection : FMAPSConnection
	var topicAPSToken : String?
	var publicAPSToken : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x605c0002d428 (0x5c0002d428) in binary!
	0x6058  @objc FMAPSConnectionHandler.(null) <stripped>
WARNING: couldn't find address 0x60440002d2c8 (0x440002d2c8) in binary!
	0x38000000c  @objc FMAPSConnectionHandler.(null) <stripped>
WARNING: couldn't find address 0x69aa0002d278 (0x1aa0002d278) in binary!
	0x5a40  @objc FMAPSConnectionHandler.(null) <stripped>

	// Swift methods
	0x483b0  func <stripped> // method 
	0x484a0  func <stripped> // method 
 }

 class FMIPCore.FMIPLostModeAction : FMIPDeviceAction {

	// Properties
	let isLostModeEnabled : Bool // +0x67 (0x1)
	let isSoundEnabled : Bool // +0x45545f5f (0x1)
	let isTrackingEnabled : Bool // +0x25c (0x1)
	let isUserTextEnabled : Bool // +0x90c70 (0x1)
	let isEmailUpdatesEnabled : Bool // +0x0 (0x1)
	let message : String? // +0x0 (0x10)
	let phoneNumber : String? // +0x0 (0x10)
	let passcode : String? // +0x73635f5f (0x10)

	// Swift methods
	0x4a260  class func FMIPLostModeAction.__allocating_init(device:message:phoneNumber:passcode:trackingEnabled:emailUpdatesEnabled:) // init 
 }

 class FMIPCore.FMIPReverseGeocodingOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let request : FMIPReverseGeocodingRequest
WARNING: couldn't find address 0x0 (0x0) in binary!
	let completion :  first-element-marker 
	var _isFinished : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0xa2c0002d278 (0x22c0002d278) in binary!
	0x5fe5  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0xa140002d258 (0x2140002d258) in binary!
	0x5fd8  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x5fcc0002d700 (0x7cc0002d700) in binary!
	0x5fc8  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x5fb40002d238 (0x7b40002d238) in binary!
	0x58000000c  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x5fa40002d378 (0x7a40002d378) in binary!
	0x690e  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x69100002d1e0 (0x1100002d1e0) in binary!
	0x68f6  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x5f6c0002d1f0 (0x76c0002d1f0) in binary!
	0x18000000c  @objc FMIPReverseGeocodingOperation.(null) <stripped>

	// Swift methods
 }

 class FMIPCore.FMIPLockRequest {
 struct FMIPCore.FMIPHistoricalLocation {

	// Properties
	let locationType : FMIPLocationType // +0x0
	let location : CLLocation // +0x8
	let batteryLevel : Double // +0x10
	let batteryStatus : FMIPBatteryStatus // +0x18
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case batteryLevel  
	case batteryStatus  
	case horizontalAccuracy  
	case latitude  
	case locationType  
	case longitude  
	case positionType  
	case timestamp  
 }

 class FMIPCore.FMIPDemoContent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let familyMembers : FMIPDemoFamilyMember // +0x10 (0x8)
	let devices : FMIPDemoDeviceTemplate // +0x18 (0x8)

	// Swift methods
	0x4d200  class func FMIPDemoContent.__allocating_init(from:) // init 
	0x4d430  func FMIPDemoContent.encode(to:) // method 
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case familyMembers  
	case devices  
 }

 class FMIPCore.FMIPCancelEraseResponse : FMIPDeviceContainingResponse { }

 struct FMIPCore.FMDemoLocation {

	// Properties
	let latitude : Double // +0x0
	let longitude : Double // +0x8
	let altitude : Double? // +0x10
	let horizontalAccuracy : Double? // +0x20
	let verticalAccuracy : Double? // +0x30
	let label : String? // +0x40
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case latitude  
	case longitude  
	case altitude  
	case horizontalAccuracy  
	case verticalAccuracy  
	case label  
 }

 struct FMIPCore.FMIPFeatures {

	// Properties
	let rawValue : Int // +0x0
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case isKeypadEnabled  
	case isLastKnownLocationEnabled  
	case isLockAndMessageEnabled  
	case isLocateEnabled  
	case isLostModeEnabled  
	case isPinRequiredForWipe  
	case isRemoveEnabled  
	case isPlaySoundEnabled  
	case isSavePreferenceEnabled  
	case isTracksUpdateSwitchEnabled  
	case isWipeEnabled  
	case isWipeAndMessageEnabled  
	case isExclusiveRemoveEnabled  
	case isLostModeWithLocationServiceEnabled  
	case isMultiChannelSoundEnabled  
	case isBluetoothRequired  
	case isStopSoundSupported  
 }

 class FMIPCore.FMIPValidatePasswordRequest {
 enum FMIPCore.FMIPValidatePasswordContext {

	// Properties
	case erase  
	case cancelErase  
	case lock  
	case lostMode  
	case remove  
	case unknown  
 }

 class FMIPCore.FMLocalize : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class FMIPCore.FMIPLostModeRequest {
 class FMIPCore.FMIPServerInteractionController {
 struct FMIPCore.FMIPDeviceLostModeMetadata {

	// Properties
	let canStopLostMode : Bool
	let isEmailUpdatesEnabled : Bool
	let isSoundEnabled : Bool
	let isTextCustomized : Bool
	let ownerNumber : String
	let message : String
	let status : FMIPActionStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : H
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case emailUpdates  
	case ownerNumber  
	case sound  
	case statusCode  
	case stopLostMode  
	case text  
	case userText  
	case timestamp  
 }

 class FMIPCore.FMIPLocationController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let locationManager : CLLocationManager
	let locationShifter : FMLocationShifter
	var delegate : FMIPLocationControllerDelegate
	let locationUpdatingQueue : OS_dispatch_queue
	var currentLocation : FMIPLocation

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5fa40002d378 (0x7a40002d378) in binary!
	0x690e  @objc FMIPLocationController.(null) <stripped>
WARNING: couldn't find address 0x69100002d1e0 (0x1100002d1e0) in binary!
	0x68f6  @objc FMIPLocationController.(null) <stripped>
WARNING: couldn't find address 0x5f6c0002d1f0 (0x76c0002d1f0) in binary!
	0x18000000c  @objc FMIPLocationController.(null) <stripped>
WARNING: couldn't find address 0x5f540002d720 (0x7540002d720) in binary!
	0x38000000c  @objc FMIPLocationController.(null) <stripped>
WARNING: couldn't find address 0x797c0002d780 (0x17c0002d780) in binary!
	0x79cd  @objc FMIPLocationController.(null) <stripped>

	// Swift methods
 }

 enum FMIPCore.FMIPPlaySoundChannels {

	// Properties
	case left  
	case right  
 }

 enum FMIPCore.FMIPPlaySoundReason {

	// Properties
	case play  
	case mute  
	case unmute  
	case stop  
 }

 class FMIPCore.FMIPPlaySoundRequest {
 class FMIPCore.FMIPRefreshingController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPRefreshingControllerDelegate // +0x10 (0x10)
	var selectedDevice : FMIPDevice // +0x0 (0x0)
	let interactionController : FMIPInteractionController // +0x995ac (0x28)
	let apsConnectionHandler : FMAPSConnectionHandler // +0x1668 (0x8)
	let refreshQueue : OS_dispatch_queue // +0x995ac (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tapContexts :  empty-list  // +0x0 (0x8)
	var callbackInterval : Double // +0x0 (0x8)
	var minCallbackInterval : Double // +0x0 (0x8)
	var maxCallbackInterval : Double // +0x6f635f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastRefreshTime : ÂD // +0x0 (0x0)
	var refreshTimer : NSTimer? // +0x45545f5f (0x8)
	var isRefreshing : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f540002d720 (0x7540002d720) in binary!
	0x38000000c  @objc FMIPRefreshingController.(null) <stripped>

	// Swift methods
	0x5cbc0  func <stripped> // method 
	0x5cd60  func <stripped> // method 
	0x5d5c0  func <stripped> // method 
	0x5e270  func <stripped> // method 
 }

 class FMIPCore.FMIPLostModeResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPNotifyResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPDemoDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var state : FMIPDemoDataState
	let demoContent : FMIPDemoContent
	let demoStateGenerator : FMIPDemoDataGenerator

	// Swift methods
	0x604f0  func <stripped> // method 
 }

 struct FMIPCore.FMIPDemoDataState {

	// Properties
	let owner : FMIPPerson // +0x0
	let devices : FMIPDevice // +0x48
	let familyMembers : FMIPPerson // +0x50
	let templates : FMIPDemoDeviceTemplate // +0x58
 }

 enum FMIPCore.FMIPBatteryStatus {

	// Properties
	case unknown  
	case charged  
	case charging  
	case notCharging  
 }

 struct FMIPCore.FMIPDeviceState {

	// Properties
	let rawValue : Int // +0x0
 }

 enum FMIPCore.FMIPDeviceStatus {

	// Properties
	case online  
	case offline  
	case pending  
 }

 struct FMIPCore.FMIPDevice {

	// Properties
	let identifier : String
	let baIdentifier : String?
	let ownerIdentifier : String
	let discoveryIdentifier : String?
	let name : String
	let status : FMIPDeviceStatus
	let color : String?
	let category : String
	let model : String
	let rawModel : String
	let modelDisplayName : String
	let displayName : String
	let batteryLevel : Double
	let batteryStatus : FMIPBatteryStatus
	let passcodeLength : Int
	let maxMessageLength : Int
	let state : FMIPDeviceState
	let audioChannels : FMIPAudioChannel
	let features : FMIPFeatures
	let historicalLocations : FMIPHistoricalLocation
	let location : FMIPLocation
	let crowdSourcedLocation : FMIPLocation
	let address : FMIPAddress
	let soundMetadata : FMIPPlaySoundMetadata
	let lostMetadata : FMIPDeviceLostModeMetadata
	let lockMetadata : FMIPLockMetadata
	let eraseMetadata : FMIPEraseMetadata
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lostTimestamp : ÂD
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lockedTimestamp : ÂD
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wipedTimestamp : ÂD
	let canWipeAfterLock : Bool
	let canEnableLostMode : Bool
	let canSupportDarkWake : Bool
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case address  
	case audioChannels  
	case batteryLevel  
	case batteryStatus  
	case baIdentifier  
	case canEnableLostMode  
	case crowdSourcedLocation  
	case canSupportDarkWake  
	case canWipeAfterLock  
	case category  
	case color  
	case displayName  
	case discoveryIdentifier  
	case features  
	case identifier  
	case isActivationLocked  
	case isFamilySharedDevice  
	case isLocating  
	case isLocationCapable  
	case isLocationEnabled  
	case isLostModeEnabled  
	case isLowPowerModeEnabled  
	case isMacOS  
	case isNotifyWhenFoundEnabled  
	case isThisDevice  
	case isWipeInProgress  
	case location  
	case lockedTimestamp  
	case lostDevice  
	case lostTimestamp  
	case maxMessageLength  
	case message  
	case messaging  
	case model  
	case modelDisplayName  
	case name  
	case ownerIdentifier  
	case passcodeLength  
	case rawModel  
	case remoteLock  
	case remoteWipe  
	case sound  
	case status  
	case trackingInfo  
	case wipedTimestamp  
 }

 class FMIPCore.FMIPUserInfoResponseFragment : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let owner : FMIPPerson
	let familyMembers : FMIPPerson

	// Swift methods
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case membersInfo  
 }

 class FMIPCore.FMIPRemoveRequest {
 class FMIPCore.FMIPLockResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPRefreshClientRequest {
 class FMIPCore.FMIPRemoveDeviceAction : FMIPDeviceAction { }

 class FMIPCore.IconTextAttachment : NSTextAttachment /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x797c0002d780 (0x17c0002d780) in binary!
	0x79cd  @objc IconTextAttachment.(null) <stripped>
WARNING: couldn't find address 0x9490002d758 (0x1490002d758) in binary!
	0x18000000c  @objc IconTextAttachment.(null) <stripped>
WARNING: couldn't find address 0x5f0c0002d788 (0x70c0002d788) in binary!
	0x5003000302b  @objc IconTextAttachment.(null) <stripped>
 }

 enum FMIPCore.FMIPPersonDeviceFetchStatus {

	// Properties
	case loading  
	case done  
 }

 enum FMIPCore.FMIPAccountFormatter {

	// Properties
	case email  
	case phone  
 }

 struct FMIPCore.FMIPPerson {

	// Properties
	let firstName : String // +0x0
	let lastName : String // +0x10
	let hasFamilyMembers : Bool // +0x20
	let deviceFetchStatus : FMIPPersonDeviceFetchStatus // +0x21
	let accountFormatter : FMIPAccountFormatter // +0x22
	let isAccountHSA : Bool // +0x23
	let username : String // +0x28
	let identifier : String // +0x38
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case accountFormatter  
	case deviceFetchStatus  
	case hasMembers  
	case isAccountHSA  
	case firstName  
	case lastName  
	case username  
	case identifier  
 }

 class FMIPCore.FMIPReverseGeocodingCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPReverseGeocodingCacheDelegate
	let processQueue : OS_dispatch_queue
	var pendingRequest : FMIPReverseGeocodingRequest
	var geocodingRecords : FMIPAddress
	let geocodingQueue : NSOperationQueue

	// Swift methods
	0x79740  func <stripped> // method 
	0x79920  func <stripped> // method 
 }

 class FMIPCore.FMSystemDirectoryUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var library : String

	// Swift methods
 }

 class FMIPCore.FMIPBeaconRefreshingController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPBeaconRefreshingControllerDelegate // +0x10 (0x10)
	var beacons : [SPBeacon] // +0x20 (0x8)
	var unknownBeacons : [SPUnknownBeacon] // +0x28 (0x8)
	var ownerSession : SPOwnerSession // +0x30 (0x8)
	let refreshQueue : OS_dispatch_queue // +0x38 (0x8)
	var callbackInterval : Double // +0x40 (0x8)
	var defaultCallbackInterval : Double // +0x48 (0x8)
	var initialCallbackInterval : Double // +0x50 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastRefreshTime : ÂD // +0x64 (0x0)
	var refreshTimer : NSTimer? // +0xa3220 (0x8)
	var isRefreshing : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5f0c0002d788 (0x70c0002d788) in binary!
	0x5003000302b  @objc FMIPBeaconRefreshingController.(null) <stripped>

	// Swift methods
	0x7b280  func <stripped> // method 
	0x7b5b0  func <stripped> // method 
	0x7b900  func <stripped> // method 
	0x7c6d0  func <stripped> // method 
	0x7d2e0  func <stripped> // method 
	0x7d4d0  func <stripped> // method 
	0x7d560  func <stripped> // method 
 }

 class FMIPCore.FMIPBaseResponse : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serverContext : [String : Any]?
	let userInfo : FMIPUserInfoResponseFragment
	let alert : FMIPAlert
	let shouldTriggerLastLocationPrompt : Bool
	let statusCode : Int

	// Swift methods
	0x7edf0  class func <stripped> // init 
 }

 enum FMIPCore.FMIPBaseResponseError {

	// Properties
	case invalidStatusCode  
	case emptyDataReceived  
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case alert  
	case serverContext  
	case userInfo  
	case statusCode  
	case content  
 }

 struct FMIPCore.FMIPAnalytics {

	// Properties
	let analyticsQueue : OS_dispatch_queue // +0x0
 }

 class FMIPCore.FMIPDemoInteractionController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPInteractionControllerDelegate
	let processingQueue : OS_dispatch_queue
	let dataSource : FMIPDemoDataSource
	let serverInteractionController : FMIPInteractionController
	let demoDataInjector : FMIPDemoDataInjector

	// Swift methods
	0x82020  func <stripped> // method 
	0x83760  func <stripped> // method 
	0x837b0  func <stripped> // method 
 }

 enum FMIPCore.Error {

	// Properties
	case notYetImplemented  
	case notAvailableInDemoMode  
 }

 enum FMIPCore.FMWindowStatePrefKeys {

	// Properties
	case frontMostWindow  
	case windowVisible  
 }

 class FMIPCore.FMIPNotifyRequest {
 enum FMIPCore.FMIPDemoDeviceCategoryTemplate {

	// Properties
	case macbookPro  
	case iPhone  
	case iPad  
	case watch  
	case iMacPro  
	case airpods  
 }

 struct FMIPCore.FMIPPlaySoundMetadata {

	// Properties
	let status : FMIPActionStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : H
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case timestamp  
	case statusCode  
 }

 class FMIPCore.FMDiskIO {
 struct FMIPCore.FMIPDemoFamilyMember {

	// Properties
	let firstName : String // +0x0
	let lastName : String // +0x10
	let handle : String // +0x20
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case firstName  
	case lastName  
	case handle  
 }

 enum FMIPCore.FMIPAlertType {

	// Properties
	case server  
	case networkIssue  
	case initialization  
 }

 class FMIPCore.FMIPAlert : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let title : String? // +0x10 (0x10)
	let message : String? // +0x20 (0x10)
	let okButtonLabel : String? // +0x30 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let okButtonURL : _D // +0xa3290 (0x0)
	let cancelButtonLabel : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cancelButtonURL : _D // +0x1f30 (0x0)
	let type : FMIPAlertType // +0xa3290 (0x1)

	// Swift methods
	0x8e5d0  class func FMIPAlert.__allocating_init(from:) // init 
	0x8dd80  class func FMIPAlert.__allocating_init(title:message:okButtonLabel:okButtonURL:cancelButtonLabel:cancelButtonURL:type:) // init 
	0x8ec30  func FMIPAlert.debugDescription.getter // getter 
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case title  
	case message  
	case okButtonLabel  
	case okButtonURL  
	case cancelButtonLabel  
	case cancelButtonURL  
 }

 enum __C.UNAuthorizationStatus { }

 struct __C.SPBeaconTaskName {

	// Properties
	var _rawValue : NSString
 }

 enum __C.CLAuthorizationStatus { }

 struct __C.FileProtectionType {

	// Properties
	var _rawValue : NSString
 }

 struct __C.FileAttributeKey {

	// Properties
	var _rawValue : NSString
 }
