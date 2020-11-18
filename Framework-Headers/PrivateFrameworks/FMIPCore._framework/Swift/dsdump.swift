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
 protocol FMIPCore.FMIPManagerSiriDelegate // 2 requirements
 {
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
	0x3380  func <stripped> // getter 
	0x34b0  func <stripped> // getter 
	0x3690  func <stripped> // method 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : #!
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
	let ownerSession : SPOwnerSession // +0x10 (0x8)
	let serverInteractionController : FMIPServerInteractionController // +0x18 (0x8)
	let mockAuthenticator : FMIPEphemeralAuthenticator // +0x20 (0x28)
	let pendingCommandFuturesUpdateQueue : OS_dispatch_queue // +0x48 (0x8)
	var pendingCommandFutures : [FMFuture<SPBeacon>] // +0x50 (0x8)

	// Swift methods
	0x89c0  func <stripped> // method 
	0xb4a0  func <stripped> // method 
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
	let devices : FMIPDevice // +0x38 (0x8)
 }

 struct FMIPCore.FMIPReverseGeocodingRequest {

	// Properties
	let identifier : String // +0x0
	let location : CLLocation // +0x10
 }

 class FMIPCore.FMIPGetURLInfoRequest : FMIPBaseRequest {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : s // +0x3 (0x0)

	// Swift methods
 }

 class FMIPCore.FMIPNotifyAction : FMIPDeviceAction {

	// Properties
	let whenLocationFound : Bool // +0x3a (0x1)

	// Swift methods
	0x11fd0  class func FMIPNotifyAction.__allocating_init(device:whenLocationFound:) // init 
 }

 class FMIPCore.FMIPDeviceContainingResponse : FMIPBaseResponse {

	// Properties
	let devices : FMIPDevice // +0x38 (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPBaseRequest : type metadata for FMNHTTPRequest /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking {

	// Properties
	let basePath : String // +0x6100085 (0x10)
	var bodyDictionary : [String : Any] // +0x19 (0x8)
	var headerDictionary : [String : String] // +0x45545f5f (0x8)
	var oneTimeToken : String? // +0x0 (0x10)
	var clientContext : [String : Any] // +0x0 (0x8)
	var serverContext : [String : Any] // +0x94000 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastActiveTimestamp : #! // +0x0 (0x0)

	// Swift methods
	0x127d0  func <stripped> // getter 
	0x12960  func <stripped> // getter 
	0x12970  func <stripped> // method 
	0x12c60  func <stripped> // method 
	0x14020  func <stripped> // method 
 }

 class FMIPCore.FMIPPlaySoundDeviceAction : FMIPDeviceAction {

	// Properties
	let channels : FMIPPlaySoundChannels // +0x94000 (0x8)
	let safetyWarningConfirmed : Bool // +0x5 (0x1)

	// Swift methods
	0x15350  class func FMIPPlaySoundDeviceAction.__allocating_init(device:channels:safetyWarningConfirmed:) // init 
 }

 class FMIPCore.FMIPDeviceAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let device : FMIPDevice // +0x22d0 (0x0)
	var authenticationContext : AKAppleIDAuthenticationContext? // +0x11 (0x8)
	var trustedDeviceConfirmation : (_:_:_:)? // +0x65745f5f (0x10)
	var dsid : String? // +0x0 (0x10)
	var username : String? // +0x45545f5f (0x10)
	var oneTimeToken : String? // +0x0 (0x10)
	var escrowUUID : String? // +0x22d0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var recoverySession :  // +0x7727a (0x10)

	// Swift methods
	0x15700  func FMIPDeviceAction.isPasswordRequired.getter // getter 
	0x15710  func FMIPDeviceAction.authenticationContext.getter // getter 
	0x15750  func FMIPDeviceAction.authenticationContext.setter // setter 
	0x157a0  func FMIPDeviceAction.authenticationContext.modify // modifyCoroutine 
	0x157f0  func FMIPDeviceAction.trustedDeviceConfirmation.getter // getter 
	0x15840  func FMIPDeviceAction.trustedDeviceConfirmation.setter // setter 
	0x158c0  func FMIPDeviceAction.trustedDeviceConfirmation.modify // modifyCoroutine 
	0x15900  func FMIPDeviceAction.isTrustedDeviceVerificationRequired.getter // getter 
	0x15930  class func FMIPDeviceAction.__allocating_init(device:) // init 
 }

 class FMIPCore.FMIPCancelEraseAction : FMIPDeviceAction { }

 class FMIPCore.FMIPEraseRequest : FMIPBaseRequest {

	// Properties
	let action : FMIPEraseAction // +0x0 (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPGetURLInfoResponse : FMIPBaseResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : í // +0x80000400 (0x0)

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
	let timestamp : #!
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case timestamp  
	case statusCode  
 }

 class FMIPCore.FMIPRefreshClientResponse : FMIPBaseResponse {

	// Properties
	let devices : FMIPDevice // +0x38 (0x8)
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
	0x1d7b0  func <stripped> // method 
 }

 class FMIPCore.FMIPEraseAction : FMIPDeviceAction {

	// Properties
	let isUserTextEnabled : Bool // +0x0 (0x1)
	let message : String? // +0x74735f5f (0x10)
	let passcode : String? // +0x0 (0x10)
	let phoneNumber : String? // +0x45545f5f (0x10)

	// Swift methods
	0x21460  class func FMIPEraseAction.__allocating_init(device:message:phoneNumber:passcode:) // init 
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
	var delegate : FMIPManagerDelegate // +0x10 (0x10)
	var siriDelegate : FMIPManagerSiriDelegate // +0x20 (0x10)
	var refreshingController : FMIPRefreshingController // +0x30 (0x8)
	var beaconRefreshingController : FMIPBeaconRefreshingController // +0x38 (0x8)
	var dataManager : FMIPDataManager // +0x40 (0x8)
	let garbageCollector : FMIPGarbageCollector // +0x48 (0x8)
	let locationController : FMIPLocationController // +0x50 (0x8)
	var serverInteractionController : FMIPServerInteractionController // +0x58 (0x8)
	var actionsController : FMIPDeviceActionsController // +0x60 (0x8)
	var ownerSession : SPOwnerSession // +0x68 (0x8)
	var ownerInterface : SPOwnerInterface // +0x70 (0x8)
	let urlHandler : FMIPURLHandler // +0x78 (0x8)
	var isUpdatingSingleDevices : Bool // +0x80 (0x1)
	let locationShifter : FMLocationShifter // +0x88 (0x8)
	let dataQueue : OS_dispatch_queue // +0x90 (0x8)
	let delegateQueue : OS_dispatch_queue // +0x98 (0x8)
	var selectedDevice : FMIPDevice // +0x80000408 (0x0)
	var isInitialized : Bool // +0x6 (0x1)

	// Swift methods
	0x24730  func FMIPManager.delegate.getter // getter 
	0x24760  func FMIPManager.delegate.setter // setter 
	0x247e0  func FMIPManager.delegate.modify // modifyCoroutine 
	0x248a0  func FMIPManager.siriDelegate.getter // getter 
	0x248d0  func FMIPManager.siriDelegate.setter // setter 
	0x24920  func FMIPManager.siriDelegate.modify // modifyCoroutine 
	0x24a00  func FMIPManager.devices.getter // getter 
	0x24a20  func FMIPManager.owner.getter // getter 
	0x24ac0  func FMIPManager.familyMembers.getter // getter 
	0x24b40  func FMIPManager.selectedDevice.getter // getter 
	0x24b80  func FMIPManager.selectedDevice.setter // setter 
	0x24c60  func FMIPManager.selectedDevice.modify // modifyCoroutine 
	0x24f20  func FMIPManager.isInitialized.getter // getter 
	0x24f50  func <stripped> // setter 
	0x25140  class func FMIPManager.__allocating_init() // init 
	0x25900  func FMIPManager.initialize() // method 
	0x287b0  func FMIPManager.startRefreshing() // method 
	0x28a60  func FMIPManager.forceStartRefreshing() // method 
	0x28c00  func FMIPManager.stopRefreshing() // method 
	0x28ce0  func FMIPManager.updateLastActiveTimestamp() // method 
	0x28d80  func FMIPManager.refresh() // method 
	0x28e60  func FMIPManager.refreshBeacons(completion:) // method 
	0x28ea0  func FMIPManager.perform(action:completion:) // method 
	0x297b0  func FMIPManager.updateLastLocationStatus(enabled:) // method 
	0x29d10  func <stripped> // method 
	0x29f30  func FMIPManager.handle(url:completion:) // method 
	0x2a050  func <stripped> // method 
	0x2abf0  func <stripped> // method 
	0x2ba00  func FMIPManager.debugDescription.getter // getter 
 }

 class FMIPCore.FMIPDataManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPDataManagerDelegate // +0x10 (0x10)
	var isCacheDataValid : Bool // +0x20 (0x1)
	var devices : FMIPDevice // +0x28 (0x8)
	var owner : FMIPPerson // +0x30 (0x48)
	var familyMembers : FMIPPerson // +0x78 (0x8)
	var crowdSourcedLocations : FMIPLocation // +0x80 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var crowdSourcedLocating :  empty-list  // +0x88 (0x8)
	var devicesCache : FMDiskIO // +0x90 (0x8)
	var familyCache : FMDiskIO // +0x98 (0x8)
	var ownerCache : FMDiskIO // +0xa0 (0x8)
	let geocodingCache : FMIPReverseGeocodingCache // +0xa8 (0x8)
	let updateQueue : OS_dispatch_queue // +0xb0 (0x8)

	// Swift methods
	0x324d0  func <stripped> // method 
	0x32660  func <stripped> // method 
	0x327d0  func <stripped> // method 
	0x32f70  func <stripped> // method 
 }

 class FMIPCore.FMIPVerifyTrustedStateRequest : FMIPBaseRequest {

	// Properties
	let device : FMIPDevice // +0x0 (0x0)

	// Swift methods
 }

 class FMIPCore.FMIPLockAction : FMIPDeviceAction {

	// Properties
	let isSoundEnabled : Bool // +0x0 (0x1)
	let isUserTextEnabled : Bool // +0x79bbc (0x1)
	let message : String? // +0xace (0x10)
	let passcode : String? // +0x79bbc (0x10)

	// Swift methods
	0x37350  class func FMIPLockAction.__allocating_init(device:message:passcode:) // init 
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
	case pairedLocation  
	case lastConnected  
	case lastConnectionMaintenance  
	case lastDisconnected  
	case nearOwner  
	case nearOwnerWildObservation  
	case peerProxied  
	case selfPublished  
	case localReductiveFilter  
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
	0x3c3b0  @objc FMIPGarbageCollector.scheduleAccountVerification <stripped>

	// Swift methods
	0x3b980  func <stripped> // method 
	0x3bfe0  func <stripped> // method 
	0x3c3e0  func <stripped> // method 
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
	0x3d240  @objc FMAPSConnectionHandler.dealloc <stripped>
	0x3d600  @objc FMAPSConnectionHandler.init <stripped>
	0x3d260  @objc FMAPSConnectionHandler..cxx_destruct <stripped>

	// Swift methods
	0x3d2f0  func <stripped> // method 
	0x3d400  func <stripped> // method 
 }

 class FMIPCore.FMIPLostModeAction : FMIPDeviceAction {

	// Properties
	let isLostModeEnabled : Bool // +0x7a690 (0x1)
	let isSoundEnabled : Bool // +0x7617 (0x1)
	let isTrackingEnabled : Bool // +0x80000400 (0x1)
	let isUserTextEnabled : Bool // +0x0 (0x1)
	let isEmailUpdatesEnabled : Bool // +0x73635f5f (0x1)
	let message : String? // +0x67 (0x10)
	let phoneNumber : String? // +0x45545f5f (0x10)
	let passcode : String? // +0x0 (0x10)

	// Swift methods
	0x3f0a0  class func FMIPLostModeAction.__allocating_init(device:message:phoneNumber:passcode:trackingEnabled:emailUpdatesEnabled:) // init 
 }

 class FMIPCore.FMIPReverseGeocodingOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let request : FMIPReverseGeocodingRequest // +0x8 (0x18)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let completion :  first-element-marker  // +0x20 (0x10)
	var _isFinished : Bool // +0x30 (0x1)

	// ObjC -> Swift bridged methods
	0x3f6b0  @objc FMIPReverseGeocodingOperation.isFinished <stripped>
	0x3f6c0  @objc FMIPReverseGeocodingOperation.setFinished: <stripped>
	0x3f770  @objc FMIPReverseGeocodingOperation.isAsynchronous <stripped>
	0x3f780  @objc FMIPReverseGeocodingOperation.main <stripped>
	0x3ffd0  @objc FMIPReverseGeocodingOperation.start <stripped>
	0x40070  @objc FMIPReverseGeocodingOperation.init <stripped>
	0x40030  @objc FMIPReverseGeocodingOperation..cxx_destruct <stripped>

	// Swift methods
 }

 class FMIPCore.FMIPLockRequest : FMIPBaseRequest {

	// Properties
	let action : FMIPLockAction // +0x7a690 (0x8)

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
	case isBluetoothRequired  
	case isStopSoundSupported  
 }

 class FMIPCore.FMIPValidatePasswordRequest : FMIPBaseRequest {

	// Properties
	let authToken : String // +0x0 (0x10)
	let context : FMIPValidatePasswordContext // +0x2 (0x1)
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
	let action : FMIPLostModeAction // +0x77735f5f (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPServerInteractionController : type metadata for FMNServerInteractionController /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let authenticationProvider : ³ // +0x48 (0x8)
	let serverInteractionQueue : OS_dispatch_queue // +0x50 (0x8)
	var delegate : FMIPServerInteractionControllerDelegate // +0x58 (0x10)
	var serverContext : [String : Any]? // +0x68 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastActiveTimestamp : #! // +0x7079745f (0x0)
	var networkInitializationCompleted : Bool // +0x45545f5f (0x1)

	// Swift methods
	0x46910  func <stripped> // method 
	0x46d00  func <stripped> // method 
	0x46e60  func <stripped> // method 
	0x46f80  func <stripped> // method 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : #!
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
	var currentLocation : FMIPLocation // +0x28 (0x18)

	// ObjC -> Swift bridged methods
	0x4a910  @objc FMIPLocationController.init <stripped>
	0x4a930  @objc FMIPLocationController.locationManager:didFailWithError: <stripped>
	0x4aa60  @objc FMIPLocationController.locationManager:didChangeAuthorizationStatus: <stripped>
	0x4ac30  @objc FMIPLocationController.locationManager:didUpdateLocations: <stripped>
	0x4acf0  @objc FMIPLocationController..cxx_destruct <stripped>

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
	let channels : FMIPPlaySoundChannels // +0x81ca8 (0x8)
	let safetyWarningConfirmed : Bool // +0x136c (0x1)

	// Swift methods
	0x4c340  func <stripped> // getter 
 }

 class FMIPCore.FMIPRefreshingController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMIPRefreshingControllerDelegate // +0x10 (0x10)
	var selectedDevice : FMIPDevice // +0x81ca8 (0x0)
	let serverInteractionController : FMIPServerInteractionController // +0x0 (0x8)
	let apsConnectionHandler : FMAPSConnectionHandler // +0x0 (0x8)
	let refreshQueue : OS_dispatch_queue // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tapContexts :  empty-list  // +0x6f635f5f (0x8)
	var callbackInterval : Double // +0x0 (0x8)
	var minCallbackInterval : Double // +0x45545f5f (0x8)
	var maxCallbackInterval : Double // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastRefreshTime :  // +0x83020 (0x0)
	var refreshTimer : NSTimer? // +0x7180 (0x8)
	var isRefreshing : Bool // +0x83020 (0x1)

	// ObjC -> Swift bridged methods
	0x4e640  @objc FMIPRefreshingController.refreshTimerFired <stripped>

	// Swift methods
	0x4d950  func <stripped> // method 
	0x4dc20  func <stripped> // method 
	0x4e350  func <stripped> // method 
	0x4ef40  func <stripped> // method 
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
	let lostTimestamp : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lockedTimestamp : 
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wipedTimestamp : 
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
	let familyMembers : FMIPPerson // +0x58 (0x8)

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
	let selectedDevice : FMIPDevice // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let tapContext :  empty-list  // +0x0 (0x8)
	let notificationAuthStatus : UNAuthorizationStatus // +0x77735f5f (0x8)

	// Swift methods
 }

 class FMIPCore.FMIPRemoveDeviceAction : FMIPDeviceAction { }

 class FMIPCore.IconTextAttachment : NSTextAttachment /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
	0x628f0  @objc IconTextAttachment.attachmentBoundsForTextContainer:proposedLineFragment:glyphPosition:characterIndex: <stripped>
	0x62a00  @objc IconTextAttachment.initWithData:ofType: <stripped>
	0x62ae0  @objc IconTextAttachment.initWithCoder: <stripped>
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
	var delegate : FMIPReverseGeocodingCacheDelegate // +0x10 (0x10)
	let processQueue : OS_dispatch_queue // +0x20 (0x8)
	var pendingRequest : FMIPReverseGeocodingRequest // +0x28 (0x8)
	var geocodingRecords : FMIPAddress // +0x30 (0x8)
	let geocodingQueue : NSOperationQueue // +0x38 (0x8)

	// Swift methods
	0x66250  func <stripped> // method 
	0x66440  func <stripped> // method 
 }

 class FMIPCore.FMSystemDirectoryUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var library : String // +0x10 (0x10)

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
	var lastRefreshTime :  // +0x8a1a0 (0x0)
	var refreshTimer : NSTimer? // +0x64 (0x8)
	var isRefreshing : Bool // +0x8a1a0 (0x1)

	// ObjC -> Swift bridged methods
	0x6b900  @objc FMIPBeaconRefreshingController.handleBeaconsChanged <stripped>

	// Swift methods
	0x697f0  func <stripped> // method 
	0x69b30  func <stripped> // method 
	0x69ea0  func <stripped> // method 
	0x6aad0  func <stripped> // method 
	0x6b680  func <stripped> // method 
	0x6b870  func <stripped> // method 
 }

 class FMIPCore.FMIPBaseResponse : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serverContext : [String : Any]? // +0x10 (0x8)
	let userInfo : FMIPUserInfoResponseFragment // +0x18 (0x8)
	let alert : FMIPAlert // +0x20 (0x8)
	let shouldTriggerLastLocationPrompt : Bool // +0x28 (0x1)
	let statusCode : Int // +0x30 (0x8)

	// Swift methods
	0x6f020  class func <stripped> // init 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : #!
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let okButtonURL : í // +0x0 (0x0)
	let cancelButtonLabel : String? // +0x0 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cancelButtonURL : í // +0x77735f5f (0x0)
	let type : FMIPAlertType // +0x6665725f (0x1)

	// Swift methods
	0x78200  class func FMIPAlert.__allocating_init(from:) // init 
	0x779b0  class func FMIPAlert.__allocating_init(title:message:okButtonLabel:okButtonURL:cancelButtonLabel:cancelButtonURL:type:) // init 
	0x78850  func FMIPAlert.debugDescription.getter // getter 
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
