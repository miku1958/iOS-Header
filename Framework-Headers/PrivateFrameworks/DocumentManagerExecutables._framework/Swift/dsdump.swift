 protocol DocumentManagerExecutables.DOCUserActivityHosting // 4 requirements
 {
	// getter
	// setter
	// modify coroutine
	// method
 }
 protocol DocumentManagerExecutables.DOCAnalyticsEventProtocol // 3 requirements
 {
	// getter
	// getter
	// getter
 }
 protocol DocumentManagerExecutables.DOCTypeToFocusControllerDelegate // 4 requirements
 {
	// method
	// method
	// method
	// method
 }

 struct __C_Synthesized.CSSearchQueryError {

	// Properties
	let _nsError : NSError
 }

 struct __C.CGPoint {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var x : Öï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : Öï
 }

 struct __C.NSFileProviderItemIdentifier {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : Öï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : Öï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : Öï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : Öï
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : Öï
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : Öï
 }

 struct __C.UIContentSizeCategory {

	// Properties
	var _rawValue : NSString
 }

 enum __C.DOCDataOwnerState { }

 class __C.CGColor {
 struct __C.AttributeName {

	// Properties
	var _rawValue : NSString
 }

 struct __C.FeatureKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.FPProviderID {

	// Properties
	var _rawValue : NSString
 }

 enum __C.DOCSmartFolderHitType { }

 class __C.CFError {
 struct __C._LSHandlerRank {

	// Properties
	var _rawValue : NSString
 }

 class __C.CFString {
 struct __C.NSKeyValueChangeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.NSKeyValueObservingOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.AutoresizingMask {

	// Properties
	let rawValue : UInt
 }

 struct __C.UILayoutPriority {

	// Properties
	let rawValue : Float
 }

 enum __C.Code { }

 class DocumentManagerExecutables.DOCLocalized : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x733c0001c500 (0x33c0001c500) in binary!
	0x5db0  @objc DOCLocalized.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffbec98  @objc DOCLocalized.(null) <stripped>
 }

 enum DocumentManagerExecutables.DOCColumnWidth {

	// Properties
	case pad_regular  
	case pad_large  
	case pad_extraLarge  
 }

 struct DocumentManagerExecutables.DOCColumnViewSpecs {

	// Properties
	let columnViewSize : CGSize // +0x0
	let columnWidth : DOCColumnWidth // +0x10
	let allowTags : Bool // +0x11
	let allowBadge : Bool // +0x12
 }

 struct DocumentManagerExecutables.DOCAnalyticsActionEvent {

	// Properties
	let name : String // +0x0
	var bundleID : String? // +0x10
	let actionType : Action // +0x20
	let client : Client // +0x21
	let provider : FileProvider // +0x22
	let source : Source // +0x23
	let viewMode : ViewMode // +0x24
	let sortMode : SortMode // +0x25
	let sortOrder : SortOrder // +0x26
 }

 enum DocumentManagerExecutables.Action {

	// Properties
	case copy  
	case movedTo  
	case openIn  
	case duplicateIn  
	case enumerate  
 }

 enum DocumentManagerExecutables.Client {

	// Properties
	case other  
	case filesApp  
	case picker  
	case documentBrowserApp  
	case recentsPopover  
	case saveToFiles  
	case homeScreenWidget  
 }

 enum DocumentManagerExecutables.FileProvider {

	// Properties
	case other  
	case multiple  
	case local  
	case iCloudDrive  
	case thirdParty  
	case usb  
	case smb  
	case spotlight  
	case systemFiles  
 }

 enum DocumentManagerExecutables.Source {

	// Properties
	case other  
	case recents  
	case shared  
	case tags  
 }

 enum DocumentManagerExecutables.ViewMode {

	// Properties
	case unknown  
	case icon  
	case list  
	case column  
 }

 enum DocumentManagerExecutables.SortMode {

	// Properties
	case unknown  
	case date  
	case lastUsedDate  
	case name  
	case tags  
	case size  
	case kind  
 }

 enum DocumentManagerExecutables.SortOrder {

	// Properties
	case unknown  
	case ascending  
	case descending  
 }

 enum DocumentManagerExecutables.DOCUserActivityIdentifier {

	// Properties
	case quickLook  
	case folder  
	case folderDrag  
 }

 class DocumentManagerExecutables.DOCUserActivityController : NSObject /usr/lib/libobjc.A.dylib {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x731c0001c4e0 (0x31c0001c4e0) in binary!
	0x18000000c  @objc DOCUserActivityController.(null) <stripped>

	// Swift methods
	0xc110  class func static DOCUserActivityController.publishUserActivity(for:domainDisplayNameProvider:activityHosting:) // method 
	0xc2a0  class func static DOCUserActivityController.userActivityFor(item:domainDisplayNameProvider:completion:) // method 
	0xe930  class func static DOCUserActivityController.crossDeviceItemIDForItemID(_:_:) // method 
	0xe9c0  class func static DOCUserActivityController.itemURLForCrossDeviceItemID(_:_:) // method 
 }

 class DocumentManagerExecutables.DOCPostLaunchBuffer : DOCOperationBuffer {

	// Properties
	let timeout : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5d840001c340 (0x5840001c340) in binary!
	0x98000000c  @objc DOCPostLaunchBuffer.(null) <stripped>

	// Swift methods
	0xfbf0  func DOCPostLaunchBuffer.performAfterLaunch(alwaysAsync:_:) // method 
 }

 class DocumentManagerExecutables.DOCOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let synchronizationQueue : OS_dispatch_queue
	let callbackQueue : OS_dispatch_queue
	var _isFinished : Bool
	var _isExecuting : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishedBlock :  first-element-marker 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x72ec0001c4b0 (0x2ec0001c4b0) in binary!
	0x5d60  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x839a0001c300 (0x39a0001c300) in binary!
	0x838e  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x855e0001c660 (0x55e0001c660) in binary!
	0x8376  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x85460001c640 (0x5460001c640) in binary!
	0x5d18  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x5d0c0001c2c8 (0x50c0001c2c8) in binary!
	0x18000000c  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x72740001c288 (0x2740001c288) in binary!
	0x48000000c  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x725c0001c420 (0x25c0001c420) in binary!
	0x5cd0  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x61440001c260 (0x1440001c260) in binary!
	0x5cb8  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x324fffc78e0  @objc DOCOperation.(null) <stripped>

	// Swift methods
	0x10a40  func DOCOperation.finishedBlock.getter // getter 
	0x10ab0  func DOCOperation.finishedBlock.setter // setter 
	0x10b30  func DOCOperation.finishedBlock.modify // modifyCoroutine 
	0x11c70  func DOCOperation._finishIfCanceled() // method 
	0x11fa0  func DOCOperation.completed(with:error:) // method 
 }

 struct DocumentManagerExecutables.DOCSmartFolderInputFile {

	// Properties
	let filename : String
	let filetype : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateSaved : …é
 }

 class DocumentManagerExecutables.DOCSmartFolderManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _database : DOCSmartFolderDatabase?
	var $__lazy_storage_$_database : DOCSmartFolderDatabase?
	var currentUserActivity : NSUserActivity?
	var defaultSaveLocationItemId : NSFileProviderItemIdentifier
	var domainDisplayNameProvider : DOCDomainDisplayNameProvider?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x725c0001c420 (0x25c0001c420) in binary!
	0x5cd0  @objc DOCSmartFolderManager.(null) <stripped>
WARNING: couldn't find address 0x61440001c260 (0x1440001c260) in binary!
	0x5cb8  @objc DOCSmartFolderManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x324fffc78e0  @objc DOCSmartFolderManager.(null) <stripped>
	0xfffc79d8  @objc DOCSmartFolderManager. <stripped>

	// Swift methods
	0x126d0  func <stripped> // getter 
	0x12790  func DOCSmartFolderManager.currentUserActivity.getter // getter 
	0x127b0  func DOCSmartFolderManager.currentUserActivity.setter // setter 
	0x127d0  func DOCSmartFolderManager.currentUserActivity.modify // modifyCoroutine 
	0x12820  func DOCSmartFolderManager.defaultSaveLocationItemId.getter // getter 
	0x12880  func DOCSmartFolderManager.defaultSaveLocationItemId.setter // setter 
	0x128e0  func DOCSmartFolderManager.defaultSaveLocationItemId.modify // modifyCoroutine 
	0x129f0  class func DOCSmartFolderManager.__allocating_init(_:) // init 
	0x12d00  func DOCSmartFolderManager.refreshSmartFolders() // method 
	0x12df0  func DOCSmartFolderManager.registerDomainDisplayNameProvider(_:) // method 
	0x12e40  func DOCSmartFolderManager.register(savedFile:in:) // method 
	0x136b0  func DOCSmartFolderManager.suggestions(for:) // method 
	0x13e60  func DOCSmartFolderManager.makeHostedActivityCurrent() // method 
 }

 class DocumentManagerExecutables.DOCChainOperation : DOCOperation {

	// Properties
	let operations : DOCOperation
	let operationQueue : NSOperationQueue
	var latestOperationResult : Any?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var latestOperationError : ßì
	var mode : DOCChainOperationMode

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5c5c0001c598 (0x45c0001c598) in binary!
	0x71d0  @objc DOCChainOperation.(null) <stripped>
WARNING: couldn't find address 0x5c440001c200 (0x4440001c200) in binary!
	0x38000000c  @objc DOCChainOperation.(null) <stripped>
WARNING: couldn't find address 0x5c2c0001c568 (0x42c0001c568) in binary!
	0x71a0  @objc DOCChainOperation.(null) <stripped>

	// Swift methods
	0x18120  func DOCChainOperation.mode.getter // getter 
	0x18150  func DOCChainOperation.mode.setter // setter 
	0x18190  func DOCChainOperation.mode.modify // modifyCoroutine 
	0x181e0  class func DOCChainOperation.__allocating_init(operations:) // init 
 }

 enum DocumentManagerExecutables.DOCChainOperationMode {

	// Properties
	case cancelSubsequentOperationsOnFailure  
	case cancelSubsequentOperationsOnSuccess  
	case alwaysRunSubsequentOperations  
 }

 class DocumentManagerExecutables.DOCChainableOperation : DOCOperation {

	// Properties
	var chainOperation : DOCChainOperation

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5c2c0001c568 (0x42c0001c568) in binary!
	0x71a0  @objc DOCChainableOperation.(null) <stripped>
WARNING: couldn't find address 0x5c140001c1d0 (0x4140001c1d0) in binary!
	0x28000000c  @objc DOCChainableOperation.(null) <stripped>
WARNING: couldn't find address 0x717c0001c340 (0x17c0001c340) in binary!
	0x5bf0  @objc DOCChainableOperation.(null) <stripped>

	// Swift methods
	0x19640  func DOCChainableOperation.main(with:previousOperationError:) // method 
 }

 struct DocumentManagerExecutables.DOCUTIDescriptor {

	// Properties
	var utis : [String] // +0x0
	var fileExtensions : [String] // +0x8
	let localizedDescription : String // +0x10
	let lowercasedLocalizedDescription : String // +0x20
 }

 class DocumentManagerExecutables.DOCUTIDescriptorCollector : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var currentQuery : CSSearchQuery?
	var utiDescriptors : DOCUTIDescriptor
	let completionQueue : OS_dispatch_queue
	let gatheringQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x717c0001c340 (0x17c0001c340) in binary!
	0x5bf0  @objc DOCUTIDescriptorCollector.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x18cfffcec28  @objc DOCUTIDescriptorCollector.(null) <stripped>

	// Swift methods
	0x1a130  func DOCUTIDescriptorCollector.filteredUTIs(matching:allowedUTIs:completion:) // method 
	0x1a540  func DOCUTIDescriptorCollector.cancelGathering() // method 
	0x1a5c0  func <stripped> // method 
	0x1be20  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCAnalyticsManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var bundleVersionCache : [String : String?]
	let eventsQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x715c0001c320 (0x15c0001c320) in binary!
	0x5bd0  @objc DOCAnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffcf5c8  @objc DOCAnalyticsManager.(null) <stripped>
 }

 struct DocumentManagerExecutables.DOCAnalyticsSidebarTagSelectedEvent {

	// Properties
	let name : String // +0x0
	var bundleID : String? // +0x10
	let isUserSelection : Bool // +0x20
 }

 class DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController /System/Library/Frameworks/QuickLook.framework/QuickLook {

	// Properties
	var item : FPItem?
	var qlItem : QLPreviewItem?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x71240001c2e8 (0x1240001c2e8) in binary!
	0x8598  @objc DOCQuickLookInfoPreview.(null) <stripped>
WARNING: couldn't find address 0x755c0001c678 (0x55c0001c678) in binary!
	0x6215  @objc DOCQuickLookInfoPreview.(null) <stripped>
WARNING: couldn't find address 0x75440001c680 (0x5440001c680) in binary!
	0x5b68  @objc DOCQuickLookInfoPreview.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7dcfffd39d0  @objc DOCQuickLookInfoPreview.(null) <stripped>
	0xb40001c0b8  @objc DOCQuickLookInfoPreview.Ä <stripped>
WARNING: couldn't find address 0x1c0a4fffd4840 (0xa4fffd4840) in binary!
	0x4ec0001c090  @objc DOCQuickLookInfoPreview.(null) <stripped>

	// Swift methods
	0x23110  func DOCQuickLookInfoPreview.item.getter // getter 
	0x23150  func DOCQuickLookInfoPreview.item.setter // setter 
	0x231f0  func DOCQuickLookInfoPreview.item.modify // modifyCoroutine 
	0x234a0  func DOCQuickLookInfoPreview.needsUpdate(for:) // method 
 }

 class DocumentManagerExecutables.DOCItemObserverSubscriber : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : ä // +0x0 (0x0)
	let updateBlock : (_:) // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6fe40001c1a8 (0x7e40001c1a8) in binary!
	0x5a58  @objc DOCItemObserverSubscriber.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x1dcffff9350  @objc DOCItemObserverSubscriber.(null) <stripped>

	// Swift methods
	0x24650  class func DOCItemObserverSubscriber.__allocating_init(updateBlock:) // init 
 }

 class DocumentManagerExecutables.DOCItemObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let collection : FPItemCollection
	var item : FPItem
	var subscribers : DOCItemObserverSubscriber

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x70b40001c0b8 (0xb40001c0b8) in binary!
	0x5fa8  @objc DOCItemObserver.(null) <stripped>
WARNING: couldn't find address 0x74ec0001c090 (0x4ec0001c090) in binary!
	0x5b10  @objc DOCItemObserver.(null) <stripped>
WARNING: couldn't find address 0x70840001c248 (0x840001c248) in binary!
	0x5af8  @objc DOCItemObserver.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x7ecfffd5080  @objc DOCItemObserver.(null) <stripped>
	0x7ccfffd50a8  @objc DOCItemObserver.Í <stripped>
	0x734fffd50d0  @objc DOCItemObserver.HçπÍ <stripped>

	// Swift methods
	0x249e0  class func DOCItemObserver.__allocating_init(observedItem:) // init 
 }

 enum DocumentManagerExecutables.SharingStatusStringType {

	// Properties
	case update  
	case shareOwner  
 }

 struct DocumentManagerExecutables.SharingStatusOptions {

	// Properties
	let rawValue : Int // +0x0
 }

 class DocumentManagerExecutables.DOCButtonGestureRecognizer : UIGestureRecognizer /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let numberOfTouchesRequired : UInt
	var activeTouches : Set<UITouch>
	var startLocationInWindow : CGPoint

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x63000001c638 (0x3000001c638) in binary!
	0x62f4  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x62e80001c640 (0x2e80001c640) in binary!
	0x62dc  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x59e40001c638 (0x1e40001c638) in binary!
	0x66db  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x59cc0001bf88 (0x1cc0001bf88) in binary!
	0x38000000c  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x73840001bf00 (0x3840001bf00) in binary!
	0x5e28  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x62880001bed8 (0x2880001bed8) in binary!
	0x68000000c  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x6f040001bef0 (0x7040001bef0) in binary!
	0x5df8  @objc DOCButtonGestureRecognizer.(null) <stripped>

	// Swift methods
 }

 struct DocumentManagerExecutables.DOCAnalyticsConnectToServerShownEvent {

	// Properties
	let name : String // +0x0
	var bundleID : String? // +0x10
	let origin : Origin // +0x20
 }

 enum DocumentManagerExecutables.Origin {

	// Properties
	case unknown  
	case sidebar  
	case moreButtonBrowser  
	case keyCommand  
 }

 class DocumentManagerExecutables.DOCInteractionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var lastOpenedItem : FPItem?
	var lastSelectedItem : FPItem?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6f040001bef0 (0x7040001bef0) in binary!
	0x5df8  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x6eec0001bec8 (0x6ec0001bec8) in binary!
	0x5de0  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x6ed40001c098 (0x6d40001c098) in binary!
	0x5948  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffddcd0  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6ccfffe1308  @objc DOCInteractionManager.(null) <stripped>
	0x40b0001be30  @objc DOCInteractionManager.UHâÂIæE <stripped>

	// Swift methods
	0x2c1c0  func DOCInteractionManager.lastOpenedItem.getter // getter 
	0x2c200  func DOCInteractionManager.lastOpenedItem.setter // setter 
	0x2c470  func DOCInteractionManager.lastOpenedItem.modify // modifyCoroutine 
	0x2c550  func DOCInteractionManager.lastSelectedItem.getter // getter 
	0x2c660  func DOCInteractionManager.lastSelectedItem.setter // setter 
	0x2c8f0  func DOCInteractionManager.lastSelectedItem.modify // modifyCoroutine 
 }

 struct DocumentManagerExecutables.DOCLog { }

 struct DocumentManagerExecutables.DOCLogger { }

 enum DocumentManagerExecutables.DOCDeviceModel {

	// Properties
	case iPhone  
	case iPad  
	case iPodTouch  
	case unknownDevice  
 }

 class DocumentManagerExecutables.DOCPostSearchInitializationBuffer : DOCOperationBuffer {
	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6eb40001c078 (0x6b40001c078) in binary!
	0x28000000c  @objc DOCPostSearchInitializationBuffer.(null) <stripped>

	// Swift methods
	0x2ddd0  class func DOCPostSearchInitializationBuffer.__allocating_init() // init 
	0x2dfb0  func DOCPostSearchInitializationBuffer.performAfterSearchInitialization(_:) // method 
 }

 class DocumentManagerExecutables.DOCStateRequestAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var invalidationHandler : DOCStateRequestAssertion
	var valid : Bool

	// Swift methods
	0x2e050  class func DOCStateRequestAssertion.__allocating_init(invalidationHandler:) // init 
	0x2e150  func DOCStateRequestAssertion.invalidate() // method 
 }

 class DocumentManagerExecutables.DOCOperationBuffer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var locked : Bool
	let label : String
	let targetQueue : OS_dispatch_queue
	var $__lazy_storage_$_queue : OS_dispatch_queue?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6e9c0001c060 (0x69c0001c060) in binary!
	0x5910  @objc DOCOperationBuffer.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x5d4fffe28f8  @objc DOCOperationBuffer.(null) <stripped>

	// Swift methods
	0x31340  class func DOCOperationBuffer.__allocating_init(label:targetQueue:) // init 
	0x31030  func DOCOperationBuffer.signal() // method 
	0x31100  func DOCOperationBuffer.buffer(_:) // method 
	0x312b0  func <stripped> // getter 
 }

 class DocumentManagerExecutables.DOCImageContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contentOffsetFromTop : Öï
	var imageIsFolder : Bool
	let shadowView : UIView
	let imageView : DOCFittingImageView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ba30001bdc8 (0x3a30001bdc8) in binary!
	0x6b9f  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6bac0001c5c8 (0x3ac0001c5c8) in binary!
	0x7240  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6bc40001bd90 (0x3c40001bd90) in binary!
	0x6bd8  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x584c0001c528 (0x4c0001c528) in binary!
	0x5840  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe26b8  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x5c4fffe6840  @objc DOCImageContainerFittingView.(null) <stripped>
	0x6140001c5e8  @objc DOCImageContainerFittingView.ˇ]√D <stripped>
WARNING: couldn't find address 0x1bd0cfffe78d0 (0x50cfffe78d0) in binary!
	0xdc0001bcf8  @objc DOCImageContainerFittingView.(null) <stripped>

	// Swift methods
	0x31770  func DOCImageContainerFittingView.isShadowHidden.getter // getter 
	0x31790  func DOCImageContainerFittingView.isShadowHidden.setter // setter 
	0x317c0  func DOCImageContainerFittingView.isShadowHidden.modify // modifyCoroutine 
	0x31a20  func DOCImageContainerFittingView.imageIsFolder.getter // getter 
	0x31a50  func DOCImageContainerFittingView.imageIsFolder.setter // setter 
	0x31a90  func DOCImageContainerFittingView.imageIsFolder.modify // modifyCoroutine 
	0x32010  func DOCImageContainerFittingView.fittingSize.getter // getter 
	0x32030  func DOCImageContainerFittingView.fittingSize.setter // setter 
	0x32060  func DOCImageContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x320f0  func DOCImageContainerFittingView.image.getter // getter 
	0x32120  func DOCImageContainerFittingView.image.setter // setter 
	0x32180  func DOCImageContainerFittingView.image.modify // modifyCoroutine 
	0x32570  func DOCImageContainerFittingView.updateContentFrame() // method 
	0x32780  func <stripped> // getter 
 }

 class DocumentManagerExecutables.DOCContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containedViewController : UIViewController // +0x8 (0x8)
	var fittingSize : CGSize // +0x10 (0x10)
	var preventContentOffsetUpdates : Bool // +0x20 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contentOffsetFromTop : Öï // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var observationContext : —á // +0x30 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6c0b0001be30 (0x40b0001be30) in binary!
	0x6c07  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x58e40001c5c0 (0xe40001c5c0) in binary!
	0x72a8  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6c4c0001c5f0 (0x44c0001c5f0) in binary!
	0x6c20  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6be40001c600 (0x3e40001c600) in binary!
	0x58a8  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x56cfffe1390  @objc DOCContainerFittingView.(null) <stripped>
	0x35cfffe1c38  @objc DOCContainerFittingView.â”I9ƒuI9ﬂuLâˇæ <stripped>
	0x57cfffe1ea0  @objc DOCContainerFittingView.∞HÉƒh[A\A]A^A_]√Hˇ√L!ÎHâÿH¡ËIãDƒ8H£ÿs^HâÿH¡‡Lã}∏Iã<IãtH9œu	L9ˆÑÁ˛ˇˇHãU–LâÒE1¿ËÇx <stripped>
	0x5fcfffe2198  @objc DOCContainerFittingView.âﬂËqÅ <stripped>

	// Swift methods
	0x32ad0  func DOCContainerFittingView.fittingSize.getter // getter 
	0x32b10  func DOCContainerFittingView.fittingSize.setter // setter 
	0x32b70  func DOCContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x32d50  class func DOCContainerFittingView.__allocating_init(containedViewController:) // init 
 }

 class DocumentManagerExecutables.DOCThreadSafeState {
 struct DocumentManagerExecutables.DOCAnalyticsItemTaggedEvent {

	// Properties
	let name : String // +0x0
	var bundleID : String? // +0x10
	let taggingFlow : TaggingFlow // +0x20
 }

 enum DocumentManagerExecutables.TaggingFlow {

	// Properties
	case unknown  
	case dragAndDrop  
	case tagEditor  
 }

 enum DocumentManagerExecutables.DOCTagManagerAction {

	// Properties
	case findAll : (tag: DOCTag)
	case deleteAll : (tag: DOCTag)
	case replaceAll : (tag: DOCTag, with: DOCTag)
 }

 class DocumentManagerExecutables.DOCTagManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let serialQueue : OS_dispatch_queue
WARNING: couldn't find address 0x0 (0x0) in binary!
	let setTagsOperationTimeout : ùà

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6d940001bf58 (0x5940001bf58) in binary!
	0x5808  @objc DOCTagManager.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x50cfffe78d0  @objc DOCTagManager.(null) <stripped>

	// Swift methods
	0x359b0  func DOCTagManager.scheduleAction(_:completionBlock:) // method 
	0x36200  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCTagCollectionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let gatheringKeyPath : String
	let serialQueue : OS_dispatch_queue
	let group : OS_dispatch_group
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spotlightQueryTimeout : ùà
	var collection : FPItemCollection?
	var finishedGathering : Bool
	var collectionObservationContext : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6e140001c5e8 (0x6140001c5e8) in binary!
	0x60d4  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x60dc0001bcf8 (0xdc0001bcf8) in binary!
	0x60bc  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x60c40001bcd0 (0xc40001bcd0) in binary!
	0x5c38  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x6de80001bca8 (0x5e80001bca8) in binary!
	0x6d20  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x57940001bd50 (0x7940001bd50) in binary!
	0x38000000c  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x577c0001c0b8 (0x77c0001c0b8) in binary!
	0x6cf0  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x57640001bd20 (0x7640001bd20) in binary!
	0x68000000c  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x711c0001c238 (0x11c0001c238) in binary!
	0x5740  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x71140001c478 (0x1140001c478) in binary!
	0x7138  @objc DOCTagCollectionObserver.(null) <stripped>

	// Swift methods
	0x36ee0  func <stripped> // method 
 }

 struct DocumentManagerExecutables.DOCCollectionEdit {

	// Properties
	let operationType : DOCCollectionEditType
	let value : A
	let destination : Int
 }

 enum DocumentManagerExecutables.DOCCollectionEditType {

	// Properties
	case move : (origin: Int)
	case insert  
	case delete  
	case substitute  
 }

 struct DocumentManagerExecutables.DOCCollectionDiff {

	// Properties
	let origin : A
	let destination : A
	let edits : DOCCollectionEdit
 }

 class DocumentManagerExecutables.DOCBlockOperation : DOCOperation {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let block :  first-element-marker 

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x577c0001c0b8 (0x77c0001c0b8) in binary!
	0x6cf0  @objc DOCBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x57640001bd20 (0x7640001bd20) in binary!
	0x68000000c  @objc DOCBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x711c0001c238 (0x11c0001c238) in binary!
	0x5740  @objc DOCBlockOperation.(null) <stripped>

	// Swift methods
	0x3cbd0  class func DOCBlockOperation.__allocating_init(block:) // init 
 }

 class DocumentManagerExecutables.DOCSafeCenteringContainerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)
	let scrollContainerView : UIView // +0x10 (0x8)
	let centeredContentView : UIView // +0x18 (0x8)
	var scrollContainerViewMinHeightConstraint : NSLayoutConstraint? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x711c0001c238 (0x11c0001c238) in binary!
	0x5740  @objc DOCSafeCenteringContainerView.(null) <stripped>
WARNING: couldn't find address 0x71140001c478 (0x1140001c478) in binary!
	0x7138  @objc DOCSafeCenteringContainerView.(null) <stripped>
WARNING: couldn't find address 0x6a4c0001c468 (0x24c0001c468) in binary!
	0x5710  @objc DOCSafeCenteringContainerView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x3dcfffedb18  @objc DOCSafeCenteringContainerView.(null) <stripped>
	0x61cfffee0c0  @objc DOCSafeCenteringContainerView.)E¿(E†)E–HãEÿHãM–HãU¿Hãu»PQVRË*ê <stripped>
	0xfffee148  @objc DOCSafeCenteringContainerView.˜ˇ¡ª <stripped>

	// Swift methods
 }

 struct DocumentManagerExecutables.LaunchUtils { }

 class DocumentManagerExecutables.OpenAppDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let completionBlock : (_:)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5fe80001bbf0 (0x7e80001bbf0) in binary!
	0x5b70  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x5fd00001bbc8 (0x7d00001bbc8) in binary!
	0x6c58  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x56cc0001bc88 (0x6cc0001bc88) in binary!
	0xb8000000c  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x7c7c0001bb90 (0x47c0001bb90) in binary!
	0x7cdb  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x6c1c0001bb68 (0x41c0001bb68) in binary!
	0x7cd6  @objc OpenAppDelegate.(null) <stripped>

	// Swift methods
	0x3e0e0  func <stripped> // method 
	0x3e310  func <stripped> // method 
 }

 enum DocumentManagerExecutables.LaunchAction {

	// Properties
	case openInApp : LSApplicationProxy
	case installConfiguration  
	case quicklook  
 }

 class DocumentManagerExecutables.DOCTypeToFocusController : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : DOCTypeToFocusControllerDelegate
	var typeToFocusInputBuffer : String
	var typeToFocusTimeout : NSTimer?
	var typeToFocusInputView : UIView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x7c7c0001bb90 (0x47c0001bb90) in binary!
	0x7cdb  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x6c1c0001bb68 (0x41c0001bb68) in binary!
	0x7cd6  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x56840001bdc0 (0x6840001bdc0) in binary!
	0x5af8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x566c0001bb20 (0x66c0001bb20) in binary!
	0x6be0  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x56540001baf8 (0x6540001baf8) in binary!
	0x6bc8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x563c0001bbf8 (0x63c0001bbf8) in binary!
	0x38000000c  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x69540001c370 (0x1540001c370) in binary!
	0x6fe8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x560c0001bbc8 (0x60c0001bbc8) in binary!
	0x48000000c  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x69240001c340 (0x1240001c340) in binary!
	0x6fb8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x55dc0001c5f0 (0x5dc0001c5f0) in binary!
	0x55d0  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x7443a4d4152  @objc DOCTypeToFocusController.(null) <stripped>

	// Swift methods
	0x46b60  func DOCTypeToFocusController.delegate.getter // getter 
	0x46ba0  func DOCTypeToFocusController.delegate.setter // setter 
	0x46c00  func DOCTypeToFocusController.delegate.modify // modifyCoroutine 
	0x46cf0  func DOCTypeToFocusController.autocorrectionType.getter // getter 
	0x46d10  func DOCTypeToFocusController.autocorrectionType.setter // setter 
	0x46d20  func DOCTypeToFocusController.autocorrectionType.modify // modifyCoroutine 
	0x46db0  func DOCTypeToFocusController.hasText.getter // getter 
	0x46f40  func DOCTypeToFocusController.insertText(_:) // method 
	0x47310  func DOCTypeToFocusController.deleteBackward() // method 
	0x473d0  func <stripped> // method 
	0x47640  func <stripped> // method 
	0x47730  func <stripped> // method 
 }

 enum DocumentManagerExecutables.DOCItemSortMode {

	// Properties
	case date  
	case lastUsedDate  
	case name  
	case tags  
	case size  
	case kind  
 }

 struct DocumentManagerExecutables.DOCItemSortDescriptor {

	// Properties
	let sortType : DOCItemSortMode // +0x0
	let sortDescriptors : [NSSortDescriptor] // +0x8
	let localizedName : String // +0x10
	let isReversed : Bool // +0x20
 }

 class DocumentManagerExecutables.DOCEmptyContentsInfoView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var noContentLabelsView : DOCEmtptyContentsLabelsView
	var title : String
	var message : String

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x69540001c370 (0x1540001c370) in binary!
	0x6fe8  @objc DOCEmptyContentsInfoView.(null) <stripped>
WARNING: couldn't find address 0x560c0001bbc8 (0x60c0001bbc8) in binary!
	0x48000000c  @objc DOCEmptyContentsInfoView.(null) <stripped>
WARNING: couldn't find address 0x69240001c340 (0x1240001c340) in binary!
	0x6fb8  @objc DOCEmptyContentsInfoView.(null) <stripped>

	// Swift methods
	0x4b3a0  func DOCEmptyContentsInfoView.title.getter // getter 
	0x4b3c0  func DOCEmptyContentsInfoView.title.setter // setter 
	0x4b3e0  func DOCEmptyContentsInfoView.title.modify // modifyCoroutine 
	0x4b530  func DOCEmptyContentsInfoView.message.getter // getter 
	0x4b5a0  func DOCEmptyContentsInfoView.message.setter // setter 
	0x4b650  func DOCEmptyContentsInfoView.message.modify // modifyCoroutine 
 }

 class DocumentManagerExecutables.DOCEmtptyContentsLabelsView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var title : String // +0x8 (0x10)
	var message : String // +0x18 (0x10)
	var titleToMessageBaselineSpacingConstraint : NSLayoutConstraint? // +0x28 (0x8)
	var messageLeadingConstraint : NSLayoutConstraint? // +0x30 (0x8)
	var messageTrailingConstraint : NSLayoutConstraint? // +0x38 (0x8)
	var maxWidthConstraint : NSLayoutConstraint? // +0x40 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	let defaultMaxWidth : Öï // +0x48 (0x8)
	let titleLabel : UILabel // +0x50 (0x8)
	let messageLabel : UILabel // +0x58 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x69240001c340 (0x1240001c340) in binary!
	0x6fb8  @objc DOCEmtptyContentsLabelsView.(null) <stripped>
WARNING: couldn't find address 0x55dc0001c5f0 (0x5dc0001c5f0) in binary!
	0x55d0  @objc DOCEmtptyContentsLabelsView.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x7443a4d4152  @objc DOCEmtptyContentsLabelsView.(null) <stripped>
WARNING: couldn't find address 0x616e614d746e656d (0x14d746e656d) in binary!
	0x3656c626174  @objc DOCEmtptyContentsLabelsView.(null) <stripped>

	// Swift methods
	0x4bb50  func <stripped> // method 
 }

 enum DocumentManagerExecutables.DOCContentLayoutSizeCategory {

	// Properties
	case regular  
	case large  
	case extraLarge  
 }
