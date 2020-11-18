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
WARNING: couldn't find address 0x734c0001c510 (0x34c0001c510) in binary!
	0x5dc0  @objc DOCLocalized.(null) <stripped>
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
WARNING: couldn't find address 0x732c0001c4f0 (0x32c0001c4f0) in binary!
	0x18000000c  @objc DOCUserActivityController.(null) <stripped>

	// Swift methods
	0xc100  class func static DOCUserActivityController.publishUserActivity(for:domainDisplayNameProvider:activityHosting:) // method 
	0xc290  class func static DOCUserActivityController.userActivityFor(item:domainDisplayNameProvider:completion:) // method 
	0xe920  class func static DOCUserActivityController.crossDeviceItemIDForItemID(_:_:) // method 
	0xe9b0  class func static DOCUserActivityController.itemURLForCrossDeviceItemID(_:_:) // method 
 }

 class DocumentManagerExecutables.DOCPostLaunchBuffer : DOCOperationBuffer {

	// Properties
	let timeout : Int

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5d940001c350 (0x5940001c350) in binary!
	0x98000000c  @objc DOCPostLaunchBuffer.(null) <stripped>

	// Swift methods
	0xfbe0  func DOCPostLaunchBuffer.performAfterLaunch(alwaysAsync:_:) // method 
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
WARNING: couldn't find address 0x72fc0001c4c0 (0x2fc0001c4c0) in binary!
	0x5d70  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x83aa0001c310 (0x3aa0001c310) in binary!
	0x839e  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x856e0001c670 (0x56e0001c670) in binary!
	0x8386  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x85560001c650 (0x5560001c650) in binary!
	0x5d28  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x5d1c0001c2d8 (0x51c0001c2d8) in binary!
	0x18000000c  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x72840001c298 (0x2840001c298) in binary!
	0x48000000c  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x726c0001c430 (0x26c0001c430) in binary!
	0x5ce0  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x61540001c270 (0x1540001c270) in binary!
	0x5cc8  @objc DOCOperation.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x334fffc78e0  @objc DOCOperation.(null) <stripped>

	// Swift methods
	0x10a30  func DOCOperation.finishedBlock.getter // getter 
	0x10aa0  func DOCOperation.finishedBlock.setter // setter 
	0x10b20  func DOCOperation.finishedBlock.modify // modifyCoroutine 
	0x11c60  func DOCOperation._finishIfCanceled() // method 
	0x11f90  func DOCOperation.completed(with:error:) // method 
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
WARNING: couldn't find address 0x726c0001c430 (0x26c0001c430) in binary!
	0x5ce0  @objc DOCSmartFolderManager.(null) <stripped>
WARNING: couldn't find address 0x61540001c270 (0x1540001c270) in binary!
	0x5cc8  @objc DOCSmartFolderManager.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x334fffc78e0  @objc DOCSmartFolderManager.(null) <stripped>
	0xfffc79d8  @objc DOCSmartFolderManager.Å˛˝ <stripped>

	// Swift methods
	0x126c0  func <stripped> // getter 
	0x12780  func DOCSmartFolderManager.currentUserActivity.getter // getter 
	0x127a0  func DOCSmartFolderManager.currentUserActivity.setter // setter 
	0x127c0  func DOCSmartFolderManager.currentUserActivity.modify // modifyCoroutine 
	0x12810  func DOCSmartFolderManager.defaultSaveLocationItemId.getter // getter 
	0x12870  func DOCSmartFolderManager.defaultSaveLocationItemId.setter // setter 
	0x128d0  func DOCSmartFolderManager.defaultSaveLocationItemId.modify // modifyCoroutine 
	0x129e0  class func DOCSmartFolderManager.__allocating_init(_:) // init 
	0x12cf0  func DOCSmartFolderManager.refreshSmartFolders() // method 
	0x12de0  func DOCSmartFolderManager.registerDomainDisplayNameProvider(_:) // method 
	0x12e30  func DOCSmartFolderManager.register(savedFile:in:) // method 
	0x136a0  func DOCSmartFolderManager.suggestions(for:) // method 
	0x13e50  func DOCSmartFolderManager.makeHostedActivityCurrent() // method 
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
WARNING: couldn't find address 0x5c6c0001c5a8 (0x46c0001c5a8) in binary!
	0x71e0  @objc DOCChainOperation.(null) <stripped>
WARNING: couldn't find address 0x5c540001c210 (0x4540001c210) in binary!
	0x38000000c  @objc DOCChainOperation.(null) <stripped>
WARNING: couldn't find address 0x5c3c0001c578 (0x43c0001c578) in binary!
	0x71b0  @objc DOCChainOperation.(null) <stripped>

	// Swift methods
	0x18110  func DOCChainOperation.mode.getter // getter 
	0x18140  func DOCChainOperation.mode.setter // setter 
	0x18180  func DOCChainOperation.mode.modify // modifyCoroutine 
	0x181d0  class func DOCChainOperation.__allocating_init(operations:) // init 
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
WARNING: couldn't find address 0x5c3c0001c578 (0x43c0001c578) in binary!
	0x71b0  @objc DOCChainableOperation.(null) <stripped>
WARNING: couldn't find address 0x5c240001c1e0 (0x4240001c1e0) in binary!
	0x28000000c  @objc DOCChainableOperation.(null) <stripped>
WARNING: couldn't find address 0x718c0001c350 (0x18c0001c350) in binary!
	0x5c00  @objc DOCChainableOperation.(null) <stripped>

	// Swift methods
	0x19630  func DOCChainableOperation.main(with:previousOperationError:) // method 
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
WARNING: couldn't find address 0x718c0001c350 (0x18c0001c350) in binary!
	0x5c00  @objc DOCUTIDescriptorCollector.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x19cfffcec28  @objc DOCUTIDescriptorCollector.(null) <stripped>

	// Swift methods
	0x1a120  func DOCUTIDescriptorCollector.filteredUTIs(matching:allowedUTIs:completion:) // method 
	0x1a530  func DOCUTIDescriptorCollector.cancelGathering() // method 
	0x1a5b0  func <stripped> // method 
	0x1be10  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCAnalyticsManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var bundleVersionCache : [String : String?]
	let eventsQueue : OS_dispatch_queue

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x716c0001c330 (0x16c0001c330) in binary!
	0x5be0  @objc DOCAnalyticsManager.(null) <stripped>
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
WARNING: couldn't find address 0x71340001c2f8 (0x1340001c2f8) in binary!
	0x85a8  @objc DOCQuickLookInfoPreview.(null) <stripped>
WARNING: couldn't find address 0x756c0001c688 (0x56c0001c688) in binary!
	0x6225  @objc DOCQuickLookInfoPreview.(null) <stripped>
WARNING: couldn't find address 0x75540001c690 (0x5540001c690) in binary!
	0x5b78  @objc DOCQuickLookInfoPreview.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x7ecfffd39d0  @objc DOCQuickLookInfoPreview.(null) <stripped>
	0xc40001c0c8  @objc DOCQuickLookInfoPreview. <stripped>
WARNING: couldn't find address 0x1c0b4fffd4840 (0xb4fffd4840) in binary!
	0x4fc0001c0a0  @objc DOCQuickLookInfoPreview.(null) <stripped>

	// Swift methods
	0x23100  func DOCQuickLookInfoPreview.item.getter // getter 
	0x23140  func DOCQuickLookInfoPreview.item.setter // setter 
	0x231e0  func DOCQuickLookInfoPreview.item.modify // modifyCoroutine 
	0x23490  func DOCQuickLookInfoPreview.needsUpdate(for:) // method 
 }

 class DocumentManagerExecutables.DOCItemObserverSubscriber : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	let uuid : ä // +0x0 (0x0)
	let updateBlock : (_:) // +0x0 (0x10)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6ff40001c1b8 (0x7f40001c1b8) in binary!
	0x5a68  @objc DOCItemObserverSubscriber.(null) <stripped>
WARNING: couldn't find address 0x38000000c (0x38000000c) in binary!
	0x1ecffff9350  @objc DOCItemObserverSubscriber.(null) <stripped>

	// Swift methods
	0x24640  class func DOCItemObserverSubscriber.__allocating_init(updateBlock:) // init 
 }

 class DocumentManagerExecutables.DOCItemObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let collection : FPItemCollection
	var item : FPItem
	var subscribers : DOCItemObserverSubscriber

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x70c40001c0c8 (0xc40001c0c8) in binary!
	0x5fb8  @objc DOCItemObserver.(null) <stripped>
WARNING: couldn't find address 0x74fc0001c0a0 (0x4fc0001c0a0) in binary!
	0x5b20  @objc DOCItemObserver.(null) <stripped>
WARNING: couldn't find address 0x70940001c258 (0x940001c258) in binary!
	0x5b08  @objc DOCItemObserver.(null) <stripped>
WARNING: couldn't find address 0xa8000000c (0xa8000000c) in binary!
	0x7fcfffd5080  @objc DOCItemObserver.(null) <stripped>
	0x7dcfffd50a8  @objc DOCItemObserver.ãEƒàC äE»àC!ãE¿àC"ãEºàC#äEàC$äE÷àC%äE◊àC&HÉƒ8[A\A]A^A_]√ <stripped>
	0x744fffd50d0  @objc DOCItemObserver.HâCãEƒàC äE»àC!ãE¿àC"ãEºàC#äEàC$äE÷àC%äE◊àC&HÉƒ8[A\A]A^A_]√ <stripped>

	// Swift methods
	0x249d0  class func DOCItemObserver.__allocating_init(observedItem:) // init 
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
WARNING: couldn't find address 0x63100001c648 (0x3100001c648) in binary!
	0x6304  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x62f80001c650 (0x2f80001c650) in binary!
	0x62ec  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x59f40001c648 (0x1f40001c648) in binary!
	0x66eb  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x59dc0001bf98 (0x1dc0001bf98) in binary!
	0x38000000c  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x73940001bf10 (0x3940001bf10) in binary!
	0x5e38  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x62980001bee8 (0x2980001bee8) in binary!
	0x68000000c  @objc DOCButtonGestureRecognizer.(null) <stripped>
WARNING: couldn't find address 0x6f140001bf00 (0x7140001bf00) in binary!
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
WARNING: couldn't find address 0x6f140001bf00 (0x7140001bf00) in binary!
	0x5e08  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x6efc0001bed8 (0x6fc0001bed8) in binary!
	0x5df0  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x6ee40001c0a8 (0x6e40001c0a8) in binary!
	0x5958  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffddcd0  @objc DOCInteractionManager.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x6dcfffe1308  @objc DOCInteractionManager.(null) <stripped>
	0x41b0001be40  @objc DOCInteractionManager.UHâÂA∂u <stripped>

	// Swift methods
	0x2c1b0  func DOCInteractionManager.lastOpenedItem.getter // getter 
	0x2c1f0  func DOCInteractionManager.lastOpenedItem.setter // setter 
	0x2c460  func DOCInteractionManager.lastOpenedItem.modify // modifyCoroutine 
	0x2c540  func DOCInteractionManager.lastSelectedItem.getter // getter 
	0x2c650  func DOCInteractionManager.lastSelectedItem.setter // setter 
	0x2c8e0  func DOCInteractionManager.lastSelectedItem.modify // modifyCoroutine 
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
WARNING: couldn't find address 0x6ec40001c088 (0x6c40001c088) in binary!
	0x28000000c  @objc DOCPostSearchInitializationBuffer.(null) <stripped>

	// Swift methods
	0x2ddc0  class func DOCPostSearchInitializationBuffer.__allocating_init() // init 
	0x2dfa0  func DOCPostSearchInitializationBuffer.performAfterSearchInitialization(_:) // method 
 }

 class DocumentManagerExecutables.DOCStateRequestAssertion : _SwiftObject /usr/lib/swift/libswiftCore.dylib {

	// Properties
	var invalidationHandler : DOCStateRequestAssertion
	var valid : Bool

	// Swift methods
	0x2e040  class func DOCStateRequestAssertion.__allocating_init(invalidationHandler:) // init 
	0x2e140  func DOCStateRequestAssertion.invalidate() // method 
 }

 class DocumentManagerExecutables.DOCOperationBuffer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var locked : Bool
	let label : String
	let targetQueue : OS_dispatch_queue
	var $__lazy_storage_$_queue : OS_dispatch_queue?

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6eac0001c070 (0x6ac0001c070) in binary!
	0x5920  @objc DOCOperationBuffer.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x5e4fffe28f8  @objc DOCOperationBuffer.(null) <stripped>

	// Swift methods
	0x31330  class func DOCOperationBuffer.__allocating_init(label:targetQueue:) // init 
	0x31020  func DOCOperationBuffer.signal() // method 
	0x310f0  func DOCOperationBuffer.buffer(_:) // method 
	0x312a0  func <stripped> // getter 
 }

 class DocumentManagerExecutables.DOCImageContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contentOffsetFromTop : Öï
	var imageIsFolder : Bool
	let shadowView : UIView
	let imageView : DOCFittingImageView

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x6bb30001bdd8 (0x3b30001bdd8) in binary!
	0x6baf  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6bbc0001c5d8 (0x3bc0001c5d8) in binary!
	0x7250  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6bd40001bda0 (0x3d40001bda0) in binary!
	0x6be8  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x585c0001c538 (0x5c0001c538) in binary!
	0x5850  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x18000000c (0x18000000c) in binary!
	0xfffe26b8  @objc DOCImageContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x28000000c (0x28000000c) in binary!
	0x5d4fffe6840  @objc DOCImageContainerFittingView.(null) <stripped>
	0x6240001c5f8  @objc DOCImageContainerFittingView.ˇ]√D <stripped>
WARNING: couldn't find address 0x1bd1cfffe78d0 (0x51cfffe78d0) in binary!
	0xec0001bd08  @objc DOCImageContainerFittingView.(null) <stripped>

	// Swift methods
	0x31760  func DOCImageContainerFittingView.isShadowHidden.getter // getter 
	0x31780  func DOCImageContainerFittingView.isShadowHidden.setter // setter 
	0x317b0  func DOCImageContainerFittingView.isShadowHidden.modify // modifyCoroutine 
	0x31a10  func DOCImageContainerFittingView.imageIsFolder.getter // getter 
	0x31a40  func DOCImageContainerFittingView.imageIsFolder.setter // setter 
	0x31a80  func DOCImageContainerFittingView.imageIsFolder.modify // modifyCoroutine 
	0x32000  func DOCImageContainerFittingView.fittingSize.getter // getter 
	0x32020  func DOCImageContainerFittingView.fittingSize.setter // setter 
	0x32050  func DOCImageContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x320e0  func DOCImageContainerFittingView.image.getter // getter 
	0x32110  func DOCImageContainerFittingView.image.setter // setter 
	0x32170  func DOCImageContainerFittingView.image.modify // modifyCoroutine 
	0x32560  func DOCImageContainerFittingView.updateContentFrame() // method 
	0x32770  func <stripped> // getter 
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
WARNING: couldn't find address 0x6c1b0001be40 (0x41b0001be40) in binary!
	0x6c17  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x58f40001c5d0 (0xf40001c5d0) in binary!
	0x72b8  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6c5c0001c600 (0x45c0001c600) in binary!
	0x6c30  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x6bf40001c610 (0x3f40001c610) in binary!
	0x58b8  @objc DOCContainerFittingView.(null) <stripped>
WARNING: couldn't find address 0x88000000c (0x88000000c) in binary!
	0x57cfffe1390  @objc DOCContainerFittingView.(null) <stripped>
	0x36cfffe1c38  @objc DOCContainerFittingView. <stripped>
	0x58cfffe1ea0  @objc DOCContainerFittingView.Dƒ8H£ÿs^HâÿH¡‡Lã}∏Iã<IãtH9œu	L9ˆÑÁ˛ˇˇHãU–LâÒE1¿ËÇx <stripped>
	0x60cfffe2198  @objc DOCContainerFittingView.ã8Ëˇ{ <stripped>

	// Swift methods
	0x32ac0  func DOCContainerFittingView.fittingSize.getter // getter 
	0x32b00  func DOCContainerFittingView.fittingSize.setter // setter 
	0x32b60  func DOCContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x32d40  class func DOCContainerFittingView.__allocating_init(containedViewController:) // init 
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
WARNING: couldn't find address 0x6da40001bf68 (0x5a40001bf68) in binary!
	0x5818  @objc DOCTagManager.(null) <stripped>
WARNING: couldn't find address 0x98000000c (0x98000000c) in binary!
	0x51cfffe78d0  @objc DOCTagManager.(null) <stripped>

	// Swift methods
	0x359a0  func DOCTagManager.scheduleAction(_:completionBlock:) // method 
	0x361f0  func <stripped> // method 
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
WARNING: couldn't find address 0x6e240001c5f8 (0x6240001c5f8) in binary!
	0x60e4  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x60ec0001bd08 (0xec0001bd08) in binary!
	0x60cc  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x60d40001bce0 (0xd40001bce0) in binary!
	0x5c48  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x6df80001bcb8 (0x5f80001bcb8) in binary!
	0x6d30  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x57a40001bd60 (0x7a40001bd60) in binary!
	0x38000000c  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x578c0001c0c8 (0x78c0001c0c8) in binary!
	0x6d00  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x57740001bd30 (0x7740001bd30) in binary!
	0x68000000c  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x712c0001c248 (0x12c0001c248) in binary!
	0x5750  @objc DOCTagCollectionObserver.(null) <stripped>
WARNING: couldn't find address 0x71240001c488 (0x1240001c488) in binary!
	0x7148  @objc DOCTagCollectionObserver.(null) <stripped>

	// Swift methods
	0x36ed0  func <stripped> // method 
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
WARNING: couldn't find address 0x578c0001c0c8 (0x78c0001c0c8) in binary!
	0x6d00  @objc DOCBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x57740001bd30 (0x7740001bd30) in binary!
	0x68000000c  @objc DOCBlockOperation.(null) <stripped>
WARNING: couldn't find address 0x712c0001c248 (0x12c0001c248) in binary!
	0x5750  @objc DOCBlockOperation.(null) <stripped>

	// Swift methods
	0x3cbc0  class func DOCBlockOperation.__allocating_init(block:) // init 
 }

 class DocumentManagerExecutables.DOCSafeCenteringContainerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)
	let scrollContainerView : UIView // +0x10 (0x8)
	let centeredContentView : UIView // +0x18 (0x8)
	var scrollContainerViewMinHeightConstraint : NSLayoutConstraint? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x712c0001c248 (0x12c0001c248) in binary!
	0x5750  @objc DOCSafeCenteringContainerView.(null) <stripped>
WARNING: couldn't find address 0x71240001c488 (0x1240001c488) in binary!
	0x7148  @objc DOCSafeCenteringContainerView.(null) <stripped>
WARNING: couldn't find address 0x6a5c0001c478 (0x25c0001c478) in binary!
	0x5720  @objc DOCSafeCenteringContainerView.(null) <stripped>
WARNING: couldn't find address 0x58000000c (0x58000000c) in binary!
	0x3ecfffedb18  @objc DOCSafeCenteringContainerView.(null) <stripped>
	0x62cfffee0c0  @objc DOCSafeCenteringContainerView.*ê <stripped>
	0xfffee148  @objc DOCSafeCenteringContainerView.Hã8Ë~{ <stripped>

	// Swift methods
 }

 struct DocumentManagerExecutables.LaunchUtils { }

 class DocumentManagerExecutables.OpenAppDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let completionBlock : (_:)

	// ObjC -> Swift bridged methods
WARNING: couldn't find address 0x5ff80001bc00 (0x7f80001bc00) in binary!
	0x5b80  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x5fe00001bbd8 (0x7e00001bbd8) in binary!
	0x6c68  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x56dc0001bc98 (0x6dc0001bc98) in binary!
	0xb8000000c  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x7c8c0001bba0 (0x48c0001bba0) in binary!
	0x7ceb  @objc OpenAppDelegate.(null) <stripped>
WARNING: couldn't find address 0x6c2c0001bb78 (0x42c0001bb78) in binary!
	0x7ce6  @objc OpenAppDelegate.(null) <stripped>

	// Swift methods
	0x3e0d0  func <stripped> // method 
	0x3e300  func <stripped> // method 
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
WARNING: couldn't find address 0x7c8c0001bba0 (0x48c0001bba0) in binary!
	0x7ceb  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x6c2c0001bb78 (0x42c0001bb78) in binary!
	0x7ce6  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x56940001bdd0 (0x6940001bdd0) in binary!
	0x5b08  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x567c0001bb30 (0x67c0001bb30) in binary!
	0x6bf0  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x56640001bb08 (0x6640001bb08) in binary!
	0x6bd8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x564c0001bc08 (0x64c0001bc08) in binary!
	0x38000000c  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x69640001c380 (0x1640001c380) in binary!
	0x6ff8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x561c0001bbd8 (0x61c0001bbd8) in binary!
	0x48000000c  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x69340001c350 (0x1340001c350) in binary!
	0x6fc8  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x55ec0001c600 (0x5ec0001c600) in binary!
	0x55e0  @objc DOCTypeToFocusController.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x7443a4d4152  @objc DOCTypeToFocusController.(null) <stripped>

	// Swift methods
	0x46b50  func DOCTypeToFocusController.delegate.getter // getter 
	0x46b90  func DOCTypeToFocusController.delegate.setter // setter 
	0x46bf0  func DOCTypeToFocusController.delegate.modify // modifyCoroutine 
	0x46ce0  func DOCTypeToFocusController.autocorrectionType.getter // getter 
	0x46d00  func DOCTypeToFocusController.autocorrectionType.setter // setter 
	0x46d10  func DOCTypeToFocusController.autocorrectionType.modify // modifyCoroutine 
	0x46da0  func DOCTypeToFocusController.hasText.getter // getter 
	0x46f30  func DOCTypeToFocusController.insertText(_:) // method 
	0x47300  func DOCTypeToFocusController.deleteBackward() // method 
	0x473c0  func <stripped> // method 
	0x47630  func <stripped> // method 
	0x47720  func <stripped> // method 
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
WARNING: couldn't find address 0x69640001c380 (0x1640001c380) in binary!
	0x6ff8  @objc DOCEmptyContentsInfoView.(null) <stripped>
WARNING: couldn't find address 0x561c0001bbd8 (0x61c0001bbd8) in binary!
	0x48000000c  @objc DOCEmptyContentsInfoView.(null) <stripped>
WARNING: couldn't find address 0x69340001c350 (0x1340001c350) in binary!
	0x6fc8  @objc DOCEmptyContentsInfoView.(null) <stripped>

	// Swift methods
	0x4b390  func DOCEmptyContentsInfoView.title.getter // getter 
	0x4b3b0  func DOCEmptyContentsInfoView.title.setter // setter 
	0x4b3d0  func DOCEmptyContentsInfoView.title.modify // modifyCoroutine 
	0x4b520  func DOCEmptyContentsInfoView.message.getter // getter 
	0x4b590  func DOCEmptyContentsInfoView.message.setter // setter 
	0x4b640  func DOCEmptyContentsInfoView.message.modify // modifyCoroutine 
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
WARNING: couldn't find address 0x69340001c350 (0x1340001c350) in binary!
	0x6fc8  @objc DOCEmtptyContentsLabelsView.(null) <stripped>
WARNING: couldn't find address 0x55ec0001c600 (0x5ec0001c600) in binary!
	0x55e0  @objc DOCEmtptyContentsLabelsView.(null) <stripped>
WARNING: couldn't find address 0x0 (0x0) in binary!
	0x7443a4d4152  @objc DOCEmtptyContentsLabelsView.(null) <stripped>
WARNING: couldn't find address 0x616e614d746e656d (0x14d746e656d) in binary!
	0x3656c626174  @objc DOCEmtptyContentsLabelsView.(null) <stripped>

	// Swift methods
	0x4bb40  func <stripped> // method 
 }

 enum DocumentManagerExecutables.DOCContentLayoutSizeCategory {

	// Properties
	case regular  
	case large  
	case extraLarge  
 }
