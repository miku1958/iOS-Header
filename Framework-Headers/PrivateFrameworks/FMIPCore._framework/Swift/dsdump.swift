 protocol FMIPCore.FMIPManagerDelegate // 17 requirements
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
 protocol FMIPCore.FMIPInteractionControllerDelegate // 3 requirements
 {
	// method
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
 protocol FMIPCore.FMIPDataManagerDelegate // 2 requirements
 {
	// method
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
 protocol FMIPCore.FMIPAnyProductInformation // 7 requirements
 {
	// class init
	// getter
	// getter
	// getter
	// getter
	// getter
	// getter
 }
 protocol FMIPCore.FMIPProductInformation // 4 requirements
 {
	// class base protocol
	// class base protocol
	// class base protocol
	// class base protocol
 }
 protocol FMIPCore.FMIPManagerSiriDelegate // 3 requirements
 {
	// method
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
 protocol FMIPCore.FMIPBeaconRefreshingControllerDelegate // 4 requirements
 {
	// method
	// method
	// method
	// method
 }

 struct __C_Synthesized.CommandError {

	// Properties
	let _nsError : NSError
 }

 enum __C.UNAuthorizationStatus { }

 enum __C.PlaySoundContext { }

 enum __C.IgnoreTrackingUntil { }

 enum __C.BeaconTaskState { }

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

 enum __C.Code { }

 class FMIPCore.FMIPConnectAction : FMIPItemAction { }

 class FMIPCore.FMIPDisconnectAction : FMIPItemAction { }

 class FMIPCore.FMIPItemAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let item : FMIPItem // +0xfeedfacf (0x0)

	// Swift methods
	0x4ed0  class func FMIPItemAction.__allocating_init(item:) // init 
 }

 struct FMIPCore.FMIPItemRole {

	// Properties
	let identifier : Int // +0x0
	let emoji : String // +0x8
	let name : String // +0x18
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case identifier  
	case emoji  
	case name  
 }

 enum FMIPCore.FMIPProductType {

	// Properties
	case hawkeye : FMIPHawkeyeProductInformation
 }

 enum FMIPCore.RawType {

	// Properties
	case hawkeye  
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case type  
	case productInformation  
 }

 class FMIPCore.FMIPEphemeralAuthenticationController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let authenticationController : FMIPEphemeralAuthenticator
	let action : FMIPDeviceAction
	let username : String
	let authenticationContext : AKAppleIDAuthenticationContext
	var authenticationResults : [String : Any]?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7dc400036f68 (0x5c400036f68) in binary!
	0x7db0  @objc FMIPEphemeralAuthenticationController.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff99098  @objc FMIPEphemeralAuthenticationController.(null) <stripped>

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

 class FMIPCore.FMIPConnectionManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var ownerSession : SPOwnerSession
	let pendingCommandFuturesUpdateQueue : OS_dispatch_queue
	var pendingCommandFutures : [FMFuture<SPBeacon>]
	var keepAliveTimer : weak OS_dispatch_source_timer?

	// Swift methods
	0xb180  func <stripped> // method 
	0xc0f0  func <stripped> // method 
	0xcc00  func <stripped> // method 
 }

 class FMIPCore.FMIPRemoveResponse : FMIPDeviceContainingResponse { }

 struct FMIPCore.FMIPEraseMetadata {

	// Properties
	let status : FMIPActionStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ³»
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
	case onNeckSafetyWarning  
	case onHeadSafetyWarning  
	case onTableTopSafetyWarning  
	case carryingCaseClosedWarning  
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
	0x104e0  func <stripped> // method 
	0x11080  func <stripped> // method 
	0x11220  func <stripped> // method 
	0x113c0  func <stripped> // method 
	0x11560  func <stripped> // method 
	0x11700  func <stripped> // method 
	0x11c20  func <stripped> // method 
	0x13020  func <stripped> // method 
	0x13e00  func <stripped> // method 
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
	let whenLocationFound : Bool

	// Swift methods
	0x19560  class func FMIPNotifyAction.__allocating_init(device:whenLocationFound:) // init 
 }

 enum FMIPCore.FMIPNotifyItemActionType {

	// Properties
	case whenFound  
 }

 class FMIPCore.FMIPNotifyItemAction : FMIPItemAction {

	// Properties
	let state : Bool
	let type : FMIPNotifyItemActionType

	// Swift methods
	0x197c0  class func FMIPNotifyItemAction.__allocating_init(item:type:state:) // init 
	0x19850  func FMIPNotifyItemAction.debugState() // method 
 }

 class FMIPCore.FMIPDeviceContainingResponse : FMIPBaseResponse {

	// Properties
	let devices : FMIPDevice

	// Swift methods
 }

 struct FMIPCore.FMIPUnknownItemUTMetadata {

	// Properties
	let modelName : String?
	let manufacturerName : String?
	let learnMoreInfo : FMIPUnknownItemProductMetadata
	let disableInfo : FMIPUnknownItemProductMetadata
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case modelName  
	case manufacturerName  
	case learnMoreInfo  
	case disableInfo  
 }

 class FMIPCore.FMIPBaseRequest {
 class FMIPCore.FMIPPlaySoundDeviceAction : FMIPDeviceAction {

	// Properties
	let channels : FMIPPlaySoundChannels // +0x45545f5f (0x8)
	let safetyWarningConfirmed : Bool // +0x0 (0x1)

	// Swift methods
	0x1f4e0  class func FMIPPlaySoundDeviceAction.__allocating_init(device:channels:safetyWarningConfirmed:) // init 
 }

 class FMIPCore.FMIPFetchEncryptedPayloadAction : FMIPUTItemAction { }

 class FMIPCore.FMIPIgnoreItemAction : FMIPUTItemAction {

	// Properties
	let until : IgnoreTrackingUntil // +0xd590a (0x8)

	// Swift methods
	0x1f680  class func FMIPIgnoreItemAction.__allocating_init(unknownItem:until:) // init 
 }

 class FMIPCore.FMIPStopUTSoundAction : FMIPUTItemAction { }

 class FMIPCore.FMIPPlayUTSoundAction : FMIPUTItemAction {

	// Properties
	let context : PlaySoundContext

	// Swift methods
	0x1f780  class func FMIPPlayUTSoundAction.__allocating_init(unknownItem:context:) // init 
 }

 class FMIPCore.FMIPUTItemAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let unknownItem : FMIPUnknownItem

	// Swift methods
	0x1f880  class func FMIPUTItemAction.__allocating_init(unknownItem:) // init 
 }

 class FMIPCore.FMIPPlaySoundItemAction : FMIPItemAction {

	// Properties
	let context : PlaySoundContext
WARNING: couldn't find address 0x0 (0x0) in binary!
	var uuid : ¿¼

	// Swift methods
	0x1fb10  class func FMIPPlaySoundItemAction.__allocating_init(item:context:) // init 
 }

 class FMIPCore.FMIPDeviceAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let device : FMIPDevice // +0xd7bda (0x0)
	var authenticationContext : AKAppleIDAuthenticationContext? // +0x0 (0x8)
	var trustedDeviceConfirmation : (_:_:_:)? // +0x74735f5f (0x10)
	var dsid : String? // +0x0 (0x10)
	var username : String? // +0x45545f5f (0x10)
	var oneTimeToken : String? // +0x0 (0x10)
	var escrowUUID : String? // +0xd7bda (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var recoverySession : ¸ // +0x81c (0x10)

	// Swift methods
	0x203f0  func FMIPDeviceAction.isPasswordRequired.getter // getter 
	0x20400  func FMIPDeviceAction.authenticationContext.getter // getter 
	0x20440  func FMIPDeviceAction.authenticationContext.setter // setter 
	0x20490  func FMIPDeviceAction.authenticationContext.modify // modifyCoroutine 
	0x204e0  func FMIPDeviceAction.trustedDeviceConfirmation.getter // getter 
	0x20530  func FMIPDeviceAction.trustedDeviceConfirmation.setter // setter 
	0x205b0  func FMIPDeviceAction.trustedDeviceConfirmation.modify // modifyCoroutine 
	0x205f0  func FMIPDeviceAction.isTrustedDeviceVerificationRequired.getter // getter 
	0x20620  class func FMIPDeviceAction.__allocating_init(device:) // init 
 }

 class FMIPCore.FMIPCancelEraseAction : FMIPDeviceAction { }

 class FMIPCore.FMIPEraseRequest {
 class FMIPCore.FMIPGetURLInfoResponse : FMIPBaseResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : Ã¸ // +0x74735f5f (0x0)

	// Swift methods
 }

 enum FMIPCore.FMIPGetURLInfoCodingKeys {

	// Properties
	case url  
 }

 class FMIPCore.FMIPDisableTagSafetyAlertAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let disabled : Bool

	// Swift methods
	0x22290  class func FMIPDisableTagSafetyAlertAction.__allocating_init(disabled:) // init 
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

 class FMIPCore.FMIPFirmwareUpdateAction : FMIPItemAction {

	// Properties
	let updateInitiated : Bool // +0x65706c65 (0x1)

	// Swift methods
	0x25540  class func FMIPFirmwareUpdateAction.__allocating_init(item:updateInitiated:) // init 
 }

 struct FMIPCore.FMIPLockMetadata {

	// Properties
	let status : FMIPActionStatus
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ³»
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
	0x27480  class func FMLocationShiftingRequest.__allocating_init(identifier:location:) // init 
 }

 class FMIPCore.FMLocationShifter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let shifter : GEOLocationShifter
	let shiftingQueue : OS_dispatch_queue
	let processingQueue : OS_dispatch_queue

	// Swift methods
	0x27530  class func FMLocationShifter.__allocating_init() // init 
	0x277b0  func FMLocationShifter.shift(requests:completion:) // method 
 }

 class FMIPCore.FMIPEraseAction : FMIPDeviceAction {

	// Properties
	let isUserTextEnabled : Bool // +0x45545f5f (0x1)
	let message : String? // +0x0 (0x10)
	let passcode : String? // +0xd83f8 (0x10)
	let phoneNumber : String? // +0xd94 (0x10)

	// Swift methods
	0x2a290  class func FMIPEraseAction.__allocating_init(device:message:phoneNumber:passcode:) // init 
 }

 class FMIPCore.FMIPDemoDataGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let maximumLocationAge : Double
	let maximumLocatingAge : Double
	let mutabilityFactor : Double

	// Swift methods
 }

 enum FMIPCore.FMIPItemActionStatus {

	// Properties
	case error  
	case unknown  
	case success  
	case pending  
	case failed  
 }

 enum FMIPCore.FMIPItemActionControllerError {

	// Properties
	case invalidIdentifier  
	case invalidShareIdentifier  
	case removeFailed  
	case inRangeRemoveFailed  
	case enableLostModeFailed  
	case playSoundFailed  
	case unknownAction  
	case beaconNotFound  
	case stopSharingFailed  
	case tagInUseRemoveFailed  
	case fetchPayloadFailed  
 }

 class FMIPCore.FMIPItemActionsController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let beaconManager : SPBeaconManager
	let ownerSession : SPOwnerSession
	let connectionManager : FMIPConnectionManager
	var $__lazy_storage_$_pairingManager : SPPairingManager?
	let pendingCommandFuturesUpdateQueue : OS_dispatch_queue
	var pendingCommandFutures : [FMFuture<SPBeacon>]

	// Swift methods
	0x2cec0  func <stripped> // getter 
	0x2ddd0  func <stripped> // method 
	0x2e2a0  func <stripped> // method 
	0x2ef80  func <stripped> // method 
	0x2f630  func <stripped> // method 
	0x308a0  func <stripped> // method 
	0x31a00  func <stripped> // method 
	0x31b40  func <stripped> // method 
	0x323a0  func <stripped> // method 
 }

 enum FMIPCore.FMIPURLAction {

	// Properties
	case lostMode  
	case playSound  
	case unknown  
	case selectDevice  
	case showActions  
	case showAllDevices  
	case selectItem  
	case lowBattery  
	case localnotifywhenfound  
	case notify  
	case showAllItems  
 }

 class FMIPCore.FMIPURLHandler : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let interactionController : FMIPInteractionController

	// Swift methods
	0x34fb0  func <stripped> // method 
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
	var stopRefreshTimestamp : ±¸ // +0x0 (0x0)
	var isRefreshing : Bool // +0x0 (0x1)
	var itemActionsController : FMIPItemActionsController // +0x0 (0x8)
	var isUTAppAlertDisabled : Bool // +0x0 (0x1)
	var selectedDevice : FMIPDevice // +0x80000400 (0x0)
	var isInitialized : Bool // +0x0 (0x1)

	// Swift methods
	0x37c50  func FMIPManager.delegate.getter // getter 
	0x37c80  func FMIPManager.delegate.setter // setter 
	0x37ce0  func FMIPManager.delegate.modify // modifyCoroutine 
	0x37db0  func FMIPManager.siriDelegate.getter // getter 
	0x37de0  func FMIPManager.siriDelegate.setter // setter 
	0x37e30  func FMIPManager.siriDelegate.modify // modifyCoroutine 
	0x37f00  func FMIPManager.devices.getter // getter 
	0x37f20  func FMIPManager.owner.getter // getter 
	0x37fc0  func FMIPManager.familyMembers.getter // getter 
	0x37fe0  func FMIPManager.items.getter // getter 
	0x38000  func FMIPManager.unknownItems.getter // getter 
	0x38080  func FMIPManager.isUTAppAlertDisabled.getter // getter 
	0x380b0  func FMIPManager.isUTAppAlertDisabled.setter // setter 
	0x380f0  func FMIPManager.isUTAppAlertDisabled.modify // modifyCoroutine 
	0x38140  func FMIPManager.selectedDevice.getter // getter 
	0x38180  func FMIPManager.selectedDevice.setter // setter 
	0x38270  func FMIPManager.selectedDevice.modify // modifyCoroutine 
	0x38410  func FMIPManager.isInitialized.getter // getter 
	0x38440  func <stripped> // setter 
	0x38620  class func FMIPManager.__allocating_init(authenticationUIProvider:) // init 
	0x395c0  func FMIPManager.initialize() // method 
	0x39d40  func FMIPManager.startRefreshing() // method 
	0x3a250  func FMIPManager.forceStartRefreshing() // method 
	0x3a460  func FMIPManager.stopRefreshing() // method 
	0x3a660  func FMIPManager.updateLastActiveTimestamp() // method 
	0x3a6a0  func FMIPManager.refresh() // method 
	0x3a820  func FMIPManager.refreshBeacons(completion:) // method 
	0x3a860  func FMIPManager.refreshUnknownBeacons(completion:) // method 
	0x3aa00  func FMIPManager.perform(action:completion:) // method 
	0x3b470  func FMIPManager.perform(action:completion:) // method 
	0x3b6b0  func FMIPManager.perform(action:completion:) // method 
	0x3baf0  func FMIPManager.perform(action:completion:) // method 
	0x3bcc0  func FMIPManager.unknownBeacons(for:completion:) // method 
	0x3be10  func FMIPManager.perform(action:completion:) // method 
	0x3c360  func FMIPManager.perform(action:completion:) // method 
	0x3c540  func FMIPManager.updateLastLocationStatus(enabled:) // method 
	0x3cc40  func <stripped> // method 
	0x3ce50  func FMIPManager.handle(url:completion:) // method 
	0x3cfe0  func <stripped> // method 
	0x3d990  func <stripped> // method 
	0x3e650  func <stripped> // method 
	0x3f010  func <stripped> // method 
	0x3fe00  func FMIPManager.debugDescription.getter // getter 
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
	var items : FMIPItem
	var unknownItems : FMIPUnknownItem
	var itemsCache : FMDiskIO
	var devicesCache : FMDiskIO
	var familyCache : FMDiskIO
	var ownerCache : FMDiskIO
	let geocodingCache : FMIPReverseGeocodingCache
	let updateQueue : OS_dispatch_queue

	// Swift methods
	0x51270  func <stripped> // method 
	0x51430  func <stripped> // method 
	0x51700  func <stripped> // method 
	0x518a0  func <stripped> // method 
	0x52580  func <stripped> // method 
	0x527e0  func <stripped> // method 
	0x52f80  func <stripped> // method 
	0x54480  func <stripped> // method 
 }

 class FMIPCore.FMIPDemoDataInjector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let dataSource : FMIPDemoDataSource // +0x10 (0x8)
	var hostDevice : FMIPDevice // +0x0 (0x0)

	// Swift methods
	0x63ca0  func <stripped> // method 
	0x63d10  func <stripped> // method 
	0x63d30  func <stripped> // method 
	0x640c0  func <stripped> // method 
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
	let deviceColor : Override // +0x0
	let rawDeviceModel : Override // +0x10
	let modelDisplayName : Override // +0x20
	let deviceClass : Override // +0x30
	let deviceModel : Override // +0x40
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

 enum FMIPCore.Override {

	// Properties
	case some : (value: A)
	case missing  
 }

 class FMIPCore.FMIPVerifyTrustedStateRequest {
 class FMIPCore.FMIPLockAction : FMIPDeviceAction {

	// Properties
	let isSoundEnabled : Bool // +0x73635f5f (0x1)
	let isUserTextEnabled : Bool // +0x0 (0x1)
	let message : String? // +0x0 (0x10)
	let passcode : String? // +0x0 (0x10)

	// Swift methods
	0x68a60  class func FMIPLockAction.__allocating_init(device:message:passcode:) // init 
 }

 class FMIPCore.FMIPEraseResponse : FMIPDeviceContainingResponse { }

 struct FMIPCore.FMIPItemType {

	// Properties
	let rawValue : Int // +0x0
 }

 struct FMIPCore.FMIPUnknownItem {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let identifier : e¼
	let handle : String?
	let isIgnored : Bool
	let locations : FMIPLocation
	let productType : FMIPProductType
	let utMetadata : FMIPUnknownItemUTMetadata
	let unknownBeacon : SPUnknownBeacon?
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case identifier  
	case locations  
	case handle  
	case isIgnored  
	case productType  
	case utMetadata  
	case unknownBeacon  
 }

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
WARNING: couldn't find address 0x7d8400037330 (0x58400037330) in binary!
	0x38000000c  @objc FMIPGarbageCollector.(null) <stripped>

	// Swift methods
	0x741e0  func <stripped> // method 
	0x74b30  func <stripped> // method 
	0x75130  func <stripped> // method 
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
WARNING: couldn't find address 0x7d6c00036f08 (0x56c00036f08) in binary!
	0x7d68  @objc FMAPSConnectionHandler.(null) <stripped>
WARNING: couldn't find address 0x7d5400036da8 (0x55400036da8) in binary!
	0x38000000c  @objc FMAPSConnectionHandler.(null) <stripped>
WARNING: couldn't find address 0x8a8a00036d58 (0x28a00036d58) in binary!
	0x76f0  @objc FMAPSConnectionHandler.(null) <stripped>

	// Swift methods
	0x763f0  func <stripped> // method 
	0x764e0  func <stripped> // method 
 }

 class FMIPCore.FMIPLostModeAction : FMIPDeviceAction {

	// Properties
	let isLostModeEnabled : Bool
	let isSoundEnabled : Bool
	let isTrackingEnabled : Bool
	let isUserTextEnabled : Bool
	let isEmailUpdatesEnabled : Bool
	let message : String?
	let phoneNumber : String?
	let passcode : String?

	// Swift methods
	0x78280  class func FMIPLostModeAction.__allocating_init(device:message:phoneNumber:passcode:trackingEnabled:emailUpdatesEnabled:) // init 
 }

 class FMIPCore.FMIPLostModeItemAction : FMIPItemAction {

	// Properties
	let isTrackingEnabled : Bool
	let isUserTextEnabled : Bool
	let isEmailUpdatesEnabled : Bool
	let message : String?
	let phoneNumber : String?

	// Swift methods
	0x785e0  class func FMIPLostModeItemAction.__allocating_init(item:message:phoneNumber:trackingEnabled:emailUpdatesEnabled:) // init 
 }

 class FMIPCore.FMIPReverseGeocodingOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let request : FMIPReverseGeocodingRequest // +0x8 (0x18)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let completion :  first-element-marker  // +0x20 (0x10)
	var _isFinished : Bool // +0x30 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x720400036d58 (0x20400036d58) in binary!
	0x7cf5  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x71ec00036d38 (0x1ec00036d38) in binary!
	0x7ce8  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x7cdc000372c0 (0x4dc000372c0) in binary!
	0x7cd8  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x7cc400036d18 (0x4c400036d18) in binary!
	0x58000000c  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x7cb400036e58 (0x4b400036e58) in binary!
	0x89ee  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x89f000036cc0 (0x1f000036cc0) in binary!
	0x89d6  @objc FMIPReverseGeocodingOperation.(null) <stripped>
WARNING: couldn't find address 0x7c7c00036cd0 (0x47c00036cd0) in binary!
	0x18000000c  @objc FMIPReverseGeocodingOperation.(null) <stripped>

	// Swift methods
 }

 struct FMIPCore.FMIPItemLostModeMetadata {

	// Properties
	let ownerNumber : String
	let message : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let timestamp : ³»
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case ownerNumber  
	case message  
	case timestamp  
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

 struct FMIPCore.FMItemCapabilities {

	// Properties
	let rawValue : Int // +0x0
 }

 struct FMIPCore.FMIPItemState {

	// Properties
	let rawValue : Int // +0x0
 }

 enum FMIPCore.FMIPItemBatteryStatus {

	// Properties
	case unknown  
	case highPower  
	case fresh  
	case earlyLife  
	case lateLife  
	case replace  
	case dead  
 }

 struct FMIPCore.FMIPItem {

	// Properties
	let address : FMIPAddress
	let batteryStatus : FMIPItemBatteryStatus
	let capabilities : FMItemCapabilities
	let crowdSourcedLocation : FMIPLocation
	let identifier : String
	let location : FMIPLocation
	let lostMetadata : FMIPItemLostModeMetadata
	let name : String
	let owner : String
	let role : FMIPItemRole
	let serialNumber : String
	let state : FMIPItemState
	let systemVersion : String
	let productType : FMIPProductType
	let isFirmwareUpdateMandatory : Bool
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case address  
	case batteryStatus  
	case capabilities  
	case crowdSourcedLocation  
	case identifier  
	case location  
	case lostModeMetadata  
	case name  
	case nearbyPeople  
	case owner  
	case role  
	case serialNumber  
	case shares  
	case systemVersion  
	case productType  
	case isFirmwareUpdateMandatory  
 }

 struct FMIPCore.FMIPHawkeyeProductInformation {

	// Properties
	let vendorIdentifier : Int
	let productIdentifier : Int
	let modelName : String
	let manufacturerName : String
	let appBundleIdentifier : String?
	let antennaPower : Double
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultHeroIcon : ¹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultHeroIcon2x : ¹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultHeroIcon3x : ¹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultListIcon : ¹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultListIcon2x : ¹
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultListIcon3x : ¹
 }

 enum FMIPCore.AssetScale {

	// Properties
	case x1  
	case x2  
	case x3  
 }

 enum FMIPCore.AssetType {

	// Properties
	case list  
	case hero  
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case vendorIdentifier  
	case productIdentifier  
	case modelName  
	case manufacturerName  
	case appBundleIdentifier  
	case antennaPower  
	case defaultHeroIcon  
	case defaultHeroIcon2x  
	case defaultHeroIcon3x  
	case defaultListIcon  
	case defaultListIcon2x  
	case defaultListIcon3x  
 }

 class FMIPCore.FMIPDemoContent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let familyMembers : FMIPDemoFamilyMember // +0x10 (0x8)
	let devices : FMIPDemoDeviceTemplate // +0x18 (0x8)

	// Swift methods
	0x8b5f0  class func FMIPDemoContent.__allocating_init(from:) // init 
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

 struct FMIPCore.FMIPUnknownItemProductMetadata {

	// Properties
	let title : String?
	let moreDescriptionBulletPoints : [String]
	let heatzonePercentX : Double?
	let heatzonePercentY : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let image : Ã¸
 }

 enum FMIPCore.CodingKeys {

	// Properties
	case title  
	case moreDescriptionBulletPoints  
	case heatzonePercentX  
	case heatzonePercentY  
	case image  
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
	case isEraseAfterLockSupported  
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
 enum FMIPCore.FMIPConfigValue {

	// Properties
	case itemsTabEnabled  
	case itemLearnMoreURL  
 }

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
	let timestamp : ³»
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
WARNING: couldn't find address 0x7cb400036e58 (0x4b400036e58) in binary!
	0x89ee  @objc FMIPLocationController.(null) <stripped>
WARNING: couldn't find address 0x89f000036cc0 (0x1f000036cc0) in binary!
	0x89d6  @objc FMIPLocationController.(null) <stripped>
WARNING: couldn't find address 0x7c7c00036cd0 (0x47c00036cd0) in binary!
	0x18000000c  @objc FMIPLocationController.(null) <stripped>
WARNING: couldn't find address 0x7c64000373c8 (0x464000373c8) in binary!
	0x38000000c  @objc FMIPLocationController.(null) <stripped>
WARNING: couldn't find address 0x9b4c000374a0 (0x34c000374a0) in binary!
	0x9b9d  @objc FMIPLocationController.(null) <stripped>

	// Swift methods
 }

 class FMIPCore.FMIPPerRecipientAction : FMIPItemAction {

	// Properties
	let recipients : [String] // +0x0 (0x8)

	// Swift methods
	0x9d7f0  class func FMIPPerRecipientAction.__allocating_init(item:recipients:) // init 
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
	let interactionController : FMIPInteractionController // +0x77735f5f (0x28)
	let apsConnectionHandler : FMAPSConnectionHandler // +0x6569665f (0x8)
	let refreshQueue : OS_dispatch_queue // +0x45545f5f (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tapContexts :  empty-list  // +0x0 (0x8)
	var callbackInterval : Double // +0xf1c48 (0x8)
	var minCallbackInterval : Double // +0x2f64 (0x8)
	var maxCallbackInterval : Double // +0xf1c48 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastRefreshTime : ±¸ // +0x0 (0x0)
	var refreshTimer : NSTimer? // +0x0 (0x8)
	var isRefreshing : Bool // +0x0 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c64000373c8 (0x464000373c8) in binary!
	0x38000000c  @objc FMIPRefreshingController.(null) <stripped>

	// Swift methods
	0x9fa00  func <stripped> // method 
	0x9fba0  func <stripped> // method 
	0xa0400  func <stripped> // method 
	0xa10b0  func <stripped> // method 
 }

 class FMIPCore.FMIPLostModeResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPNotifyResponse : FMIPDeviceContainingResponse { }

 class FMIPCore.FMIPDemoDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var state : FMIPDemoDataState
	let demoContent : FMIPDemoContent
	let demoStateGenerator : FMIPDemoDataGenerator

	// Swift methods
	0xa3370  func <stripped> // method 
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
	let lostTimestamp : ±¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	let lockedTimestamp : ±¸
WARNING: couldn't find address 0x0 (0x0) in binary!
	let wipedTimestamp : ±¸
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

 class FMIPCore.FMIPRemoveItemAction : FMIPItemAction {

	// Properties
	var forced : Bool

	// Swift methods
	0xb8640  func FMIPRemoveItemAction.forced.getter // getter 
	0xb8670  func FMIPRemoveItemAction.forced.setter // setter 
	0xb86b0  func FMIPRemoveItemAction.forced.modify // modifyCoroutine 
	0xb8700  class func FMIPRemoveItemAction.__allocating_init(item:forced:) // init 
 }

 class FMIPCore.IconTextAttachment : NSTextAttachment /System/Library/Frameworks/UIKit.framework/UIKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x9b4c000374a0 (0x34c000374a0) in binary!
	0x9b9d  @objc IconTextAttachment.(null) <stripped>
WARNING: couldn't find address 0xc0000037478 (0x40000037478) in binary!
	0x28000000c  @objc IconTextAttachment.(null) <stripped>
WARNING: couldn't find address 0x7c1c000374a8 (0x41c000374a8) in binary!
	0x7c10  @objc IconTextAttachment.(null) <stripped>
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
	0xbccc0  func <stripped> // method 
	0xbcea0  func <stripped> // method 
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
	var lastRefreshTime : ±¸ // +0x45545f5f (0x0)
	var refreshTimer : NSTimer? // +0x0 (0x8)
	var isRefreshing : Bool // +0xf4c60 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c1c000374a8 (0x41c000374a8) in binary!
	0x7c10  @objc FMIPBeaconRefreshingController.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x546002b0020  @objc FMIPBeaconRefreshingController.(null) <stripped>

	// Swift methods
	0xbe6b0  func <stripped> // method 
	0xbe9e0  func <stripped> // method 
	0xbecc0  func <stripped> // method 
	0xbff70  func <stripped> // method 
	0xc0ae0  func <stripped> // method 
	0xc1670  func <stripped> // method 
	0xc1970  func <stripped> // method 
	0xc1a10  func <stripped> // method 
	0xc1a60  func <stripped> // method 
 }

 class FMIPCore.FMIPBaseResponse : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serverContext : [String : Any]?
	let userInfo : FMIPUserInfoResponseFragment
	let alert : FMIPAlert
	let shouldTriggerLastLocationPrompt : Bool
	let statusCode : Int

	// Swift methods
	0xc33e0  class func <stripped> // init 
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

 enum FMIPCore.FMIPUTAlertCompletionType {

	// Properties
	case ignoreUntilEOD  
	case ignoreForever  
	case closedSheet  
 }

 enum FMIPCore.FMIPUTAlertSheetType {

	// Properties
	case user  
	case family  
 }

 struct FMIPCore.FMIPUTAlertEvent {

	// Properties
	var sheetType : FMIPUTAlertSheetType // +0x0
	var completionAction : FMIPUTAlertCompletionType // +0x1
	var disableItemTapped : Bool // +0x2
	var didCloseSheet : Bool // +0x3
	var playSoundCount : Int // +0x8
	var tracksCount : Int // +0x10
	var tracksElapsedTime : Double // +0x18
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
	0xc9c80  func <stripped> // method 
	0xcb3c0  func <stripped> // method 
	0xcb410  func <stripped> // method 
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
	let timestamp : ³»
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
	let okButtonURL : Ã¸ // +0x45545f5f (0x0)
	let cancelButtonLabel : String? // +0x7373615f (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cancelButtonURL : Ã¸ // +0x0 (0x0)
	let type : FMIPAlertType // +0xf7530 (0x1)

	// Swift methods
	0xd68f0  class func FMIPAlert.__allocating_init(from:) // init 
	0xd60a0  class func FMIPAlert.__allocating_init(title:message:okButtonLabel:okButtonURL:cancelButtonLabel:cancelButtonURL:type:) // init 
	0xd6f50  func FMIPAlert.debugDescription.getter // getter 
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
