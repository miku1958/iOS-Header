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
	var x : 5è
WARNING: couldn't find address 0x0 (0x0) in binary!
	var y : 5è
 }

 struct __C.NSFileProviderItemIdentifier {

	// Properties
	var _rawValue : NSString
 }

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : 5è
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : 5è
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : 5è
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : 5è
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : 5è
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : 5è
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
WARNING: couldn't find address 0x734c00019ec0 (0x34c00019ec0) in binary!
	0x5dc0  @objc DOCLocalized.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffbeb48  @objc DOCLocalized.(null) <stripped>
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
WARNING: couldn't find address 0x732c00019ea0 (0x32c00019ea0) in binary!
	0x18000000c  @objc DOCUserActivityController.(null) <stripped>

	// Swift methods
	0xc600  class func static DOCUserActivityController.publishUserActivity(for:domainDisplayNameProvider:activityHosting:) // method 
	0xc790  class func static DOCUserActivityController.userActivityFor(item:domainDisplayNameProvider:completion:) // method 
	0xee20  class func static DOCUserActivityController.crossDeviceItemIDForItemID(_:_:) // method 
	0xeeb0  class func static DOCUserActivityController.itemURLForCrossDeviceItemID(_:_:) // method 
 }

 class DocumentManagerExecutables.DOCPostLaunchBuffer : DOCOperationBuffer {

	// Properties
	let timeout : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5d9400019d00 (0x59400019d00) in binary!
	0x98000000c  @objc DOCPostLaunchBuffer.(null) <stripped>

	// Swift methods
	0x10120  func DOCPostLaunchBuffer.performAfterLaunch(alwaysAsync:_:) // method 
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
WARNING: couldn't find address 0x72fc00019e70 (0x2fc00019e70) in binary!
	0x5d70  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x83aa00019cc0 (0x3aa00019cc0) in binary!
	0x839e  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x856e0001a020 (0x56e0001a020) in binary!
	0x8386  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x85560001a000 (0x5560001a000) in binary!
	0x5d28  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x5d1c00019c88 (0x51c00019c88) in binary!
	0x18000000c  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x728400019c48 (0x28400019c48) in binary!
	0x48000000c  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x726c00019de0 (0x26c00019de0) in binary!
	0x5ce0  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x615400019c20 (0x15400019c20) in binary!
	0x5cc8  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4e4fffc7800  @objc DOCOperation.(null) <stripped>

	// Swift methods
	0x10f70  func DOCOperation.finishedBlock.getter // getter 
	0x10fe0  func DOCOperation.finishedBlock.setter // setter 
	0x11060  func DOCOperation.finishedBlock.modify // modifyCoroutine 
	0x121a0  func DOCOperation._finishIfCanceled() // method 
	0x124d0  func DOCOperation.completed(with:error:) // method 
 }

 struct DocumentManagerExecutables.DOCSmartFolderInputFile {

	// Properties
	let filename : String
	let filetype : String
WARNING: couldn't find address 0x0 (0x0) in binary!
	let dateSaved : yà
 }

 class DocumentManagerExecutables.DOCSmartFolderManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var _database : DOCSmartFolderDatabase?
	var $__lazy_storage_$_database : DOCSmartFolderDatabase?
	var currentUserActivity : NSUserActivity?
	var defaultSaveLocationItemId : NSFileProviderItemIdentifier
	var domainDisplayNameProvider : DOCDomainDisplayNameProvider?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x726c00019de0 (0x26c00019de0) in binary!
	0x5ce0  @objc DOCSmartFolderManager.(null) <stripped>
WARNING: couldn't find address 0x615400019c20 (0x15400019c20) in binary!
	0x5cc8  @objc DOCSmartFolderManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x4e4fffc7800  @objc DOCSmartFolderManager.(null) <stripped>
	0xfffc78f8  @objc DOCSmartFolderManager.Hç·≈ <stripped>

	// Swift methods
	0x12c10  func <stripped> // getter 
	0x12cd0  func DOCSmartFolderManager.currentUserActivity.getter // getter 
	0x12cf0  func DOCSmartFolderManager.currentUserActivity.setter // setter 
	0x12d10  func DOCSmartFolderManager.currentUserActivity.modify // modifyCoroutine 
	0x12d60  func DOCSmartFolderManager.defaultSaveLocationItemId.getter // getter 
	0x12dc0  func DOCSmartFolderManager.defaultSaveLocationItemId.setter // setter 
	0x12e20  func DOCSmartFolderManager.defaultSaveLocationItemId.modify // modifyCoroutine 
	0x12f30  class func DOCSmartFolderManager.__allocating_init(_:) // init 
	0x13240  func DOCSmartFolderManager.refreshSmartFolders() // method 
	0x13330  func DOCSmartFolderManager.registerDomainDisplayNameProvider(_:) // method 
	0x13380  func DOCSmartFolderManager.register(savedFile:in:) // method 
	0x13bf0  func DOCSmartFolderManager.suggestions(for:) // method 
	0x143a0  func DOCSmartFolderManager.makeHostedActivityCurrent() // method 
 }

 class DocumentManagerExecutables.DOCChainOperation : DOCOperation {

	// Properties
	let operations : DOCOperation
	let operationQueue : NSOperationQueue
	var latestOperationResult : Any?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var latestOperationError : Wç
	var mode : DOCChainOperationMode

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5c6c00019f58 (0x46c00019f58) in binary!
	0x71e0  @objc DOCChainOperation.(null) <stripped>
WARNING: couldn't find address 0x5c5400019bc0 (0x45400019bc0) in binary!
	0x38000000c  @objc DOCChainOperation.(null) <stripped>
WARNING: couldn't find address 0x5c3c00019f28 (0x43c00019f28) in binary!
	0x71b0  @objc DOCChainOperation.(null) <stripped>

	// Swift methods
	0x18680  func DOCChainOperation.mode.getter // getter 
	0x186b0  func DOCChainOperation.mode.setter // setter 
	0x186f0  func DOCChainOperation.mode.modify // modifyCoroutine 
	0x18740  class func DOCChainOperation.__allocating_init(operations:) // init 
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
WARNING: couldn't find address 0x5c3c00019f28 (0x43c00019f28) in binary!
	0x71b0  @objc DOCChainableOperation.(null) <stripped>
WARNING: couldn't find address 0x5c2400019b90 (0x42400019b90) in binary!
	0x28000000c  @objc DOCChainableOperation.(null) <stripped>
WARNING: couldn't find address 0x718c00019d00 (0x18c00019d00) in binary!
	0x5c00  @objc DOCChainableOperation.(null) <stripped>

	// Swift methods
	0x19ba0  func DOCChainableOperation.main(with:previousOperationError:) // method 
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
WARNING: couldn't find address 0x718c00019d00 (0x18c00019d00) in binary!
	0x5c00  @objc DOCUTIDescriptorCollector.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x34cfffceb48  @objc DOCUTIDescriptorCollector.(null) <stripped>

	// Swift methods
	0x1a690  func DOCUTIDescriptorCollector.filteredUTIs(matching:allowedUTIs:completion:) // method 
	0x1aaa0  func DOCUTIDescriptorCollector.cancelGathering() // method 
	0x1ab20  func <stripped> // method 
	0x1c380  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCAnalyticsManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var bundleVersionCache : [String : String?]
	let eventsQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x716c00019ce0 (0x16c00019ce0) in binary!
	0x5be0  @objc DOCAnalyticsManager.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffcf4f8  @objc DOCAnalyticsManager.(null) <stripped>
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
WARNING: couldn't find address 0x713400019ca8 (0x13400019ca8) in binary!
	0x85a8  @objc DOCQuickLookInfoPreview.(null) <stripped>
WARNING: couldn't find address 0x756c0001a038 (0x56c0001a038) in binary!
	0x6225  @objc DOCQuickLookInfoPreview.(null) <stripped>
WARNING: couldn't find address 0x75540001a040 (0x5540001a040) in binary!
	0x5b78  @objc DOCQuickLookInfoPreview.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x19cfffd3920  @objc DOCQuickLookInfoPreview.(null) <stripped>
	0xc400019a78  @objc DOCQuickLookInfoPreview. <stripped>
WARNING: couldn't find address 0x19a64fffd47a0 (0x264fffd47a0) in binary!
	0x4fc00019a50  @objc DOCQuickLookInfoPreview.(null) <stripped>

	// Swift methods
	0x236a0  func DOCQuickLookInfoPreview.item.getter // getter 
	0x236e0  func DOCQuickLookInfoPreview.item.setter // setter 
	0x23780  func DOCQuickLookInfoPreview.item.modify // modifyCoroutine 
	0x23a30  func DOCQuickLookInfoPreview.needsUpdate(for:) // method 
 }

 class DocumentManagerExecutables.DOCItemObserverSubscriber : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : /Ñ // +0x0 (0x0)
	let updateBlock : (_:) // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ff400019b68 (0x7f400019b68) in binary!
	0x5a68  @objc DOCItemObserverSubscriber.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x39cffff9340  @objc DOCItemObserverSubscriber.(null) <stripped>

	// Swift methods
	0x24bf0  class func DOCItemObserverSubscriber.__allocating_init(updateBlock:) // init 
 }

 class DocumentManagerExecutables.DOCItemObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let collection : FPItemCollection
	var item : FPItem
	var subscribers : DOCItemObserverSubscriber

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x70c400019a78 (0xc400019a78) in binary!
	0x5fb8  @objc DOCItemObserver.(null) <stripped>
WARNING: couldn't find address 0x74fc00019a50 (0x4fc00019a50) in binary!
	0x5b20  @objc DOCItemObserver.(null) <stripped>
WARNING: couldn't find address 0x709400019c08 (0x9400019c08) in binary!
	0x5b08  @objc DOCItemObserver.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x1acfffd4fe0  @objc DOCItemObserver.(null) <stripped>
	0x18cfffd5008  @objc DOCItemObserver.wâ¿Hç} <stripped>
	0xf4fffd5030  @objc DOCItemObserver.˝ <stripped>

	// Swift methods
	0x24f80  class func DOCItemObserver.__allocating_init(observedItem:) // init 
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
WARNING: couldn't find address 0x631000019ff8 (0x31000019ff8) in binary!
	0x6304  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x62f80001a000 (0x2f80001a000) in binary!
	0x62ec  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x59f400019ff8 (0x1f400019ff8) in binary!
	0x66eb  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x59dc00019948 (0x1dc00019948) in binary!
	0x38000000c  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x7394000198c0 (0x394000198c0) in binary!
	0x5e38  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x629800019898 (0x29800019898) in binary!
	0x68000000c  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x6f14000198b0 (0x714000198b0) in binary!
	0x5e08  @objc DOCButtonGestureRecognizer.(null) <stripped>

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
WARNING: couldn't find address 0x6f14000198b0 (0x714000198b0) in binary!
	0x5e08  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x6efc00019888 (0x6fc00019888) in binary!
	0x5df0  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x6ee400019a58 (0x6e400019a58) in binary!
	0x5958  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffddc60  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x8cfffe1298  @objc DOCInteractionManager.(null) <stripped>
	0x41b000197f0  @objc DOCInteractionManager.UHâÂË˜Óˇˇ]√D <stripped>

	// Swift methods
	0x2c780  func DOCInteractionManager.lastOpenedItem.getter // getter 
	0x2c7c0  func DOCInteractionManager.lastOpenedItem.setter // setter 
	0x2ca30  func DOCInteractionManager.lastOpenedItem.modify // modifyCoroutine 
	0x2cb10  func DOCInteractionManager.lastSelectedItem.getter // getter 
	0x2cc20  func DOCInteractionManager.lastSelectedItem.setter // setter 
	0x2ceb0  func DOCInteractionManager.lastSelectedItem.modify // modifyCoroutine 
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
WARNING: couldn't find address 0x6ec400019a38 (0x6c400019a38) in binary!
	0x28000000c  @objc DOCPostSearchInitializationBuffer.(null) <stripped>

	// Swift methods
	0x2e3a0  class func DOCPostSearchInitializationBuffer.__allocating_init() // init 
	0x2e580  func DOCPostSearchInitializationBuffer.performAfterSearchInitialization(_:) // method 
 }

 class DocumentManagerExecutables.DOCStateRequestAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var invalidationHandler : DOCStateRequestAssertion
	var valid : Bool

	// Swift methods
	0x2e620  class func DOCStateRequestAssertion.__allocating_init(invalidationHandler:) // init 
	0x2e720  func DOCStateRequestAssertion.invalidate() // method 
 }

 class DocumentManagerExecutables.DOCOperationBuffer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var locked : Bool
	let label : String
	let targetQueue : OS_dispatch_queue
	var $__lazy_storage_$_queue : OS_dispatch_queue?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6eac00019a20 (0x6ac00019a20) in binary!
	0x5920  @objc DOCOperationBuffer.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x794fffe2888  @objc DOCOperationBuffer.(null) <stripped>

	// Swift methods
	0x31910  class func DOCOperationBuffer.__allocating_init(label:targetQueue:) // init 
	0x31600  func DOCOperationBuffer.signal() // method 
	0x316d0  func DOCOperationBuffer.buffer(_:) // method 
	0x31880  func <stripped> // getter 
 }

 class DocumentManagerExecutables.DOCImageContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contentOffsetFromTop : 5è
	var imageIsFolder : Bool
	let shadowView : UIView
	let imageView : DOCFittingImageView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6bb300019788 (0x3b300019788) in binary!
	0x6baf  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6bbc00019f88 (0x3bc00019f88) in binary!
	0x7250  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6bd400019750 (0x3d400019750) in binary!
	0x6be8  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x585c00019ee8 (0x5c00019ee8) in binary!
	0x5850  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe2648  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x784fffe67d0  @objc DOCImageContainerFittingView.(null) <stripped>
	0x62400019fa8  @objc DOCImageContainerFittingView.ä <stripped>
WARNING: couldn't find address 0x196ccfffe7860 (0x6ccfffe7860) in binary!
	0xec000196b8  @objc DOCImageContainerFittingView.(null) <stripped>

	// Swift methods
	0x31d40  func DOCImageContainerFittingView.isShadowHidden.getter // getter 
	0x31d60  func DOCImageContainerFittingView.isShadowHidden.setter // setter 
	0x31d90  func DOCImageContainerFittingView.isShadowHidden.modify // modifyCoroutine 
	0x31ff0  func DOCImageContainerFittingView.imageIsFolder.getter // getter 
	0x32020  func DOCImageContainerFittingView.imageIsFolder.setter // setter 
	0x32060  func DOCImageContainerFittingView.imageIsFolder.modify // modifyCoroutine 
	0x325e0  func DOCImageContainerFittingView.fittingSize.getter // getter 
	0x32600  func DOCImageContainerFittingView.fittingSize.setter // setter 
	0x32630  func DOCImageContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x326c0  func DOCImageContainerFittingView.image.getter // getter 
	0x326f0  func DOCImageContainerFittingView.image.setter // setter 
	0x32750  func DOCImageContainerFittingView.image.modify // modifyCoroutine 
	0x32b40  func DOCImageContainerFittingView.updateContentFrame() // method 
	0x32d50  func <stripped> // getter 
 }

 class DocumentManagerExecutables.DOCContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containedViewController : UIViewController // +0x8 (0x8)
	var fittingSize : CGSize // +0x10 (0x10)
	var preventContentOffsetUpdates : Bool // +0x20 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contentOffsetFromTop : 5è // +0x28 (0x8)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var observationContext : ÅÅ // +0x30 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6c1b000197f0 (0x41b000197f0) in binary!
	0x6c17  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x58f400019f80 (0xf400019f80) in binary!
	0x72b8  @objc DOCContainerFittingView.(null) <stripped>
	0x6c30  DOCAnalyticsActionEvent.FileProvider.init(sourceID:)
WARNING: couldn't find address 0x6bf400019fc0 (0x3f400019fc0) in binary!
	0x58b8  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x72cfffe1320  @objc DOCContainerFittingView.(null) <stripped>
	0x51cfffe1bc8  @objc DOCContainerFittingView. <stripped>
	0x73cfffe1e30  @objc DOCContainerFittingView.â˛Hâ¬HâŸE1¿Ë¸~ <stripped>
	0x7bcfffe2128  @objc DOCContainerFittingView.â˚Ë?Ü <stripped>

	// Swift methods
	0x330a0  func DOCContainerFittingView.fittingSize.getter // getter 
	0x330e0  func DOCContainerFittingView.fittingSize.setter // setter 
	0x33140  func DOCContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x33320  class func DOCContainerFittingView.__allocating_init(containedViewController:) // init 
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
	let setTagsOperationTimeout : MÇ

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6da400019918 (0x5a400019918) in binary!
	0x5818  @objc DOCTagManager.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x6ccfffe7860  @objc DOCTagManager.(null) <stripped>

	// Swift methods
	0x35f80  func DOCTagManager.scheduleAction(_:completionBlock:) // method 
	0x367d0  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCTagCollectionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let gatheringKeyPath : String
	let serialQueue : OS_dispatch_queue
	let group : OS_dispatch_group
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spotlightQueryTimeout : MÇ
	var collection : FPItemCollection?
	var finishedGathering : Bool
	var collectionObservationContext : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6e2400019fa8 (0x62400019fa8) in binary!
	0x60e4  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x60ec000196b8 (0xec000196b8) in binary!
	0x60cc  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x60d400019690 (0xd400019690) in binary!
	0x5c48  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x6df800019668 (0x5f800019668) in binary!
	0x6d30  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x57a400019710 (0x7a400019710) in binary!
	0x38000000c  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x578c00019a78 (0x78c00019a78) in binary!
	0x6d00  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x5774000196e0 (0x774000196e0) in binary!
	0x68000000c  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x712c00019bf8 (0x12c00019bf8) in binary!
	0x5750  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x712400019e38 (0x12400019e38) in binary!
	0x7148  @objc DOCTagCollectionObserver.(null) <stripped>

	// Swift methods
	0x374b0  func <stripped> // method 
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
WARNING: couldn't find address 0x578c00019a78 (0x78c00019a78) in binary!
	0x6d00  @objc DOCBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x5774000196e0 (0x774000196e0) in binary!
	0x68000000c  @objc DOCBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x712c00019bf8 (0x12c00019bf8) in binary!
	0x5750  @objc DOCBlockOperation.(null) <stripped>

	// Swift methods
	0x3d1b0  class func DOCBlockOperation.__allocating_init(block:) // init 
 }

 class DocumentManagerExecutables.DOCSafeCenteringContainerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)
	let scrollContainerView : UIView // +0x10 (0x8)
	let centeredContentView : UIView // +0x18 (0x8)
	var scrollContainerViewMinHeightConstraint : NSLayoutConstraint? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x712c00019bf8 (0x12c00019bf8) in binary!
	0x5750  @objc DOCSafeCenteringContainerView.(null) <stripped>
WARNING: couldn't find address 0x712400019e38 (0x12400019e38) in binary!
	0x7148  @objc DOCSafeCenteringContainerView.(null) <stripped>
WARNING: couldn't find address 0x6a5c00019e28 (0x25c00019e28) in binary!
	0x5720  @objc DOCSafeCenteringContainerView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x59cfffedab8  @objc DOCSafeCenteringContainerView.(null) <stripped>
	0x7dcfffee060  @objc DOCSafeCenteringContainerView.UHâÂËßÁˇˇ]√D <stripped>
	0xfffee0e8  @objc DOCSafeCenteringContainerView.â˚ËÅ@ <stripped>

	// Swift methods
 }

 struct DocumentManagerExecutables.LaunchUtils { }

 class DocumentManagerExecutables.OpenAppDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let completionBlock : (_:)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5ff8000195b0 (0x7f8000195b0) in binary!
	0x5b80  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x5fe000019588 (0x7e000019588) in binary!
	0x6c68  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x56dc00019648 (0x6dc00019648) in binary!
	0xb8000000c  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x7c8c00019550 (0x48c00019550) in binary!
	0x7ceb  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x6c2c00019528 (0x42c00019528) in binary!
	0x7ce6  @objc OpenAppDelegate.(null) <stripped>

	// Swift methods
	0x3e6c0  func <stripped> // method 
	0x3e8f0  func <stripped> // method 
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
WARNING: couldn't find address 0x7c8c00019550 (0x48c00019550) in binary!
	0x7ceb  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x6c2c00019528 (0x42c00019528) in binary!
	0x7ce6  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x569400019780 (0x69400019780) in binary!
	0x5b08  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x567c000194e0 (0x67c000194e0) in binary!
	0x6bf0  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x5664000194b8 (0x664000194b8) in binary!
	0x6bd8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x564c000195b8 (0x64c000195b8) in binary!
	0x38000000c  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x696400019d30 (0x16400019d30) in binary!
	0x6ff8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x561c00019588 (0x61c00019588) in binary!
	0x48000000c  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x693400019d00 (0x13400019d00) in binary!
	0x6fc8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x55ec00019fb0 (0x5ec00019fb0) in binary!
	0x55e0  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x7443a4d4152  @objc DOCTypeToFocusController.(null) <stripped>

	// Swift methods
	0x47170  func DOCTypeToFocusController.delegate.getter // getter 
	0x471b0  func DOCTypeToFocusController.delegate.setter // setter 
	0x47210  func DOCTypeToFocusController.delegate.modify // modifyCoroutine 
	0x47300  func DOCTypeToFocusController.autocorrectionType.getter // getter 
	0x47320  func DOCTypeToFocusController.autocorrectionType.setter // setter 
	0x47330  func DOCTypeToFocusController.autocorrectionType.modify // modifyCoroutine 
	0x473c0  func DOCTypeToFocusController.hasText.getter // getter 
	0x47550  func DOCTypeToFocusController.insertText(_:) // method 
	0x47920  func DOCTypeToFocusController.deleteBackward() // method 
	0x479e0  func <stripped> // method 
	0x47c50  func <stripped> // method 
	0x47d40  func <stripped> // method 
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
WARNING: couldn't find address 0x696400019d30 (0x16400019d30) in binary!
	0x6ff8  @objc DOCEmptyContentsInfoView.(null) <stripped>
WARNING: couldn't find address 0x561c00019588 (0x61c00019588) in binary!
	0x48000000c  @objc DOCEmptyContentsInfoView.(null) <stripped>
WARNING: couldn't find address 0x693400019d00 (0x13400019d00) in binary!
	0x6fc8  @objc DOCEmptyContentsInfoView.(null) <stripped>

	// Swift methods
	0x4b9e0  func DOCEmptyContentsInfoView.title.getter // getter 
	0x4ba00  func DOCEmptyContentsInfoView.title.setter // setter 
	0x4ba20  func DOCEmptyContentsInfoView.title.modify // modifyCoroutine 
	0x4bb70  func DOCEmptyContentsInfoView.message.getter // getter 
	0x4bbe0  func DOCEmptyContentsInfoView.message.setter // setter 
	0x4bc90  func DOCEmptyContentsInfoView.message.modify // modifyCoroutine 
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
	let defaultMaxWidth : 5è // +0x48 (0x8)
	let titleLabel : UILabel // +0x50 (0x8)
	let messageLabel : UILabel // +0x58 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x693400019d00 (0x13400019d00) in binary!
	0x6fc8  @objc DOCEmtptyContentsLabelsView.(null) <stripped>
WARNING: couldn't find address 0x55ec00019fb0 (0x5ec00019fb0) in binary!
	0x55e0  @objc DOCEmtptyContentsLabelsView.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x7443a4d4152  @objc DOCEmtptyContentsLabelsView.(null) <stripped>
WARNING: couldn't find address 0x616e614d746e656d (0x14d746e656d) in binary!
	0x3656c626174  @objc DOCEmtptyContentsLabelsView.(null) <stripped>

	// Swift methods
	0x4c190  func <stripped> // method 
 }

 enum DocumentManagerExecutables.DOCContentLayoutSizeCategory {

	// Properties
	case regular  
	case large  
	case extraLarge  
 }
