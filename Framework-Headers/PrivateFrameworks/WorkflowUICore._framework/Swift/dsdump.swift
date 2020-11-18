 protocol WorkflowUICore.LibraryDelegate // 5 requirements
 {
	// method
	// method
	// getter
	// method
	// method
 }
 protocol WorkflowUICore.LibrarySectionDelegate // 1 requirements
 {
	// method
 }
 protocol WorkflowUICore.LibraryView // 12 requirements
 {
	// class base protocol
	// class associated type access function
	// getter
	// getter
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// class init
	// method
 }
 protocol WorkflowUICore.LibraryGroup // 7 requirements
 {
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
 }
 protocol WorkflowUICore.RootView // 20 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated conformance access function
	// class associated type access function
	// class associated type access function
	// getter
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// getter
	// method
	// method
	// method
	// method
	// method
	// method
 }
 protocol WorkflowUICore.PropertyContaining // 1 requirements
 {
	// getter
 }
 protocol WorkflowUICore.LogStreamObserver // 4 requirements
 {
	// method
	// method
	// method
	// method
 }
 protocol WorkflowUICore.LibraryOperations // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol WorkflowUICore.SidebarSectionDelegate // 1 requirements
 {
	// method
 }
 protocol WorkflowUICore.RootViewSidebar // 11 requirements
 {
	// class base protocol
	// class associated conformance access function
	// class associated type access function
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// getter
	// class init
	// method
 }
 protocol WorkflowUICore.SidebarSection // 8 requirements
 {
	// getter
	// getter
	// getter
	// setter
	// modify coroutine
	// getter
	// setter
	// modify coroutine
 }

 class WorkflowUICore.DebugStatusBarManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var windowScenes : [UIWindowScene]
	var windowsPerScene : DebugStatusBarWindow

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x883400019df8 (0x3400019df8) in binary!
	0x790c  @objc DebugStatusBarManager.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x564fffc0910  @objc DebugStatusBarManager.(null) <stripped>

	// Swift methods
	0x3020  func <stripped> // getter 
	0x30b0  func <stripped> // setter 
	0x3270  func <stripped> // method 
	0x34f0  func <stripped> // method 
 }

 class WorkflowUICore.DebugStatusBarWindow : UIWindow /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let faultLabel : UILabel
	let errorLabel : UILabel
	let stackView : UIStackView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rotationObserver : ◊ﬁ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x797300019d90 (0x17300019d90) in binary!
	0x7967  @objc DebugStatusBarWindow.(null) <stripped>
WARNING: couldn't find address 0x796c0001a4b8 (0x16c0001a4b8) in binary!
	0x78d4  @objc DebugStatusBarWindow.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x594fffcba38  @objc DebugStatusBarWindow.(null) <stripped>
	0xfffcbaa0  @objc DebugStatusBarWindow.u¿Lã•8ˇˇˇLâÊËÔ3 <stripped>

	// Swift methods
	0x3e10  func <stripped> // method 
 }

 struct WorkflowUICore.DebugMenuView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logStreamManager : Å÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _debugStatusBarManager : s÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _doubleLength : ÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _forceRightToLeft : ÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _accented : ÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _bounded : ÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _showNonLocalized : ÷
	let database : WFDatabase
WARNING: couldn't find address 0x0 (0x0) in binary!
	let binaryUUID : ›
	let close : ()?
 }

 struct WorkflowUICore.DatabaseRowView {

	// Properties
	let name : String
	let result : WFDatabaseResult<A>
 }

 struct WorkflowUICore.RunningWorkflow {

	// Properties
	let reference : WFWorkflowReference // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	let progress : _Ã // +0x8
	let waiting : Bool // +0x10
	let stop : () // +0x18
 }

 struct WorkflowUICore.LibraryConfiguration {

	// Properties
	let title : String // +0x0
	let workflowCreationBehavior : LibraryWorkflowCreationBehavior // +0x10
	let editingBehavior : LibraryEditingBehavior // +0x20
	let workflowContextualEditingActions : LibraryEditingAction // +0x40
	let runSource : WFWorkflowRunSource // +0x48
 }

 enum WorkflowUICore.LibraryWorkflowCreationBehavior {

	// Properties
	case inFolder : WFWorkflowCollection
	case forWorkflowType : WFWorkflowTypeName
	case none  
	case inRoot  
 }

 enum WorkflowUICore.LibraryEditingBehavior {

	// Properties
	case option : LibraryEditingOption
	case options : LibraryEditingOption
	case none  
 }

 enum WorkflowUICore.LibraryEditingOption {

	// Properties
	case selection : LibraryEditingAction
	case folderDetails : WFWorkflowCollection
	case folderDeletion : WFWorkflowCollection
 }

 enum WorkflowUICore.LibraryEditingAction {

	// Properties
	case remove : (title: String?, identifier: String, symbolName: String?)
	case newWindow  
	case move  
	case duplicate  
	case share  
	case details  
	case delete  
 }

 struct WorkflowUICore.LibrarySection {

	// Properties
	let header : Header // +0x0
	let footer : Footer // +0x20
	let collection : WFWorkflowCollection? // +0x28
	let shortcuts : WFDatabaseResult<WFWorkflowReference> // +0x30
	let workflowCreationBehavior : LibraryWorkflowCreationBehavior // +0x38
	let emptyMessage : NSAttributedString? // +0x48
 }

 enum WorkflowUICore.Header {

	// Properties
	case nameAndIconName : (String, String)
	case none  
 }

 enum WorkflowUICore.Footer {

	// Properties
	case none  
	case divider  
 }

 class WorkflowUICore.StaticGroup : _SwiftObject /usr/lib/swift/libswiftCore.dylib, LibraryGroup {

	// Properties
	let sections : LibrarySection
	var shouldUpdate : Bool
	var delegate : LibrarySectionDelegate

	// Swift methods
 }

 class WorkflowUICore.AllShortcutsGroup : NSObject /usr/lib/libobjc.A.dylib, LibraryGroup {

	// Properties
	var shouldUpdate : Bool
	var delegate : LibrarySectionDelegate
	let database : WFDatabase
	let collectionsResult : WFDatabaseResult<WFWorkflowCollection>

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8b6400019d30 (0x36400019d30) in binary!
	0x87d0  @objc AllShortcutsGroup.(null) <stripped>
WARNING: couldn't find address 0x78a800019d28 (0xa800019d28) in binary!
	0x28000000c  @objc AllShortcutsGroup.(null) <stripped>
WARNING: couldn't find address 0x87ac0001a130 (0x7ac0001a130) in binary!
	0x87a0  @objc AllShortcutsGroup.(null) <stripped>

	// Swift methods
	0xe830  func <stripped> // getter 
	0xee40  func <stripped> // setter 
	0xee90  func <stripped> // modifyCoroutine 
 }

 enum WorkflowUICore.RootNavigationDestination {

	// Properties
	case gallery : (identifier: String?)
	case workflowType : WFWorkflowTypeName
	case folder : WFWorkflowCollection
	case shortcuts  
	case allShortcuts  
	case automations  
 }

 enum WorkflowUICore.DropBehavior {

	// Properties
	case intoCollection : WFWorkflowCollection?
	case intoCollectionWithType : WFWorkflowTypeName
	case none  
 }

 struct WorkflowUICore.RootNavigationContext {

	// Properties
	let dismissOccludingViewController : Bool // +0x0
	let clearSearchState : Bool // +0x1
 }

 class WorkflowUICore.DatabaseResult {
 struct WorkflowUICore.DebugDatabaseView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _result : ë«
 }

 struct WorkflowUICore.RecordProperty {

	// Properties
	let id : String // +0x0
	let value : Swift.AnyObject? // +0x10
	let key : String? // +0x18
 }

 struct WorkflowUICore.DebugRecordView {

	// Properties
	var propertyLoader : RecordProperty // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _properties : Á« // +0x10
 }

 class WorkflowUICore.LogStreamManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _state : üﬂ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var observers :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logs : È√
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _faultCount : ﬂ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _errorCount : ﬂ

	// Swift methods
	0x26290  func <stripped> // getter 
	0x26330  func <stripped> // getter 
	0x26c80  func <stripped> // getter 
	0x26d20  func <stripped> // getter 
	0x27180  func <stripped> // getter 
	0x271a0  func <stripped> // modifyCoroutine 
	0x27280  func <stripped> // getter 
	0x277b0  func <stripped> // getter 
	0x27830  func <stripped> // modifyCoroutine 
	0x27a90  func <stripped> // getter 
	0x27ed0  func <stripped> // getter 
	0x27f60  func <stripped> // setter 
	0x28080  func <stripped> // modifyCoroutine 
	0x28230  func <stripped> // method 
	0x289a0  func <stripped> // method 
	0x28c10  func <stripped> // method 
	0x28c90  func <stripped> // method 
	0x28d00  func <stripped> // method 
 }

 enum WorkflowUICore.State {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failedToPrepare : uÀ
	case invalidated : OSLogEventStreamInvalidation
	case active : OSLogEventLiveStream
	case none  
	case starting  
 }

 class WorkflowUICore.LogEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : ¬ // +0xfeedfacf (0x0)
	let type : EventType // +0x3 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : Ö¡ // +0x42 (0x0)
	let processName : String // +0x6100085 (0x10)
	let category : String // +0x19 (0x10)
	let message : String // +0x45545f5f (0x10)

	// Swift methods
	0x26470  func <stripped> // method 
	0x26990  func <stripped> // getter 
 }

 enum WorkflowUICore.EventType {

	// Properties
	case default  
	case debug  
	case info  
	case error  
	case fault  
 }

 struct WorkflowUICore.DebugLogView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logStreamManager : Å÷ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logType : ≈ // +0x10
 }

 struct WorkflowUICore.LogRow {

	// Properties
	let log : LogEvent // +0x0
 }

 struct WorkflowUICore.LogColorIndicator {

	// Properties
	let type : EventType // +0x0
 }

 class WorkflowUICore.WFLogSignpost : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	let log : OS_os_log // +0x10 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : gº // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let name : ƒ // +0x0 (0x11)

	// Swift methods
	0x2e8a0  class func WFLogSignpost.__allocating_init(_:_:) // init 
 }

 class WorkflowUICore.LibraryDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var observedResults : Set<WFDatabaseResult<WFWorkflowReference>>
	var sections : LibrarySection
	var observeChanges : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8abc00019c88 (0x2bc00019c88) in binary!
	0x18000000c  @objc LibraryDataSource.(null) <stripped>

	// Swift methods
	0x2f110  class func LibraryDataSource.__allocating_init() // init 
	0x2f220  func <stripped> // method 
	0x2fb70  func <stripped> // getter 
	0x302c0  func <stripped> // getter 
	0x302f0  func <stripped> // setter 
	0x30330  func <stripped> // modifyCoroutine 
	0x303a0  func <stripped> // method 
	0x303b0  func <stripped> // method 
 }

 enum WorkflowUICore.PresentationKind {

	// Properties
	case actionSheet : PresentationWrapper
	case alert : PresentationWrapper
 }

 struct WorkflowUICore.PresentationWrapper {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : S√
	let content : ()
 }

 enum WorkflowUICore.SidebarStyle {

	// Properties
	case column  
	case compact  
 }

 class WorkflowUICore.StaticSidebarSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SidebarSection {

	// Properties
	let name : String?
	let destinations : RootNavigationDestination
	var delegate : SidebarSectionDelegate
	var observeChanges : Bool

	// Swift methods
	0x34220  func <stripped> // getter 
	0x34250  func <stripped> // setter 
	0x342a0  func <stripped> // modifyCoroutine 
	0x343f0  func <stripped> // getter 
	0x34420  func <stripped> // setter 
	0x34450  func <stripped> // modifyCoroutine 
	0x34490  class func StaticSidebarSection.__allocating_init(name:destinations:) // init 
 }

 class WorkflowUICore.FoldersSidebarSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SidebarSection {

	// Properties
	var delegate : SidebarSectionDelegate
	let folders : WFDatabaseResult<WFWorkflowCollection>
	var observeChanges : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8aa400019c70 (0x2a400019c70) in binary!
	0x18000000c  @objc FoldersSidebarSection.(null) <stripped>

	// Swift methods
	0x347e0  func <stripped> // getter 
	0x34880  func <stripped> // getter 
	0x34b40  func <stripped> // getter 
	0x34b70  func <stripped> // setter 
	0x34bc0  func <stripped> // modifyCoroutine 
	0x34c90  class func FoldersSidebarSection.__allocating_init(folders:) // init 
	0x34dd0  func <stripped> // getter 
	0x34e00  func <stripped> // setter 
	0x34e60  func <stripped> // modifyCoroutine 
	0x34ee0  func <stripped> // method 
 }

 class WorkflowUICore.MyShortcutsSidebarSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SidebarSection {

	// Properties
	let name : String?
	var destinations : RootNavigationDestination
	var delegate : SidebarSectionDelegate
	var observeChanges : Bool
	let healthFeatureProvider : WFHealthFeatureAvailability

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8c3a00019c50 (0x43a00019c50) in binary!
	0x18000000c  @objc MyShortcutsSidebarSection.(null) <stripped>

	// Swift methods
	0x35240  func <stripped> // getter 
	0x35270  func <stripped> // setter 
	0x352b0  func <stripped> // modifyCoroutine 
	0x37010  func <stripped> // getter 
	0x36fc0  func <stripped> // setter 
	0x352e0  func <stripped> // modifyCoroutine 
	0x37100  func <stripped> // getter 
	0x37020  func <stripped> // setter 
	0x35340  func <stripped> // modifyCoroutine 
	0x35370  class func MyShortcutsSidebarSection.__allocating_init(name:) // init 
	0x35560  func <stripped> // method 
 }

 enum __C.OSLogEventStreamInvalidation { }

 struct __C.WFWorkflowTypeName {

	// Properties
	var _rawValue : NSString
 }

 struct __C.WFWorkflowRunSource {

	// Properties
	var _rawValue : NSString
 }

 enum __C.CGImagePropertyOrientation { }

 enum __C.WFWorkflowNameCollisionBehavior { }

 struct __C.OSLogEventStreamFlags {

	// Properties
	let rawValue : UInt
 }

 enum __C.WFAlertButtonStyle { }

 struct __C.INShortcutAvailabilityOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.Key {

	// Properties
	var _rawValue : NSString
 }
