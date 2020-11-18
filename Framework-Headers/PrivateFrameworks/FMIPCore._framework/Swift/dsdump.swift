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
 protocol FMIPCore.FMIPServerInteractionControllerDelegate // 2 requirements
 {
	// method
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

 class FMIPCore.FMIPEphemeralAuthenticationController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let authenticationController : FMIPEphemeralAuthenticator // +0x10 (0x28)
	let action : FMIPDeviceAction // +0x38 (0x8)
	let username : String // +0x40 (0x10)
	var authenticationResults : [String : Any]? // +0x50 (0x8)
	let authenticationContext : AKAppleIDAuthenticationContext? // +0x58 (0x8)

	// Swift methods
	0x2910  func <stripped> // getter 
	0x2aa0  func <stripped> // getter 
	0x2cc0  func <stripped> // method 
 }

 enum FMIPCore.FMIPEphemeralAuthenticationError {

	// Properties
	case emptyAuthenticationResult  
	case emptyDSID  
	case emptyPassword  
 }

 class FMIPCore.FMIPCancelEraseRequest : FMIPBaseRequest {

	// Properties
	let action : FMIPCancelEraseAction // +0xfeedfacf (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPValidatePasswordResponse : FMIPBaseResponse {

	// Properties
	let escrowUUID : String? // +0x38 (0x10)
	let authToken : String? // +0x48 (0x10)

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
	let timestamp : Date
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
	case safetyWarning  
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
	let beaconManager : SPBeaconManager // +0x10 (0x8)
	let ownerSession : SPOwnerSession // +0x18 (0x8)
	let serverInteractionController : FMIPServerInteractionController // +0x20 (0x8)
	let mockAuthenticator : FMIPEphemeralAuthenticator? // +0x28 (0x28)
	let pendingCommandFuturesUpdateQueue : OS_dispatch_queue // +0x50 (0x8)
	var pendingCommandFutures : [FMFuture<SPBeacon>] // +0x58 (0x8)

	// Swift methods
	0x91f0  func <stripped> // method 
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
	let isLastDevice : Bool // +0x38 (0x1)
	let isTrustedDevice : Bool // +0x39 (0x1)

	// Swift methods
 }

 enum FMIPCore.FMIPVerifyTrustedStateCodingKeys {

	// Properties
	case isLastDevice  
	case isTrustedDevice  
 }

 class FMIPCore.FMIPInitClientResponse : FMIPBaseResponse {

	// Properties
	let devices : [FMIPDevice] // +0x38 (0x8)
 }

 struct FMIPCore.FMIPReverseGeocodingRequest {

	// Properties
	let identifier : String // +0x0
	let location : CLLocation // +0x10
 }

 class FMIPCore.FMIPGetURLInfoRequest : FMIPBaseRequest {

	// Properties
	let url : URL // +0x3 (0x0)

	// Swift methods
 }

 class FMIPCore.FMIPNotifyAction : FMIPDeviceAction {

	// Properties
	let whenLocationFound : Bool // +0x36 (0x1)

	// Swift methods
	0x13d10  class func FMIPNotifyAction.__allocating_init(device:whenLocationFound:) // init 
 }

 class FMIPCore.FMIPDeviceContainingResponse : FMIPBaseResponse {

	// Properties
	let devices : [FMIPDevice]? // +0x38 (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPBaseRequest : type metadata for FMNHTTPRequest /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking {

	// Properties
	let basePath : String // +0x6100085 (0x10)
	var bodyDictionary : [String : Any] // +0x19 (0x8)
	var headerDictionary : [String : String] // +0x45545f5f (0x8)
	var oneTimeToken : String? // +0x0 (0x10)
	var clientContext : [String : Any] // +0x0 (0x8)
	var serverContext : [String : Any] // +0x96000 (0x8)
	var lastActiveTimestamp : Date // +0x0 (0x0)

	// Swift methods
	0x14d10  func <stripped> // getter 
	0x14e90  func <stripped> // getter 
	0x14ea0  func <stripped> // method 
	0x15190  func <stripped> // method 
	0x16590  func <stripped> // method 
 }

 class FMIPCore.FMIPPlaySoundDeviceAction : FMIPDeviceAction {

	// Properties
	let channels : [FMIPPlaySoundChannels] // +0x96000 (0x8)
	let safetyWarningConfirmed : Bool // +0x5 (0x1)

	// Swift methods
	0x17740  class func FMIPPlaySoundDeviceAction.__allocating_init(device:channels:safetyWarningConfirmed:) // init 
 }

 class FMIPCore.FMIPDeviceAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let device : FMIPDevice // +0x18b0 (0x0)
	var authenticationContext : AKAppleIDAuthenticationContext? // +0x11 (0x8)
	var trustedDeviceConfirmation : (_:_:_:)? // +0x65745f5f (0x10)
	var dsid : String? // +0x0 (0x10)
	var username : String? // +0x45545f5f (0x10)
	var oneTimeToken : String? // +0x0 (0x10)
	var escrowUUID : String? // +0x18b0 (0x10)
	var recoverySession : Data? // +0x7bbda (0x10)

	// Swift methods
	0x17b60  func FMIPDeviceAction.isPasswordRequired.getter // getter 
	0x17b70  func FMIPDeviceAction.authenticationContext.getter // getter 
	0x17bb0  func FMIPDeviceAction.authenticationContext.setter // setter 
	0x17c00  func FMIPDeviceAction.authenticationContext.modify // modifyCoroutine 
	0x17c50  func FMIPDeviceAction.trustedDeviceConfirmation.getter // getter 
	0x17ca0  func FMIPDeviceAction.trustedDeviceConfirmation.setter // setter 
	0x17d00  func FMIPDeviceAction.trustedDeviceConfirmation.modify // modifyCoroutine 
	0x17d40  func FMIPDeviceAction.isTrustedDeviceVerificationRequired.getter // getter 
	0x17d70  class func FMIPDeviceAction.__allocating_init(device:) // init 
 }

 class FMIPCore.FMIPCancelEraseAction : FMIPDeviceAction { }

 class FMIPCore.FMIPEraseRequest : FMIPBaseRequest {

	// Properties
	let action : FMIPEraseAction // +0x0 (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPGetURLInfoResponse : FMIPBaseResponse {

	// Properties
	let url : URL? // +0x80000400 (0x0)

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
	let timestamp : Date
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case timestamp  
	case statusCode  
 }

 class FMIPCore.FMIPRefreshClientResponse : FMIPBaseResponse {

	// Properties
	let devices : [FMIPDevice] // +0x38 (0x8)
 }

 class FMIPCore.FMNetworkUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class FMIPCore.FMLocationShiftingRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let location : CLLocation
	let identifier : String

	// Swift methods
 }

 class FMIPCore.FMLocationShifter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let shifter : GEOLocationShifter
	let shiftingQueue : OS_dispatch_queue
	let processingQueue : OS_dispatch_queue

	// Swift methods
	0x20c90  func <stripped> // method 
 }

 class FMIPCore.FMIPEraseAction : FMIPDeviceAction {

	// Properties
	let isUserTextEnabled : Bool // +0x0 (0x1)
	let message : String? // +0x74735f5f (0x10)
	let passcode : String? // +0x0 (0x10)
	let phoneNumber : String? // +0x45545f5f (0x10)

	// Swift methods
	0x23930  class func FMIPEraseAction.__allocating_init(device:message:phoneNumber:passcode:) // init 
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
	let serverInteractionController : FMIPServerInteractionController // +0x10 (0x8)

	// Swift methods
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
	var delegate : weak FMIPManagerDelegate? // +0x10 (0x10)
	var refreshingController : FMIPRefreshingController // +0x20 (0x8)
	var beaconRefreshingController : FMIPBeaconRefreshingController // +0x28 (0x8)
	var dataManager : FMIPDataManager // +0x30 (0x8)
	let garbageCollector : FMIPGarbageCollector // +0x38 (0x8)
	var serverInteractionController : FMIPServerInteractionController // +0x40 (0x8)
	var actionsController : FMIPDeviceActionsController // +0x48 (0x8)
	var trackingAvoidance : SPTrackingAvoidanceServiceProtocol // +0x50 (0x8)
	var ownerSession : SPOwnerSession // +0x58 (0x8)
	var ownerInterface : SPOwnerInterface // +0x60 (0x8)
	var beaconManager : SPBeaconManager // +0x68 (0x8)
	let urlHandler : FMIPURLHandler // +0x70 (0x8)
	var isUpdatingSingleDevices : Bool // +0x78 (0x1)
	let locationShifter : FMLocationShifter // +0x80 (0x8)
	var selectedDevice : FMIPDevice? // +0x7d48a (0x0)
	var isInitialized : Bool // +0x0 (0x1)

	// Swift methods
	0x27550  func FMIPManager.delegate.getter // getter 
	0x27580  func FMIPManager.delegate.setter // setter 
	0x27600  func FMIPManager.delegate.modify // modifyCoroutine 
	0x276f0  func FMIPManager.devices.getter // getter 
	0x27730  func FMIPManager.owner.getter // getter 
	0x277f0  func FMIPManager.familyMembers.getter // getter 
	0x27810  func FMIPManager.selectedDevice.getter // getter 
	0x27850  func FMIPManager.selectedDevice.setter // setter 
	0x27930  func FMIPManager.selectedDevice.modify // modifyCoroutine 
	0x27c20  func FMIPManager.isInitialized.getter // getter 
	0x27c50  func <stripped> // setter 
	0x27cf0  class func FMIPManager.__allocating_init() // init 
	0x282b0  func FMIPManager.initialize() // method 
	0x2b400  func FMIPManager.startRefreshing() // method 
	0x2b6a0  func FMIPManager.stopRefreshing() // method 
	0x2b770  func FMIPManager.refresh() // method 
	0x2b880  func FMIPManager.perform(action:completion:) // method 
	0x2c0d0  func FMIPManager.updateLastLocationStatus(enabled:) // method 
	0x2c720  func <stripped> // method 
	0x2c8f0  func FMIPManager.handle(url:completion:) // method 
	0x2ca50  func <stripped> // method 
	0x2d540  func <stripped> // method 
	0x2e090  func FMIPManager.debugDescription.getter // getter 
 }

 class FMIPCore.FMIPDataManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPDataManagerDelegate // +0x10 (0x10)
	var isCacheDataValid : Bool // +0x20 (0x1)
	var devices : [FMIPDevice] // +0x28 (0x8)
	var owner : FMIPPerson? // +0x30 (0x48)
	var familyMembers : [FMIPPerson] // +0x78 (0x8)
	var crowdSourcedLocations : [String : FMIPLocation] // +0x80 (0x8)
	var crowdSourcedLocating : [UUID : Bool] // +0x88 (0x8)
	var devicesCache : FMDiskIO<[FMIPDevice]> // +0x90 (0x8)
	var familyCache : FMDiskIO<[FMIPPerson]> // +0x98 (0x8)
	var ownerCache : FMDiskIO<FMIPPerson> // +0xa0 (0x8)
	let geocodingCache : FMIPReverseGeocodingCache // +0xa8 (0x8)
	let updateQueue : OS_dispatch_queue // +0xb0 (0x8)

	// Swift methods
	0x33610  func <stripped> // method 
	0x337a0  func <stripped> // method 
	0x33900  func <stripped> // method 
 }

 class FMIPCore.FMIPVerifyTrustedStateRequest : FMIPBaseRequest {

	// Properties
	let device : FMIPDevice // +0x65706c65 (0x0)

	// Swift methods
 }

 class FMIPCore.FMIPLockAction : FMIPDeviceAction {

	// Properties
	let isSoundEnabled : Bool // +0xb1e (0x1)
	let isUserTextEnabled : Bool // +0x45545f5f (0x1)
	let message : String? // +0x0 (0x10)
	let passcode : String? // +0x7db2c (0x10)

	// Swift methods
	0x37d10  class func FMIPLockAction.__allocating_init(device:message:passcode:) // init 
 }

 class FMIPCore.FMIPEraseResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPInitClientRequest : FMIPBaseRequest {
	// Swift methods
 }

 enum FMIPCore.FMIPLocationType {

	// Properties
	case unknown  
	case crowdsourced  
	case gps  
	case wifi  
	case safeLocation  
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
	let garbageCollectorIdentityKey : String // +0x10 (0x10)
	let accountStore : ACAccountStore // +0x20 (0x8)
	var isAccountVerificationPending : Bool // +0x28 (0x1)
	var delegate : FMIPGarbageCollectorDelegate // +0x30 (0x10)
	let paths : [String] // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0x3c5f0  @objc FMIPGarbageCollector.scheduleAccountVerification <stripped>

	// Swift methods
	0x3b8c0  func <stripped> // method 
	0x3c070  func <stripped> // method 
	0x3c620  func <stripped> // method 
 }

 class FMIPCore.FMIPPlaySoundResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMAPSConnectionHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : FMAPSConnectionHandlerDelegate // +0x8 (0x10)
	let topic : String // +0x18 (0x10)
	let preferenceDomain : String // +0x28 (0x10)
	let connectionQueue : OS_dispatch_queue // +0x38 (0x8)
	var connection : FMAPSConnection // +0x40 (0x10)
	var topicAPSToken : String? // +0x50 (0x10)
	var publicAPSToken : String? // +0x60 (0x10)

	// ObjC -> Swift bridged methods
	0x3dd20  @objc FMAPSConnectionHandler.dealloc <stripped>
	0x3e170  @objc FMAPSConnectionHandler.init <stripped>
	0x3dd40  @objc FMAPSConnectionHandler..cxx_destruct <stripped>

	// Swift methods
	0x3ddd0  func <stripped> // method 
	0x3df00  func <stripped> // method 
 }

 class FMIPCore.FMIPLostModeAction : FMIPDeviceAction {

	// Properties
	let isLostModeEnabled : Bool // +0x45545f5f (0x1)
	let isSoundEnabled : Bool // +0x0 (0x1)
	let isTrackingEnabled : Bool // +0x7db2c (0x1)
	let isUserTextEnabled : Bool // +0x0 (0x1)
	let isEmailUpdatesEnabled : Bool // +0x80000400 (0x1)
	let message : String? // +0x0 (0x10)
	let phoneNumber : String? // +0x6f635f5f (0x10)
	let passcode : String? // +0x0 (0x10)

	// Swift methods
	0x3f950  class func FMIPLostModeAction.__allocating_init(device:message:phoneNumber:passcode:trackingEnabled:emailUpdatesEnabled:) // init 
 }

 class FMIPCore.FMIPReverseGeocodingOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let request : FMIPReverseGeocodingRequest // +0x8 (0x18)
	let completion : (_:_:) // +0x20 (0x10)
	var _isFinished : Bool // +0x30 (0x1)

	// ObjC -> Swift bridged methods
	0x3fec0  @objc FMIPReverseGeocodingOperation.isFinished <stripped>
	0x3fee0  @objc FMIPReverseGeocodingOperation.setFinished: <stripped>
	0x3ffa0  @objc FMIPReverseGeocodingOperation.isAsynchronous <stripped>
	0x3ffc0  @objc FMIPReverseGeocodingOperation.main <stripped>
	0x40a60  @objc FMIPReverseGeocodingOperation.start <stripped>
	0x40a90  @objc FMIPReverseGeocodingOperation.init <stripped>
	0x40b10  @objc FMIPReverseGeocodingOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class FMIPCore.FMIPLockRequest : FMIPBaseRequest {

	// Properties
	let action : FMIPLockAction // +0x7e650 (0x8)

	// Swift methods
 }

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

 class FMIPCore.FMIPCancelEraseResponse : FMIPDeviceContainingResponse { }

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
 }

 class FMIPCore.FMIPValidatePasswordRequest : FMIPBaseRequest {

	// Properties
	let authToken : String // +0x6fb0 (0x10)
	let context : FMIPValidatePasswordContext // +0x7e650 (0x1)
	let device : FMIPDevice // +0x0 (0x0)

	// Swift methods
 }

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

 class FMIPCore.FMIPLostModeRequest : FMIPBaseRequest {

	// Properties
	let action : FMIPLostModeAction // +0x0 (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPServerInteractionController : type metadata for FMNServerInteractionController /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking {

	// Properties
	let authenticationProvider : FMNAuthenticationProvider // +0x48 (0x8)
	let serverInteractionQueue : OS_dispatch_queue // +0x50 (0x8)
	var delegate : FMIPServerInteractionControllerDelegate // +0x58 (0x10)
	var serverContext : [String : Any]? // +0x68 (0x8)
	var lastActiveTimestamp : Date // +0x0 (0x0)
	var networkInitializationCompleted : Bool // +0x73635f5f (0x1)

	// Swift methods
	0x48440  func <stripped> // method 
	0x48880  func <stripped> // method 
	0x489e0  func <stripped> // method 
	0x48b20  func <stripped> // method 
 }

 struct FMIPCore.FMIPDeviceLostModeMetadata {

	// Properties
	let canStopLostMode : Bool
	let isEmailUpdatesEnabled : Bool
	let isSoundEnabled : Bool
	let isTextCustomized : Bool
	let ownerNumber : String
	let message : String
	let status : FMIPActionStatus
	let timestamp : Date
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

 class FMIPCore.FMIPPlaySoundRequest : FMIPBaseRequest {

	// Properties
	let device : FMIPDevice // +0x67 (0x0)
	let channels : FMIPPlaySoundChannels // +0x45545f5f (0x8)
	let safetyWarningConfirmed : Bool // +0x0 (0x1)

	// Swift methods
	0x4cff0  func <stripped> // getter 
 }

 class FMIPCore.FMIPRefreshingController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPRefreshingControllerDelegate // +0x10 (0x10)
	var selectedDevice : FMIPDevice? // +0x85600 (0x0)
	let serverInteractionController : FMIPServerInteractionController // +0x6db7 (0x8)
	let apsConnectionHandler : FMAPSConnectionHandler // +0x85600 (0x8)
	let refreshQueue : OS_dispatch_queue // +0x0 (0x8)
	var tapContexts : [[AnyHashable : Any]] // +0x2 (0x8)
	var callbackInterval : Double // +0x0 (0x8)
	var minCallbackInterval : Double // +0x77735f5f (0x8)
	var maxCallbackInterval : Double // +0x7079745f (0x8)
	var lastRefreshTime : Date? // +0x45545f5f (0x0)
	var refreshTimer : NSTimer? // +0x0 (0x8)
	var isRefreshing : Bool // +0x8c3b8 (0x1)

	// ObjC -> Swift bridged methods
	0x4f620  @objc FMIPRefreshingController.refreshTimerFired <stripped>

	// Swift methods
	0x4e640  func <stripped> // method 
	0x4ea20  func <stripped> // method 
	0x4f2a0  func <stripped> // method 
	0x4fe30  func <stripped> // method 
 }

 class FMIPCore.FMIPLostModeResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPNotifyResponse : FMIPDeviceContainingResponse { }

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
	let audioChannels : [FMIPAudioChannel]
	let features : FMIPFeatures
	let historicalLocations : [FMIPHistoricalLocation]?
	let location : FMIPLocation?
	let crowdSourcedLocation : FMIPLocation?
	let address : FMIPAddress?
	let soundMetadata : FMIPPlaySoundMetadata?
	let lostMetadata : FMIPDeviceLostModeMetadata?
	let lockMetadata : FMIPLockMetadata?
	let eraseMetadata : FMIPEraseMetadata?
	let lostTimestamp : Date?
	let lockedTimestamp : Date?
	let wipedTimestamp : Date?
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
	let owner : FMIPPerson // +0x10 (0x48)
	let familyMembers : [FMIPPerson] // +0x58 (0x8)

	// Swift methods
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case membersInfo  
 }

 class FMIPCore.FMIPRemoveRequest : FMIPBaseRequest {

	// Properties
	let action : FMIPRemoveDeviceAction // +0x1dac (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPLockResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPRefreshClientRequest : FMIPBaseRequest {

	// Properties
	let selectedDevice : FMIPDevice? // +0x8c3b8 (0x0)
	let tapContext : [[AnyHashable : Any]]? // +0x0 (0x8)
	let notificationAuthStatus : UNAuthorizationStatus // +0x0 (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPRemoveDeviceAction : FMIPDeviceAction { }

 class FMIPCore.IconTextAttachment : NSTextAttachment /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x64ab0  @objc IconTextAttachment.attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex: <stripped>
	0x64cb0  @objc IconTextAttachment.initWithData:ofType: <stripped>
	0x64d60  @objc IconTextAttachment.initWithCoder: <stripped>
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
 }

 class FMIPCore.FMIPReverseGeocodingCache : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPReverseGeocodingCacheDelegate // +0x10 (0x10)
	let processQueue : OS_dispatch_queue // +0x20 (0x8)
	var pendingRequest : [String : FMIPReverseGeocodingRequest] // +0x28 (0x8)
	var geocodingRecords : [String : FMIPAddress] // +0x30 (0x8)
	let geocodingQueue : NSOperationQueue // +0x38 (0x8)

	// Swift methods
 }

 class FMIPCore.FMSystemDirectoryUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var library : String // +0x10 (0x10)

	// Swift methods
 }

 class FMIPCore.FMIPBeaconRefreshingController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPBeaconRefreshingControllerDelegate // +0x10 (0x10)
	let beaconManager : SPBeaconManager // +0x20 (0x8)
	var beacons : [SPBeacon] // +0x28 (0x8)
	var ownerSession : SPOwnerSession // +0x30 (0x8)
	let refreshQueue : OS_dispatch_queue // +0x38 (0x8)
	var callbackInterval : Double // +0x40 (0x8)
	var defaultCallbackInterval : Double // +0x48 (0x8)
	var initialCallbackInterval : Double // +0x50 (0x8)
	var lastRefreshTime : Date? // +0x45545f5f (0x0)
	var refreshTimer : NSTimer? // +0x0 (0x8)
	var isRefreshing : Bool // +0x8e164 (0x1)

	// ObjC -> Swift bridged methods
	0x6e380  @objc FMIPBeaconRefreshingController.handleBeaconsChanged <stripped>

	// Swift methods
	0x6c1d0  func <stripped> // method 
	0x6c400  func <stripped> // method 
	0x6c890  func <stripped> // method 
	0x6d590  func <stripped> // method 
	0x6e1a0  func <stripped> // method 
 }

 class FMIPCore.FMIPBaseResponse : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serverContext : [String : Any]? // +0x10 (0x8)
	let userInfo : FMIPUserInfoResponseFragment? // +0x18 (0x8)
	let alert : FMIPAlert? // +0x20 (0x8)
	let shouldTriggerLastLocationPrompt : Bool // +0x28 (0x1)
	let statusCode : Int // +0x30 (0x8)

	// Swift methods
	0x71d60  class func <stripped> // init 
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

 enum FMIPCore.FMWindowStatePrefKeys {

	// Properties
	case frontMostWindow  
	case windowVisible  
 }

 class FMIPCore.FMIPNotifyRequest : FMIPBaseRequest {

	// Properties
	let action : FMIPNotifyAction // +0x50 (0x8)

	// Swift methods
 }

 struct FMIPCore.FMIPPlaySoundMetadata {

	// Properties
	let status : FMIPActionStatus
	let timestamp : Date
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case timestamp  
	case statusCode  
 }

 class FMIPCore.FMDiskIO {
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
	let okButtonURL : URL? // +0x0 (0x0)
	let cancelButtonLabel : String? // +0x8e164 (0x10)
	let cancelButtonURL : URL? // +0x0 (0x0)
	let type : FMIPAlertType // +0x0 (0x1)

	// Swift methods
	0x7c170  class func FMIPAlert.__allocating_init(from:) // init 
	0x7b5c0  class func FMIPAlert.__allocating_init(title:message:okButtonLabel:okButtonURL:cancelButtonLabel:cancelButtonURL:type:) // init 
	0x7c830  func FMIPAlert.debugDescription.getter // getter 
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

 struct __C.FileProtectionType {

	// Properties
	var _rawValue : NSString
 }

 struct __C.FileAttributeKey {

	// Properties
	var _rawValue : NSString
 }
