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
WARNING: couldn't find address 0x886400019e28 (0x6400019e28) in binary!
	0x793c  @objc DebugStatusBarManager.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x594fffc07d0  @objc DebugStatusBarManager.(null) <stripped>

	// Swift methods
	0x2eb0  func <stripped> // getter 
	0x2f40  func <stripped> // setter 
	0x3100  func <stripped> // method 
	0x3380  func <stripped> // method 
 }

 class WorkflowUICore.DebugStatusBarWindow : UIWindow /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let faultLabel : UILabel
	let errorLabel : UILabel
	let stackView : UIStackView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rotationObserver : ﬂ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x79a300019dc0 (0x1a300019dc0) in binary!
	0x7997  @objc DebugStatusBarWindow.(null) <stripped>
WARNING: couldn't find address 0x799c0001a4e8 (0x19c0001a4e8) in binary!
	0x7904  @objc DebugStatusBarWindow.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x5c4fffcb8f8  @objc DebugStatusBarWindow.(null) <stripped>
	0xfffcb960  @objc DebugStatusBarWindow.HçÖ‡˛ˇˇLâˇLâˆHâ⁄Ë;ñ <stripped>

	// Swift methods
	0x3ca0  func <stripped> // method 
 }

 struct WorkflowUICore.DebugMenuView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logStreamManager : ±÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _debugStatusBarManager : £÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _doubleLength : M÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _forceRightToLeft : M÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _accented : M÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _bounded : M÷
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _showNonLocalized : M÷
	let database : WFDatabase
WARNING: couldn't find address 0x0 (0x0) in binary!
	let binaryUUID : ;›
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
	let progress : èÃ // +0x8
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
WARNING: couldn't find address 0x8b9400019d60 (0x39400019d60) in binary!
	0x8800  @objc AllShortcutsGroup.(null) <stripped>
WARNING: couldn't find address 0x78d800019d58 (0xd800019d58) in binary!
	0x28000000c  @objc AllShortcutsGroup.(null) <stripped>
WARNING: couldn't find address 0x87dc0001a160 (0x7dc0001a160) in binary!
	0x87d0  @objc AllShortcutsGroup.(null) <stripped>

	// Swift methods
	0xe6c0  func <stripped> // getter 
	0xecd0  func <stripped> // setter 
	0xed20  func <stripped> // modifyCoroutine 
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
	let animateTransition : Bool // +0x2
 }

 class WorkflowUICore.DatabaseResult {
 struct WorkflowUICore.DebugDatabaseView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _result : ¡«
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
	var _properties : » // +0x10
 }

 class WorkflowUICore.LogStreamManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _state : œﬂ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var observers :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logs : ƒ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _faultCount : 3ﬂ
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _errorCount : 3ﬂ

	// Swift methods
	0x26250  func <stripped> // getter 
	0x262f0  func <stripped> // getter 
	0x26c40  func <stripped> // getter 
	0x26ce0  func <stripped> // getter 
	0x27140  func <stripped> // getter 
	0x27160  func <stripped> // modifyCoroutine 
	0x27240  func <stripped> // getter 
	0x27770  func <stripped> // getter 
	0x277f0  func <stripped> // modifyCoroutine 
	0x27a50  func <stripped> // getter 
	0x27e90  func <stripped> // getter 
	0x27f20  func <stripped> // setter 
	0x28040  func <stripped> // modifyCoroutine 
	0x281f0  func <stripped> // method 
	0x28960  func <stripped> // method 
	0x28bd0  func <stripped> // method 
	0x28c50  func <stripped> // method 
	0x28cc0  func <stripped> // method 
 }

 enum WorkflowUICore.State {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failedToPrepare : •À
	case invalidated : OSLogEventStreamInvalidation
	case active : OSLogEventLiveStream
	case none  
	case starting  
 }

 class WorkflowUICore.LogEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : M¬ // +0xfeedfacf (0x0)
	let type : EventType // +0x3 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : µ¡ // +0x42 (0x0)
	let processName : String // +0x6100085 (0x10)
	let category : String // +0x19 (0x10)
	let message : String // +0x45545f5f (0x10)

	// Swift methods
	0x26430  func <stripped> // method 
	0x26950  func <stripped> // getter 
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
	var _logStreamManager : ±÷ // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logType : ;≈ // +0x10
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
	let id : óº // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let name : Iƒ // +0x0 (0x11)

	// Swift methods
	0x2e860  class func WFLogSignpost.__allocating_init(_:_:) // init 
 }

 class WorkflowUICore.LibraryDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var observedResults : Set<WFDatabaseResult<WFWorkflowReference>>
	var sections : LibrarySection
	var observeChanges : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8aec00019cb8 (0x2ec00019cb8) in binary!
	0x18000000c  @objc LibraryDataSource.(null) <stripped>

	// Swift methods
	0x2f0d0  class func LibraryDataSource.__allocating_init() // init 
	0x2f1e0  func <stripped> // method 
	0x2fb30  func <stripped> // getter 
	0x30280  func <stripped> // getter 
	0x302b0  func <stripped> // setter 
	0x302f0  func <stripped> // modifyCoroutine 
	0x30360  func <stripped> // method 
	0x30370  func <stripped> // method 
 }

 enum WorkflowUICore.PresentationKind {

	// Properties
	case actionSheet : PresentationWrapper
	case alert : PresentationWrapper
 }

 struct WorkflowUICore.PresentationWrapper {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : É√
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
	0x341f0  func <stripped> // getter 
	0x34220  func <stripped> // setter 
	0x34270  func <stripped> // modifyCoroutine 
	0x343c0  func <stripped> // getter 
	0x343f0  func <stripped> // setter 
	0x34420  func <stripped> // modifyCoroutine 
	0x34460  class func StaticSidebarSection.__allocating_init(name:destinations:) // init 
 }

 class WorkflowUICore.FoldersSidebarSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SidebarSection {

	// Properties
	var delegate : SidebarSectionDelegate
	let folders : WFDatabaseResult<WFWorkflowCollection>
	var observeChanges : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8ad400019ca0 (0x2d400019ca0) in binary!
	0x18000000c  @objc FoldersSidebarSection.(null) <stripped>

	// Swift methods
	0x347b0  func <stripped> // getter 
	0x34850  func <stripped> // getter 
	0x34b10  func <stripped> // getter 
	0x34b40  func <stripped> // setter 
	0x34b90  func <stripped> // modifyCoroutine 
	0x34c60  class func FoldersSidebarSection.__allocating_init(folders:) // init 
	0x34da0  func <stripped> // getter 
	0x34dd0  func <stripped> // setter 
	0x34e30  func <stripped> // modifyCoroutine 
	0x34eb0  func <stripped> // method 
 }

 class WorkflowUICore.MyShortcutsSidebarSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SidebarSection {

	// Properties
	let name : String?
	var destinations : RootNavigationDestination
	var delegate : SidebarSectionDelegate
	var observeChanges : Bool
	let healthFeatureProvider : WFHealthFeatureAvailability

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8c6a00019c80 (0x46a00019c80) in binary!
	0x18000000c  @objc MyShortcutsSidebarSection.(null) <stripped>

	// Swift methods
	0x35210  func <stripped> // getter 
	0x35240  func <stripped> // setter 
	0x35280  func <stripped> // modifyCoroutine 
	0x36fe0  func <stripped> // getter 
	0x36f90  func <stripped> // setter 
	0x352b0  func <stripped> // modifyCoroutine 
	0x370d0  func <stripped> // getter 
	0x36ff0  func <stripped> // setter 
	0x35310  func <stripped> // modifyCoroutine 
	0x35340  class func MyShortcutsSidebarSection.__allocating_init(name:) // init 
	0x35530  func <stripped> // method 
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
