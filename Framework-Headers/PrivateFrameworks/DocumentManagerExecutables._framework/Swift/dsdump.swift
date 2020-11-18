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

 struct __C.UIEdgeInsets {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var top : çt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var left : çt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var bottom : çt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var right : çt
 }

 struct __C.CGSize {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var width : çt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var height : çt
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
	0x72f0  @objc DOCPostLaunchBuffer..cxx_destruct <stripped>

	// Swift methods
	0x72a0  func DOCPostLaunchBuffer.performAfterLaunch(_:) // method 
 }

 class DocumentManagerExecutables.DOCOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let synchronizationQueue : OS_dispatch_queue // +0x8 (0x8)
	let callbackQueue : OS_dispatch_queue // +0x10 (0x8)
	var _isFinished : Bool // +0x18 (0x1)
	var _isExecuting : Bool // +0x19 (0x1)
WARNING: couldn't find address 0x0 (0x0) in binary!
	var finishedBlock :  first-element-marker  // +0x20 (0x10)

	// ObjC -> Swift bridged methods
	0x7810  @objc DOCOperation.init <stripped>
	0x7cf0  @objc DOCOperation.start <stripped>
	0x7d20  @objc DOCOperation.isAsynchronous <stripped>
	0x7d40  @objc DOCOperation.isFinished <stripped>
	0x7ed0  @objc DOCOperation.setFinished: <stripped>
	0x8200  @objc DOCOperation.isExecuting <stripped>
	0x8390  @objc DOCOperation.setExecuting: <stripped>
	0x8630  @objc DOCOperation.cancel <stripped>
	0x8dd0  @objc DOCOperation..cxx_destruct <stripped>

	// Swift methods
	0x73e0  func DOCOperation.finishedBlock.getter // getter 
	0x7450  func DOCOperation.finishedBlock.setter // setter 
	0x74d0  func DOCOperation.finishedBlock.modify // modifyCoroutine 
	0x8690  func DOCOperation._finishIfCanceled() // method 
	0x89c0  func DOCOperation.completed(with:error:) // method 
 }

 class DocumentManagerExecutables.DOCChainOperation : DOCOperation {

	// Properties
	let operations : DOCOperation
	let operationQueue : NSOperationQueue
	var latestOperationResult : Any?
WARNING: couldn't find address 0x0 (0x0) in binary!
	var latestOperationError : 9v
	var mode : DOCChainOperationMode

	// ObjC -> Swift bridged methods
	0xa500  @objc DOCChainOperation.main <stripped>
	0xa640  @objc DOCChainOperation.init <stripped>
	0xa5a0  @objc DOCChainOperation..cxx_destruct <stripped>

	// Swift methods
	0x9270  func DOCChainOperation.mode.getter // getter 
	0x92a0  func DOCChainOperation.mode.setter // setter 
	0x92e0  func DOCChainOperation.mode.modify // modifyCoroutine 
	0x9330  class func DOCChainOperation.__allocating_init(operations:) // init 
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
	0xa740  @objc DOCChainableOperation.main <stripped>
	0xa850  @objc DOCChainableOperation.init <stripped>
	0xa7f0  @objc DOCChainableOperation..cxx_destruct <stripped>

	// Swift methods
	0xa770  func DOCChainableOperation.main(with:previousOperationError:) // method 
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
	0xbd00  @objc DOCUTIDescriptorCollector.init <stripped>
	0xe980  @objc DOCUTIDescriptorCollector..cxx_destruct <stripped>

	// Swift methods
	0xbd20  func DOCUTIDescriptorCollector.filteredUTIs(matching:allowedUTIs:completion:) // method 
	0xc150  func DOCUTIDescriptorCollector.cancelGathering() // method 
	0xc1d0  func <stripped> // method 
	0xe0a0  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController /System/Library/Frameworks/QuickLook.framework/QuickLook {

	// Properties
	var item : FPItem? // +0x8 (0x8)
	var qlItem : QLPreviewItem? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x13310  @objc DOCQuickLookInfoPreview.init <stripped>
	0x133a0  @objc DOCQuickLookInfoPreview.presentationMode <stripped>
	0x13490  @objc DOCQuickLookInfoPreview.initWithCoder: <stripped>
	0x139d0  @objc DOCQuickLookInfoPreview.initWithNibName:bundle: <stripped>
	0x13aa0  @objc DOCQuickLookInfoPreview.initWithPreviewItems: <stripped>
	0x13900  @objc DOCQuickLookInfoPreview..cxx_destruct <stripped>

	// Swift methods
	0x130e0  func DOCQuickLookInfoPreview.item.getter // getter 
	0x13120  func DOCQuickLookInfoPreview.item.setter // setter 
	0x131f0  func DOCQuickLookInfoPreview.item.modify // modifyCoroutine 
	0x13520  func DOCQuickLookInfoPreview.needsUpdate(for:) // method 
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
	0x18a60  @objc DOCInteractionManager.lastOpenedItem <stripped>
	0x18aa0  @objc DOCInteractionManager.setLastOpenedItem: <stripped>
	0x18d90  @objc DOCInteractionManager.lastSelectedItem <stripped>
	0x18e50  @objc DOCInteractionManager.setLastSelectedItem: <stripped>
	0x19350  @objc DOCInteractionManager.init <stripped>
	0x19290  @objc DOCInteractionManager..cxx_destruct <stripped>

	// Swift methods
	0x18a80  func DOCInteractionManager.lastOpenedItem.getter // getter 
	0x18ac0  func DOCInteractionManager.lastOpenedItem.setter // setter 
	0x18d10  func DOCInteractionManager.lastOpenedItem.modify // modifyCoroutine 
	0x18df0  func DOCInteractionManager.lastSelectedItem.getter // getter 
	0x18f00  func DOCInteractionManager.lastSelectedItem.setter // setter 
	0x19190  func DOCInteractionManager.lastSelectedItem.modify // modifyCoroutine 
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
	0x1d4c0  @objc DOCOperationBuffer.init <stripped>
	0x1d520  @objc DOCOperationBuffer..cxx_destruct <stripped>

	// Swift methods
	0x1d1f0  class func DOCOperationBuffer.__allocating_init(label:targetQueue:) // init 
	0x1cec0  func DOCOperationBuffer.signal() // method 
	0x1cfc0  func DOCOperationBuffer.buffer(_:) // method 
 }

 class DocumentManagerExecutables.DOCImageContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contentOffsetFromTop : çt
	var imageIsFolder : Bool
	let shadowView : UIView
	let imageView : DOCFittingImageView

	// ObjC -> Swift bridged methods
	0x1d5d0  @objc DOCImageContainerFittingView.contentOffsetFromTop <stripped>
	0x1d610  @objc DOCImageContainerFittingView.setContentOffsetFromTop: <stripped>
	0x1dc50  @objc DOCImageContainerFittingView.initWithFrame: <stripped>
	0x1dc90  @objc DOCImageContainerFittingView.initWithCoder: <stripped>
	0x1ded0  @objc DOCImageContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x1df20  @objc DOCImageContainerFittingView.intrinsicContentSize <stripped>
	0x1e1e0  @objc DOCImageContainerFittingView.layoutSubviews <stripped>
	0x1e5d0  @objc DOCImageContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x1d650  func DOCImageContainerFittingView.isShadowHidden.getter // getter 
	0x1d670  func DOCImageContainerFittingView.isShadowHidden.setter // setter 
	0x1d6a0  func DOCImageContainerFittingView.isShadowHidden.modify // modifyCoroutine 
	0x1d700  func DOCImageContainerFittingView.imageIsFolder.getter // getter 
	0x1d730  func DOCImageContainerFittingView.imageIsFolder.setter // setter 
	0x1d770  func DOCImageContainerFittingView.imageIsFolder.modify // modifyCoroutine 
	0x1dcb0  func DOCImageContainerFittingView.fittingSize.getter // getter 
	0x1dcd0  func DOCImageContainerFittingView.fittingSize.setter // setter 
	0x1dd00  func DOCImageContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x1dd90  func DOCImageContainerFittingView.image.getter // getter 
	0x1ddc0  func DOCImageContainerFittingView.image.setter // setter 
	0x1de20  func DOCImageContainerFittingView.image.modify // modifyCoroutine 
	0x1e210  func DOCImageContainerFittingView.updateContentFrame() // method 
	0x1e420  func <stripped> // getter 
 }

 class DocumentManagerExecutables.DOCContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containedViewController : UIViewController
	var fittingSize : CGSize
	var preventContentOffsetUpdates : Bool
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contentOffsetFromTop : çt
WARNING: couldn't find address 0x0 (0x0) in binary!
	var observationContext : m

	// ObjC -> Swift bridged methods
	0x1e880  @objc DOCContainerFittingView.contentOffsetFromTop <stripped>
	0x1e920  @objc DOCContainerFittingView.setContentOffsetFromTop: <stripped>
	0x1ee60  @objc DOCContainerFittingView.layoutSubviews <stripped>
	0x1eee0  @objc DOCContainerFittingView.initWithCoder: <stripped>
	0x1ef00  @objc DOCContainerFittingView.intrinsicContentSize <stripped>
	0x1efc0  @objc DOCContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x1f140  @objc DOCContainerFittingView.initWithFrame: <stripped>
	0x1f050  @objc DOCContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x1e760  func DOCContainerFittingView.fittingSize.getter // getter 
	0x1e7a0  func DOCContainerFittingView.fittingSize.setter // setter 
	0x1e800  func DOCContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x1e9e0  class func DOCContainerFittingView.__allocating_init(containedViewController:) // init 
 }

 class DocumentManagerExecutables.DOCThreadSafeState {
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
	let setTagsOperationTimeout : ím

	// ObjC -> Swift bridged methods
	0x22950  @objc DOCTagManager.init <stripped>
	0x22670  @objc DOCTagManager..cxx_destruct <stripped>

	// Swift methods
	0x21500  func DOCTagManager.scheduleAction(_:completionBlock:) // method 
	0x21e80  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCTagCollectionObserver : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let gatheringKeyPath : String
	let serialQueue : OS_dispatch_queue
	let group : OS_dispatch_group
WARNING: couldn't find address 0x0 (0x0) in binary!
	let spotlightQueryTimeout : ím
	var collection : FPItemCollection?
	var finishedGathering : Bool
	var collectionObservationContext : Int

	// ObjC -> Swift bridged methods
	0x23fd0  @objc DOCTagCollectionObserver.observeValueForKeyPath:ofObject:change:context: <stripped>
	0x266b0  @objc DOCTagCollectionObserver.collection:didInsertItemsAtIndexPaths: <stripped>
	0x24130  @objc DOCTagCollectionObserver.collection:didMoveItemsFromIndexPaths:toIndexPaths: <stripped>
	0x241d0  @objc DOCTagCollectionObserver.collection:didDeleteItemsAtIndexPaths: <stripped>
	0x24250  @objc DOCTagCollectionObserver.collection:didUpdateItemsAtIndexPaths:changes: <stripped>
	0x24350  @objc DOCTagCollectionObserver.dataForCollectionShouldBeReloaded: <stripped>
	0x243c0  @objc DOCTagCollectionObserver.collection:didPerformBatchUpdateWithReplayBlock: <stripped>
	0x24840  @objc DOCTagCollectionObserver.init <stripped>
	0x244a0  @objc DOCTagCollectionObserver..cxx_destruct <stripped>

	// Swift methods
	0x23070  func <stripped> // method 
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
	let block :  first-element-marker  // +0x30 (0x10)

	// ObjC -> Swift bridged methods
	0x29c10  @objc DOCBlockOperation.main <stripped>
	0x29d50  @objc DOCBlockOperation.init <stripped>
	0x29ce0  @objc DOCBlockOperation..cxx_destruct <stripped>

	// Swift methods
	0x29a90  class func DOCBlockOperation.__allocating_init(block:) // init 
 }

 class DocumentManagerExecutables.DOCSafeCenteringContainerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)
	let scrollContainerView : UIView // +0x10 (0x8)
	let centeredContentView : UIView // +0x18 (0x8)
	var scrollContainerViewMinHeightConstraint : NSLayoutConstraint? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x2a690  @objc DOCSafeCenteringContainerView.initWithCoder: <stripped>
	0x2a7d0  @objc DOCSafeCenteringContainerView.safeAreaInsetsDidChange <stripped>
	0x2a800  @objc DOCSafeCenteringContainerView.frame <stripped>
	0x2a860  @objc DOCSafeCenteringContainerView.setFrame: <stripped>
	0x2ab60  @objc DOCSafeCenteringContainerView.initWithFrame: <stripped>
	0x2ab10  @objc DOCSafeCenteringContainerView..cxx_destruct <stripped>

	// Swift methods
 }

 struct DocumentManagerExecutables.LaunchUtils { }

 class DocumentManagerExecutables.OpenAppDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let completionBlock : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x2b3b0  @objc OpenAppDelegate.openResourceOperation:didFinishCopyingResource: <stripped>
	0x2b670  @objc OpenAppDelegate.openResourceOperationDidComplete: <stripped>
	0x2b9a0  @objc OpenAppDelegate.openResourceOperation:didFailWithError: <stripped>
	0x2ba60  @objc OpenAppDelegate.init <stripped>
	0x2ba40  @objc OpenAppDelegate..cxx_destruct <stripped>

	// Swift methods
	0x2b480  func <stripped> // method 
	0x2b6c0  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCTypeToFocusController : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : DOCTypeToFocusControllerDelegate // +0x8 (0x10)
	var typeToFocusInputBuffer : String // +0x18 (0x10)
	var typeToFocusTimeout : NSTimer? // +0x28 (0x8)
	var typeToFocusInputView : UIView // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x34e40  @objc DOCTypeToFocusController.autocorrectionType <stripped>
	0x34e60  @objc DOCTypeToFocusController.setAutocorrectionType: <stripped>
	0x34eb0  @objc DOCTypeToFocusController.inputAssistantItem <stripped>
	0x34f00  @objc DOCTypeToFocusController.hasText <stripped>
	0x34fc0  @objc DOCTypeToFocusController.dealloc <stripped>
	0x35400  @objc DOCTypeToFocusController.insertText: <stripped>
	0x35490  @objc DOCTypeToFocusController.deleteBackward <stripped>
	0x354a0  @objc DOCTypeToFocusController.inputView <stripped>
	0x35890  @objc DOCTypeToFocusController.typingTimeout <stripped>
	0x36280  @objc DOCTypeToFocusController.init <stripped>
	0x35050  @objc DOCTypeToFocusController..cxx_destruct <stripped>

	// Swift methods
	0x34c90  func DOCTypeToFocusController.delegate.getter // getter 
	0x34cd0  func DOCTypeToFocusController.delegate.setter // setter 
	0x34d50  func DOCTypeToFocusController.delegate.modify // modifyCoroutine 
	0x34e50  func DOCTypeToFocusController.autocorrectionType.getter // getter 
	0x34e70  func DOCTypeToFocusController.autocorrectionType.setter // setter 
	0x34e80  func DOCTypeToFocusController.autocorrectionType.modify // modifyCoroutine 
	0x34f10  func DOCTypeToFocusController.hasText.getter // getter 
	0x350b0  func DOCTypeToFocusController.insertText(_:) // method 
	0x35480  func DOCTypeToFocusController.deleteBackward() // method 
	0x35540  func <stripped> // method 
	0x357d0  func <stripped> // method 
	0x358c0  func <stripped> // method 
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
	0x395b0  @objc DOCEmptyContentsInfoView.initWithFrame: <stripped>
	0x398c0  @objc DOCEmptyContentsInfoView.initWithCoder: <stripped>
	0x39900  @objc DOCEmptyContentsInfoView..cxx_destruct <stripped>

	// Swift methods
	0x395d0  func DOCEmptyContentsInfoView.title.getter // getter 
	0x395f0  func DOCEmptyContentsInfoView.title.setter // setter 
	0x39610  func DOCEmptyContentsInfoView.title.modify // modifyCoroutine 
	0x396a0  func DOCEmptyContentsInfoView.message.getter // getter 
	0x39710  func DOCEmptyContentsInfoView.message.setter // setter 
	0x397c0  func DOCEmptyContentsInfoView.message.modify // modifyCoroutine 
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
	let defaultMaxWidth : çt // +0x48 (0x8)
	let titleLabel : UILabel // +0x50 (0x8)
	let messageLabel : UILabel // +0x58 (0x8)

	// ObjC -> Swift bridged methods
	0x39b70  @objc DOCEmtptyContentsLabelsView.initWithFrame: <stripped>
	0x39ba0  @objc DOCEmtptyContentsLabelsView.initWithCoder: <stripped>
	0x3a8a0  @objc DOCEmtptyContentsLabelsView.updateConstraints <stripped>
	0x3a920  @objc DOCEmtptyContentsLabelsView..cxx_destruct <stripped>

	// Swift methods
	0x39cf0  func <stripped> // method 
 }
