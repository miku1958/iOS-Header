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
WARNING: couldn't find address 0x88340001a4b8 (0x340001a4b8) in binary!
	0x790c  @objc DebugStatusBarManager.(null) <stripped>
WARNING: couldn't find address 0x48000000c (0x48000000c) in binary!
	0x424fffc0a20  @objc DebugStatusBarManager.(null) <stripped>

	// Swift methods
	0x3a70  func <stripped> // getter 
	0x3b00  func <stripped> // setter 
	0x3cc0  func <stripped> // method 
	0x3f40  func <stripped> // method 
 }

 class WorkflowUICore.DebugStatusBarWindow : UIWindow /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let faultLabel : UILabel
	let errorLabel : UILabel
	let stackView : UIStackView
WARNING: couldn't find address 0x0 (0x0) in binary!
	var rotationObserver : óÂ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x79730001a450 (0x1730001a450) in binary!
	0x7967  @objc DebugStatusBarWindow.(null) <stripped>
WARNING: couldn't find address 0x796c0001ab78 (0x16c0001ab78) in binary!
	0x78d4  @objc DebugStatusBarWindow.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x454fffcbaf8  @objc DebugStatusBarWindow.(null) <stripped>
	0xfffcbb60  @objc DebugStatusBarWindow.êSHAÄ‰DàcXHã}¿Hâ{`Hã}–Hâ{hH«Cp <stripped>

	// Swift methods
	0x4860  func <stripped> // method 
 }

 struct WorkflowUICore.DebugMenuView {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logStreamManager : A›
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _debugStatusBarManager : 3›
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _doubleLength : ›‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _forceRightToLeft : ›‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _accented : ›‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _bounded : ›‹
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _showNonLocalized : ›‹
	let database : WFDatabase
WARNING: couldn't find address 0x0 (0x0) in binary!
	let binaryUUID : À„
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
	let progress : ” // +0x8
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
WARNING: couldn't find address 0x8b640001a3f0 (0x3640001a3f0) in binary!
	0x87d0  @objc AllShortcutsGroup.(null) <stripped>
WARNING: couldn't find address 0x78a80001a3e8 (0xa80001a3e8) in binary!
	0x28000000c  @objc AllShortcutsGroup.(null) <stripped>
WARNING: couldn't find address 0x87ac0001a7f0 (0x7ac0001a7f0) in binary!
	0x87a0  @objc AllShortcutsGroup.(null) <stripped>

	// Swift methods
	0xf220  func <stripped> // getter 
	0xf840  func <stripped> // setter 
	0xf890  func <stripped> // modifyCoroutine 
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
	var _result : QŒ
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
	var _properties : ßŒ // +0x10
 }

 class WorkflowUICore.LogStreamManager : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _state : _Ê
WARNING: couldn't find address 0x0 (0x0) in binary!
	var observers :  empty-list 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logs : © 
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _faultCount : √Â
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _errorCount : √Â

	// Swift methods
	0x26c00  func <stripped> // getter 
	0x26ca0  func <stripped> // getter 
	0x275f0  func <stripped> // getter 
	0x27690  func <stripped> // getter 
	0x27af0  func <stripped> // getter 
	0x27b10  func <stripped> // modifyCoroutine 
	0x27bf0  func <stripped> // getter 
	0x28120  func <stripped> // getter 
	0x281a0  func <stripped> // modifyCoroutine 
	0x28400  func <stripped> // getter 
	0x28840  func <stripped> // getter 
	0x288d0  func <stripped> // setter 
	0x289f0  func <stripped> // modifyCoroutine 
	0x28ba0  func <stripped> // method 
	0x29310  func <stripped> // method 
	0x29580  func <stripped> // method 
	0x29600  func <stripped> // method 
	0x29670  func <stripped> // method 
 }

 enum WorkflowUICore.State {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	case failedToPrepare : 5“
	case invalidated : OSLogEventStreamInvalidation
	case active : OSLogEventLiveStream
	case none  
	case starting  
 }

 class WorkflowUICore.LogEvent : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id : ›» // +0xfeedfacf (0x0)
	let type : EventType // +0x3 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let date : E» // +0x42 (0x0)
	let processName : String // +0x6100085 (0x10)
	let category : String // +0x19 (0x10)
	let message : String // +0x45545f5f (0x10)

	// Swift methods
	0x26de0  func <stripped> // method 
	0x27300  func <stripped> // getter 
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
	var _logStreamManager : A› // +0x0
WARNING: couldn't find address 0x0 (0x0) in binary!
	var _logType : ÀÀ // +0x10
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
	let id : '√ // +0x0 (0x0)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let name : Ÿ  // +0x0 (0x11)

	// Swift methods
	0x2f210  class func WFLogSignpost.__allocating_init(_:_:) // init 
 }

 class WorkflowUICore.LibraryDataSource : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var observedResults : Set<WFDatabaseResult<WFWorkflowReference>>
	var sections : LibrarySection
	var observeChanges : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8abc0001a348 (0x2bc0001a348) in binary!
	0x18000000c  @objc LibraryDataSource.(null) <stripped>

	// Swift methods
	0x2fa80  class func LibraryDataSource.__allocating_init() // init 
	0x2fb90  func <stripped> // method 
	0x304e0  func <stripped> // getter 
	0x30c30  func <stripped> // getter 
	0x30c60  func <stripped> // setter 
	0x30ca0  func <stripped> // modifyCoroutine 
	0x30d10  func <stripped> // method 
	0x30d20  func <stripped> // method 
 }

 enum WorkflowUICore.PresentationKind {

	// Properties
	case actionSheet : PresentationWrapper
	case alert : PresentationWrapper
 }

 struct WorkflowUICore.PresentationWrapper {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let id :  
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
	0x34b70  func <stripped> // getter 
	0x34ba0  func <stripped> // setter 
	0x34bf0  func <stripped> // modifyCoroutine 
	0x34d40  func <stripped> // getter 
	0x34d70  func <stripped> // setter 
	0x34da0  func <stripped> // modifyCoroutine 
	0x34de0  class func StaticSidebarSection.__allocating_init(name:destinations:) // init 
 }

 class WorkflowUICore.FoldersSidebarSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SidebarSection {

	// Properties
	var delegate : SidebarSectionDelegate
	let folders : WFDatabaseResult<WFWorkflowCollection>
	var observeChanges : Bool

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8aa40001a330 (0x2a40001a330) in binary!
	0x18000000c  @objc FoldersSidebarSection.(null) <stripped>

	// Swift methods
	0x35120  func <stripped> // getter 
	0x351c0  func <stripped> // getter 
	0x35480  func <stripped> // getter 
	0x354b0  func <stripped> // setter 
	0x35500  func <stripped> // modifyCoroutine 
	0x355d0  class func FoldersSidebarSection.__allocating_init(folders:) // init 
	0x35710  func <stripped> // getter 
	0x35740  func <stripped> // setter 
	0x357a0  func <stripped> // modifyCoroutine 
	0x35820  func <stripped> // method 
 }

 class WorkflowUICore.MyShortcutsSidebarSection : _SwiftObject /usr/lib/swift/libswiftCore.dylib, SidebarSection {

	// Properties
	let name : String?
	var destinations : RootNavigationDestination
	var delegate : SidebarSectionDelegate
	var observeChanges : Bool
	let healthFeatureProvider : WFHealthFeatureAvailability

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x8c3a0001a310 (0x43a0001a310) in binary!
	0x18000000c  @objc MyShortcutsSidebarSection.(null) <stripped>

	// Swift methods
	0x35b80  func <stripped> // getter 
	0x35bb0  func <stripped> // setter 
	0x35bf0  func <stripped> // modifyCoroutine 
	0x37960  func <stripped> // getter 
	0x37900  func <stripped> // setter 
	0x35c20  func <stripped> // modifyCoroutine 
	0x37a50  func <stripped> // getter 
	0x37950  func <stripped> // setter 
	0x35c80  func <stripped> // modifyCoroutine 
	0x35cb0  class func MyShortcutsSidebarSection.__allocating_init(name:) // init 
	0x35ea0  func <stripped> // method 
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
