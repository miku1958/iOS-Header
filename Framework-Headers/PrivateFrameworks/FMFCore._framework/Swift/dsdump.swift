 protocol FMFCore.FMFRefreshControllerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol FMFCore.FMFSystemStateControllerDelegate // 1 requirements
 {
	// method
 }
 protocol FMFCore.FMFAlertTypeDelegate // 7 requirements
 {
	// method
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol FMFCore.FMFDataUpdateDelegate // 10 requirements
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
 }
 protocol FMFCore.FMFContactsDataControllerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol FMFCore.FMFManagerDelegate // 13 requirements
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
 }
 protocol FMFCore.FMFDataManagerDelegate // 1 requirements
 {
	// method
 }
 protocol FMFCore.FMAPSConnectionHandlerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol FMFCore.FMAPSConnection // 5 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
	// method
 }
 protocol FMFCore.FMFServerInteractionControllerDelegate // 1 requirements
 {
	// method
 }
 protocol FMFCore.FMFMyLocationControllerDelegate // 1 requirements
 {
	// method
 }
 protocol FMFCore.FMFActionsControllerDelegate // 3 requirements
 {
	// method
	// method
	// method
 }
 protocol FMFCore.FMFGarbageCollectorDelegate // 1 requirements
 {
	// method
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

 class FMFCore.FMFSaveFavoritesRequest : FMFBaseRequest {

	// Properties
	let favoriteFriends : [String : Int] // +0xfeedfacf (0x8)

	// Swift methods
 }

 class FMFCore.FMNetworkUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class FMFCore.FMFInitRefreshClientResponse : FMFBaseResponse {

	// Properties
	let labels : [FMFLabel]? // +0x3 (0x8)
	let labelledLocations : [FMFLabelledLocation]? // +0x39 (0x8)
	let devices : [FMFDevice]? // +0x6100085 (0x8)
	let preferences : FMFPreferences? // +0x19 (0x20)
	let features : FMFFeatures? // +0x45545f5f (0x9)
	let myInfo : FMFMyInfo? // +0x0 (0x39)
	let config : FMFConfig? // +0x0 (0xf0)
	let locations : [FMFLocation]? // +0xea000 (0x8)
	let locatesInProgress : [FMFLocateInProgress]? // +0x0 (0x8)
	let following : [FMFIntermediateFriend]? // +0xea000 (0x8)
	let followers : [FMFIntermediateFriend]? // +0x5 (0x8)
	let futureFollowing : [FMFIntermediateFriend]? // +0x14 (0x8)
	let futureFollowers : [FMFIntermediateFriend]? // +0x65745f5f (0x8)
	let pendingOffers : [FMFIntermediateFriend]? // +0x0 (0x8)
	let locationAlertsOnMeByMe : [FMFLocationAlert]? // +0x45545f5f (0x8)
	let locationAlertsOnMeByFriends : [FMFLocationAlert]? // +0x0 (0x8)
	let locationAlertsOnFriendsByMe : [FMFLocationAlert]? // +0x1a60 (0x8)
	let locationAlertsOnFriendsByFriends : [FMFLocationAlert]? // +0xcd2c0 (0x8)
 }

 enum FMFCore.InitRefreshCodingKeys {

	// Properties
	case labels  
	case labelledLocations  
	case devices  
	case prefs  
	case features  
	case myInfo  
	case config  
	case locations  
	case locateInProgress  
	case pendingOffers  
	case following  
	case followers  
	case futureFollowing  
	case futureFollowers  
	case myFencesISet  
	case friendFencesISet  
	case myFencesOthersSet  
	case friendFencesOthersSet  
 }

 class FMFCore.FMFRefreshController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFRefreshControllerDelegate // +0x10 (0x10)
	var selectedFriend : FMFFriend? // +0x1a60 (0x0)
	var refreshReason : FMFRefreshReason? // +0x0 (0x1)
	let serverInteractionController : FMFServerInteractionController // +0x0 (0x8)
	let apsConnectionHandler : FMAPSConnectionHandler // +0x0 (0x8)
	var tapContexts : [[AnyHashable : Any]] // +0x0 (0x8)
	let refreshQueue : OS_dispatch_queue // +0x0 (0x8)
	var callbackInterval : Double // +0x0 (0x8)
	var minCallbackInterval : Double // +0x0 (0x8)
	var maxCallbackInterval : Double // +0x0 (0x8)
	var lastRefreshTime : Date // +0x0 (0x0)
	var refreshTimer : NSTimer? // +0x0 (0x8)
	var initializedOnce : Bool // +0x0 (0x1)
	var firstRefreshCompleted : Bool // +0x0 (0x1)
	var isRefreshing : Bool // +0x80000400 (0x1)

	// ObjC -> Swift bridged methods
	0x9d70  @objc FMFRefreshController.refreshTimerFired <stripped>

	// Swift methods
	0x8240  func <stripped> // setter 
	0x88a0  func <stripped> // method 
	0x8bf0  func <stripped> // method 
	0x8fc0  func <stripped> // method 
	0x9950  func <stripped> // method 
	0xa3b0  func <stripped> // method 
 }

 class FMFCore.FMLocationShiftingRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let location : CLLocation
	let identifier : String

	// Swift methods
 }

 class FMFCore.FMLocationShifter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let shifter : GEOLocationShifter
	let shiftingQueue : OS_dispatch_queue
	let processingQueue : OS_dispatch_queue

	// Swift methods
	0xc4b0  func <stripped> // method 
 }

 struct FMFCore.FMFSimpleLocation {

	// Properties
	let address : FMFAddress? // +0x0
	let location : CLLocation // +0x78
	var locateInProgress : Bool // +0x80
	let label : FMFLabel? // +0x88
	let internalLabels : [FMFLabelledLocation]? // +0xa0
	let isInaccurate : Bool // +0xa8
 }

 enum FMFCore.CodingKeys {

	// Properties
	case address  
	case longitude  
	case latitude  
	case horizontalAccuracy  
	case timestamp  
	case labels  
	case isInaccurate  
 }

 struct FMFCore.FMFIntermediateFriend {

	// Properties
	let identifier : String
	let personIdHash : String?
	let invitationFromHandles : [String]?
	let invitationAcceptedHandles : [String]?
	let invitationSentToHandle : String?
	let invitationFromHandle : String?
	let updatedAt : Date?
	let createdAt : Date?
	let shareExpires : Date?
	let optedNotToShare : Bool?
 }

 enum FMFCore.CodingKeys {

	// Properties
	case identifier  
	case personIdHash  
	case invitationFromHandles  
	case invitationAcceptedHandles  
	case invitationSentToHandle  
	case invitationFromHandle  
	case updateTimestamp  
	case createTimestamp  
	case shareExpires  
	case optedNotToShare  
 }

 class FMFCore.FMFRemoveLabelsAction : FMFBaseAction {

	// Properties
	let labels : [String] // +0x10 (0x8)

	// Swift methods
	0x16090  class func FMFRemoveLabelsAction.__allocating_init(labels:) // init 
 }

 class FMFCore.FMFShowHideLocationAction : FMFBaseAction {

	// Properties
	let hideLocation : Bool // +0x10 (0x1)

	// Swift methods
	0x16440  class func FMFShowHideLocationAction.__allocating_init(hideLocation:) // init 
 }

 class FMFCore.FMFUpdateMeDeviceAction : FMFBaseAction {

	// Properties
	let meDevice : FMFDevice // +0x10 (0x21)

	// Swift methods
	0x16700  class func FMFUpdateMeDeviceAction.__allocating_init(meDevice:) // init 
 }

 class FMFCore.FMFUpdateLocationAlertAction : FMFBaseAction {

	// Properties
	let locationAlert : FMFLocationAlert // +0x0 (0x0)

	// Swift methods
	0x16a60  class func FMFUpdateLocationAlertAction.__allocating_init(locationAlert:location:radius:address:label:triggerType:isOn:repeating:phoneNumbers:emails:schedule:ckRecordName:ckRecordZoneOwnerName:acceptanceStatus:) // init 
 }

 class FMFCore.FMFAddLocationAlertAction : FMFBaseAction {

	// Properties
	let locationAlert : FMFLocationAlert // +0x74735f5f (0x0)

	// Swift methods
	0x17cc0  class func FMFAddLocationAlertAction.__allocating_init(friendId:followerIds:emails:phoneNumbers:location:address:label:addressType:radius:locationAlertTarget:triggerType:repeating:schedule:ckRecordName:ckRecordZoneOwnerName:acceptanceStatus:) // init 
 }

 class FMFCore.FMFSystemStateController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFSystemStateControllerDelegate // +0x10 (0x10)
	let refreshSerialQueue : OS_dispatch_queue // +0x20 (0x8)
	var isFMFRestricted : Bool // +0x28 (0x1)

	// ObjC -> Swift bridged methods
	0x19ba0  @objc FMFSystemStateController.refreshFMFRestricted <stripped>

	// Swift methods
	0x19900  func <stripped> // method 
 }

 enum FMFCore.FMFShareLocationDuration {

	// Properties
	case endOfDay  
	case forever  
	case oneHour  
 }

 class FMFCore.FMFShareLocationAction : FMFBaseAction {

	// Properties
	let friendHandles : [String] // +0x10 (0x8)
	let friendId : String? // +0x18 (0x10)
	let expiry : Date? // +0x0 (0x0)

	// Swift methods
	0x1a180  class func FMFShareLocationAction.__allocating_init(handles:friendId:expiry:duration:) // init 
 }

 enum FMFCore.ArgumentsError {

	// Properties
	case missingValue : (argument: String)
	case invalidValue : (argument: String, value: String)
 }

 enum FMFCore.FMFAlertType {

	// Properties
	case saveMe  
	case networkIssue  
	case initialization  
 }

 class FMFCore.FMFAlert : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var alertTypeDelegate : FMFAlertTypeDelegate // +0x10 (0x10)
	let alertId : String? // +0x20 (0x10)
	let internalTitle : String? // +0x30 (0x10)
	let internalMessage : String? // +0x40 (0x10)
	let internalOkButtonLabel : String? // +0x50 (0x10)
	let internalCancelButtonLabel : String? // +0x60 (0x10)
	let okButtonURL : URL? // +0x0 (0x0)
	let cancelButtonURL : URL? // +0x0 (0x0)
	let alertType : FMFAlertType // +0x45545f5f (0x1)

	// Swift methods
	0x1b9d0  func FMFAlert.title.getter // getter 
	0x1bb10  func FMFAlert.message.getter // getter 
	0x1bb90  func FMFAlert.okButtonLabel.getter // getter 
	0x1bcb0  func FMFAlert.cancelButtonLabel.getter // getter 
	0x1bdd0  func FMFAlert.displayAlert.getter // getter 
	0x1c250  class func FMFAlert.__allocating_init(from:) // init 
	0x1c8a0  class func FMFAlert.__allocating_init(alertId:title:message:okButtonLabel:okButtonURL:cancelButtonLabel:cancelButtonURL:alertType:) // init 
	0x1ca50  func FMFAlert.handleOkAction(urlHandler:) // method 
	0x1cb70  func FMFAlert.handleCancelAction(urlHandler:) // method 
	0x1cc60  func FMFAlert.debugDescription.getter // getter 
 }

 enum FMFCore.CodingKeys {

	// Properties
	case alertId  
	case title  
	case message  
	case okButtonLabel  
	case okButtonURL  
	case cancelButtonLabel  
	case cancelButtonURL  
	case alertType  
 }

 struct FMFCore.FMFActionURLInfo {

	// Properties
	let actionURL : URL?
	let firstName : String?
	let lastName : String?
	let email : String?
	let triggerDate : Date?
	let currentUserId : String?
	let locationAlert : FMFLocationAlert?
 }

 class FMFCore.FMFSavePrefsRequest : FMFBaseRequest {

	// Properties
	let prefs : FMFPreferences? // +0x0 (0x20)
	let isShowHideLocation : Bool? // +0x0 (0x1)
	let meDeviceId : String? // +0x0 (0x10)

	// Swift methods
 }

 class FMFCore.FMSystemDirectoryUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var library : String // +0x10 (0x10)

	// Swift methods
 }

 struct FMFCore.FMFLocation {

	// Properties
	let identifier : String? // +0x0
	let locateInProgress : Bool // +0x10
	let simpleLocation : FMFSimpleLocation? // +0x18
 }

 enum FMFCore.CodingKeys {

	// Properties
	case identifier  
	case location  
 }

 enum FMFCore.FMFLocationAlertAddressType {

	// Properties
	case unknown  
	case currentLocation  
	case friendLocation  
	case labelledLocation  
	case addressbook  
	case custom  
	case droppedPin  
	case tool  
 }

 enum FMFCore.FMFLocationAlertTriggerType {

	// Properties
	case arriving  
	case leaving  
	case immediate  
	case scheduled  
 }

 enum FMFCore.FMFLocationAlertTarget {

	// Properties
	case alertMe  
	case alertFriends  
 }

 enum FMFCore.FMFLocationAlertAcceptanceStatus {

	// Properties
	case hidden  
	case pending  
	case accepted  
 }

 struct FMFCore.FMFLocationAlert {

	// Properties
	let identifier : String?
	let latitude : Double
	let longitude : Double
	let radius : Double
	let locationAlertTarget : FMFLocationAlertTarget
	let triggerType : FMFLocationAlertTriggerType
	let isOn : Bool
	let repeating : Bool
	let schedule : Schedule
	let ckRecordName : String?
	let ckRecordZoneOwnerName : String?
	let acceptanceStatus : FMFLocationAlertAcceptanceStatus
	let phoneNumbers : [String]?
	let emails : [String]?
	let followerIds : [String]?
	let friendId : String?
	let label : FMFLabel?
	let addressType : FMFLocationAlertAddressType
	let address : String?
	let fullAddress : FMFAddress?
	let setByMe : Bool
	let setOnMe : Bool
	let updateTimestamp : Date?
 }

 struct FMFCore.Schedule {

	// Properties
	var startHour : Int
	var startMin : Int
	var endHour : Int
	var endMin : Int
	var daysOfWeek : DaysOfWeek
	var spanDays : Int
	var timeZone : TimeZone?
 }

 struct FMFCore.DaysOfWeek {

	// Properties
	let rawValue : Int // +0x0
 }

 enum FMFCore.CodingKeys {

	// Properties
	case identifier  
	case latitude  
	case longitude  
	case radius  
	case locationAlertType  
	case triggerType  
	case isOn  
	case onetimeonly  
	case schedule  
	case ckRecordName  
	case ckRecordZoneOwnerName  
	case acceptanceStatus  
	case updateTimestamp  
	case phoneNumbers  
	case emails  
	case followerIds  
	case friendId  
	case label  
	case addressType  
	case address  
	case fullAddress  
 }

 enum FMFCore.CodingKeys {

	// Properties
	case startHour  
	case startMin  
	case endHour  
	case endMin  
	case daysOfWeek  
	case spanDays  
	case timeZone  
 }

 class FMFCore.FMFUpdatePrefsAction : FMFBaseAction {

	// Properties
	let prefs : FMFPreferences // +0x10 (0x20)

	// Swift methods
	0x396e0  class func FMFUpdatePrefsAction.__allocating_init(prefs:) // init 
 }

 struct FMFCore.FMFContact {

	// Properties
	let storeUUID : String // +0x0
	let displayName : String // +0x10
	let storeHasImage : Bool // +0x20
	let shortName : String // +0x28
 }

 enum FMFCore.CodingKeys {

	// Properties
	case storeUUID  
	case displayName  
	case storeHasImage  
	case shortName  
 }

 struct FMFCore.FMFFriend {

	// Properties
	let identifier : String
	let personIdHash : String?
	let contactHandles : Set<String>
	let shareExpires : Date?
	let relationshipType : FMFRelationshipType
	let optedNotToShare : Bool?
	let favoriteOrder : Int
	let locationAlertsOnFriend : [FMFLocationAlert]?
	let locationAlertsOnMe : [FMFLocationAlert]?
	let contact : FMFContact?
	let location : FMFLocation?
 }

 enum FMFCore.CodingKeys {

	// Properties
	case identifier  
	case personIdHash  
	case contactHandles  
	case shareExpires  
	case relationshipType  
	case optedNotToShare  
	case favoriteOrder  
	case location  
	case contact  
	case locationAlertsOnMe  
	case locationAlertsOnFriend  
 }

 struct FMFCore.FMFRelationshipType {

	// Properties
	let rawValue : Int // +0x0
 }

 class FMFCore.FMFBaseRequest : type metadata for FMNHTTPRequest /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking {

	// Properties
	var bodyDictionary : [String : Any] // +0x6 (0x8)
	var headerDictionary : [String : String] // +0x74735f5f (0x8)
	var clientContext : [String : Any] // +0x65706c65 (0x8)
	var serverContext : [String : Any] // +0x45545f5f (0x8)
	var dataContext : [String : Any] // +0x0 (0x8)
	var lastActiveTimestamp : Date // +0xcf43c (0x0)

	// Swift methods
	0x4a1c0  func <stripped> // getter 
	0x4a4b0  func <stripped> // method 
	0x4a6a0  func <stripped> // method 
	0x4b800  func <stripped> // method 
 }

 class FMFCore.FMFAddUpdateLabelAction : FMFBaseAction {

	// Properties
	let locationToLabel : FMFLocation // +0x10 (0xc1)
	let label : FMFLabel? // +0xd8 (0x12)

	// Swift methods
	0x4cd60  class func FMFAddUpdateLabelAction.__allocating_init(locationToLabel:label:) // init 
 }

 struct FMFCore.FMFFavoriteFriend {

	// Properties
	let friendIdentifier : String // +0x0
	let order : Int // +0x10
 }

 enum FMFCore.FMFGeofenceAlertsFrom {

	// Properties
	case friends  
	case everyone  
 }

 struct FMFCore.FMFPreferences {

	// Properties
	let allowFriendRequests : Bool // +0x0
	let hideLocation : Bool // +0x1
	let shouldReceiveEmails : Bool // +0x2
	let allowLocationAlertsFrom : FMFGeofenceAlertsFrom // +0x3
	let primaryEmail : String // +0x8
	let favorites : FMFFavoriteFriend // +0x18
 }

 enum FMFCore.CodingKeys {

	// Properties
	case allowFriendRequests  
	case allowLocationAlertsFrom  
	case hideLocation  
	case shouldReceiveEmails  
	case primaryEmail  
	case favorites  
 }

 enum FMFCore.CodingKeys {

	// Properties
	case friendIdentifier  
	case order  
 }

 enum FMFCore.FMFLabelSourceType {

	// Properties
	case local  
	case friend  
	case premises  
 }

 enum FMFCore.FMFLabelSaveType {

	// Properties
	case default  
	case custom  
 }

 enum FMFCore.FMFDefaultLabel {

	// Properties
	case home  
	case work  
	case school  
	case gym  
	case other  
 }

 struct FMFCore.FMFLabel {

	// Properties
	let value : String // +0x0
	let labelSourceType : FMFLabelSourceType // +0x10
	let labelSaveType : FMFLabelSaveType // +0x11
 }

 enum FMFCore.CodingKeys {

	// Properties
	case value  
	case type  
 }

 struct FMFCore.FriendCacheData {

	// Properties
	var following : [FMFIntermediateFriend] // +0x0
	var followers : [FMFIntermediateFriend] // +0x8
	var pendingFollowers : [FMFIntermediateFriend] // +0x10
	var futureFollowing : [FMFIntermediateFriend] // +0x18
	var futureFollowers : [FMFIntermediateFriend] // +0x20
	var locationAlertsOnMeByMe : [FMFLocationAlert] // +0x28
	var locationAlertsOnMeByFriends : [FMFLocationAlert] // +0x30
	var locationAlertsOnFriendsByMe : [FMFLocationAlert] // +0x38
	var locationAlertsOnFriendsByFriends : [FMFLocationAlert] // +0x40
	var preferences : FMFPreferences? // +0x48
	var features : FMFFeatures? // +0x68
	var config : FMFConfig? // +0x78
	var myInfo : FMFMyInfo? // +0x168
	var devices : [FMFDevice] // +0x1a8
	var labels : [FMFLabel] // +0x1b0
	var contacts : [String : FMFContact] // +0x1b8
 }

 enum FMFCore.CodingKeys {

	// Properties
	case following  
	case followers  
	case pendingFollowers  
	case futureFollowing  
	case futureFollowers  
	case locationAlertsOnMeByMe  
	case locationAlertsOnMeByFriends  
	case locationAlertsOnFriendsByMe  
	case locationAlertsOnFriendsByFriends  
	case preferences  
	case features  
	case config  
	case myInfo  
	case devices  
	case labels  
	case contacts  
 }

 struct FMFCore.FMFLabelledLocation {

	// Properties
	let identifier : String?
	let label : FMFLabel?
	let userId : String?
	let latitude : Double?
	let longitude : Double?
	let updatedAt : Date?
 }

 enum FMFCore.CodingKeys {

	// Properties
	case identifier  
	case label  
	case labelType  
	case userId  
	case latitude  
	case longitude  
	case updateTimestamp  
 }

 class FMFCore.FMFRemoveLocationAlertAction : FMFBaseAction {

	// Properties
	let locationAlert : FMFLocationAlert // +0xbe6 (0x0)

	// Swift methods
	0x5cea0  class func FMFRemoveLocationAlertAction.__allocating_init(locationAlert:) // init 
 }

 struct FMFCore.FMFConfig {

	// Properties
	let maxFollowers : Int // +0x0
	let maxCharLimitForInviteText : Int // +0x8
	let sessionLifeSpan : Int // +0x10
	let distanceForNearbyInMeters : Double // +0x18
	let myLocationMaxIntervalMS : Int // +0x20
	let maxInvites : Int // +0x28
	let allowMigrationV2 : Bool // +0x30
	let maxLabels : Int // +0x38
	let maxMyLabelledLocations : Int // +0x40
	let maxWaitTimeForRegisterMS : Int // +0x48
	let myLocationMinIntervalMS : Int // +0x50
	let locationShareExpiryDefaultInSec : Int // +0x58
	let barONOverride : Bool // +0x60
	let locationTTL : Int // +0x68
	let accuracyThresholdForLabeling : Int // +0x70
	let deepLocateMinGapMs : Int // +0x78
	let maxNotifyOtherFences : Int // +0x80
	let maxNotifyMeFences : Int // +0x88
	let userLocateWaitIntervalInMS : Int // +0x90
	let maxLocatingIntervalInMS : Int // +0x98
	let maxFriends : Int // +0xa0
	let minAccuracyForMyLocation : Int // +0xa8
	let maxCharLimitForLabelName : Int // +0xb0
	let familyPhotoCheckIntervalInSecs : Int // +0xb8
	let maxPeopleInNotifyOtherFence : Int // +0xc0
	let barLocEnabled : Bool // +0xc8
	let allowMigration : Bool // +0xc9
	let maxFriendsLabelledLocations : Int // +0xd0
	let maxTriesToRegisterDevice : Int // +0xd8
	let maxPeopleInOfferLocation : Int // +0xe0
	let notifyMeFenceStaleAfterMinutes : Int // +0xe8
 }

 enum FMFCore.CodingKeys {

	// Properties
	case maxFollowers  
	case maxCharLimitForInviteText  
	case sessionLifeSpan  
	case distanceForNearbyInMeters  
	case myLocationMaxIntervalMS  
	case maxInvites  
	case allowMigrationV2  
	case maxLabels  
	case maxMyLabelledLocations  
	case maxWaitTimeForRegisterMS  
	case myLocationMinIntervalMS  
	case locationShareExpiryDefaultInSec  
	case barONOverride  
	case locationTTL  
	case accuracyThresholdForLabeling  
	case deepLocateMinGapMs  
	case maxNotifyOtherFences  
	case maxNotifyMeFences  
	case userLocateWaitIntervalInMS  
	case maxLocatingIntervalInMS  
	case maxFriends  
	case minAccuracyForMyLocation  
	case maxCharLimitForLabelName  
	case familyPhotoCheckIntervalInSecs  
	case maxPeopleInNotifyOtherFence  
	case barLocEnabled  
	case allowMigration  
	case maxFriendsLabelledLocations  
	case maxTriesToRegisterDevice  
	case maxPeopleInOfferLocation  
	case notifyMeFenceStaleAfterMinutes  
 }

 class FMFCore.FMFNotNowRequest : FMFBaseRequest {

	// Properties
	let friendId : String // +0xcf43c (0x10)

	// Swift methods
 }

 class FMFCore.FMFSetFavoriteAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x0 (0x0)
	let order : Int? // +0x80000400 (0x9)

	// Swift methods
	0x603a0  class func FMFSetFavoriteAction.__allocating_init(friend:order:) // init 
 }

 struct FMFCore.FMFLocateInProgress {

	// Properties
	let identifier : String // +0x0
	let status : FMFLocateInProgressStatus // +0x10
 }

 enum FMFCore.CodingKeys {

	// Properties
	case identifier  
	case status  
 }

 enum FMFCore.FMFLocateInProgressStatus {

	// Properties
	case none  
	case shallow  
	case deep  
 }

 class FMFCore.FMFMyLocationResponse : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let location : FMFSimpleLocation // +0x10 (0xa9)
	let accuracyThreshold : Double // +0xc0 (0x8)
	let distanceThreshold : Double // +0xc8 (0x8)

	// Swift methods
 }

 enum FMFCore.MyLocationCodingKeys {

	// Properties
	case location  
	case accuracyThreshold  
	case distanceThreshold  
 }

 struct FMFCore.FMFCommandResponseFragment {

	// Properties
	let statusCode : Int
	let statusMap : [[String : Int]]?
	let actionURL : URL?
	let firstName : String?
	let lastName : String?
	let email : String?
	let triggerDate : Date?
	let currentUserId : String?
	let locationAlert : FMFLocationAlert?
 }

 enum FMFCore.CodingKeys {

	// Properties
	case statusCode  
	case statusMap  
	case actionURL  
	case firstName  
	case lastName  
	case email  
	case triggerTimestamp  
	case currentUserId  
	case locationAlert  
 }

 class FMFCore.FMFGetURLInfoRequest : FMFBaseRequest {

	// Properties
	let url : URL // +0x0 (0x0)

	// Swift methods
 }

 class FMFCore.FMFGenericResponseHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : FMFDataUpdateDelegate // +0x8 (0x10)
	let locationShifter : FMLocationShifter // +0x18 (0x8)
	let updateQueue : OS_dispatch_queue // +0x20 (0x8)
	var locationAlertsOnMeByMe : [FMFLocationAlert]? // +0x28 (0x8)
	var locationAlertsOnMeByFriends : [FMFLocationAlert]? // +0x30 (0x8)
	var locationAlertsOnFriendsByMe : [FMFLocationAlert]? // +0x38 (0x8)
	var locationAlertsOnFriendsByFriends : [FMFLocationAlert]? // +0x40 (0x8)
	var dataManager : FMFDataManager // +0x48 (0x8)

	// ObjC -> Swift bridged methods
	0x6bc00  @objc FMFGenericResponseHandler.init <stripped>
	0x6bc80  @objc FMFGenericResponseHandler..cxx_destruct <stripped>

	// Swift methods
	0x69770  func <stripped> // method 
	0x6ba00  func <stripped> // method 
 }

 class FMFCore.FMFContactsDataController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFContactsDataControllerDelegate // +0x10 (0x10)
	let contactStore : CNContactStore // +0x20 (0x8)
	let contactMatchingQueue : OS_dispatch_queue // +0x28 (0x8)
	var lastContactSearchDate : Date? // +0x0 (0x0)
	var lastContactUpdateDate : Date? // +0x0 (0x0)
	var contactRecords : [AnyHashable : Any]? // +0x67 (0x8)
	let keysToFetch : CNKeyDescriptor // +0x0 (0x8)

	// ObjC -> Swift bridged methods
	0x6cbb0  @objc FMFContactsDataController.contactStoreChangedWithNotification: <stripped>

	// Swift methods
	0x6c7b0  class func FMFContactsDataController.__allocating_init() // init 
	0x6cc50  func FMFContactsDataController.matchContacts(for:currentMatching:) // method 
	0x6d5b0  func FMFContactsDataController.contact(for:) // method 
	0x6d5c0  func FMFContactsDataController.searchInStore(name:) // method 
	0x6da60  func FMFContactsDataController.searchInStore(handle:) // method 
	0x6da70  func FMFContactsDataController.fetchMeContact(handles:) // method 
	0x6e200  func <stripped> // method 
 }

 class FMFCore.FMFBaseAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0x71510  func FMFBaseAction.debugDescription.getter // getter 
 }

 class FMFCore.FMFManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFManagerDelegate // +0x10 (0x10)
	let fmfManagerSerialQueue : OS_dispatch_queue // +0x20 (0x8)
	var dataManager : FMFDataManager // +0x28 (0x8)
	let garbageCollector : FMFGarbageCollector // +0x30 (0x8)
	let systemStateController : FMFSystemStateController // +0x38 (0x8)
	var genericUpdatesHandler : FMFGenericResponseHandler // +0x40 (0x8)
	var refreshController : FMFRefreshController // +0x48 (0x8)
	var serverInteractionController : FMFServerInteractionController // +0x50 (0x8)
	var actionsController : FMFActionsController // +0x58 (0x8)
	var myLocationController : FMFMyLocationController // +0x60 (0x8)
	var selectedFriend : FMFFriend? // +0x45545f5f (0x0)
	var isInitialized : Bool // +0x0 (0x1)

	// Swift methods
	0x71a00  func FMFManager.delegate.getter // getter 
	0x71a30  func FMFManager.delegate.setter // setter 
	0x71ab0  func FMFManager.delegate.modify // modifyCoroutine 
	0x71ba0  func FMFManager.friends.getter // getter 
	0x71ec0  func FMFManager.selectedFriend.getter // getter 
	0x71f00  func FMFManager.selectedFriend.setter // setter 
	0x71fb0  func FMFManager.selectedFriend.modify // modifyCoroutine 
	0x72530  func FMFManager.isInitialized.getter // getter 
	0x72560  func FMFManager.locations.getter // getter 
	0x725b0  func FMFManager.myLocation.getter // getter 
	0x72840  func FMFManager.features.getter // getter 
	0x72860  func FMFManager.preferences.getter // getter 
	0x72900  func FMFManager.myInfo.getter // getter 
	0x72a90  func FMFManager.config.getter // getter 
	0x72b70  func FMFManager.devices.getter // getter 
	0x72b90  func FMFManager.labels.getter // getter 
	0x72bb0  func FMFManager.locationAlerts.getter // getter 
	0x72be0  func FMFManager.labelledLocations.getter // getter 
	0x72c00  func FMFManager.contactsController.getter // getter 
	0x72c20  func FMFManager.friendsOperationsRestricted.getter // getter 
	0x72c30  class func FMFManager.__allocating_init() // init 
	0x73370  func FMFManager.initialize() // method 
	0x736f0  func FMFManager.startRefreshing() // method 
	0x73730  func FMFManager.updateLastActiveTimestamp() // method 
	0x737d0  func FMFManager.stopRefreshing() // method 
	0x73810  func FMFManager.refresh() // method 
	0x73850  func FMFManager.perform(action:completion:) // method 
	0x73c70  func FMFManager.getInfoForURL(url:completion:) // method 
	0x742b0  func FMFManager.unshiftedLocation(for:) // method 
 }

 class FMFCore.FMFAddUpdateLabelRequest : FMFBaseRequest {

	// Properties
	let labelledLocation : FMFLabelledLocation // +0xd0030 (0x0)

	// Swift methods
 }

 class FMFCore.FMFRespondToInviteRequest : FMFBaseRequest {

	// Properties
	let friendId : String // +0x6222 (0x10)
	let accepted : Bool // +0xd0030 (0x1)

	// Swift methods
 }

 class FMFCore.FMFAskToFollowRequest : FMFBaseRequest {

	// Properties
	let friendIds : [String] // +0x0 (0x8)
	let emails : [String] // +0x2 (0x8)

	// Swift methods
 }

 class FMFCore.FMFDataManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : weak FMFDataUpdateDelegate?
	let dataManagerUpdateQueue : OS_dispatch_queue
	let dataManagerDelegateQueue : OS_dispatch_queue
	let cacheBlobQueue : OS_dispatch_queue
	let pendingDataManager : FMFPendingDataManager
	var following : [FMFIntermediateFriend]
	var followers : [FMFIntermediateFriend]
	var pendingFollowers : [FMFIntermediateFriend]
	var futureFollowing : [FMFIntermediateFriend]
	var futureFollowers : [FMFIntermediateFriend]
	var internalFriends : [FMFFriend]?
	var intermediateLocations : [FMFLocation]
	var locatesInProgress : [FMFLocateInProgress]
	var internalLocations : [FMFLocation]?
	var internalUnshiftedLocations : [FMFLocation]?
	var locationAlertsOnMeByMe : [FMFLocationAlert]
	var locationAlertsOnMeByFriends : [FMFLocationAlert]
	var locationAlertsOnFriendsByMe : [FMFLocationAlert]
	var locationAlertsOnFriendsByFriends : [FMFLocationAlert]
	var internalLocationAlerts : [FMFLocationAlert]?
	var permanentDataCache : FMDiskIO<FriendCacheData>
	var _cacheBlob : FriendCacheData
	var initializedFromCache : Bool
	let contactsController : FMFContactsDataController
	var contactMatchingCache : [String : FMFContact]
	var prefetchedContactCache : [String : FMFContact]
	var internalPreferences : FMFPreferences?
	var features : FMFFeatures?
	var config : FMFConfig?
	var internalMyInfo : FMFMyInfo?
	var devices : [FMFDevice]
	var labelledLocations : [FMFLabelledLocation]
	var labels : [FMFLabel]

	// Swift methods
	0x79c10  func <stripped> // method 
	0x79d80  func <stripped> // method 
	0x79ef0  func <stripped> // method 
	0x7a060  func <stripped> // method 
	0x7a1d0  func <stripped> // method 
	0x7a340  func <stripped> // method 
	0x7a4b0  func <stripped> // method 
	0x7a620  func <stripped> // method 
	0x7a790  func <stripped> // method 
	0x7a900  func <stripped> // method 
	0x7c270  func <stripped> // method 
	0x7da10  func <stripped> // method 
	0x7e060  func <stripped> // method 
	0x7ee30  func <stripped> // getter 
	0x86e00  func <stripped> // getter 
	0x87630  func <stripped> // getter 
	0x892f0  func <stripped> // method 
 }

 class FMFCore.FMFPendingDataManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var insertFriend : [String : FMFFriend]
	var updateFriend : [String : FMFFriend]
	var deleteFriend : [String : FMFFriend]
	var locationShareOverride : TemporaryLocationShareState
	var preferences : FMFPreferences?
	var myInfo : FMFMyInfo?

	// Swift methods
 }

 enum FMFCore.TemporaryLocationShareState {

	// Properties
	case sharing  
	case notSharing  
 }

 class FMFCore.FMFStopSharingAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x67 (0x0)

	// Swift methods
	0x9cec0  class func FMFStopSharingAction.__allocating_init(friend:) // init 
 }

 class FMFCore.FMFCoreHelper : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class FMFCore.FMFStopFollowingAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x45545f5f (0x0)

	// Swift methods
	0x9d330  class func FMFStopFollowingAction.__allocating_init(friend:) // init 
 }

 enum FMFCore.FMWindowStatePrefKeys {

	// Properties
	case frontMostWindow  
	case windowVisible  
 }

 struct FMFCore.FMFFeatures {

	// Properties
	let rawValue : Int // +0x0
 }

 enum FMFCore.CodingKeys {

	// Properties
	case viewFriends  
	case viewFollowers  
	case actOnRequest  
	case offerLocation  
	case changeMyLabel  
	case changeMeDevice  
	case changeHideLocation  
	case changeAllowFriendRequests  
	case changeGeoFenceAlerts  
	case removeFriends  
	case removeFollowers  
	case removeDevice  
	case notifyOthers  
	case notifyMe  
 }

 class FMFCore.FMAPSConnectionHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : FMAPSConnectionHandlerDelegate // +0x8 (0x10)
	let topic : String // +0x18 (0x10)
	let preferenceDomain : String // +0x28 (0x10)
	let connectionQueue : OS_dispatch_queue // +0x38 (0x8)
	var connection : FMAPSConnection // +0x40 (0x10)
	var topicAPSToken : String? // +0x50 (0x10)
	var publicAPSToken : String? // +0x60 (0x10)

	// ObjC -> Swift bridged methods
	0xa0330  @objc FMAPSConnectionHandler.dealloc <stripped>
	0xa0780  @objc FMAPSConnectionHandler.init <stripped>
	0xa0350  @objc FMAPSConnectionHandler..cxx_destruct <stripped>

	// Swift methods
	0xa03e0  func <stripped> // method 
	0xa0510  func <stripped> // method 
 }

 class FMFCore.FMLocalize : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct FMFCore.FMFDevice {

	// Properties
	let identifier : String // +0x0
	let name : String // +0x10
	let autoMeCapable : Bool // +0x20
 }

 enum FMFCore.CodingKeys {

	// Properties
	case identifier  
	case name  
	case autoMeCapable  
 }

 class FMFCore.FMFMyLocationRequest : FMFBaseRequest {

	// Properties
	let location : CLLocation // +0x0 (0x8)

	// Swift methods
 }

 class FMFCore.FMFServerInteractionController : type metadata for FMNServerInteractionController /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking {

	// Properties
	let udpatesHandler : FMFGenericResponseHandler? // +0x48 (0x8)
	let authenticationProvider : FMNAuthenticationProvider // +0x50 (0x8)
	let serverInteractionQueue : OS_dispatch_queue // +0x58 (0x8)
	var networkInitializationCompleted : Bool // +0x60 (0x1)
	var lastActiveTimestamp : Date // +0xd6252 (0x0)
	var delegate : FMFServerInteractionControllerDelegate // +0x4 (0x10)
	var alertDelegate : weak FMFAlertTypeDelegate? // +0xd6252 (0x10)
	var serverContext : [String : Any]? // +0x0 (0x8)
	var dataContext : [String : Any]? // +0x0 (0x8)

	// Swift methods
	0xa5760  func <stripped> // method 
	0xa6300  func <stripped> // method 
	0xa64b0  func <stripped> // method 
	0xa6630  func <stripped> // method 
 }

 class FMFCore.FMFMyLocationController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : FMFMyLocationControllerDelegate // +0x8 (0x10)
	var currentMyLocation : CLLocation? // +0x18 (0x8)
	var myLocation : FMFLocation? // +0x20 (0xc1)
	var accuracyThreshold : Double? // +0xe8 (0x9)
	var distanceThreshold : Double? // +0xf8 (0x9)
	let locationManager : CLLocationManager // +0x108 (0x8)
	let myLocationUpdatingQueue : OS_dispatch_queue // +0x110 (0x8)
	let serverInteractionController : FMFServerInteractionController // +0x118 (0x8)

	// ObjC -> Swift bridged methods
	0xa8e70  @objc FMFMyLocationController.init <stripped>
	0xa8ef0  @objc FMFMyLocationController..cxx_destruct <stripped>

	// Swift methods
	0xa7e60  func <stripped> // method 
 }

 class FMFCore.FMFNotNowAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x0 (0x0)

	// Swift methods
	0xa9e30  class func FMFNotNowAction.__allocating_init(friend:) // init 
 }

 class FMFCore.FMDiskIO {
 class FMFCore.FMFAskToFollowAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x6f635f5f (0x0)

	// Swift methods
	0xae210  class func FMFAskToFollowAction.__allocating_init(friend:) // init 
 }

 class FMFCore.FMFGetURLInfoAction : FMFBaseAction {

	// Properties
	let url : URL // +0x0 (0x0)

	// Swift methods
	0xae580  class func FMFGetURLInfoAction.__allocating_init(url:) // init 
 }

 class FMFCore.FMFRespondToInviteAction : FMFBaseAction {

	// Properties
	let friendId : String // +0x10 (0x10)
	let accepted : Bool // +0x20 (0x1)

	// Swift methods
	0xaea20  class func FMFRespondToInviteAction.__allocating_init(friendId:accepted:) // init 
 }

 enum FMFCore.FMFActionStatus {

	// Properties
	case error  
	case unknown  
	case success  
 }

 enum FMFCore.FMFActionsError {

	// Properties
	case unknownAction  
	case invalidAction  
	case invalidState  
	case maxLabels  
	case friendRequestToSelf  
	case restrictedAction  
 }

 class FMFCore.FMFActionsController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFActionsControllerDelegate // +0x10 (0x10)
	let dataManager : FMFDataManager // +0x20 (0x8)
	let serverInteractionController : FMFServerInteractionController // +0x28 (0x8)
	let systemStateController : FMFSystemStateController // +0x30 (0x8)

	// Swift methods
	0xb0420  func <stripped> // method 
	0xb9910  func <stripped> // method 
	0xba6e0  func <stripped> // method 
	0xba940  func <stripped> // method 
	0xbaf90  func <stripped> // method 
	0xbb630  func <stripped> // method 
 }

 class FMFCore.FMFGarbageCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let garbageCollectorIdentityKey : String // +0x10 (0x10)
	let accountStore : ACAccountStore // +0x20 (0x8)
	var isAccountVerificationPending : Bool // +0x28 (0x1)
	var delegate : FMFGarbageCollectorDelegate // +0x30 (0x10)
	let paths : [String] // +0x40 (0x8)

	// ObjC -> Swift bridged methods
	0xc3950  @objc FMFGarbageCollector.scheduleAccountVerification <stripped>

	// Swift methods
	0xc2ce0  func <stripped> // method 
	0xc33d0  func <stripped> // method 
	0xc3980  func <stripped> // method 
 }

 class FMFCore.FMFInitRefreshClientRequest : FMFBaseRequest {

	// Properties
	let selectedFriend : FMFFriend? // +0x45545f5f (0x0)
	let tapContexts : [[AnyHashable : Any]]? // +0x0 (0x8)

	// Swift methods
 }

 enum FMFCore.FMFRefreshReason {

	// Properties
	case minCallback  
	case maxCallback  
 }

 class FMFCore.FMFRemoveLabelsRequest : FMFBaseRequest {

	// Properties
	let labels : [String] // +0xd6260 (0x8)

	// Swift methods
 }

 enum FMFCore.FMFAddressLevelType {

	// Properties
	case unknown  
	case street  
	case city  
	case state  
	case country  
 }

 struct FMFCore.FMFAddress {

	// Properties
	let formattedAddressLines : [String]? // +0x0
	let country : String? // +0x8
	let countryCode : String? // +0x18
	let streetName : String? // +0x28
	let streetAddress : String? // +0x38
	let locality : String? // +0x48
	let stateCode : String? // +0x58
	let administrativeArea : String? // +0x68
 }

 enum FMFCore.CodingKeys {

	// Properties
	case formattedAddressLines  
	case country  
	case countryCode  
	case streetName  
	case streetAddress  
	case locality  
	case stateCode  
	case administrativeArea  
 }

 class FMFCore.FMFRemoveFriendRequest : FMFBaseRequest {

	// Properties
	let friendId : String // +0x7e60 (0x10)

	// Swift methods
 }

 class FMFCore.FMFBaseResponse : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serverContext : [String : Any] // +0x10 (0x8)
	let dataContext : [String : Any] // +0x18 (0x8)
	let commandResponse : FMFCommandResponseFragment? // +0xd6260 (0x0)
	let alert : FMFAlert? // +0x0 (0x8)
	let fetchStatus : Int // +0x0 (0x8)

	// Swift methods
	0xca7d0  class func <stripped> // init 
 }

 enum FMFCore.FMFBaseResponseError {

	// Properties
	case invalidStatusCode  
	case emptyDataReceived  
 }

 enum FMFCore.CodingKeys {

	// Properties
	case alert  
	case serverContext  
	case dataContext  
	case fetchStatus  
	case commandResponse  
 }

 class FMFCore.FMFUpdateLocationAlertRequest : FMFBaseRequest {

	// Properties
	let locationAlert : FMFLocationAlert // +0x0 (0x0)

	// Swift methods
 }

 class FMFCore.FMFRemoveFriendAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x77735f5f (0x0)

	// Swift methods
	0xcce60  class func FMFRemoveFriendAction.__allocating_init(friend:) // init 
 }

 struct FMFCore.FMFMyInfo {

	// Properties
	let emails : [String] // +0x0
	let firstName : String // +0x8
	let meDeviceId : String? // +0x18
	let deviceId : String // +0x28
	let eligibleAutoMe : Bool // +0x38
 }

 enum FMFCore.CodingKeys {

	// Properties
	case emails  
	case firstName  
	case meDeviceId  
	case deviceId  
	case eligibleAutoMe  
 }
