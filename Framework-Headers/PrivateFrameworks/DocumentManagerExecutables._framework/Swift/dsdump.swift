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
	0x74e0  @objc DOCPostLaunchBuffer..cxx_destruct <stripped>

	// Swift methods
	0x73c0  func DOCPostLaunchBuffer.performAfterLaunch(_:) // method 
 }

 class DocumentManagerExecutables.DOCOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let synchronizationQueue : OS_dispatch_queue // +0x8 (0x8)
	let callbackQueue : OS_dispatch_queue // +0x10 (0x8)
	var _isFinished : Bool // +0x18 (0x1)
	var _isExecuting : Bool // +0x19 (0x1)
	var finishedBlock : (_:_:)? // +0x20 (0x10)

	// ObjC -> Swift bridged methods
	0x79f0  @objc DOCOperation.init <stripped>
	0x7f90  @objc DOCOperation.start <stripped>
	0x7fc0  @objc DOCOperation.isAsynchronous <stripped>
	0x7ff0  @objc DOCOperation.isFinished <stripped>
	0x8150  @objc DOCOperation.setFinished: <stripped>
	0x8460  @objc DOCOperation.isExecuting <stripped>
	0x8600  @objc DOCOperation.setExecuting: <stripped>
	0x8920  @objc DOCOperation.cancel <stripped>
	0x9270  @objc DOCOperation..cxx_destruct <stripped>

	// Swift methods
	0x74f0  func DOCOperation.finishedBlock.getter // getter 
	0x7560  func DOCOperation.finishedBlock.setter // setter 
	0x75e0  func DOCOperation.finishedBlock.modify // modifyCoroutine 
	0x8990  func DOCOperation._finishIfCanceled() // method 
	0x8da0  func DOCOperation.completed(with:error:) // method 
 }

 class DocumentManagerExecutables.DOCChainOperation : DOCOperation {

	// Properties
	let operations : [DOCOperation]
	let operationQueue : NSOperationQueue
	var latestOperationResult : Any?
	var latestOperationError : Error?
	var mode : DOCChainOperationMode

	// ObjC -> Swift bridged methods
	0xa4a0  @objc DOCChainOperation.main <stripped>
	0xa520  @objc DOCChainOperation.init <stripped>
	0xa5c0  @objc DOCChainOperation..cxx_destruct <stripped>

	// Swift methods
	0x9570  func DOCChainOperation.mode.getter // getter 
	0x95a0  func DOCChainOperation.mode.setter // setter 
	0x95e0  func DOCChainOperation.mode.modify // modifyCoroutine 
	0x9630  class func DOCChainOperation.__allocating_init(operations:) // init 
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
	0xa6f0  @objc DOCChainableOperation.main <stripped>
	0xa790  @objc DOCChainableOperation.init <stripped>
	0xa870  @objc DOCChainableOperation..cxx_destruct <stripped>

	// Swift methods
	0xa720  func DOCChainableOperation.main(with:previousOperationError:) // method 
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
	0xc050  @objc DOCUTIDescriptorCollector.init <stripped>
	0xe4c0  @objc DOCUTIDescriptorCollector..cxx_destruct <stripped>

	// Swift methods
	0xc070  func DOCUTIDescriptorCollector.filteredUTIs(matching:allowedUTIs:completion:) // method 
	0xc630  func DOCUTIDescriptorCollector.cancelGathering() // method 
	0xc6d0  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController /System/Library/Frameworks/QuickLook.framework/QuickLook {

	// Properties
	var item : FPItem? // +0x8 (0x8)
	var qlItem : QLPreviewItem? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x14410  @objc DOCQuickLookInfoPreview.init <stripped>
	0x144b0  @objc DOCQuickLookInfoPreview.presentationMode <stripped>
	0x145a0  @objc DOCQuickLookInfoPreview.initWithCoder: <stripped>
	0x14cd0  @objc DOCQuickLookInfoPreview.initWithNibName:bundle: <stripped>
	0x14dc0  @objc DOCQuickLookInfoPreview.initWithPreviewItems: <stripped>
	0x14e40  @objc DOCQuickLookInfoPreview..cxx_destruct <stripped>

	// Swift methods
	0x141a0  func DOCQuickLookInfoPreview.item.getter // getter 
	0x141e0  func DOCQuickLookInfoPreview.item.setter // setter 
	0x142b0  func DOCQuickLookInfoPreview.item.modify // modifyCoroutine 
	0x14630  func DOCQuickLookInfoPreview.needsUpdate(for:) // method 
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
	0x1a190  @objc DOCInteractionManager.lastOpenedItem <stripped>
	0x1a1d0  @objc DOCInteractionManager.setLastOpenedItem: <stripped>
	0x1a620  @objc DOCInteractionManager.lastSelectedItem <stripped>
	0x1a6e0  @objc DOCInteractionManager.setLastSelectedItem: <stripped>
	0x1ad20  @objc DOCInteractionManager.init <stripped>
	0x1ae10  @objc DOCInteractionManager..cxx_destruct <stripped>

	// Swift methods
	0x1a1b0  func DOCInteractionManager.lastOpenedItem.getter // getter 
	0x1a1f0  func DOCInteractionManager.lastOpenedItem.setter // setter 
	0x1a5a0  func DOCInteractionManager.lastOpenedItem.modify // modifyCoroutine 
	0x1a680  func DOCInteractionManager.lastSelectedItem.getter // getter 
	0x1a790  func DOCInteractionManager.lastSelectedItem.setter // setter 
	0x1ab70  func DOCInteractionManager.lastSelectedItem.modify // modifyCoroutine 
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
	0x1f440  @objc DOCOperationBuffer.init <stripped>
	0x1f4c0  @objc DOCOperationBuffer..cxx_destruct <stripped>

	// Swift methods
	0x1f080  class func DOCOperationBuffer.__allocating_init(label:targetQueue:) // init 
	0x1ecc0  func DOCOperationBuffer.signal() // method 
	0x1edd0  func DOCOperationBuffer.buffer(_:) // method 
 }

 class DocumentManagerExecutables.DOCImageContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var contentOffsetFromTop : CGFloat
	var imageIsFolder : Bool
	let shadowView : UIView
	let imageView : DOCFittingImageView

	// ObjC -> Swift bridged methods
	0x1f510  @objc DOCImageContainerFittingView.contentOffsetFromTop <stripped>
	0x1f550  @objc DOCImageContainerFittingView.setContentOffsetFromTop: <stripped>
	0x1fb50  @objc DOCImageContainerFittingView.initWithFrame: <stripped>
	0x1fb90  @objc DOCImageContainerFittingView.initWithCoder: <stripped>
	0x1fe50  @objc DOCImageContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x1fea0  @objc DOCImageContainerFittingView.intrinsicContentSize <stripped>
	0x20170  @objc DOCImageContainerFittingView.layoutSubviews <stripped>
	0x20560  @objc DOCImageContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x1f590  func DOCImageContainerFittingView.isShadowHidden.getter // getter 
	0x1f5b0  func DOCImageContainerFittingView.isShadowHidden.setter // setter 
	0x1f5e0  func DOCImageContainerFittingView.isShadowHidden.modify // modifyCoroutine 
	0x1f640  func DOCImageContainerFittingView.imageIsFolder.getter // getter 
	0x1f670  func DOCImageContainerFittingView.imageIsFolder.setter // setter 
	0x1f6b0  func DOCImageContainerFittingView.imageIsFolder.modify // modifyCoroutine 
	0x1fbb0  func DOCImageContainerFittingView.fittingSize.getter // getter 
	0x1fbd0  func DOCImageContainerFittingView.fittingSize.setter // setter 
	0x1fc00  func DOCImageContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x1fc90  func DOCImageContainerFittingView.image.getter // getter 
	0x1fcc0  func DOCImageContainerFittingView.image.setter // setter 
	0x1fd20  func DOCImageContainerFittingView.image.modify // modifyCoroutine 
	0x201a0  func DOCImageContainerFittingView.updateContentFrame() // method 
	0x203b0  func <stripped> // getter 
 }

 class DocumentManagerExecutables.DOCContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containedViewController : UIViewController
	var fittingSize : CGSize
	var preventContentOffsetUpdates : Bool
	var contentOffsetFromTop : CGFloat
	var observationContext : NSKeyValueObservation?

	// ObjC -> Swift bridged methods
	0x20810  @objc DOCContainerFittingView.contentOffsetFromTop <stripped>
	0x208c0  @objc DOCContainerFittingView.setContentOffsetFromTop: <stripped>
	0x20e60  @objc DOCContainerFittingView.layoutSubviews <stripped>
	0x20ee0  @objc DOCContainerFittingView.initWithCoder: <stripped>
	0x20f00  @objc DOCContainerFittingView.intrinsicContentSize <stripped>
	0x20fc0  @objc DOCContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x210b0  @objc DOCContainerFittingView.initWithFrame: <stripped>
	0x21140  @objc DOCContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x206f0  func DOCContainerFittingView.fittingSize.getter // getter 
	0x20730  func DOCContainerFittingView.fittingSize.setter // setter 
	0x20790  func DOCContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x20980  class func DOCContainerFittingView.__allocating_init(containedViewController:) // init 
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
	0x24dd0  @objc DOCTagManager.init <stripped>
	0x25030  @objc DOCTagManager..cxx_destruct <stripped>

	// Swift methods
	0x22ed0  func DOCTagManager.scheduleAction(_:completionBlock:) // method 
	0x240f0  func <stripped> // method 
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
	0x268d0  @objc DOCTagCollectionObserver.observeValueForKeyPath:ofObject:change:context: <stripped>
	0x26ae0  @objc DOCTagCollectionObserver.collection:didInsertItemsAtIndexPaths: <stripped>
	0x26a40  @objc DOCTagCollectionObserver.collection:didMoveItemsFromIndexPaths:toIndexPaths: <stripped>
	0x26ae0  @objc DOCTagCollectionObserver.collection:didDeleteItemsAtIndexPaths: <stripped>
	0x26b60  @objc DOCTagCollectionObserver.collection:didUpdateItemsAtIndexPaths:changes: <stripped>
	0x26cc0  @objc DOCTagCollectionObserver.dataForCollectionShouldBeReloaded: <stripped>
	0x26d30  @objc DOCTagCollectionObserver.collection:didPerformBatchUpdateWithReplayBlock: <stripped>
	0x27100  @objc DOCTagCollectionObserver.init <stripped>
	0x27180  @objc DOCTagCollectionObserver..cxx_destruct <stripped>

	// Swift methods
	0x25630  func <stripped> // method 
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
	0x2c440  @objc DOCBlockOperation.main <stripped>
	0x2c520  @objc DOCBlockOperation.init <stripped>
	0x2c5c0  @objc DOCBlockOperation..cxx_destruct <stripped>

	// Swift methods
	0x2c270  class func DOCBlockOperation.__allocating_init(block:) // init 
 }

 struct DocumentManagerExecutables.LaunchUtils { }

 class DocumentManagerExecutables.OpenAppDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let completionBlock : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x2cb20  @objc OpenAppDelegate.openResourceOperation:didFinishCopyingResource: <stripped>
	0x2ce90  @objc OpenAppDelegate.openResourceOperationDidComplete: <stripped>
	0x2d2a0  @objc OpenAppDelegate.openResourceOperation:didFailWithError: <stripped>
	0x2d310  @objc OpenAppDelegate.init <stripped>
	0x2d390  @objc OpenAppDelegate..cxx_destruct <stripped>

	// Swift methods
	0x2cbf0  func <stripped> // method 
	0x2cee0  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCTypeToFocusController : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : DOCTypeToFocusControllerDelegate // +0x8 (0x10)
	var typeToFocusInputBuffer : String // +0x18 (0x10)
	var typeToFocusTimeout : NSTimer? // +0x28 (0x8)
	var typeToFocusInputView : UIView // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x38880  @objc DOCTypeToFocusController.autocorrectionType <stripped>
	0x388a0  @objc DOCTypeToFocusController.setAutocorrectionType: <stripped>
	0x388f0  @objc DOCTypeToFocusController.inputAssistantItem <stripped>
	0x38940  @objc DOCTypeToFocusController.hasText <stripped>
	0x38a20  @objc DOCTypeToFocusController.dealloc <stripped>
	0x38b40  @objc DOCTypeToFocusController.insertText: <stripped>
	0x38bd0  @objc DOCTypeToFocusController.deleteBackward <stripped>
	0x38be0  @objc DOCTypeToFocusController.inputView <stripped>
	0x38fd0  @objc DOCTypeToFocusController.typingTimeout <stripped>
	0x39a60  @objc DOCTypeToFocusController.init <stripped>
	0x38ad0  @objc DOCTypeToFocusController..cxx_destruct <stripped>

	// Swift methods
	0x386d0  func DOCTypeToFocusController.delegate.getter // getter 
	0x38710  func DOCTypeToFocusController.delegate.setter // setter 
	0x38790  func DOCTypeToFocusController.delegate.modify // modifyCoroutine 
	0x38890  func DOCTypeToFocusController.autocorrectionType.getter // getter 
	0x388b0  func DOCTypeToFocusController.autocorrectionType.setter // setter 
	0x388c0  func DOCTypeToFocusController.autocorrectionType.modify // modifyCoroutine 
	0x38950  func DOCTypeToFocusController.hasText.getter // getter 
	0x38b30  func DOCTypeToFocusController.insertText(_:) // method 
	0x38bc0  func DOCTypeToFocusController.deleteBackward() // method 
	0x38c70  func <stripped> // method 
	0x38f10  func <stripped> // method 
	0x39000  func <stripped> // method 
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
