 protocol DocumentManagerExecutables.DOCTypeToFocusControllerDelegate // 4 requirements
 {
	// method
	// method
	// method
	// method
 }

 struct __C.UIEdgeInsets {

	// Properties
	var top : CGFloat
	var left : CGFloat
	var bottom : CGFloat
	var right : CGFloat
 }

 struct __C.CGSize {

	// Properties
	var width : CGFloat
	var height : CGFloat
 }

 class __C.CGColor {
 struct __C.AttributeName {

	// Properties
	var _rawValue : NSString
 }

 struct __C.FeatureKey {

	// Properties
	var _rawValue : NSString
 }

 class __C.CFError {
 struct __C._LSHandlerRank {

	// Properties
	var _rawValue : NSString
 }

 struct __C.NSKeyValueChangeKey {

	// Properties
	var _rawValue : NSString
 }

 struct __C.NSKeyValueObservingOptions {

	// Properties
	let rawValue : UInt
 }

 struct __C.CompareOptions {

	// Properties
	let rawValue : UInt
 }

 enum __C.Code { }

 struct __C_Synthesized.CSSearchQueryError {

	// Properties
	let _nsError : NSError
 }

 enum DocumentManagerExecutables.DOCColumnWidth {

	// Properties
	case pad_320  
 }

 struct DocumentManagerExecutables.DOCColumnViewSpecs {

	// Properties
	let columnViewSize : CGSize // +0x0
	let columnWidth : DOCColumnWidth // +0x0
	let allowTags : Bool // +0x10
	let allowBadge : Bool // +0x11
 }

 class DocumentManagerExecutables.DOCPostLaunchBuffer : DOCOperationBuffer {
	// ObjC -> Swift bridged methods
	0x8120  @objc DOCPostLaunchBuffer..cxx_destruct <stripped>

	// Swift methods
	0x8000  func DOCPostLaunchBuffer.performAfterLaunch(_:) // method 
 }

 class DocumentManagerExecutables.DOCOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let synchronizationQueue : OS_dispatch_queue // +0x8 (0x8)
	let callbackQueue : OS_dispatch_queue // +0x10 (0x8)
	var _isFinished : Bool // +0x18 (0x1)
	var _isExecuting : Bool // +0x19 (0x1)
	var finishedBlock : (_:_:)? // +0x20 (0x10)

	// ObjC -> Swift bridged methods
	0x8630  @objc DOCOperation.init <stripped>
	0x8bd0  @objc DOCOperation.start <stripped>
	0x8c00  @objc DOCOperation.isAsynchronous <stripped>
	0x8c30  @objc DOCOperation.isFinished <stripped>
	0x8d90  @objc DOCOperation.setFinished: <stripped>
	0x90a0  @objc DOCOperation.isExecuting <stripped>
	0x9240  @objc DOCOperation.setExecuting: <stripped>
	0x9560  @objc DOCOperation.cancel <stripped>
	0x9eb0  @objc DOCOperation..cxx_destruct <stripped>

	// Swift methods
	0x8130  func DOCOperation.finishedBlock.getter // getter 
	0x81a0  func DOCOperation.finishedBlock.setter // setter 
	0x8220  func DOCOperation.finishedBlock.modify // modifyCoroutine 
	0x95d0  func DOCOperation._finishIfCanceled() // method 
	0x99e0  func DOCOperation.completed(with:error:) // method 
 }

 class DocumentManagerExecutables.DOCChainOperation : DOCOperation {

	// Properties
	let operations : [DOCOperation]
	let operationQueue : NSOperationQueue
	var latestOperationResult : Any?
	var latestOperationError : Error?
	var mode : DOCChainOperationMode

	// ObjC -> Swift bridged methods
	0xb0e0  @objc DOCChainOperation.main <stripped>
	0xb160  @objc DOCChainOperation.init <stripped>
	0xb200  @objc DOCChainOperation..cxx_destruct <stripped>

	// Swift methods
	0xa1b0  func DOCChainOperation.mode.getter // getter 
	0xa1e0  func DOCChainOperation.mode.setter // setter 
	0xa220  func DOCChainOperation.mode.modify // modifyCoroutine 
	0xa270  class func DOCChainOperation.__allocating_init(operations:) // init 
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
	0xb330  @objc DOCChainableOperation.main <stripped>
	0xb3d0  @objc DOCChainableOperation.init <stripped>
	0xb4b0  @objc DOCChainableOperation..cxx_destruct <stripped>

	// Swift methods
	0xb360  func DOCChainableOperation.main(with:previousOperationError:) // method 
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
	var currentQuery : CSSearchQuery? // +0x8 (0x8)
	var utiDescriptors : DOCUTIDescriptor // +0x10 (0x8)
	let completionQueue : OS_dispatch_queue // +0x18 (0x8)
	let gatheringQueue : OS_dispatch_queue // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0xcc90  @objc DOCUTIDescriptorCollector.init <stripped>
	0xf100  @objc DOCUTIDescriptorCollector..cxx_destruct <stripped>

	// Swift methods
	0xccb0  func DOCUTIDescriptorCollector.filteredUTIs(matching:allowedUTIs:completion:) // method 
	0xd270  func DOCUTIDescriptorCollector.cancelGathering() // method 
	0xd310  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController /System/Library/Frameworks/QuickLook.framework/QuickLook {

	// Properties
	var item : FPItem? // +0x8 (0x8)
	var qlItem : QLPreviewItem? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x15050  @objc DOCQuickLookInfoPreview.init <stripped>
	0x150f0  @objc DOCQuickLookInfoPreview.presentationMode <stripped>
	0x151e0  @objc DOCQuickLookInfoPreview.initWithCoder: <stripped>
	0x15910  @objc DOCQuickLookInfoPreview.initWithNibName:bundle: <stripped>
	0x15a00  @objc DOCQuickLookInfoPreview.initWithPreviewItems: <stripped>
	0x15a80  @objc DOCQuickLookInfoPreview..cxx_destruct <stripped>

	// Swift methods
	0x14de0  func DOCQuickLookInfoPreview.item.getter // getter 
	0x14e20  func DOCQuickLookInfoPreview.item.setter // setter 
	0x14ef0  func DOCQuickLookInfoPreview.item.modify // modifyCoroutine 
	0x15270  func DOCQuickLookInfoPreview.needsUpdate(for:) // method 
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

 class DocumentManagerExecutables.DOCInteractionManager : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var lastOpenedItem : FPItem? // +0x8 (0x8)
	var lastSelectedItem : FPItem? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x1afc0  @objc DOCInteractionManager.lastOpenedItem <stripped>
	0x1b000  @objc DOCInteractionManager.setLastOpenedItem: <stripped>
	0x1b450  @objc DOCInteractionManager.lastSelectedItem <stripped>
	0x1b510  @objc DOCInteractionManager.setLastSelectedItem: <stripped>
	0x1bb50  @objc DOCInteractionManager.init <stripped>
	0x1bc40  @objc DOCInteractionManager..cxx_destruct <stripped>

	// Swift methods
	0x1afe0  func DOCInteractionManager.lastOpenedItem.getter // getter 
	0x1b020  func DOCInteractionManager.lastOpenedItem.setter // setter 
	0x1b3d0  func DOCInteractionManager.lastOpenedItem.modify // modifyCoroutine 
	0x1b4b0  func DOCInteractionManager.lastSelectedItem.getter // getter 
	0x1b5c0  func DOCInteractionManager.lastSelectedItem.setter // setter 
	0x1b9a0  func DOCInteractionManager.lastSelectedItem.modify // modifyCoroutine 
 }

 struct DocumentManagerExecutables.DOCLog { }

 enum DocumentManagerExecutables.DOCDeviceModel {

	// Properties
	case iPhone  
	case iPad  
	case iPodTouch  
	case unknownDevice  
 }

 class DocumentManagerExecutables.DOCOperationBuffer : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	var locked : Bool // +0x8 (0x1)
	let label : String // +0x10 (0x10)
	let targetQueue : OS_dispatch_queue // +0x20 (0x8)
	var $__lazy_storage_$_queue : OS_dispatch_queue? // +0x28 (0x8)

	// ObjC -> Swift bridged methods
	0x201b0  @objc DOCOperationBuffer.init <stripped>
	0x20230  @objc DOCOperationBuffer..cxx_destruct <stripped>

	// Swift methods
	0x1fdf0  class func DOCOperationBuffer.__allocating_init(label:targetQueue:) // init 
	0x1fa30  func DOCOperationBuffer.signal() // method 
	0x1fb40  func DOCOperationBuffer.buffer(_:) // method 
 }

 class DocumentManagerExecutables.DOCImageContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var contentOffsetFromTop : CGFloat
	var imageIsFolder : Bool
	let shadowView : UIView
	let imageView : DOCFittingImageView

	// ObjC -> Swift bridged methods
	0x20280  @objc DOCImageContainerFittingView.contentOffsetFromTop <stripped>
	0x202c0  @objc DOCImageContainerFittingView.setContentOffsetFromTop: <stripped>
	0x208c0  @objc DOCImageContainerFittingView.initWithFrame: <stripped>
	0x20900  @objc DOCImageContainerFittingView.initWithCoder: <stripped>
	0x20bc0  @objc DOCImageContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x20c10  @objc DOCImageContainerFittingView.intrinsicContentSize <stripped>
	0x20ee0  @objc DOCImageContainerFittingView.layoutSubviews <stripped>
	0x212d0  @objc DOCImageContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x20300  func DOCImageContainerFittingView.isShadowHidden.getter // getter 
	0x20320  func DOCImageContainerFittingView.isShadowHidden.setter // setter 
	0x20350  func DOCImageContainerFittingView.isShadowHidden.modify // modifyCoroutine 
	0x203b0  func DOCImageContainerFittingView.imageIsFolder.getter // getter 
	0x203e0  func DOCImageContainerFittingView.imageIsFolder.setter // setter 
	0x20420  func DOCImageContainerFittingView.imageIsFolder.modify // modifyCoroutine 
	0x20920  func DOCImageContainerFittingView.fittingSize.getter // getter 
	0x20940  func DOCImageContainerFittingView.fittingSize.setter // setter 
	0x20970  func DOCImageContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x20a00  func DOCImageContainerFittingView.image.getter // getter 
	0x20a30  func DOCImageContainerFittingView.image.setter // setter 
	0x20a90  func DOCImageContainerFittingView.image.modify // modifyCoroutine 
	0x20f10  func DOCImageContainerFittingView.updateContentFrame() // method 
	0x21120  func <stripped> // getter 
 }

 class DocumentManagerExecutables.DOCContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containedViewController : UIViewController
	var fittingSize : CGSize
	var preventContentOffsetUpdates : Bool
	var contentOffsetFromTop : CGFloat
	var observationContext : NSKeyValueObservation?

	// ObjC -> Swift bridged methods
	0x21580  @objc DOCContainerFittingView.contentOffsetFromTop <stripped>
	0x21630  @objc DOCContainerFittingView.setContentOffsetFromTop: <stripped>
	0x21bd0  @objc DOCContainerFittingView.layoutSubviews <stripped>
	0x21c50  @objc DOCContainerFittingView.initWithCoder: <stripped>
	0x21c70  @objc DOCContainerFittingView.intrinsicContentSize <stripped>
	0x21d30  @objc DOCContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x21e20  @objc DOCContainerFittingView.initWithFrame: <stripped>
	0x21eb0  @objc DOCContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x21460  func DOCContainerFittingView.fittingSize.getter // getter 
	0x214a0  func DOCContainerFittingView.fittingSize.setter // setter 
	0x21500  func DOCContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x216f0  class func DOCContainerFittingView.__allocating_init(containedViewController:) // init 
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
	let setTagsOperationTimeout : DispatchTimeInterval

	// ObjC -> Swift bridged methods
	0x25b40  @objc DOCTagManager.init <stripped>
	0x25da0  @objc DOCTagManager..cxx_destruct <stripped>

	// Swift methods
	0x23c40  func DOCTagManager.scheduleAction(_:completionBlock:) // method 
	0x24e60  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCTagCollectionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let gatheringKeyPath : String
	let serialQueue : OS_dispatch_queue
	let group : OS_dispatch_group
	let spotlightQueryTimeout : DispatchTimeInterval
	var collection : FPItemCollection?
	var finishedGathering : Bool
	var collectionObservationContext : Int

	// ObjC -> Swift bridged methods
	0x27640  @objc DOCTagCollectionObserver.observeValueForKeyPath:ofObject:change:context: <stripped>
	0x27850  @objc DOCTagCollectionObserver.collection:didInsertItemsAtIndexPaths: <stripped>
	0x277b0  @objc DOCTagCollectionObserver.collection:didMoveItemsFromIndexPaths:toIndexPaths: <stripped>
	0x27850  @objc DOCTagCollectionObserver.collection:didDeleteItemsAtIndexPaths: <stripped>
	0x278d0  @objc DOCTagCollectionObserver.collection:didUpdateItemsAtIndexPaths:changes: <stripped>
	0x27a30  @objc DOCTagCollectionObserver.dataForCollectionShouldBeReloaded: <stripped>
	0x27aa0  @objc DOCTagCollectionObserver.collection:didPerformBatchUpdateWithReplayBlock: <stripped>
	0x27e70  @objc DOCTagCollectionObserver.init <stripped>
	0x27ef0  @objc DOCTagCollectionObserver..cxx_destruct <stripped>

	// Swift methods
	0x263a0  func <stripped> // method 
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
	let block : (_:) // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x2d1b0  @objc DOCBlockOperation.main <stripped>
	0x2d290  @objc DOCBlockOperation.init <stripped>
	0x2d330  @objc DOCBlockOperation..cxx_destruct <stripped>

	// Swift methods
	0x2cfe0  class func DOCBlockOperation.__allocating_init(block:) // init 
 }

 struct DocumentManagerExecutables.LaunchUtils { }

 class DocumentManagerExecutables.OpenAppDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let completionBlock : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x2d890  @objc OpenAppDelegate.openResourceOperation:didFinishCopyingResource: <stripped>
	0x2dc00  @objc OpenAppDelegate.openResourceOperationDidComplete: <stripped>
	0x2e010  @objc OpenAppDelegate.openResourceOperation:didFailWithError: <stripped>
	0x2e080  @objc OpenAppDelegate.init <stripped>
	0x2e100  @objc OpenAppDelegate..cxx_destruct <stripped>

	// Swift methods
	0x2d960  func <stripped> // method 
	0x2dc50  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCTypeToFocusController : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : DOCTypeToFocusControllerDelegate // +0x8 (0x10)
	var typeToFocusInputBuffer : String // +0x18 (0x10)
	var typeToFocusTimeout : NSTimer? // +0x28 (0x8)
	var typeToFocusInputView : UIView // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x38590  @objc DOCTypeToFocusController.hasText <stripped>
	0x38670  @objc DOCTypeToFocusController.dealloc <stripped>
	0x38790  @objc DOCTypeToFocusController.insertText: <stripped>
	0x38820  @objc DOCTypeToFocusController.deleteBackward <stripped>
	0x38830  @objc DOCTypeToFocusController.inputView <stripped>
	0x38c20  @objc DOCTypeToFocusController.typingTimeout <stripped>
	0x39820  @objc DOCTypeToFocusController.init <stripped>
	0x38720  @objc DOCTypeToFocusController..cxx_destruct <stripped>

	// Swift methods
	0x383e0  func DOCTypeToFocusController.delegate.getter // getter 
	0x38420  func DOCTypeToFocusController.delegate.setter // setter 
	0x384a0  func DOCTypeToFocusController.delegate.modify // modifyCoroutine 
	0x385a0  func DOCTypeToFocusController.hasText.getter // getter 
	0x38780  func DOCTypeToFocusController.insertText(_:) // method 
	0x38810  func DOCTypeToFocusController.deleteBackward() // method 
	0x388c0  func <stripped> // method 
	0x38b60  func <stripped> // method 
	0x38c50  func <stripped> // method 
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
