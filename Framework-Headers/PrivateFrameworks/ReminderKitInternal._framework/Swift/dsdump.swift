 protocol ReminderKitInternal.DiffProtocol // 3 requirements
 {
	// class base protocol
	// class associated type access function
	// getter
 }
 protocol ReminderKitInternal.REMInvocableProtocol // 3 requirements
 {
	// class associated type access function
	// class associated type access function
	// method
 }
 protocol ReminderKitInternal.REMStoreInvocationValue // 1 requirements
 {
	// class associated type access function
 }
 protocol ReminderKitInternal.REMTitleEmbedding // 7 requirements
 {
	// getter
	// getter
	// class init
	// class init
	// method
	// method
	// method
 }
 protocol ReminderKitInternal.Lock // 2 requirements
 {
	// method
	// method
 }
 protocol ReminderKitInternal.Queue // 5 requirements
 {
	// class associated type access function
	// method
	// method
	// getter
	// getter
 }
 protocol ReminderKitInternal.REMContactsProviderType // 5 requirements
 {
	// method
	// method
	// method
	// method
	// method
 }
 protocol ReminderKitInternal.REMSuggestedAttributesHarvesterType // 2 requirements
 {
	// method
	// method
 }
 protocol ReminderKitInternal.REMSearchableItem // 1 requirements
 {
	// getter
 }
 protocol ReminderKitInternal.Identifiable // 1 requirements
 {
	// getter
 }
 protocol ReminderKitInternal.REMSwiftInvocableProtocol // 7 requirements
 {
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// getter
 }
 protocol ReminderKitInternal.REMSwiftInvocator // 2 requirements
 {
	// getter
	// method
 }
 protocol ReminderKitInternal.DataFrame // 2 requirements
 {
	// getter
	// method
 }
 protocol ReminderKitInternal.PartialDecodable // 6 requirements
 {
	// class base protocol
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class method
 }
 protocol ReminderKitInternal.PartialCodingKey // 2 requirements
 {
	// class base protocol
	// class base protocol
 }
 protocol ReminderKitInternal.PartialDecodableValue // 1 requirements
 {
	// class method
 }
 protocol ReminderKitInternal.PartialPrimitive // 1 requirements
 {
	// class base protocol
 }
 protocol ReminderKitInternal.ModelInput // 0 requirements
 {
 }
 protocol ReminderKitInternal.ClassificationModel // 1 requirements
 {
	// method
 }
 protocol ReminderKitInternal.REMAsyncOperationParams // 3 requirements
 {
	// class associated conformance access function
	// class associated type access function
	// getter
 }

 struct __C.os_unfair_lock_options_t {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : !—
 }

 struct __C.NLLanguage {

	// Properties
	var _rawValue : NSString
 }

 struct __C.os_activity_scope_state_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var opaque : —
 }

 enum __C.CLAccuracyAuthorization { }

 enum __C.CLAuthorizationStatus { }

 enum __C.REMRecurrenceFrequency { }

 struct __C.REMSmartListTag {

	// Properties
	var _rawValue : NSString
 }

 struct __C._NSRange {

	// Properties
	var location : Int
	var length : Int
 }

 struct __C._opaque_pthread_mutex_t {

	// Properties
	var __sig : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	var __opaque : 9–
 }

 struct __C.os_unfair_lock_s {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _os_unfair_lock_opaque : !—
 }

 struct __C.NLTagScheme {

	// Properties
	var _rawValue : NSString
 }

 struct __C.NLTag {

	// Properties
	var _rawValue : NSString
 }

 struct __C.Options {

	// Properties
	let rawValue : UInt
 }

 struct ReminderKitInternal.REMSuggestedAttributesAccuracy {

	// Properties
	let correctSample : [String] // +0x0
	let incorrectSample : [String] // +0x8
	let metrics : MultiClassificationMetric // +0x10
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case correctSample  
	case incorrectSample  
	case metrics  
 }

 struct ReminderKitInternal.Diff: DiffProtocol {

	// Properties
	var elements : Element // +0x0
	var remainingIndexes : RemainingIndex // +0x8
 }

 enum ReminderKitInternal.Element {

	// Properties
	case insert : (at: Int)
	case delete : (at: Int)
	case update : (at: Int, using: Int)
 }

 struct ReminderKitInternal.RemainingIndex {

	// Properties
	var from : Int // +0x0
	var to : Int // +0x8
 }

 struct ReminderKitInternal.Point {

	// Properties
	let x : Int // +0x0
	let y : Int // +0x8
 }

 struct ReminderKitInternal.Trace {

	// Properties
	let from : Point // +0x0
	let to : Point // +0x10
	let D : Int // +0x20
 }

 enum ReminderKitInternal.PromiseError {

	// Properties
	case castFailed : (value: Any, target: Any)
	case cancelled  
	case abandoned  
 }

 class ReminderKitInternal.PromiseDisposableToken : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
	0xc340  class func PromiseDisposableToken.__allocating_init() // init 
 }

 class ReminderKitInternal.Promise {
 struct ReminderKitInternal.FirstBlockRunner {

	// Properties
	var firstBlockHasRun : Bool
	var serialQueue : OS_dispatch_queue
 }

 class ReminderKitInternal.REMStoreInvocationKeySpace : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let key : String

	// Swift methods
 }

 enum ReminderKitInternal.RDUserNotificationCategory {

	// Properties
	case reminderAlarm  
	case todayNotification  
	case todayNotificationBadge  
	case caldavSharedList  
	case beforeFirstUnlock  
	case singleAssignmentNotification  
	case multipleAssignmentsNotification  
 }

 enum ReminderKitInternal.RDUserNotificationAction {

	// Properties
	case defaultDismiss  
	case debugDismiss  
	case markAsCompleted  
	case snoozeForOneHour  
	case snoozeForOneDay  
	case snoozeToNextThirds  
	case snoozeToNextWeekend  
	case addToReminders  
	case viewAssignmentInList  
	case declineAssignment  
 }

 enum ReminderKitInternal.RDUserNotificationType {

	// Properties
	case reminderAlarm : REMNotificationIdentifier
	case caldavSharedList : REMObjectID
	case assignmentNotification : [REMObjectID]
	case todayNotification  
	case todayNotificationBadge  
	case beforeFirstUnlock  
 }

 enum ReminderKitInternal.REMNotificationIdentifier {

	// Properties
	case objectID : REMObjectID
	case daCalendarItemUniqueIdentifier : String
 }

 struct ReminderKitInternal.REM_os_activity {

	// Properties
	let activity : OS_os_activity? // +0x0
 }

 struct ReminderKitInternal.Options {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let rawValue : !— // +0x0
 }

 struct ReminderKitInternal.Scope {

	// Properties
	var state : os_activity_scope_state_s // +0x0
 }

 struct ReminderKitInternal.MigrationSet {

	// Properties
	let parent : ACAccount // +0x0
	let calDAV : ACAccount // +0x8
	let cloudKit : ACAccount // +0x10
 }

 enum ReminderKitInternal.ExtendedPatch {

	// Properties
	case insertion : (index: Int, element: A)
	case deletion : (index: Int)
	case move : (from: Int, to: Int)
	case update : (index: Int, oldElement: A, newElement: A)
 }

 enum ReminderKitInternal.BoxedDiffAndPatchElement {

	// Properties
	case move : Element
	case single : Element
 }

 class ReminderKitInternal.REMSiriSearchDataView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct ReminderKitInternal.Model {

	// Properties
	let reminders : [REMReminder] // +0x0
 }

 class ReminderKitInternal.RemindersByCriteriaInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12e3000041428 (0x63000041428) in binary!
	0x12e24  @objc RemindersByCriteriaInvocation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff3b5f0  @objc RemindersByCriteriaInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let criteria : REMSearchCriterion // +0x0
	let fetchOffset : Int? // +0x8
	let fetchLimit : Int? // +0x18
 }

 class ReminderKitInternal.ListsByCriteriaInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12e5000041448 (0x65000041448) in binary!
	0x12e44  @objc ListsByCriteriaInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x424fff2c280  @objc ListsByCriteriaInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let criteria : REMSearchCriterion // +0x0
 }

 enum ReminderKitInternal.CodingError {

	// Properties
	case decoding : String
 }

 enum ReminderKitInternal.Base {

	// Properties
	case itemTypes  
	case objectID  
	case listID  
	case textualField  
	case isCompleted  
	case hasLocation  
	case location  
	case dueDate  
	case hasDueDate  
	case modifiedDate  
	case creationDate  
	case isRecurrent  
	case isFlagged  
	case spotlightItemIdentifier  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case base  
	case arg0  
	case arg1  
	case arg2  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case criteria  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case criteria  
	case fetchOffset  
	case fetchLimit  
 }

 enum ReminderKitInternal.Patch {

	// Properties
	case insertion : (index: Int, element: A)
	case deletion : (index: Int)
	case update : (index: Int, oldElement: A, newElement: A)
 }

 enum ReminderKitInternal.REMTitleEmbeddingMethods {

	// Properties
	case Sentence2Vec  
	case UniversalGrammar  
	case FilteredStopWords  
 }

 struct ReminderKitInternal.REMTitleEmbeddingConfig {

	// Properties
	let majorLanguage : String // +0x0
	let revision : Int // +0x10
	let currentMethod : String // +0x18
	let stopWords : [String] // +0x28
 }

 class ReminderKitInternal.REMSentence2VecTitleEmbedding : _SwiftObject /usr/lib/swift/libswiftCore.dylib, REMTitleEmbedding {

	// Properties
	let lang : NLLanguage
	let revision : Int
	let embedding : NLEmbedding

	// Swift methods
	0x413a0  class func REMSentence2VecTitleEmbedding.__allocating_init(lang:) // init 
 }

 class ReminderKitInternal.REMUniversalGrammarTitleEmbedding : _SwiftObject /usr/lib/swift/libswiftCore.dylib, REMTitleEmbedding {

	// Properties
	let lang : NLLanguage
	let revision : Int
	let wordEmbedding : NLEmbedding
	let tagger : NLTagger
	let tagOptions : Options
	let posInUse : NLTag

	// Swift methods
 }

 class ReminderKitInternal.REMFilteredTitleEmbedding : _SwiftObject /usr/lib/swift/libswiftCore.dylib, REMTitleEmbedding {

	// Properties
	let revision : Int
	let lang : NLLanguage
	let wordEmbedding : NLEmbedding
	let stopWords : Set<String>
	let tokenizer : NLTokenizer

	// Swift methods
	0x42be0  class func REMFilteredTitleEmbedding.__allocating_init(from:stopWordThresholdByPercent:) // init 
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case majorLanguage  
	case revision  
	case currentMethod  
	case stopWords  
 }

 class ReminderKitInternal.REMComplicationDataView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let store : REMStore // +0x0

	// Swift methods
	0x4a460  class func REMComplicationDataView.__allocating_init(store:) // init 
 }

 struct ReminderKitInternal.Model {

	// Properties
	let reminders : [REMReminder] // +0x0
 }

 class ReminderKitInternal.FetchModelInvocation : REMStoreInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1345000041250 (0x45000041250) in binary!
	0x12dd4  @objc FetchModelInvocation.(null) <stripped>
WARNING: couldn't find address 0x13e4c000410f0 (0x64c000410f0) in binary!
	0x48000000c  @objc FetchModelInvocation.(null) <stripped>
WARNING: couldn't find address 0x12db0000413b0 (0x5b0000413b0) in binary!
	0x13414  @objc FetchModelInvocation.(null) <stripped>
 }

 class ReminderKitInternal.Result : REMStoreInvocationResult /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {

	// Properties
	let accountStorages : [REMAccountStorage] // +0x8 (0x8)
	let listStorages : [REMListStorage] // +0x10 (0x8)
	let reminderStorages : [REMReminderStorage] // +0x18 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12db0000413b0 (0x5b0000413b0) in binary!
	0x13414  @objc Result.(null) <stripped>
WARNING: couldn't find address 0x13e1c000410c0 (0x61c000410c0) in binary!
	0x13e60  @objc Result.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff3d788  @objc Result.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x354fff3d850  @objc Result.(null) <stripped>

	// Swift methods
	0x4a7a0  class func REMComplicationDataView.FetchModelInvocation.Result.__allocating_init(accountStorages:listStorages:reminderStorages:) // init 
 }

 class ReminderKitInternal.REMListStableSortingDataView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 class ReminderKitInternal.Invocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12d6000041358 (0x56000041358) in binary!
	0x12d54  @objc Invocation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff79f60  @objc Invocation.(null) <stripped>
 }

 struct ReminderKitInternal.DeferredPromise {

	// Properties
	var promise : Promise
	var resolve : (_:)?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var reject :  empty-list 
 }

 class ReminderKitInternal.Seal {
 enum ReminderKitInternal.State {

	// Properties
	case pending  
	case resolved  
 }

 enum ReminderKitInternal.Resolution {

	// Properties
	case resolved : A1
WARNING: couldn't find address 0x0 (0x0) in binary!
	case rejected : y“
	case cancelled  
 }

 enum ReminderKitInternal.REMApplicationIconFormat {

	// Properties
	case notificationLongLook  
	case notificationShortLook  
	case reminderListiOS  
	case reminderListmacOS  
 }

 class ReminderKitInternal.UnfairLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Lock {

	// Properties
	let unfairLock : os_unfair_lock_s // +0x0
	let options : os_unfair_lock_options_t // +0x0

	// Swift methods
	0x540c0  class func UnfairLock.__allocating_init(options:) // init 
 }

 struct ReminderKitInternal.Options {

	// Properties
	let rawValue : Int // +0x0
 }

 class ReminderKitInternal.MutexLock : _SwiftObject /usr/lib/swift/libswiftCore.dylib, Lock {

	// Properties
	let mutex : _opaque_pthread_mutex_t

	// Swift methods
	0x544d0  class func MutexLock.__allocating_init() // init 
 }

 enum ReminderKitInternal.RDVectorDistanceCalculator {

	// Properties
	case euclidean  
	case cosine  
	case angular  
 }

 enum ReminderKitInternal.ContentType {

	// Properties
	case success  
	case failure  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case contentType  
	case payload  
 }

 class ReminderKitInternal.REMSuggestedWeekDay : ClassificationLabel {
	// Swift methods
	0x56850  class func REMSuggestedWeekDay.__allocating_init(_:) // init 
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case classId  
 }

 class ReminderKitInternal.REMSuggestedList : ClassificationLabel {

	// Properties
	let listName : String

	// Swift methods
	0x57360  class func REMSuggestedList.__allocating_init(listId:listName:) // init 
	0x57550  class func REMSuggestedList.__allocating_init(from:) // init 
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case classId  
	case listName  
 }

 class ReminderKitInternal.REMSuggestedLocation : ClassificationLabel { }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case classId  
 }

 class ReminderKitInternal.REMSuggestedAttributeInput : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let title : String // +0x10 (0x10)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let reminderID : +} // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let creationDate : mr // +0x45545f5f (0x0)
	let list : REMSuggestedList // +0x19 (0x8)
	let dueDayOfWeek : REMSuggestedWeekDay // +0x6118085 (0x8)
	let location : REMSuggestedLocation // +0x38 (0x8)

	// Swift methods
	0x58a90  class func REMSuggestedAttributeInput.__allocating_init(reminder:) // init 
	0x58c50  class func REMSuggestedAttributeInput.__allocating_init(reminderTitle:reminderID:list:creationDate:dueDayOfWeek:location:) // init 
	0x58d30  class func REMSuggestedAttributeInput.__allocating_init(from:) // init 
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case title  
	case reminderID  
	case creationDate  
	case list  
	case dueDayOfWeek  
	case location  
 }

 struct ReminderKitInternal.REMSuggestedAttributeInputDataFrame {

	// Properties
	let index : OrderedSet // +0x0
	let title : Series // +0x10
	let reminderID : Series // +0x18
	let creationDate : Series // +0x20
	let list : Series // +0x28
	let dueDayOfWeek : Series // +0x30
	let location : Series // +0x38
 }

 enum ReminderKitInternal.REMSggestedAttributeOutputType {

	// Properties
	case list : REMSuggestedList
	case location : REMSuggestedLocation
	case dueWeekDay : REMSuggestedWeekDay
 }

 enum ReminderKitInternal.REMSuggestedAttribute {

	// Properties
	case list : Source
	case pasteboardURL : Source
	case recurrenceFrequency : Source
	case location : Source
	case dueDate : Source
	case assignee : Source
 }

 struct ReminderKitInternal.Source {

	// Properties
	let rawValue : Int // +0x0
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case contentType  
	case payload  
	case source  
	case rangeInTitle  
 }

 enum ReminderKitInternal.ContentType {

	// Properties
	case list  
	case pasteboardURL  
	case recurrenceFrequency  
	case dueDate  
	case alarmLocation  
	case assignee  
 }

 class ReminderKitInternal.SecurityScopedURLHolder : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let fileURL : Sn

	// Swift methods
 }

 struct ReminderKitInternal.FailedToAccessSecurityScopedURLError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let url : Sn
 }

 class ReminderKitInternal.AsyncBlockOperation {
 struct ReminderKitInternal.MapOnScheduler {

	// Properties
	let upstream : A
	let executeOnScheduler : B
	let receiveOnScheduler : B
WARNING: couldn't find address 0x0 (0x0) in binary!
	let transform : Output
 }

 enum ReminderKitInternal.AsyncOperationError {

	// Properties
	case cancelled  
 }

 class ReminderKitInternal.AsyncOperation {
 enum ReminderKitInternal.State {

	// Properties
	case ready  
	case executing  
	case finished  
 }

 struct ReminderKitInternal.EquatableCLCircularRegion {

	// Properties
	let base : CLCircularRegion // +0x0
 }

 enum ReminderKitInternal.REMApplicationShortcutUserInfoKeys {

	// Properties
	case actionURLAbsoluteString  
 }

 struct ReminderKitInternal.PublisherFinishedWithoutOutputError { }

 struct ReminderKitInternal.DoubleStacksQueue: Queue {

	// Properties
	var enqueueStack : [A]
	var dequeueStack : [A]
 }

 enum ReminderKitInternal.REMNavigationSpecifier {

	// Properties
	case account : AccountPathSpecifier
	case list : ListPathSpecifier
	case reminder : ReminderPathSpecifier
	case today : SmartListPathSpecifier
	case scheduled : SmartListPathSpecifier
	case allReminders : SmartListPathSpecifier
	case flagged : SmartListPathSpecifier
	case search : SearchPathSpecifier
	case assigned : SmartListPathSpecifier
	case siriFoundInApps : SmartListPathSpecifier
	case root : RootPathSpecifier
 }

 enum ReminderKitInternal.AccountPathSpecifier {

	// Properties
	case showInAccountsList  
 }

 enum ReminderKitInternal.ListPathSpecifier {

	// Properties
	case showDetail : DetailSection
	case showInAccount  
	case showContents  
	case newReminder  
 }

 enum ReminderKitInternal.DetailSection {

	// Properties
	case none  
	case appearance  
 }

 enum ReminderKitInternal.ReminderPathSpecifier {

	// Properties
	case showDetail : DetailSection
	case showInList  
 }

 enum ReminderKitInternal.DetailSection {

	// Properties
	case dueDate : (setOn: Bool)
	case none  
	case location  
	case endRepeat  
	case subtasks  
	case assignments  
 }

 enum ReminderKitInternal.RootPathSpecifier {

	// Properties
	case none  
 }

 enum ReminderKitInternal.SmartListPathSpecifier {

	// Properties
	case select : REMObjectID
	case showInAccountsList  
	case showContents  
	case newReminder  
 }

 enum ReminderKitInternal.SearchPathSpecifier {

	// Properties
	case showContents : String
	case focusInAccountsList  
 }

 enum ReminderKitInternal.ParsedPathComponent {

	// Properties
	case showInContainer  
	case showContents  
	case showDetails  
	case newReminder  
	case appearance  
	case dueDateSet  
	case dueDate  
	case location  
	case endRepeat  
	case subtasks  
	case assignments  
	case select  
 }

 enum ReminderKitInternal.ParsedQueryItem {

	// Properties
	case query : String
	case reminder : REMObjectID
 }

 struct ReminderKitInternal.REMContactAndName {

	// Properties
	let contact : CNContact? // +0x0
	let name : String // +0x8
 }

 enum ReminderKitInternal.REMContactAndNameFetchResult {

	// Properties
	case running : Promise
	case succeeded : REMContactAndName
 }

 class ReminderKitInternal.REMContactsProvider : _SwiftObject /usr/lib/swift/libswiftCore.dylib, REMContactsProviderType {

	// Properties
	let contactStore : CNContactStore
	let queue : OS_dispatch_queue
	let backgroundQueue : OS_dispatch_queue
	var contactFetchOperationManager : REMAsyncOperationManager

	// Swift methods
	0x72400  class func REMContactsProvider.__allocating_init(contactStore:queue:backgroundQueue:) // init 
 }

 enum ReminderKitInternal.REMMeCardAddressType {

	// Properties
	case home  
	case work  
	case school  
	case other  
 }

 enum ReminderKitInternal.OperationParams {

	// Properties
	case meCard : KeysToFetch
	case contactRepresentation : KeysToFetch
 }

 enum ReminderKitInternal.ContactFetchError {

	// Properties
	case notFound  
 }

 struct ReminderKitInternal.KeysToFetch {

	// Properties
	let keys : [CNKeyDescriptor] // +0x0
 }

 class ReminderKitInternal.REMWidgetRefresh : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var passthroughSubject : Õ // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var debouncer : i // +0x18 (0x8)
	let queue : OS_dispatch_queue // +0x20 (0x8)

	// Swift methods
	0x7e400  class func REMWidgetRefresh.__allocating_init(interval:queue:) // init 
	0x7e490  func REMWidgetRefresh.refresh() // method 
 }

 enum ReminderKitInternal.REMFeatureFlags {

	// Properties
	case listEmoji  
	case newReminderDetails  
	case tappableLinks  
	case attachmentContextMenus  
	case editSmartListControls  
	case quickTypeBarSuggestedAttributes  
	case assignableTasks  
	case quickEntryUI  
	case smartListShowSubtaskCount  
	case smartListManualSort  
	case calendarDueDatePicker  
 }

 struct ReminderKitInternal.Platforms {

	// Properties
	let rawValue : Int // +0x0
 }

 enum ReminderKitInternal.WhenError {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case errors :  empty-list 
 }

 class ReminderKitInternal.REMListPickerDataView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct ReminderKitInternal.Model {

	// Properties
	let accounts : Account // +0x0
 }

 struct ReminderKitInternal.Account {

	// Properties
	let account : REMAccount_Codable // +0x0
	let lists : REMList_Codable // +0x8
 }

 struct ReminderKitInternal.Result {

	// Properties
	let model : Model // +0x0
	let latestFetchResultToken : REMFetchResultToken? // +0x8
 }

 class ReminderKitInternal.Invocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12d2800041320 (0x52800041320) in binary!
	0x12d1c  @objc Invocation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfff7e158  @objc Invocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let noBasicAccounts : Bool // +0x0
 }

 struct ReminderKitInternal.Result {

	// Properties
	let model : Model // +0x0
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case model  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case noBasicAccounts  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case accounts  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case account  
	case lists  
 }

 struct ReminderKitInternal.OrderedSet {

	// Properties
	var array : [A]
	var dict : [A : Int]
 }

 class ReminderKitInternal.REMSuggestedAttributesHarvester : _SwiftObject /usr/lib/swift/libswiftCore.dylib, REMSuggestedAttributesHarvesterType {

	// Properties
	let suggestedAttributesPerformer : REMSuggestedAttributesPerformer

	// Swift methods
	0x8cac0  class func REMSuggestedAttributesHarvester.__allocating_init(suggestedAttributesPerformer:) // init 
 }

 class ReminderKitInternal.Invocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1334800041148 (0x34800041148) in binary!
	0x12ccc  @objc Invocation.(null) <stripped>
WARNING: couldn't find address 0x12cc0000412b8 (0x4c0000412b8) in binary!
	0x38000000c  @objc Invocation.(null) <stripped>
WARNING: couldn't find address 0x1331800041118 (0x31800041118) in binary!
	0x12c9c  @objc Invocation.(null) <stripped>
 }

 class ReminderKitInternal.MentionsExtractionInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1331800041118 (0x31800041118) in binary!
	0x12c9c  @objc MentionsExtractionInvocation.(null) <stripped>
WARNING: couldn't find address 0x12c9000041288 (0x49000041288) in binary!
	0x18000000c  @objc MentionsExtractionInvocation.(null) <stripped>
WARNING: couldn't find address 0x14bdc00040ed8 (0x3dc00040ed8) in binary!
	0x18000000c  @objc MentionsExtractionInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Request {

	// Properties
	let reminder : REMSuggestedAttributeInput // +0x0
	let hasPasteboardURL : Bool // +0x8
	let reminderHasURL : Bool // +0x9
	let coreBehavior : CoreBehavior // +0x10
	let embedding : Embedding // +0x30
	let allowLocalOverrides : Bool // +0x39
	let allowCloudOverrides : Bool // +0x3a
 }

 struct ReminderKitInternal.CoreBehavior {

	// Properties
	let relativeSupport : Double? // +0x0
	let confidence : Double? // +0x10
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case relativeSupport  
	case confidence  
 }

 struct ReminderKitInternal.Embedding {

	// Properties
	let neighborsToConsider : Int? // +0x0
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case neighborsToConsider  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case reminder  
	case hasPasteboardURL  
	case reminderHasURL  
	case coreBehavior  
	case embedding  
	case allowLocalOverrides  
	case allowCloudOverrides  
 }

 struct ReminderKitInternal.MentionsExtractionRequest {

	// Properties
	let reminderTitle : String
	let listID : REMObjectID_Codable
WARNING: couldn't find address 0x0 (0x0) in binary!
	let editingSessionID : +}
 }

 struct ReminderKitInternal.Response {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let heuristicResult : µm // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let embeddingResult : µm // +0x40
WARNING: couldn't find address 0x0 (0x0) in binary!
	let coreBehaviorResult : µm // +0x80
 }

 struct ReminderKitInternal.MentionsExtractionResponse {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let result : µm // +0x0
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case result  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case heuristicResult  
	case embeddingResult  
	case coreBehaviorResult  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case reminderTitle  
	case listID  
	case editingSessionID  
 }

 class ReminderKitInternal.MersenneTwister : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let generator : RMDMersenneTwisterRandomSource

	// Swift methods
	0x93ca0  class func MersenneTwister.__allocating_init() // init 
	0x93d80  class func MersenneTwister.__allocating_init(seed:) // init 
	0x93e30  func MersenneTwister.next() // method 
 }

 enum ReminderKitInternal.REMSearchableItemAttributeName {

	// Properties
	case spotlightItemIdentifier  
	case objectID  
	case itemType  
	case flagged  
	case isRecurrent  
 }

 enum ReminderKitInternal.REMSearchableItemType {

	// Properties
	case reminder  
	case list  
 }

 enum ReminderKitInternal.REMStringMatchingStyle {

	// Properties
	case exact  
	case prefix  
	case word  
 }

 enum ReminderKitInternal.REMSearchCriterion {

	// Properties
	case itemTypes : REMSearchableItemType
	case objectID : [REMObjectID]
	case listID : REMObjectID
	case textualField : REMStringMatchingStyle
	case isCompleted : Bool
	case hasLocation : Bool
	case location : REMStringMatchingStyle
WARNING: couldn't find address 0x0 (0x0) in binary!
	case dueDate : Áx
	case hasDueDate : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	case modifiedDate : Áx
WARNING: couldn't find address 0x0 (0x0) in binary!
	case creationDate : Áx
	case isRecurrent : Bool
	case isFlagged : Bool
	case spotlightItemIdentifier : String
 }

 class ReminderKitInternal.PointCloud : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var points : RDVector
	var center : RDVector
	var variance : Double
	var numOfPoints : Int
	var dimension : Int?
	let metric : RDVectorDistanceCalculator

	// Swift methods
	0x98950  func PointCloud.points.getter // getter 
	0x98a10  func PointCloud.center.getter // getter 
	0x98ac0  func PointCloud.variance.getter // getter 
	0x98b70  func PointCloud.numOfPoints.getter // getter 
	0x98c20  func PointCloud.dimension.getter // getter 
	0x98c60  class func PointCloud.__allocating_init(points:distanceCalculator:) // init 
	0x98ce0  func PointCloud.addPoint(point:) // method 
	0x98ec0  func <stripped> // method 
 }

 struct ReminderKitInternal.VoidParameters { }

 struct ReminderKitInternal.REMInvocationResult {

	// Properties
	let result : A
	let latestFetchResultToken : REMFetchResultToken?
 }

 enum ReminderKitInternal.CodingKeys { }

 class ReminderKitInternal.Analytics : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x13ce400040f88 (0x4e400040f88) in binary!
	0x18000000c  @objc Analytics.(null) <stripped>
 }

 class ReminderKitInternal.REMSuggestedAttributesTrainer : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x132a0000410a0 (0x2a0000410a0) in binary!
	0x12c24  @objc REMSuggestedAttributesTrainer.(null) <stripped>
WARNING: couldn't find address 0x12c1800041210 (0x41800041210) in binary!
	0x18000000c  @objc REMSuggestedAttributesTrainer.(null) <stripped>
WARNING: couldn't find address 0x134dc00040e70 (0x4dc00040e70) in binary!
	0x18000000c  @objc REMSuggestedAttributesTrainer.(null) <stripped>
 }

 struct ReminderKitInternal.Result {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let embedding : ;h // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let corebehavior : )h // +0xa0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let intentionalWord : h // +0x248
	let trainingDuration : Double // +0x290
 }

 struct ReminderKitInternal.Embedding {

	// Properties
	let listAccuracy : REMSuggestedAttributesAccuracy // +0x0
	let skippedRemindersCount : Int // +0x78
	let trainingSetCount : Int // +0x80
	let validationSetCount : Int // +0x88
	let trainingDuration : Double // +0x90
 }

 struct ReminderKitInternal.CoreBehavior {

	// Properties
	let listAccuracy : REMSuggestedAttributesAccuracy // +0x0
	let dueDayOfWeekAccuracy : REMSuggestedAttributesAccuracy // +0x78
	let alarmLocationAccuracy : REMSuggestedAttributesAccuracy // +0xf0
	let minedRuleCount : Int // +0x168
	let filteredOutRulesCount : Int // +0x170
	let trainingSetCount : Int // +0x178
	let validationSetCount : Int // +0x180
	let distinctListCount : Int // +0x188
	let trainingDuration : Double // +0x190
	let topRules : [String] // +0x198
 }

 struct ReminderKitInternal.IntentionalWordPrescribed {

	// Properties
	let clusterVariances : [Double] // +0x0
	let clusterLabels : [String] // +0x8
	let clusterSizes : [Int] // +0x10
	let mse : Double // +0x18
	let trainingDuration : Double // +0x20
 }

 struct ReminderKitInternal.IntentionalWordTuned {

	// Properties
	let bestK : Int // +0x0
	let bestClusterLabels : [String] // +0x8
	let clusterVariances : [[Double]] // +0x10
	let clusterSizes : [[Int]] // +0x18
	let mse : [Double] // +0x20
	let minK : Int // +0x28
	let maxK : Int // +0x30
	let trainingDuration : Double // +0x38
 }

 enum ReminderKitInternal.IntentionalWord {

	// Properties
	case fromTuning : IntentionalWordTuned
	case prescribed : IntentionalWordPrescribed
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let maxSampleCount : Int // +0x0
	let minimumSampleCount : Int // +0x8
	let validationSetProportion : Double // +0x10
	let shouldSaveModel : Bool // +0x18
	let allowLocalOverrides : Bool // +0x19
	let allowCloudOverrides : Bool // +0x1a
	let randomSeed : Int // +0x20
	let coreBehavior : CoreBehavior // +0x28
	let embedding : Embedding // +0x58
	let intentionalWord : IntentionalWord // +0x68
 }

 struct ReminderKitInternal.CoreBehavior {

	// Properties
	let isEnabled : Bool // +0x0
	let support : UInt // +0x8
	let adjustment : UInt // +0x10
	let confidence : Double // +0x18
	let validationRelativeSupport : Double // +0x20
	let validationConfidence : Double // +0x28
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case isEnabled  
	case support  
	case adjustment  
	case confidence  
	case validationRelativeSupport  
	case validationConfidence  
 }

 struct ReminderKitInternal.Embedding {

	// Properties
	let isEnabled : Bool // +0x0
	let neighborsToConsider : Int // +0x8
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case isEnabled  
	case neighborsToConsider  
 }

 struct ReminderKitInternal.IntentionalWord {

	// Properties
	let isEnabled : Bool // +0x0
	let k : Int? // +0x8
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case isEnabled  
	case k  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case maxSampleCount  
	case minimumSampleCount  
	case validationSetProportion  
	case shouldSaveModel  
	case allowLocalOverrides  
	case allowCloudOverrides  
	case randomSeed  
	case coreBehavior  
	case embedding  
	case intentionalWord  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case embedding  
	case corebehavior  
	case intentionalWord  
	case trainingDuration  
 }

 enum ReminderKitInternal.ContentType {

	// Properties
	case fromTuning  
	case prescribed  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case contentType  
	case payload  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case bestK  
	case bestClusterLabels  
	case clusterVariances  
	case clusterSizes  
	case mse  
	case minK  
	case maxK  
	case trainingDuration  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case clusterVariances  
	case clusterLabels  
	case clusterSizes  
	case mse  
	case trainingDuration  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case listAccuracy  
	case dueDayOfWeekAccuracy  
	case alarmLocationAccuracy  
	case minedRuleCount  
	case filteredOutRulesCount  
	case trainingSetCount  
	case validationSetCount  
	case distinctListCount  
	case trainingDuration  
	case topRules  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case listAccuracy  
	case skippedRemindersCount  
	case trainingSetCount  
	case validationSetCount  
	case trainingDuration  
 }

 struct ReminderKitInternal.ExtendedDiff {

	// Properties
	let source : Diff // +0x0
	let sourceIndex : [Int] // +0x10
	let reorderedIndex : [Int] // +0x18
	let elements : Element // +0x20
	let moveIndices : Set<Int> // +0x28
 }

 enum ReminderKitInternal.Element {

	// Properties
	case insert : (at: Int)
	case delete : (at: Int)
	case update : (at: Int, using: Int)
	case move : (from: Int, to: Int)
 }

 struct ReminderKitInternal.SortedPatchElement {

	// Properties
	var value : Patch
	let sourceIndex : Int
	let sortedIndex : Int
 }

 class ReminderKitInternal.LinkedList {
 class ReminderKitInternal.DoublyLinkedList {
 class ReminderKitInternal.InitiallyEmptyCurrentValueSubject {
 class ReminderKitInternal.REMWidgetDataView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let store : REMStore

	// Swift methods
	0xbfb70  class func REMWidgetDataView.__allocating_init(store:) // init 
 }

 struct ReminderKitInternal.Model {

	// Properties
	let reminders : [REMReminder] // +0x0
	let additionalReminderCount : Int // +0x8
 }

 class ReminderKitInternal.FetchModelInvocation : REMStoreInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {

	// Properties
	let reminderFetchLimit : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1324000041040 (0x24000041040) in binary!
	0x12bc4  @objc FetchModelInvocation.(null) <stripped>
WARNING: couldn't find address 0x13c3c00040ee0 (0x43c00040ee0) in binary!
	0x48000000c  @objc FetchModelInvocation.(null) <stripped>
WARNING: couldn't find address 0x12ba0000411a0 (0x3a0000411a0) in binary!
	0x13204  @objc FetchModelInvocation.(null) <stripped>

	// Swift methods
	0xbfc40  class func REMWidgetDataView.FetchModelInvocation.__allocating_init(reminderFetchLimit:) // init 
 }

 class ReminderKitInternal.Result : REMStoreInvocationResult /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {

	// Properties
	let accountStorages : [REMAccountStorage]
	let listStorages : [REMListStorage]
	let reminderStorages : [REMReminderStorage]
	let additionalReminderCount : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12ba0000411a0 (0x3a0000411a0) in binary!
	0x13204  @objc Result.(null) <stripped>
WARNING: couldn't find address 0x13c0c00040eb0 (0x40c00040eb0) in binary!
	0x13c50  @objc Result.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffbe428  @objc Result.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffbf610  @objc Result.(null) <stripped>

	// Swift methods
	0xc1050  class func REMWidgetDataView.FetchModelInvocation.Result.__allocating_init(accountStorages:listStorages:reminderStorages:additionalReminderCount:) // init 
 }

 struct ReminderKitInternal.CodableError {

	// Properties
	let domain : String // +0x0
	let errorCode : Int // +0x10
	let localizedDescription : String? // +0x18
	let debugDescription : String? // +0x28
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case domain  
	case errorCode  
	case localizedDescription  
	case debugDescription  
 }

 enum ReminderKitInternal.REMMigrationResultState {

	// Properties
	case preparingMigration  
	case downloadingLists  
	case uploadingListsOrdering  
	case downloadingReminders  
	case uploadingList  
	case uploadingReminders  
	case finishingMigration  
	case complete  
 }

 struct ReminderKitInternal.OrderedDictionary {

	// Properties
	var array : [A]
	var dict : [A : B]
 }

 class ReminderKitInternal.REMRemindersListDataView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 enum ReminderKitInternal.SortingDirection {

	// Properties
	case ascending  
	case descending  
 }

 enum ReminderKitInternal.SortingStyle {

	// Properties
	case displayDate : SortingDirection
	case priority : SortingDirection
	case creationDate : SortingDirection
	case title : SortingDirection
	case unknown  
	case manual  
 }

 enum ReminderKitInternal.FetchSubtasks {

	// Properties
	case off  
	case on  
	case count  
 }

 enum ReminderKitInternal.ShowCompleted {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case after : mr
	case whitelist : REMObjectID_Codable
	case off  
	case on  
 }

 struct ReminderKitInternal.ReminderLite {

	// Properties
	let objectID : REMObjectID_Codable // +0x0
	let isCompleted : Bool // +0x8
	let subtaskCount : Int // +0x10
	let subtasks : ReminderLite // +0x18
 }

 struct ReminderKitInternal.CountByCompleted {

	// Properties
	let completed : Int // +0x0
	let incomplete : Int // +0x8
 }

 struct ReminderKitInternal.FlatModel {

	// Properties
	let reminders : ReminderLite // +0x0
	let remindersCount : CountByCompleted // +0x8
	let prefetchedReminders : REMReminder_Codable // +0x20
	let prefetchedDueReminders : REMReminder_Codable // +0x28
 }

 struct ReminderKitInternal.ListModel {

	// Properties
	let model : FlatModel // +0x0
	let list : REMList // +0x30
 }

 struct ReminderKitInternal.ListsModel {

	// Properties
	let groups : Group // +0x0
	let completedRemindersCount : Int? // +0x8
	let prefetchedReminders : REMReminder_Codable // +0x18
	let prefetchedDueReminders : REMReminder_Codable // +0x20
 }

 struct ReminderKitInternal.Group {

	// Properties
	let listID : REMObjectID_Codable // +0x0
	let listName : String // +0x8
	let listColor : REMColor_Codable // +0x18
	let reminders : ReminderLite // +0x20
 }

 struct ReminderKitInternal.DatesModel {

	// Properties
	let groups : Group // +0x0
	let completedRemindersCount : Int? // +0x8
	let prefetchedReminders : REMReminder_Codable // +0x18
	let prefetchedDueReminders : REMReminder_Codable // +0x20
 }

 struct ReminderKitInternal.Group {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : mr
	let reminders : ReminderLite
	let isToday : Bool
 }

 struct ReminderKitInternal.TodayModel {

	// Properties
	let todayReminders : ReminderLite // +0x0
	let nearbyReminders : ReminderLite // +0x8
	let completedRemindersCount : Int? // +0x10
	let currentLocation : REMStructuredLocation_Codable // +0x20
	let prefetchedReminders : REMReminder_Codable // +0x28
	let prefetchedDueReminders : REMReminder_Codable // +0x30
	let todaySmartList : REMSmartList_Codable // +0x38
 }

 struct ReminderKitInternal.Diff {

	// Properties
	let updatedReminderObjectIDs : REMObjectID_Codable // +0x0
	let insertedReminderObjectIDs : REMObjectID_Codable // +0x8
	let updatedListObjectIDs : REMObjectID_Codable // +0x10
 }

 struct ReminderKitInternal.Result {

	// Properties
	let model : A
	let diff : Diff
	let latestFetchResultToken : REMFetchResultToken?
 }

 enum ReminderKitInternal.RemindersPrefetch {

	// Properties
	case initial : Int
	case updatedInserted : Int
WARNING: couldn't find address 0x0 (0x0) in binary!
	case initialAndDateRange :  empty-list 
	case none  
 }

 struct ReminderKitInternal.DefaultInvocationResult {

	// Properties
	let model : A
	let diff : Diff
 }

 class ReminderKitInternal.ListInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x129c000040fb8 (0x1c000040fb8) in binary!
	0x129b4  @objc ListInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x794fffd16f0  @objc ListInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let list : REMList_Codable
	let sortingStyle : SortingStyle
	let showCompleted : ShowCompleted
	let countCompleted : Bool
	let remindersPrefetch : RemindersPrefetch
	let fetchSubtasks : FetchSubtasks
 }

 struct ReminderKitInternal.Result {

	// Properties
	let model : FlatModel // +0x0
	let diff : Diff // +0x30
	let list : REMList_Codable // +0x48
 }

 class ReminderKitInternal.FlaggedInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x129e000040fd8 (0x1e000040fd8) in binary!
	0x129d4  @objc FlaggedInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7b4fffbdce0  @objc FlaggedInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let sortingStyle : SortingStyle
	let showCompleted : ShowCompleted
	let countCompleted : Bool
	let remindersPrefetch : RemindersPrefetch
 }

 class ReminderKitInternal.AllInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12a6000041058 (0x26000041058) in binary!
	0x12a54  @objc AllInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x34fffd17a0  @objc AllInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let sortingStyle : SortingStyle
	let showCompleted : ShowCompleted
	let countCompleted : Bool
	let remindersPrefetch : RemindersPrefetch
 }

 class ReminderKitInternal.TodayInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1294000040f38 (0x14000040f38) in binary!
	0x12934  @objc TodayInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x714fffd16c0  @objc TodayInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let currentLocation : REMStructuredLocation_Codable
	let sortingStyle : SortingStyle
	let showCompleted : ShowCompleted
	let countCompleted : Bool
	let remindersPrefetch : RemindersPrefetch
	let returnSmartListOrdering : Bool
 }

 class ReminderKitInternal.ScheduledInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x129a000040f98 (0x1a000040f98) in binary!
	0x12994  @objc ScheduledInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x774fffd1700  @objc ScheduledInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let sortingStyle : SortingStyle
	let showCompleted : ShowCompleted
	let countCompleted : Bool
	let remindersPrefetch : RemindersPrefetch
 }

 class ReminderKitInternal.AssignedInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12a4000041038 (0x24000041038) in binary!
	0x12a34  @objc AssignedInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x14fffd1790  @objc AssignedInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let sortingStyle : SortingStyle
	let showCompleted : ShowCompleted
	let countCompleted : Bool
	let remindersPrefetch : RemindersPrefetch
	let currentUserShareParticipantIDsOverride : [String]?
 }

 class ReminderKitInternal.DEBUG_AssignedCountInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12a2000041018 (0x22000041018) in binary!
	0x12a14  @objc DEBUG_AssignedCountInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7f4fffd17b0  @objc DEBUG_AssignedCountInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let currentUserShareParticipantIDsOverride : [String]? // +0x0
 }

 class ReminderKitInternal.SearchInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1298000040f78 (0x18000040f78) in binary!
	0x12974  @objc SearchInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x754fffd16f0  @objc SearchInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let objectIDs : REMObjectID_Codable
	let sortingStyle : SortingStyle
	let showCompleted : ShowCompleted
	let countCompleted : Bool
 }

 class ReminderKitInternal.SiriFoundInAppsInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1296000040f58 (0x16000040f58) in binary!
	0x12954  @objc SiriFoundInAppsInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x734fffd1680  @objc SiriFoundInAppsInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let sortingStyle : SortingStyle
	let showCompleted : ShowCompleted
	let countCompleted : Bool
	let remindersPrefetch : RemindersPrefetch
 }

 class ReminderKitInternal.TodayNotificationInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1292000040f18 (0x12000040f18) in binary!
	0x12914  @objc TodayNotificationInvocation.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe6270  @objc TodayNotificationInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters { }

 class ReminderKitInternal.DEBUG_PhantomRemindersInvocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x12a0000040ff8 (0x20000040ff8) in binary!
	0x129f4  @objc DEBUG_PhantomRemindersInvocation.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7d4fffd1700  @objc DEBUG_PhantomRemindersInvocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters { }

 enum ReminderKitInternal.CodingError {

	// Properties
	case decoding : String
 }

 enum ReminderKitInternal.CodingError {

	// Properties
	case decoding : String
 }

 enum ReminderKitInternal.Base {

	// Properties
	case none  
	case initial  
	case updatedInserted  
	case initialAndDateRange  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case base  
	case count  
	case beginDate  
	case endDate  
 }

 enum ReminderKitInternal.CodingKeys { }

 enum ReminderKitInternal.CodingKeys { }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case sortingStyle  
	case showCompleted  
	case countCompleted  
	case remindersPrefetch  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case objectIDs  
	case sortingStyle  
	case showCompleted  
	case countCompleted  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case currentUserShareParticipantIDsOverride  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case sortingStyle  
	case showCompleted  
	case countCompleted  
	case remindersPrefetch  
	case currentUserShareParticipantIDsOverride  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case sortingStyle  
	case showCompleted  
	case countCompleted  
	case remindersPrefetch  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case currentLocation  
	case sortingStyle  
	case showCompleted  
	case countCompleted  
	case remindersPrefetch  
	case returnSmartListOrdering  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case sortingStyle  
	case showCompleted  
	case countCompleted  
	case remindersPrefetch  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case sortingStyle  
	case showCompleted  
	case countCompleted  
	case remindersPrefetch  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case model  
	case diff  
	case list  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case list  
	case sortingStyle  
	case showCompleted  
	case countCompleted  
	case remindersPrefetch  
	case fetchSubtasks  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case model  
	case diff  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case updatedReminderObjectIDs  
	case insertedReminderObjectIDs  
	case updatedListObjectIDs  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case todayReminders  
	case nearbyReminders  
	case completedRemindersCount  
	case currentLocation  
	case prefetchedReminders  
	case prefetchedDueReminders  
	case todaySmartList  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case groups  
	case completedRemindersCount  
	case prefetchedReminders  
	case prefetchedDueReminders  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case date  
	case reminders  
	case isToday  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case groups  
	case completedRemindersCount  
	case prefetchedReminders  
	case prefetchedDueReminders  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case listID  
	case listName  
	case listColor  
	case reminders  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case reminders  
	case remindersCount  
	case prefetchedReminders  
	case prefetchedDueReminders  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case completed  
	case incomplete  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case objectID  
	case isCompleted  
	case subtaskCount  
	case subtasks  
 }

 enum ReminderKitInternal.Base {

	// Properties
	case off  
	case on  
	case after  
	case whitelist  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case base  
	case afterDate  
	case whitelistObjectIDs  
 }

 enum ReminderKitInternal.Base {

	// Properties
	case unknown  
	case manual  
	case displayDate  
	case priority  
	case creationDate  
	case title  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case base  
	case sortDirection  
 }

 class ReminderKitInternal.SeriesMaterial {
 class ReminderKitInternal.Series {
 class ReminderKitInternal.RDVector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var data : [Double]
	var dimension : Int

	// Swift methods
	0xe2f80  func RDVector.data.getter // getter 
	0xe3030  func RDVector.dimension.getter // getter 
	0xe2d10  class func RDVector.__allocating_init(_:) // init 
	0xe30b0  class func RDVector.__allocating_init(dimension:) // init 
	0xe31f0  func RDVector.subscript.getter // getter 
	0xe3230  func RDVector.isZero() // method 
	0xe32a0  func RDVector.hash(into:) // method 
	0xe32c0  func RDVector.description.getter // getter 
	0xe33a0  func RDVector.truncatedLoggingDescription.getter // getter 
	0xe3b80  func RDVector.hashValue.getter // getter 
	0xe37a0  class func RDVector.__allocating_init(from:) // init 
	0xe3a00  func RDVector.encode(to:) // method 
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case data  
	case dimension  
 }

 struct ReminderKitInternal.Partial {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var backing :  empty-list 
 }

 struct ReminderKitInternal.PropertyDoesNotConformToPartialDecodableValue {

	// Properties
	let key : String // +0x0
 }

 struct ReminderKitInternal.PartialOverride {

	// Properties
	let _full : A
	let _partials : Partial
 }

 class ReminderKitInternal.ClassificationLabel : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let classId : String

	// Swift methods
	0xe7cb0  func ClassificationLabel.hash(into:) // method 
	0xe7e20  func ClassificationLabel.description.getter // getter 
	0xe7ed0  class func ClassificationLabel.__allocating_init(stringLiteral:) // init 
	0xec000  class func ClassificationLabel.__allocating_init(_:) // init 
	0xe7cf0  func ClassificationLabel.hashValue.getter // getter 
	0xe8050  class func ClassificationLabel.__allocating_init(from:) // init 
	0xe7d50  func ClassificationLabel.encode(to:) // method 
 }

 struct ReminderKitInternal.MultiClassificationMetric {

	// Properties
	let correctIndices : [Int] // +0x0
	let incorrectIndices : [Int] // +0x8
	let confusionMatrix : [[Int]] // +0x10
	let truePositives : [Int] // +0x18
	let trueNegatives : [Int] // +0x20
	let falsePositives : [Int] // +0x28
	let falseNegatives : [Int] // +0x30
	let precisions : [Double] // +0x38
	let recalls : [Double] // +0x40
	let typeIErrors : [Double] // +0x48
	let typeIIErrors : [Double] // +0x50
	let accuracy : Double // +0x58
	let indexedClasses : [String] // +0x60
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case correctIndices  
	case incorrectIndices  
	case confusionMatrix  
	case truePositives  
	case trueNegatives  
	case falsePositives  
	case falseNegatives  
	case precisions  
	case recalls  
	case typeIErrors  
	case typeIIErrors  
	case accuracy  
	case indexedClasses  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case classId  
 }

 class ReminderKitInternal.REMSuggestedAttributesElector : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let store : REMStore // +0x0
	let excludedAttributes : ExcludedAttributes // +0x0

	// Swift methods
	0xefb20  class func REMSuggestedAttributesElector.__allocating_init(store:excludedAttributes:) // init 
 }

 struct ReminderKitInternal.ExcludedAttributes {

	// Properties
	let rawValue : Int // +0x0
 }

 class ReminderKitInternal.REMObjectID_Codable : REMObjectID /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15a2000040e60 (0x22000040e60) in binary!
	0x12844  @objc REMObjectID_Codable.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6c4fffe77e0  @objc REMObjectID_Codable.(null) <stripped>

	// Swift methods
	0xf4dd0  class func REMObjectID_Codable.__allocating_init(_:) // init 
	0xf5af0  class func REMObjectID_Codable.__allocating_init(from:) // init 
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case uuid  
	case entityName  
 }

 class ReminderKitInternal.REMAccount_Codable : REMAccount /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15ab800040f88 (0x2b800040f88) in binary!
	0x88000000c  @objc REMAccount_Codable.(null) <stripped>

	// Swift methods
	0xf5fd0  class func REMAccount_Codable.__allocating_init(_:) // init 
	0xf6220  class func REMAccount_Codable.__allocating_init(from:) // init 
 }

 class ReminderKitInternal.REMList_Codable : REMList /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15a4c00040f18 (0x24c00040f18) in binary!
	0x28000000c  @objc REMList_Codable.(null) <stripped>

	// Swift methods
	0xf6290  class func REMList_Codable.__allocating_init(_:) // init 
	0xf6540  class func REMList_Codable.__allocating_init(from:) // init 
 }

 class ReminderKitInternal.REMSmartList_Codable : REMSmartList /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x159e000040eb0 (0x1e000040eb0) in binary!
	0x58000000c  @objc REMSmartList_Codable.(null) <stripped>

	// Swift methods
	0xfee70  class func REMSmartList_Codable.__allocating_init(_:) // init 
	0xf66d0  class func REMSmartList_Codable.__allocating_init(from:) // init 
 }

 class ReminderKitInternal.REMReminder_Codable : REMReminder /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15a1400040ef0 (0x21400040ef0) in binary!
	0x159f4  @objc REMReminder_Codable.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffef8b0  @objc REMReminder_Codable.(null) <stripped>

	// Swift methods
	0xf69f0  class func REMReminder_Codable.__allocating_init(_:) // init 
	0xf6de0  class func REMReminder_Codable.__allocating_init(from:) // init 
 }

 class ReminderKitInternal.REMColor_Codable : REMColor /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x15ad4000413e0 (0x2d4000413e0) in binary!
	0x128c4  @objc REMColor_Codable.(null) <stripped>
WARNING: couldn't find address 0x15adc00041410 (0x2dc00041410) in binary!
	0x15af0  @objc REMColor_Codable.(null) <stripped>
WARNING: couldn't find address 0x128a000041408 (0xa000041408) in binary!
	0x13918  @objc REMColor_Codable.(null) <stripped>
WARNING: couldn't find address 0x15a58000413f8 (0x258000413f8) in binary!
	0x15a4c  @objc REMColor_Codable.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe6fc8  @objc REMColor_Codable.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x644fffe6330  @objc REMColor_Codable.(null) <stripped>
	0x21400040ef0  @objc REMColor_Codable.]A^A_]éÑÂ <stripped>
WARNING: couldn't find address 0x40ec4fffe77e0 (0x6c4fffe77e0) in binary!
	0x18000000c  @objc REMColor_Codable.(null) <stripped>

	// Swift methods
	0xf7250  class func REMColor_Codable.__allocating_init(_:) // init 
	0xf74f0  class func REMColor_Codable.__allocating_init(from:) // init 
 }

 class ReminderKitInternal.REMSmartListOrder_Codable : REMSmartListOrder /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x127b000040db0 (0x7b000040db0) in binary!
	0x15a28  @objc REMSmartListOrder_Codable.(null) <stripped>
WARNING: couldn't find address 0x15a3c00041340 (0x23c00041340) in binary!
	0x28000000c  @objc REMSmartListOrder_Codable.(null) <stripped>
	0x13848  @objc REMSmartListOrder_Codable.èc¢ÿÿëJèæÇ <stripped>

	// Swift methods
	0xf83b0  class func REMSmartListOrder_Codable.__allocating_init(_:) // init 
	0xf8660  class func REMSmartListOrder_Codable.__allocating_init(from:) // init 
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case objectIDUUID  
	case reminderIDUUID  
	case start  
	case end  
	case lastModifiedDate  
 }

 class ReminderKitInternal.REMStructuredLocation_Codable : REMStructuredLocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x127f800040df8 (0x7f800040df8) in binary!
	0x15ab0  @objc REMStructuredLocation_Codable.(null) <stripped>
WARNING: couldn't find address 0x127e000041110 (0x7e000041110) in binary!
	0x13858  @objc REMStructuredLocation_Codable.(null) <stripped>
WARNING: couldn't find address 0x15998000413a0 (0x198000413a0) in binary!
	0x38000000c  @objc REMStructuredLocation_Codable.(null) <stripped>
WARNING: couldn't find address 0x127b000040db0 (0x7b000040db0) in binary!
	0x15a28  @objc REMStructuredLocation_Codable.(null) <stripped>
WARNING: couldn't find address 0x15a3c00041340 (0x23c00041340) in binary!
	0x28000000c  @objc REMStructuredLocation_Codable.(null) <stripped>

	// Swift methods
	0xf9680  class func REMStructuredLocation_Codable.__allocating_init(_:) // init 
	0xf9c10  class func REMStructuredLocation_Codable.__allocating_init(from:) // init 
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case title  
	case locationUID  
	case latitude  
	case longitude  
	case radius  
	case address  
	case routing  
	case referenceFrameString  
	case contactLabel  
	case mapKitHandle  
 }

 class ReminderKitInternal.REMStoreObjectsContainer : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let remStore : REMStore // +0x10 (0x8)
	var storages : [REMObjectID : Any] // +0x18 (0x8)
	var decodedObjectsCache : [REMObjectID : Any] // +0x20 (0x8)

	// Swift methods
	0xfade0  func REMStoreObjectsContainer.storages.getter // getter 
	0xfae10  func REMStoreObjectsContainer.storages.setter // setter 
	0xfae50  func REMStoreObjectsContainer.storages.modify // modifyCoroutine 
	0xf5040  class func REMStoreObjectsContainer.__allocating_init(store:storages:) // init 
	0xfaee0  func REMStoreObjectsContainer.decodedObjectsCache.getter // getter 
	0xfaf10  func REMStoreObjectsContainer.decodedObjectsCache.setter // setter 
	0xfaf50  func REMStoreObjectsContainer.decodedObjectsCache.modify // modifyCoroutine 
	0xfaf90  func REMStoreObjectsContainer.store(_:) // method 
	0xfafc0  func REMStoreObjectsContainer.store(_:) // method 
	0xfb1f0  func REMStoreObjectsContainer.store(_:) // method 
	0xfb3c0  func REMStoreObjectsContainer.store(_:) // method 
	0xfb640  func REMStoreObjectsContainer.storedAccount(with:) // method 
	0xfb6d0  func REMStoreObjectsContainer.storedList(with:) // method 
	0xfb8b0  func REMStoreObjectsContainer.storedSmartList(with:) // method 
	0xfb940  func REMStoreObjectsContainer.storedReminder(with:) // method 
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case red  
	case green  
	case blue  
	case alpha  
	case colorSpace  
	case daSymbolicColorName  
	case daHexString  
	case ckSymbolicColorName  
 }

 enum ReminderKitInternal.REMObjectCodingKey {

	// Properties
	case objectIDUUID  
 }

 class ReminderKitInternal.RDIDispatchQueue : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
	0x13848  @objc RDIDispatchQueue.èc¢ÿÿëJèæÇ <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xffff7dc0  @objc RDIDispatchQueue.(null) <stripped>
 }

 enum ReminderKitInternal.REMAsyncOperationState {

	// Properties
	case running : Promise
	case succeeded : A
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failed : y“
 }

 class ReminderKitInternal.REMAsyncOperationManager {
 enum ReminderKitInternal.InternalOperationState {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case running : WS
WARNING: couldn't find address 0x0 (0x0) in binary!
	case finished : ïS
 }

 class ReminderKitInternal.REMAccountsListDataView : _SwiftObject /usr/lib/swift/libswiftCore.dylib {
	// Swift methods
 }

 struct ReminderKitInternal.Result {

	// Properties
	let model : Model // +0x0
	let diff : Diff // +0x60
	let latestFetchResultToken : REMFetchResultToken? // +0x70
 }

 struct ReminderKitInternal.Model {

	// Properties
	let accounts : Account // +0x0
	let scheduledRemindersCount : Int // +0x8
	let scheduledOverdueRemindersCount : Int // +0x10
	let flaggedRemindersCount : Int // +0x18
	let flaggedOverdueRemindersCount : Int // +0x20
	let allRemindersCount : Int // +0x28
	let allOverdueRemindersCount : Int // +0x30
	let todayRemindersCount : Int // +0x38
	let todayOverdueRemindersCount : Int // +0x40
	let siriFoundInAppsRemindersCount : Int // +0x48
	let assignedToMeRemindersCount : Int // +0x50
	let defaultList : REMList_Codable // +0x58
 }

 enum ReminderKitInternal.AccountChild {

	// Properties
	case list : List
	case group : Group
 }

 struct ReminderKitInternal.List {

	// Properties
	let list : REMList_Codable // +0x0
	let incompleteRemindersCount : Int // +0x8
	let overdueRemindersCount : Int // +0x10
 }

 struct ReminderKitInternal.Group {

	// Properties
	let list : REMList_Codable // +0x0
	let lists : List // +0x8
 }

 struct ReminderKitInternal.Account {

	// Properties
	let account : REMAccount_Codable // +0x0
	let children : AccountChild // +0x8
 }

 struct ReminderKitInternal.Diff {

	// Properties
	let updatedAccountObjectIDs : REMObjectID_Codable // +0x0
	let updatedListObjectIDs : REMObjectID_Codable // +0x8
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case contentType  
	case payload  
 }

 enum ReminderKitInternal.ContentType {

	// Properties
	case list  
	case group  
 }

 class ReminderKitInternal.Invocation : REMStoreSwiftInvocation /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x1274800040d40 (0x74800040d40) in binary!
	0x1273c  @objc Invocation.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x5523a4d4152  @objc Invocation.(null) <stripped>
 }

 struct ReminderKitInternal.Parameters {

	// Properties
	let fetchAccounts : Bool // +0x0
	let fetchCounts : Bool // +0x1
 }

 struct ReminderKitInternal.Result {

	// Properties
	let model : Model // +0x0
	let diff : Diff // +0x60
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case model  
	case diff  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case fetchAccounts  
	case fetchCounts  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case updatedAccountObjectIDs  
	case updatedListObjectIDs  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case accounts  
	case scheduledRemindersCount  
	case scheduledOverdueRemindersCount  
	case flaggedRemindersCount  
	case flaggedOverdueRemindersCount  
	case allRemindersCount  
	case allOverdueRemindersCount  
	case todayRemindersCount  
	case todayOverdueRemindersCount  
	case siriFoundInAppsRemindersCount  
	case assignedToMeRemindersCount  
	case defaultList  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case account  
	case children  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case list  
	case lists  
 }

 enum ReminderKitInternal.CodingKeys {

	// Properties
	case list  
	case incompleteRemindersCount  
	case overdueRemindersCount  
 }
