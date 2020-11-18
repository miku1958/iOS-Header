 protocol FMFCore.FMFRefreshControllerDelegate // 2 requirements
 {
	// method
	// method
 }
 protocol FMFCore.FMFInteractionControllerDelegate // 1 requirements
 {
	// method
 }
 protocol FMFCore.FMFInteractionController // 9 requirements
 {
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
	// method
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

 struct FMFCore.FMFSchedule {

	// Properties
	var startHour : Int
	var startMin : Int
	var endHour : Int
	var endMin : Int
	var daysOfWeek : DaysOfWeek
	var spanDays : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var timeZone : O‘
 }

 struct FMFCore.DaysOfWeek {

	// Properties
	let rawValue : Int // +0x0
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

 class FMFCore.FMFSaveFavoritesRequest {
 class FMFCore.FMNetworkUtil : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class FMFCore.FMFInitRefreshClientResponse : FMFBaseResponse {

	// Properties
	let labels : FMFLabel // +0x0 (0x8)
	let labelledLocations : FMFLabelledLocation // +0xe6000 (0x8)
	let devices : FMFDevice // +0x0 (0x8)
	let preferences : FMFPreferences // +0xe6000 (0x20)
	let features : FMFFeatures // +0x5 (0x9)
	let myInfo : FMFMyInfo // +0x15 (0x39)
	let config : FMFConfig // +0x65745f5f (0xf0)
	let locations : FMFLocation // +0x0 (0x8)
	let locatesInProgress : FMFLocateInProgress // +0x45545f5f (0x8)
	let following : FMFIntermediateFriend // +0x0 (0x8)
	let followers : FMFIntermediateFriend // +0x2920 (0x8)
	let futureFollowing : FMFIntermediateFriend // +0xc5044 (0x8)
	let futureFollowers : FMFIntermediateFriend // +0x2920 (0x8)
	let pendingOffers : FMFIntermediateFriend // +0x0 (0x8)
	let locationAlertsOnMeByMe : FMFLocationAlert // +0x80000400 (0x8)
	let locationAlertsOnMeByFriends : FMFLocationAlert // +0x0 (0x8)
	let locationAlertsOnFriendsByMe : FMFLocationAlert // +0x74735f5f (0x8)
	let locationAlertsOnFriendsByFriends : FMFLocationAlert // +0x0 (0x8)

	// Swift methods
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
	var selectedFriend : FMFFriend // +0x45545f5f (0x0)
	var refreshReason : FMFRefreshReason // +0x0 (0x1)
	let interactionController : FMFInteractionController // +0x0 (0x10)
	let apsConnectionHandler : FMAPSConnectionHandler // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var tapContexts :  empty-list  // +0x0 (0x8)
	let refreshQueue : OS_dispatch_queue // +0x0 (0x8)
	var callbackInterval : Double // +0x0 (0x8)
	var minCallbackInterval : Double // +0x0 (0x8)
	var maxCallbackInterval : Double // +0x0 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastRefreshTime : è– // +0x0 (0x0)
	var refreshTimer : NSTimer? // +0x0 (0x8)
	var initializedOnce : Bool // +0x0 (0x1)
	var firstRefreshCompleted : Bool // +0x0 (0x1)
	var isRefreshing : Bool // +0xc7964 (0x1)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3224000283e0 (0x224000283e0) in binary!
	0x18000000c  @objc FMFRefreshController.(null) <stripped>

	// Swift methods
	0xbd00  func <stripped> // method 
	0xbfe0  func <stripped> // method 
	0xc370  func <stripped> // method 
	0xccc0  func <stripped> // method 
	0xd8b0  func <stripped> // method 
 }

 class FMFCore.FMLocationShiftingRequest : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let location : CLLocation
	let identifier : String

	// Swift methods
	0xedf0  class func FMLocationShiftingRequest.__allocating_init(identifier:location:) // init 
 }

 class FMFCore.FMLocationShifter : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let shifter : GEOLocationShifter
	let shiftingQueue : OS_dispatch_queue
	let processingQueue : OS_dispatch_queue

	// Swift methods
	0xeea0  class func FMLocationShifter.__allocating_init() // init 
	0xf120  func FMLocationShifter.shift(requests:completion:) // method 
 }

 struct FMFCore.FMFSimpleLocation {

	// Properties
	let address : FMFAddress // +0x0
	let location : CLLocation // +0x78
	var locateInProgress : Bool // +0x80
	let label : FMFLabel // +0x88
	let internalLabels : FMFLabelledLocation // +0xa0
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let updatedAt : Åœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let createdAt : Åœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shareExpires : Åœ
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
	let labels : [String]

	// Swift methods
	0x185b0  class func FMFRemoveLabelsAction.__allocating_init(labels:) // init 
 }

 class FMFCore.FMFShowHideLocationAction : FMFBaseAction {

	// Properties
	let hideLocation : Bool

	// Swift methods
	0x1ba80  class func FMFShowHideLocationAction.__allocating_init(hideLocation:) // init 
 }

 class FMFCore.FMFUpdateMeDeviceAction : FMFBaseAction {

	// Properties
	let meDevice : FMFDevice

	// Swift methods
	0x1bcf0  class func FMFUpdateMeDeviceAction.__allocating_init(meDevice:) // init 
 }

 class FMFCore.FMFUpdateLocationAlertAction : FMFBaseAction {

	// Properties
	let locationAlert : FMFLocationAlert // +0x780 (0x0)

	// Swift methods
	0x1c020  class func FMFUpdateLocationAlertAction.__allocating_init(locationAlert:location:radius:address:label:triggerType:isOn:repeating:phoneNumbers:emails:schedule:ckRecordName:ckRecordZoneOwnerName:acceptanceStatus:) // init 
 }

 class FMFCore.FMFAddLocationAlertAction : FMFBaseAction {

	// Properties
	let locationAlert : FMFLocationAlert // +0xc7964 (0x0)

	// Swift methods
	0x1c820  class func FMFAddLocationAlertAction.__allocating_init(friendId:followerIds:emails:phoneNumbers:location:address:label:addressType:radius:locationAlertTarget:triggerType:repeating:schedule:ckRecordName:ckRecordZoneOwnerName:acceptanceStatus:) // init 
 }

 class FMFCore.FMFSystemStateController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFSystemStateControllerDelegate
	let refreshSerialQueue : OS_dispatch_queue
	var isFMFRestricted : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x320c00028510 (0x20c00028510) in binary!
	0x28000000c  @objc FMFSystemStateController.(null) <stripped>

	// Swift methods
	0x1e200  func <stripped> // method 
 }

 enum FMFCore.FMFShareLocationDuration {

	// Properties
	case endOfDay  
	case forever  
	case oneHour  
 }

 class FMFCore.FMFShareLocationAction : FMFBaseAction {

	// Properties
	let friendHandles : [String] // +0x18 (0x8)
	let friendId : String? // +0x20 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let expiry : Åœ // +0x0 (0x0)

	// Swift methods
	0x1ea20  class func FMFShareLocationAction.__allocating_init(handles:friendId:expiry:duration:) // init 
 }

 enum FMFCore.ArgumentsError {

	// Properties
	case missingValue : (argument: String)
	case invalidValue : (argument: String, value: String)
 }

 class FMFCore.FMFDemoDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let demoContent : FMFDemoContent
	let demoDataGenerator : FMFDemoDataGenerator
	var state : FMFDemoDataState

	// Swift methods
	0x1f6a0  func <stripped> // method 
	0x21160  func <stripped> // method 
 }

 struct FMFCore.FMFDemoDataState {

	// Properties
	let followers : FMFIntermediateFriend // +0x0
	let following : FMFIntermediateFriend // +0x8
	let locations : FMFLocation // +0x10
	let locatesInProgress : FMFLocateInProgress // +0x18
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let okButtonURL : …Œ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let cancelButtonURL : …Œ // +0x0 (0x0)
	let alertType : FMFAlertType // +0x80000408 (0x1)

	// Swift methods
	0x219f0  func FMFAlert.title.getter // getter 
	0x21b20  func FMFAlert.message.getter // getter 
	0x21b90  func FMFAlert.okButtonLabel.getter // getter 
	0x21c90  func FMFAlert.cancelButtonLabel.getter // getter 
	0x21d90  func FMFAlert.displayAlert.getter // getter 
	0x22260  class func FMFAlert.__allocating_init(from:) // init 
	0x22850  class func FMFAlert.__allocating_init(alertId:title:message:okButtonLabel:okButtonURL:cancelButtonLabel:cancelButtonURL:alertType:) // init 
	0x229f0  func FMFAlert.handleOkAction(urlHandler:) // method 
	0x22b10  func FMFAlert.handleCancelAction(urlHandler:) // method 
	0x22c00  func FMFAlert.debugDescription.getter // getter 
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

 struct FMFCore.FMFDemoContent {

	// Properties
	let people : FMFPersonTemplate // +0x0
 }

 struct FMFCore.FMFPersonTemplate {

	// Properties
	let handle : String // +0x0
	let relationshipType : RelationshipType // +0x10
	let location : FMDemoLocation // +0x18
	let address : FMFAddress // +0x68
 }

 enum FMFCore.CodingKeys {

	// Properties
	case people  
 }

 enum FMFCore.CodingKeys {

	// Properties
	case handle  
	case relationshipType  
	case location  
	case address  
 }

 enum FMFCore.RelationshipType {

	// Properties
	case follower  
	case following  
	case bidirectional  
 }

 struct FMFCore.FMFActionURLInfo {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionURL : …Œ
	let firstName : String?
	let lastName : String?
	let email : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let triggerDate : Åœ
	let currentUserId : String?
	let locationAlert : FMFLocationAlert
 }

 class FMFCore.FMFSavePrefsRequest {
 class FMFCore.FMSystemDirectoryUtilities : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var library : String

	// Swift methods
 }

 struct FMFCore.FMFLocation {

	// Properties
	let identifier : String? // +0x0
	let locateInProgress : Bool // +0x10
	let simpleLocation : FMFSimpleLocation // +0x18
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
	let schedule : FMFSchedule
	let ckRecordName : String?
	let ckRecordZoneOwnerName : String?
	let acceptanceStatus : FMFLocationAlertAcceptanceStatus
	let phoneNumbers : [String]?
	let emails : [String]?
	let followerIds : [String]?
	let friendId : String?
	let label : FMFLabel
	let addressType : FMFLocationAlertAddressType
	let address : String?
	let fullAddress : FMFAddress
	let setByMe : Bool
	let setOnMe : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	let updateTimestamp : Åœ
WARNING: couldn't find address 0x0 (0x0) in binary!
	let muteEndDate : Åœ
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
	case muteEndDate  
 }

 class FMFCore.FMFUpdatePrefsAction : FMFBaseAction {

	// Properties
	let prefs : FMFPreferences

	// Swift methods
	0x397a0  class func FMFUpdatePrefsAction.__allocating_init(prefs:) // init 
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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let shareExpires : Åœ
	let relationshipType : FMFRelationshipType
	let optedNotToShare : Bool?
	let favoriteOrder : Int
	let locationAlertsOnFriend : FMFLocationAlert
	let locationAlertsOnMe : FMFLocationAlert
	let contact : FMFContact
	let location : FMFLocation
	var pendingUpdateReason : FMFPendingUpdateReason
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

 enum FMFCore.FMFDemoError {

	// Properties
	case notAvailableInDemoMode  
 }

 class FMFCore.FMFDemoInteractionController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFInteractionControllerDelegate
	var alertDelegate : FMFAlertTypeDelegate
	let processingQueue : OS_dispatch_queue
	let serverInteractionController : FMFInteractionController
	let genericResponseHandler : FMFGenericResponseHandler
	let dataSource : FMFDemoDataSource

	// Swift methods
	0x46d50  func <stripped> // method 
	0x47630  func <stripped> // method 
	0x47b20  func <stripped> // method 
 }

 class FMFCore.FMFBaseRequest {
 class FMFCore.FMFAddUpdateLabelAction : FMFBaseAction {

	// Properties
	let locationToLabel : FMFLocation
	let label : FMFLabel

	// Swift methods
	0x49b20  class func FMFAddUpdateLabelAction.__allocating_init(locationToLabel:label:) // init 
 }

 class FMFCore.FMFDemoDataGenerator : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let maximumLocationAge : Double
	let maximumLocatingAge : Double
	let mutabilityFactor : Double

	// Swift methods
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

 class FMFCore.FMFMuteFencesAction : FMFBaseAction {

	// Properties
	let friendId : String? // +0x18 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let muteEndDate : Åœ // +0xc80e4 (0x0)

	// Swift methods
	0x4e4a0  class func FMFMuteFencesAction.__allocating_init(friendId:endDate:) // init 
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
	var following : FMFIntermediateFriend // +0x0
	var followers : FMFIntermediateFriend // +0x8
	var pendingFollowers : FMFIntermediateFriend // +0x10
	var futureFollowing : FMFIntermediateFriend // +0x18
	var futureFollowers : FMFIntermediateFriend // +0x20
	var locationAlertsOnMeByMe : FMFLocationAlert // +0x28
	var locationAlertsOnMeByFriends : FMFLocationAlert // +0x30
	var locationAlertsOnFriendsByMe : FMFLocationAlert // +0x38
	var locationAlertsOnFriendsByFriends : FMFLocationAlert // +0x40
	var preferences : FMFPreferences // +0x48
	var features : FMFFeatures // +0x68
	var config : FMFConfig // +0x78
	var myInfo : FMFMyInfo // +0x168
	var devices : FMFDevice // +0x1a8
	var labels : FMFLabel // +0x1b0
	var contacts : FMFContact // +0x1b8
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
	let label : FMFLabel
	let userId : String?
	let latitude : Double?
	let longitude : Double?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let updatedAt : Åœ
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
	let locationAlert : FMFLocationAlert // +0x0 (0x0)

	// Swift methods
	0x5c0c0  class func FMFRemoveLocationAlertAction.__allocating_init(locationAlert:) // init 
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

 class FMFCore.FMFNotNowRequest {
 class FMFCore.FMFSetFavoriteAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x6c687465 (0x0)
	let order : Int? // +0x45545f5f (0x9)

	// Swift methods
	0x5f620  class func FMFSetFavoriteAction.__allocating_init(friend:order:) // init 
 }

 struct FMFCore.FMDemoLocation {

	// Properties
	let latitude : Double // +0x0
	let longitude : Double // +0x8
	let altitude : Double? // +0x10
	let horizontalAccuracy : Double? // +0x20
	let verticalAccuracy : Double? // +0x30
	let label : String? // +0x40
 }

 enum FMFCore.CodingKeys {

	// Properties
	case latitude  
	case longitude  
	case altitude  
	case horizontalAccuracy  
	case verticalAccuracy  
	case label  
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
	let location : FMFSimpleLocation
	let accuracyThreshold : Double
	let distanceThreshold : Double

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
WARNING: couldn't find address 0x0 (0x0) in binary!
	let actionURL : …Œ
	let firstName : String?
	let lastName : String?
	let email : String?
WARNING: couldn't find address 0x0 (0x0) in binary!
	let triggerDate : Åœ
	let currentUserId : String?
	let locationAlert : FMFLocationAlert
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

 class FMFCore.FMFGetURLInfoRequest {
 class FMFCore.FMFGenericResponseHandler : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : FMFDataUpdateDelegate
	var fmfSession : FMFSession?
	var fences : Set<FMFFence>
	let locationShifter : FMLocationShifter
	let updateQueue : OS_dispatch_queue
	var locationAlertsOnMeByMe : FMFLocationAlert
	var locationAlertsOnMeByFriends : FMFLocationAlert
	var locationAlertsOnFriendsByMe : FMFLocationAlert
	var locationAlertsOnFriendsByFriends : FMFLocationAlert
	var dataManager : FMFDataManager

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x31ec00028368 (0x1ec00028368) in binary!
	0x31e8  @objc FMFGenericResponseHandler.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffa11b0  @objc FMFGenericResponseHandler.(null) <stripped>

	// Swift methods
	0x67580  func <stripped> // method 
	0x69a40  func <stripped> // method 
 }

 class FMFCore.FMFContactsDataController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFContactsDataControllerDelegate // +0x10 (0x10)
	let contactStore : CNContactStore // +0x20 (0x8)
	let contactMatchingQueue : OS_dispatch_queue // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastContactSearchDate : Åœ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var lastContactUpdateDate : Åœ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contactRecords :  empty-list  // +0x0 (0x8)
	let keysToFetch : [CNKeyDescriptor] // +0x0 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x3604000285f0 (0x604000285f0) in binary!
	0x18000000c  @objc FMFContactsDataController.(null) <stripped>

	// Swift methods
	0x6b050  class func FMFContactsDataController.__allocating_init() // init 
	0x6b430  func FMFContactsDataController.matchContacts(for:currentMatching:) // method 
	0x6bae0  func FMFContactsDataController.contact(for:) // method 
	0x6baf0  func FMFContactsDataController.searchInStore(name:) // method 
	0x6bf60  func FMFContactsDataController.searchInStore(handle:) // method 
	0x6c480  func FMFContactsDataController.fetchMeContact(handles:) // method 
	0x6ca40  func <stripped> // method 
	0x6d1c0  func <stripped> // method 
 }

 class FMFCore.FMFBaseAction : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var requiresRefresh : Bool

	// Swift methods
	0x6eac0  func FMFBaseAction.requiresRefresh.getter // getter 
	0x6eaf0  func FMFBaseAction.requiresRefresh.setter // setter 
	0x6eb20  func FMFBaseAction.requiresRefresh.modify // modifyCoroutine 
	0x6eb60  func FMFBaseAction.debugDescription.getter // getter 
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
	var interactionController : FMFInteractionController // +0x50 (0x10)
	var actionsController : FMFActionsController // +0x60 (0x8)
	var myLocationController : FMFMyLocationController // +0x68 (0x8)
	var selectedFriend : FMFFriend // +0x0 (0x0)
	var isInitialized : Bool // +0x0 (0x1)

	// Swift methods
	0x6efc0  func FMFManager.delegate.getter // getter 
	0x6eff0  func FMFManager.delegate.setter // setter 
	0x6f050  func FMFManager.delegate.modify // modifyCoroutine 
	0x6f120  func FMFManager.friends.getter // getter 
	0x6f220  func FMFManager.selectedFriend.getter // getter 
	0x6f260  func FMFManager.selectedFriend.setter // setter 
	0x6f2d0  func FMFManager.selectedFriend.modify // modifyCoroutine 
	0x6f630  func FMFManager.isInitialized.getter // getter 
	0x6f660  func FMFManager.locations.getter // getter 
	0x6f6b0  func FMFManager.myLocation.getter // getter 
	0x6f6d0  func FMFManager.myUnshiftedLocation.getter // getter 
	0x6f980  func FMFManager.features.getter // getter 
	0x6f9a0  func FMFManager.preferences.getter // getter 
	0x6fa40  func FMFManager.myInfo.getter // getter 
	0x6fbd0  func FMFManager.config.getter // getter 
	0x6fcb0  func FMFManager.devices.getter // getter 
	0x6fcd0  func FMFManager.labels.getter // getter 
	0x6fcf0  func FMFManager.locationAlerts.getter // getter 
	0x6fd20  func FMFManager.labelledLocations.getter // getter 
	0x6fd40  func FMFManager.contactsController.getter // getter 
	0x6fd60  func FMFManager.friendsOperationsRestricted.getter // getter 
	0x6fd70  func FMFManager.pendingDeleteFriends.getter // getter 
	0x6fe40  func FMFManager.pendingUpdateFriends.getter // getter 
	0x6fec0  class func FMFManager.__allocating_init() // init 
	0x70a90  func FMFManager.initialize() // method 
	0x70df0  func FMFManager.startRefreshing() // method 
	0x70e10  func FMFManager.updateLastActiveTimestamp() // method 
	0x70e60  func FMFManager.stopRefreshing() // method 
	0x71140  func FMFManager.refresh() // method 
	0x71160  func FMFManager.perform(action:completion:) // method 
	0x71a20  func FMFManager.getInfoForURL(url:completion:) // method 
	0x72140  func FMFManager.unshiftedLocation(for:) // method 
 }

 class FMFCore.FMFAddUpdateLabelRequest {
 class FMFCore.FMFRespondToInviteRequest {
 class FMFCore.FMFAskToFollowRequest {
 class FMFCore.FMFDataManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFDataUpdateDelegate
	let dataManagerUpdateQueue : OS_dispatch_queue
	let dataManagerDelegateQueue : OS_dispatch_queue
	let cacheBlobQueue : OS_dispatch_queue
	let pendingDataManager : FMFPendingDataManager
	var following : FMFIntermediateFriend
	var followers : FMFIntermediateFriend
	var pendingFollowers : FMFIntermediateFriend
	var futureFollowing : FMFIntermediateFriend
	var futureFollowers : FMFIntermediateFriend
	var internalFriends : FMFFriend
	var intermediateLocations : FMFLocation
	var locatesInProgress : FMFLocateInProgress
	var internalLocations : FMFLocation
	var internalUnshiftedLocations : FMFLocation
	var locationAlertsOnMeByMe : FMFLocationAlert
	var locationAlertsOnMeByFriends : FMFLocationAlert
	var locationAlertsOnFriendsByMe : FMFLocationAlert
	var locationAlertsOnFriendsByFriends : FMFLocationAlert
	var internalLocationAlerts : FMFLocationAlert
	var permanentDataCache : FMDiskIO
	var _cacheBlob : FriendCacheData
	var initializedFromCache : Bool
	let contactsController : FMFContactsDataController
	var contactMatchingCache : FMFContact
	var prefetchedContactCache : FMFContact
	var internalPreferences : FMFPreferences
	var features : FMFFeatures
	var config : FMFConfig
	var internalMyInfo : FMFMyInfo
	var devices : FMFDevice
	var labelledLocations : FMFLabelledLocation
	var labels : FMFLabel

	// Swift methods
	0x75f60  func <stripped> // modifyCoroutine 
	0x76970  func <stripped> // method 
	0x76ae0  func <stripped> // method 
	0x76c50  func <stripped> // method 
	0x76dc0  func <stripped> // method 
	0x76f30  func <stripped> // method 
	0x770a0  func <stripped> // method 
	0x77210  func <stripped> // method 
	0x77380  func <stripped> // method 
	0x774f0  func <stripped> // method 
	0x77660  func <stripped> // method 
	0x79080  func <stripped> // method 
	0x7ab00  func <stripped> // method 
	0x7d120  func <stripped> // method 
	0x7d830  func <stripped> // method 
	0x7edf0  func <stripped> // method 
	0x7f560  func <stripped> // getter 
	0x86120  func <stripped> // getter 
	0x868c0  func <stripped> // getter 
	0x87a00  func <stripped> // method 
	0x88b30  func <stripped> // method 
 }

 enum FMFCore.FMFPendingUpdateReason {

	// Properties
	case respondToInvite : (response: Bool)
	case startSharing  
	case stopSharing  
	case startFollowing  
	case stopFollowing  
	case askToFollow  
 }

 class FMFCore.FMFPendingDataManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var insertFriend : FMFFriend
	var updateFriend : FMFFriend
	var deleteFriend : FMFFriend
	var preferences : FMFPreferences
	var myInfo : FMFMyInfo

	// Swift methods
	0x8bfb0  func <stripped> // modifyCoroutine 
 }

 class FMFCore.FMFStopSharingAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x0 (0x0)

	// Swift methods
	0x92f00  class func FMFStopSharingAction.__allocating_init(friend:) // init 
 }

 class FMFCore.FMFCoreHelper : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x318400028300 (0x18400028300) in binary!
	0x3180  @objc FMFCoreHelper.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x2d4fffcd028  @objc FMFCoreHelper.(null) <stripped>
 }

 class FMFCore.FMFStopFollowingAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0xcfe12 (0x0)

	// Swift methods
	0x93490  class func FMFStopFollowingAction.__allocating_init(friend:) // init 
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
	var delegate : FMAPSConnectionHandlerDelegate
	let topic : String
	let preferenceDomain : String
	let connectionQueue : OS_dispatch_queue
	var connection : FMAPSConnection
	var topicAPSToken : String?
	var publicAPSToken : String?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x316c00028580 (0x16c00028580) in binary!
	0x3158  @objc FMAPSConnectionHandler.(null) <stripped>
WARNING: couldn't find address 0x315400028148 (0x15400028148) in binary!
	0x38000000c  @objc FMAPSConnectionHandler.(null) <stripped>
WARNING: couldn't find address 0x51b200028118 (0x1b200028118) in binary!
	0x4530  @objc FMAPSConnectionHandler.(null) <stripped>

	// Swift methods
	0x95fc0  func <stripped> // method 
	0x960b0  func <stripped> // method 
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

 class FMFCore.FMFMyLocationRequest {
 enum FMFCore.FMFConfigValue {

	// Properties
	case fenceSetupLink  
 }

 class FMFCore.FMFServerInteractionController {
 class FMFCore.FMFMyLocationController : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var delegate : FMFMyLocationControllerDelegate
	var unshiftedLocation : CLLocation?
	var currentMyLocation : CLLocation?
	var myLocation : FMFLocation
	var myUnshiftedLocation : FMFLocation
	let locationShifter : FMLocationShifter
	var accuracyThreshold : Double?
	var distanceThreshold : Double?
	let locationManager : CLLocationManager
	let myLocationUpdatingQueue : OS_dispatch_queue
	let interactionController : FMFInteractionController

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x310400028280 (0x10400028280) in binary!
	0x3100  @objc FMFMyLocationController.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x9cfffd6608  @objc FMFMyLocationController.(null) <stripped>

	// Swift methods
	0x9d1d0  func <stripped> // method 
	0x9d420  func <stripped> // method 
	0x9ea70  func <stripped> // method 
 }

 class FMFCore.FMFNotNowAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x0 (0x0)

	// Swift methods
	0xa0d70  class func FMFNotNowAction.__allocating_init(friend:) // init 
 }

 class FMFCore.FMDemoManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum FMFCore.DemoContext {

	// Properties
	case people  
	case devices  
 }

 enum FMFCore.Error {

	// Properties
	case unableToAccessSharedAppGroup  
 }

 class FMFCore.FMDiskIO {
 class FMFCore.FMFAskToFollowAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x7079745f (0x0)

	// Swift methods
	0xa4570  class func FMFAskToFollowAction.__allocating_init(friend:) // init 
 }

 class FMFCore.FMFGetURLInfoAction : FMFBaseAction {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : Q≈ // +0x45545f5f (0x0)

	// Swift methods
	0xa4880  class func FMFGetURLInfoAction.__allocating_init(url:) // init 
 }

 class FMFCore.FMFRespondToInviteAction : FMFBaseAction {

	// Properties
	let friendId : String
	let accepted : Bool

	// Swift methods
	0xa4cc0  class func FMFRespondToInviteAction.__allocating_init(friendId:accepted:) // init 
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
	case unavailableInDemoMode  
 }

 class FMFCore.FMFActionsController : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var delegate : FMFActionsControllerDelegate
	let dataManager : FMFDataManager
	let interactionController : FMFInteractionController
	let systemStateController : FMFSystemStateController

	// Swift methods
	0xa5e60  func <stripped> // method 
	0xa97e0  func <stripped> // method 
	0xaa460  func <stripped> // method 
	0xaa730  func <stripped> // method 
	0xab2a0  func <stripped> // method 
	0xaba20  func <stripped> // method 
 }

 class FMFCore.FMFGarbageCollector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let garbageCollectorIdentityKey : String
	let accountStore : ACAccountStore
	var isAccountVerificationPending : Bool
	var delegate : FMFGarbageCollectorDelegate
	let paths : [String]

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x30bc000286c8 (0xbc000286c8) in binary!
	0x5003000302b  @objc FMFGarbageCollector.(null) <stripped>

	// Swift methods
	0xb7a30  func <stripped> // method 
	0xb8290  func <stripped> // method 
	0xb8880  func <stripped> // method 
 }

 class FMFCore.FMFInitRefreshClientRequest {
 enum FMFCore.FMFRefreshReason {

	// Properties
	case minCallback  
	case maxCallback  
 }

 class FMFCore.FMFRemoveLabelsRequest {
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

 class FMFCore.FMFRemoveFriendRequest {
 class FMFCore.FMFBaseResponse : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let serverContext : [String : Any] // +0x10 (0x8)
	let dataContext : [String : Any] // +0x18 (0x8)
	let commandResponse : FMFCommandResponseFragment // +0x0 (0x0)
	let alert : FMFAlert // +0xda280 (0x8)
	let fetchStatus : Int // +0x236d (0x8)

	// Swift methods
	0xc1650  class func <stripped> // init 
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

 class FMFCore.FMFUpdateLocationAlertRequest {
 class FMFCore.FMFRemoveFriendAction : FMFBaseAction {

	// Properties
	let friend : FMFFriend // +0x0 (0x0)

	// Swift methods
	0xc5ee0  class func FMFRemoveFriendAction.__allocating_init(friend:) // init 
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
