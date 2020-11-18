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

 class FMIPCore.FMIPEphemeralAuthenticationController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let authenticationController : FMIPEphemeralAuthenticator // +0x10 (0x28)
	let action : FMIPDeviceAction // +0x38 (0x8)
	let username : String // +0x40 (0x10)
	var authenticationResults : [String : Any]? // +0x50 (0x8)
	let authenticationContext : AKAppleIDAuthenticationContext? // +0x58 (0x8)

	// Swift methods
	0x31c0  func <stripped> // getter 
	0x3350  func <stripped> // getter 
	0x3570  func <stripped> // method 
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
	0x9aa0  func <stripped> // method 
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
	0x145c0  class func FMIPNotifyAction.__allocating_init(device:whenLocationFound:) // init 
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
	var serverContext : [String : Any] // +0x99000 (0x8)
	var lastActiveTimestamp : Date // +0x0 (0x0)

	// Swift methods
	0x155c0  func <stripped> // getter 
	0x15740  func <stripped> // getter 
	0x15750  func <stripped> // method 
	0x15a40  func <stripped> // method 
	0x16e40  func <stripped> // method 
 }

 class FMIPCore.FMIPPlaySoundDeviceAction : FMIPDeviceAction {

	// Properties
	let channels : [FMIPPlaySoundChannels] // +0x99000 (0x8)
	let safetyWarningConfirmed : Bool // +0x5 (0x1)

	// Swift methods
	0x17ff0  class func FMIPPlaySoundDeviceAction.__allocating_init(device:channels:safetyWarningConfirmed:) // init 
 }

 class FMIPCore.FMIPDeviceAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let device : FMIPDevice // +0x2140 (0x0)
	var authenticationContext : AKAppleIDAuthenticationContext? // +0x11 (0x8)
	var trustedDeviceConfirmation : (_:_:_:)? // +0x65745f5f (0x10)
	var dsid : String? // +0x0 (0x10)
	var username : String? // +0x45545f5f (0x10)
	var oneTimeToken : String? // +0x0 (0x10)
	var escrowUUID : String? // +0x2140 (0x10)
	var recoverySession : Data? // +0x7d5ba (0x10)

	// Swift methods
	0x18410  func FMIPDeviceAction.isPasswordRequired.getter // getter 
	0x18420  func FMIPDeviceAction.authenticationContext.getter // getter 
	0x18460  func FMIPDeviceAction.authenticationContext.setter // setter 
	0x184b0  func FMIPDeviceAction.authenticationContext.modify // modifyCoroutine 
	0x18500  func FMIPDeviceAction.trustedDeviceConfirmation.getter // getter 
	0x18550  func FMIPDeviceAction.trustedDeviceConfirmation.setter // setter 
	0x185b0  func FMIPDeviceAction.trustedDeviceConfirmation.modify // modifyCoroutine 
	0x185f0  func FMIPDeviceAction.isTrustedDeviceVerificationRequired.getter // getter 
	0x18620  class func FMIPDeviceAction.__allocating_init(device:) // init 
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
	0x215b0  func <stripped> // method 
 }

 class FMIPCore.FMIPEraseAction : FMIPDeviceAction {

	// Properties
	let isUserTextEnabled : Bool // +0x0 (0x1)
	let message : String? // +0x74735f5f (0x10)
	let passcode : String? // +0x0 (0x10)
	let phoneNumber : String? // +0x45545f5f (0x10)

	// Swift methods
	0x24250  class func FMIPEraseAction.__allocating_init(device:message:phoneNumber:passcode:) // init 
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
	let locationController : FMIPLocationController // +0x40 (0x8)
	var serverInteractionController : FMIPServerInteractionController // +0x48 (0x8)
	var actionsController : FMIPDeviceActionsController // +0x50 (0x8)
	var trackingAvoidance : SPTrackingAvoidanceServiceProtocol // +0x58 (0x8)
	var ownerSession : SPOwnerSession // +0x60 (0x8)
	var ownerInterface : SPOwnerInterface // +0x68 (0x8)
	var beaconManager : SPBeaconManager // +0x70 (0x8)
	let urlHandler : FMIPURLHandler // +0x78 (0x8)
	var isUpdatingSingleDevices : Bool // +0x80 (0x1)
	let locationShifter : FMLocationShifter // +0x88 (0x8)
	var selectedDevice : FMIPDevice? // +0x80000408 (0x0)
	var isInitialized : Bool // +0x6 (0x1)

	// Swift methods
	0x27900  func FMIPManager.delegate.getter // getter 
	0x27930  func FMIPManager.delegate.setter // setter 
	0x279b0  func FMIPManager.delegate.modify // modifyCoroutine 
	0x27aa0  func FMIPManager.devices.getter // getter 
	0x27ae0  func FMIPManager.owner.getter // getter 
	0x27ba0  func FMIPManager.familyMembers.getter // getter 
	0x27bc0  func FMIPManager.selectedDevice.getter // getter 
	0x27c00  func FMIPManager.selectedDevice.setter // setter 
	0x27ce0  func FMIPManager.selectedDevice.modify // modifyCoroutine 
	0x27fd0  func FMIPManager.isInitialized.getter // getter 
	0x28000  func <stripped> // setter 
	0x280a0  class func FMIPManager.__allocating_init() // init 
	0x28690  func FMIPManager.initialize() // method 
	0x2b7e0  func FMIPManager.startRefreshing() // method 
	0x2bab0  func FMIPManager.forceStartRefreshing() // method 
	0x2bc50  func FMIPManager.stopRefreshing() // method 
	0x2bd40  func FMIPManager.updateLastActiveTimestamp() // method 
	0x2bde0  func FMIPManager.refresh() // method 
	0x2bef0  func FMIPManager.refreshBeacons(completion:) // method 
	0x2bf30  func FMIPManager.perform(action:completion:) // method 
	0x2c780  func FMIPManager.updateLastLocationStatus(enabled:) // method 
	0x2cdd0  func <stripped> // method 
	0x2cfa0  func FMIPManager.handle(url:completion:) // method 
	0x2d100  func <stripped> // method 
	0x2dbf0  func <stripped> // method 
	0x2e730  func FMIPManager.debugDescription.getter // getter 
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
	0x33100  func <stripped> // method 
	0x33290  func <stripped> // method 
	0x333f0  func <stripped> // method 
 }

 class FMIPCore.FMIPVerifyTrustedStateRequest : FMIPBaseRequest {

	// Properties
	let device : FMIPDevice // +0x0 (0x0)

	// Swift methods
 }

 class FMIPCore.FMIPLockAction : FMIPDeviceAction {

	// Properties
	let isSoundEnabled : Bool // +0x0 (0x1)
	let isUserTextEnabled : Bool // +0x7fda8 (0x1)
	let message : String? // +0xb32 (0x10)
	let passcode : String? // +0x7fda8 (0x10)

	// Swift methods
	0x37850  class func FMIPLockAction.__allocating_init(device:message:passcode:) // init 
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
	case realtime  
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
	0x3c2a0  @objc FMIPGarbageCollector.scheduleAccountVerification <stripped>

	// Swift methods
	0x3b570  func <stripped> // method 
	0x3bd20  func <stripped> // method 
	0x3c2d0  func <stripped> // method 
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
	0x3d9d0  @objc FMAPSConnectionHandler.dealloc <stripped>
	0x3de20  @objc FMAPSConnectionHandler.init <stripped>
	0x3d9f0  @objc FMAPSConnectionHandler..cxx_destruct <stripped>

	// Swift methods
	0x3da80  func <stripped> // method 
	0x3dbb0  func <stripped> // method 
 }

 class FMIPCore.FMIPLostModeAction : FMIPDeviceAction {

	// Properties
	let isLostModeEnabled : Bool // +0x808e0 (0x1)
	let isSoundEnabled : Bool // +0x70c0 (0x1)
	let isTrackingEnabled : Bool // +0x80000400 (0x1)
	let isUserTextEnabled : Bool // +0x0 (0x1)
	let isEmailUpdatesEnabled : Bool // +0x6f635f5f (0x1)
	let message : String? // +0x0 (0x10)
	let phoneNumber : String? // +0x45545f5f (0x10)
	let passcode : String? // +0x0 (0x10)

	// Swift methods
	0x3f600  class func FMIPLostModeAction.__allocating_init(device:message:phoneNumber:passcode:trackingEnabled:emailUpdatesEnabled:) // init 
 }

 class FMIPCore.FMIPReverseGeocodingOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let request : FMIPReverseGeocodingRequest // +0x8 (0x18)
	let completion : (_:_:) // +0x20 (0x10)
	var _isFinished : Bool // +0x30 (0x1)

	// ObjC -> Swift bridged methods
	0x3fb70  @objc FMIPReverseGeocodingOperation.isFinished <stripped>
	0x3fb90  @objc FMIPReverseGeocodingOperation.setFinished: <stripped>
	0x3fc50  @objc FMIPReverseGeocodingOperation.isAsynchronous <stripped>
	0x3fc70  @objc FMIPReverseGeocodingOperation.main <stripped>
	0x40710  @objc FMIPReverseGeocodingOperation.start <stripped>
	0x40740  @objc FMIPReverseGeocodingOperation.init <stripped>
	0x407c0  @objc FMIPReverseGeocodingOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class FMIPCore.FMIPLockRequest : FMIPBaseRequest {

	// Properties
	let action : FMIPLockAction // +0x808e0 (0x8)

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
	let authToken : String // +0x0 (0x10)
	let context : FMIPValidatePasswordContext // +0x0 (0x1)
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
	let action : FMIPLostModeAction // +0x73635f5f (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPServerInteractionController : type metadata for FMNServerInteractionController /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking {

	// Properties
	let authenticationProvider : FMNAuthenticationProvider // +0x48 (0x8)
	let serverInteractionQueue : OS_dispatch_queue // +0x50 (0x8)
	var delegate : FMIPServerInteractionControllerDelegate // +0x58 (0x10)
	var serverContext : [String : Any]? // +0x68 (0x8)
	var lastActiveTimestamp : Date // +0x67 (0x0)
	var networkInitializationCompleted : Bool // +0x45545f5f (0x1)

	// Swift methods
	0x48150  func <stripped> // method 
	0x48590  func <stripped> // method 
	0x486f0  func <stripped> // method 
	0x48830  func <stripped> // method 
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

 class FMIPCore.FMIPLocationController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let locationManager : CLLocationManager // +0x8 (0x8)
	var delegate : FMIPLocationControllerDelegate // +0x10 (0x10)
	let locationUpdatingQueue : OS_dispatch_queue // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x4c540  @objc FMIPLocationController.init <stripped>
	0x4c560  @objc FMIPLocationController.locationManager:didFailWithError: <stripped>
	0x4c710  @objc FMIPLocationController.locationManager:didChangeAuthorizationStatus: <stripped>
	0x4c950  @objc FMIPLocationController.locationManager:didUpdateLocations: <stripped>
	0x4ca50  @objc FMIPLocationController..cxx_destruct <stripped>

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

 class FMIPCore.FMIPPlaySoundRequest : FMIPBaseRequest {

	// Properties
	let device : FMIPDevice // +0x0 (0x0)
	let channels : FMIPPlaySoundChannels // +0x879a0 (0x8)
	let safetyWarningConfirmed : Bool // +0x7467 (0x1)

	// Swift methods
	0x4dfc0  func <stripped> // getter 
 }

 class FMIPCore.FMIPRefreshingController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPRefreshingControllerDelegate // +0x10 (0x10)
	var selectedDevice : FMIPDevice? // +0x879a0 (0x0)
	let serverInteractionController : FMIPServerInteractionController // +0x0 (0x8)
	let apsConnectionHandler : FMAPSConnectionHandler // +0x2 (0x8)
	let refreshQueue : OS_dispatch_queue // +0x0 (0x8)
	var tapContexts : [[AnyHashable : Any]] // +0x77735f5f (0x8)
	var callbackInterval : Double // +0x7079745f (0x8)
	var minCallbackInterval : Double // +0x45545f5f (0x8)
	var maxCallbackInterval : Double // +0x0 (0x8)
	var lastRefreshTime : Date? // +0x8ee08 (0x0)
	var refreshTimer : NSTimer? // +0x1e66 (0x8)
	var isRefreshing : Bool // +0x8ee08 (0x1)

	// ObjC -> Swift bridged methods
	0x50660  @objc FMIPRefreshingController.refreshTimerFired <stripped>

	// Swift methods
	0x4f680  func <stripped> // method 
	0x4fa60  func <stripped> // method 
	0x502e0  func <stripped> // method 
	0x50e70  func <stripped> // method 
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
	let action : FMIPRemoveDeviceAction // +0x0 (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPLockResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPRefreshClientRequest : FMIPBaseRequest {

	// Properties
	let selectedDevice : FMIPDevice? // +0x0 (0x0)
	let tapContext : [[AnyHashable : Any]]? // +0x0 (0x8)
	let notificationAuthStatus : UNAuthorizationStatus // +0x77735f5f (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPRemoveDeviceAction : FMIPDeviceAction { }

 class FMIPCore.IconTextAttachment : NSTextAttachment /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x659d0  @objc IconTextAttachment.attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex: <stripped>
	0x65bd0  @objc IconTextAttachment.initWithData:ofType: <stripped>
	0x65c80  @objc IconTextAttachment.initWithCoder: <stripped>
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
	var lastRefreshTime : Date? // +0x90c70 (0x0)
	var refreshTimer : NSTimer? // +0x64 (0x8)
	var isRefreshing : Bool // +0x90c70 (0x1)

	// ObjC -> Swift bridged methods
	0x6fb10  @objc FMIPBeaconRefreshingController.handleBeaconsChanged <stripped>

	// Swift methods
	0x6d640  func <stripped> // method 
	0x6d870  func <stripped> // method 
	0x6dd00  func <stripped> // method 
	0x6ea80  func <stripped> // method 
	0x6f930  func <stripped> // method 
 }

 class FMIPCore.FMIPBaseResponse : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serverContext : [String : Any]? // +0x10 (0x8)
	let userInfo : FMIPUserInfoResponseFragment? // +0x18 (0x8)
	let alert : FMIPAlert? // +0x20 (0x8)
	let shouldTriggerLastLocationPrompt : Bool // +0x28 (0x1)
	let statusCode : Int // +0x30 (0x8)

	// Swift methods
	0x73fd0  class func <stripped> // init 
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
	let action : FMIPNotifyAction // +0x0 (0x8)

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
	let cancelButtonLabel : String? // +0x0 (0x10)
	let cancelButtonURL : URL? // +0x77735f5f (0x0)
	let type : FMIPAlertType // +0x6665725f (0x1)

	// Swift methods
	0x7e3e0  class func FMIPAlert.__allocating_init(from:) // init 
	0x7d830  class func FMIPAlert.__allocating_init(title:message:okButtonLabel:okButtonURL:cancelButtonLabel:cancelButtonURL:type:) // init 
	0x7eaa0  func FMIPAlert.debugDescription.getter // getter 
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
