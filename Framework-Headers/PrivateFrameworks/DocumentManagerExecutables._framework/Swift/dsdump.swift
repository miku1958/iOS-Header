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
	0x73d0  @objc DOCPostLaunchBuffer..cxx_destruct <stripped>

	// Swift methods
	0x7380  func DOCPostLaunchBuffer.performAfterLaunch(_:) // method 
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
	0x78f0  @objc DOCOperation.init <stripped>
	0x7dd0  @objc DOCOperation.start <stripped>
	0x7e00  @objc DOCOperation.isAsynchronous <stripped>
	0x7e20  @objc DOCOperation.isFinished <stripped>
	0x7fb0  @objc DOCOperation.setFinished: <stripped>
	0x82e0  @objc DOCOperation.isExecuting <stripped>
	0x8470  @objc DOCOperation.setExecuting: <stripped>
	0x8710  @objc DOCOperation.cancel <stripped>
	0x8eb0  @objc DOCOperation..cxx_destruct <stripped>

	// Swift methods
	0x74c0  func DOCOperation.finishedBlock.getter // getter 
	0x7530  func DOCOperation.finishedBlock.setter // setter 
	0x75b0  func DOCOperation.finishedBlock.modify // modifyCoroutine 
	0x8770  func DOCOperation._finishIfCanceled() // method 
	0x8aa0  func DOCOperation.completed(with:error:) // method 
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
	0xa5e0  @objc DOCChainOperation.main <stripped>
	0xa720  @objc DOCChainOperation.init <stripped>
	0xa680  @objc DOCChainOperation..cxx_destruct <stripped>

	// Swift methods
	0x9350  func DOCChainOperation.mode.getter // getter 
	0x9380  func DOCChainOperation.mode.setter // setter 
	0x93c0  func DOCChainOperation.mode.modify // modifyCoroutine 
	0x9410  class func DOCChainOperation.__allocating_init(operations:) // init 
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
	0xa820  @objc DOCChainableOperation.main <stripped>
	0xa930  @objc DOCChainableOperation.init <stripped>
	0xa8d0  @objc DOCChainableOperation..cxx_destruct <stripped>

	// Swift methods
	0xa850  func DOCChainableOperation.main(with:previousOperationError:) // method 
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
	0xbde0  @objc DOCUTIDescriptorCollector.init <stripped>
	0xea60  @objc DOCUTIDescriptorCollector..cxx_destruct <stripped>

	// Swift methods
	0xbe00  func DOCUTIDescriptorCollector.filteredUTIs(matching:allowedUTIs:completion:) // method 
	0xc230  func DOCUTIDescriptorCollector.cancelGathering() // method 
	0xc2b0  func <stripped> // method 
	0xe180  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController /System/Library/Frameworks/QuickLook.framework/QuickLook {

	// Properties
	var item : FPItem? // +0x8 (0x8)
	var qlItem : QLPreviewItem? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x133f0  @objc DOCQuickLookInfoPreview.init <stripped>
	0x13480  @objc DOCQuickLookInfoPreview.presentationMode <stripped>
	0x13570  @objc DOCQuickLookInfoPreview.initWithCoder: <stripped>
	0x13ab0  @objc DOCQuickLookInfoPreview.initWithNibName:bundle: <stripped>
	0x13b80  @objc DOCQuickLookInfoPreview.initWithPreviewItems: <stripped>
	0x139e0  @objc DOCQuickLookInfoPreview..cxx_destruct <stripped>

	// Swift methods
	0x131c0  func DOCQuickLookInfoPreview.item.getter // getter 
	0x13200  func DOCQuickLookInfoPreview.item.setter // setter 
	0x132d0  func DOCQuickLookInfoPreview.item.modify // modifyCoroutine 
	0x13600  func DOCQuickLookInfoPreview.needsUpdate(for:) // method 
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
	0x18b40  @objc DOCInteractionManager.lastOpenedItem <stripped>
	0x18b80  @objc DOCInteractionManager.setLastOpenedItem: <stripped>
	0x18e70  @objc DOCInteractionManager.lastSelectedItem <stripped>
	0x18f30  @objc DOCInteractionManager.setLastSelectedItem: <stripped>
	0x19430  @objc DOCInteractionManager.init <stripped>
	0x19370  @objc DOCInteractionManager..cxx_destruct <stripped>

	// Swift methods
	0x18b60  func DOCInteractionManager.lastOpenedItem.getter // getter 
	0x18ba0  func DOCInteractionManager.lastOpenedItem.setter // setter 
	0x18df0  func DOCInteractionManager.lastOpenedItem.modify // modifyCoroutine 
	0x18ed0  func DOCInteractionManager.lastSelectedItem.getter // getter 
	0x18fe0  func DOCInteractionManager.lastSelectedItem.setter // setter 
	0x19270  func DOCInteractionManager.lastSelectedItem.modify // modifyCoroutine 
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
	0x1d5a0  @objc DOCOperationBuffer.init <stripped>
	0x1d600  @objc DOCOperationBuffer..cxx_destruct <stripped>

	// Swift methods
	0x1d2d0  class func DOCOperationBuffer.__allocating_init(label:targetQueue:) // init 
	0x1cfa0  func DOCOperationBuffer.signal() // method 
	0x1d0a0  func DOCOperationBuffer.buffer(_:) // method 
 }

 class DocumentManagerExecutables.DOCImageContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
WARNING: couldn't find address 0x0 (0x0) in binary!
	var contentOffsetFromTop : çt
	var imageIsFolder : Bool
	let shadowView : UIView
	let imageView : DOCFittingImageView

	// ObjC -> Swift bridged methods
	0x1d6b0  @objc DOCImageContainerFittingView.contentOffsetFromTop <stripped>
	0x1d6f0  @objc DOCImageContainerFittingView.setContentOffsetFromTop: <stripped>
	0x1dd30  @objc DOCImageContainerFittingView.initWithFrame: <stripped>
	0x1dd70  @objc DOCImageContainerFittingView.initWithCoder: <stripped>
	0x1dfb0  @objc DOCImageContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x1e000  @objc DOCImageContainerFittingView.intrinsicContentSize <stripped>
	0x1e2c0  @objc DOCImageContainerFittingView.layoutSubviews <stripped>
	0x1e6b0  @objc DOCImageContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x1d730  func DOCImageContainerFittingView.isShadowHidden.getter // getter 
	0x1d750  func DOCImageContainerFittingView.isShadowHidden.setter // setter 
	0x1d780  func DOCImageContainerFittingView.isShadowHidden.modify // modifyCoroutine 
	0x1d7e0  func DOCImageContainerFittingView.imageIsFolder.getter // getter 
	0x1d810  func DOCImageContainerFittingView.imageIsFolder.setter // setter 
	0x1d850  func DOCImageContainerFittingView.imageIsFolder.modify // modifyCoroutine 
	0x1dd90  func DOCImageContainerFittingView.fittingSize.getter // getter 
	0x1ddb0  func DOCImageContainerFittingView.fittingSize.setter // setter 
	0x1dde0  func DOCImageContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x1de70  func DOCImageContainerFittingView.image.getter // getter 
	0x1dea0  func DOCImageContainerFittingView.image.setter // setter 
	0x1df00  func DOCImageContainerFittingView.image.modify // modifyCoroutine 
	0x1e2f0  func DOCImageContainerFittingView.updateContentFrame() // method 
	0x1e500  func <stripped> // getter 
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
	0x1e960  @objc DOCContainerFittingView.contentOffsetFromTop <stripped>
	0x1ea00  @objc DOCContainerFittingView.setContentOffsetFromTop: <stripped>
	0x1ef40  @objc DOCContainerFittingView.layoutSubviews <stripped>
	0x1efc0  @objc DOCContainerFittingView.initWithCoder: <stripped>
	0x1efe0  @objc DOCContainerFittingView.intrinsicContentSize <stripped>
	0x1f0a0  @objc DOCContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x1f220  @objc DOCContainerFittingView.initWithFrame: <stripped>
	0x1f130  @objc DOCContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x1e840  func DOCContainerFittingView.fittingSize.getter // getter 
	0x1e880  func DOCContainerFittingView.fittingSize.setter // setter 
	0x1e8e0  func DOCContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x1eac0  class func DOCContainerFittingView.__allocating_init(containedViewController:) // init 
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
	0x22a30  @objc DOCTagManager.init <stripped>
	0x22750  @objc DOCTagManager..cxx_destruct <stripped>

	// Swift methods
	0x215e0  func DOCTagManager.scheduleAction(_:completionBlock:) // method 
	0x21f60  func <stripped> // method 
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
	0x240b0  @objc DOCTagCollectionObserver.observeValueForKeyPath:ofObject:change:context: <stripped>
	0x26790  @objc DOCTagCollectionObserver.collection:didInsertItemsAtIndexPaths: <stripped>
	0x24210  @objc DOCTagCollectionObserver.collection:didMoveItemsFromIndexPaths:toIndexPaths: <stripped>
	0x242b0  @objc DOCTagCollectionObserver.collection:didDeleteItemsAtIndexPaths: <stripped>
	0x24330  @objc DOCTagCollectionObserver.collection:didUpdateItemsAtIndexPaths:changes: <stripped>
	0x24430  @objc DOCTagCollectionObserver.dataForCollectionShouldBeReloaded: <stripped>
	0x244a0  @objc DOCTagCollectionObserver.collection:didPerformBatchUpdateWithReplayBlock: <stripped>
	0x24920  @objc DOCTagCollectionObserver.init <stripped>
	0x24580  @objc DOCTagCollectionObserver..cxx_destruct <stripped>

	// Swift methods
	0x23150  func <stripped> // method 
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
	0x29cf0  @objc DOCBlockOperation.main <stripped>
	0x29e30  @objc DOCBlockOperation.init <stripped>
	0x29dc0  @objc DOCBlockOperation..cxx_destruct <stripped>

	// Swift methods
	0x29b70  class func DOCBlockOperation.__allocating_init(block:) // init 
 }

 class DocumentManagerExecutables.DOCSafeCenteringContainerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)
	let scrollContainerView : UIView // +0x10 (0x8)
	let centeredContentView : UIView // +0x18 (0x8)
	var scrollContainerViewMinHeightConstraint : NSLayoutConstraint? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x2a770  @objc DOCSafeCenteringContainerView.initWithCoder: <stripped>
	0x2a8b0  @objc DOCSafeCenteringContainerView.safeAreaInsetsDidChange <stripped>
	0x2a8e0  @objc DOCSafeCenteringContainerView.frame <stripped>
	0x2a940  @objc DOCSafeCenteringContainerView.setFrame: <stripped>
	0x2ac40  @objc DOCSafeCenteringContainerView.initWithFrame: <stripped>
	0x2abf0  @objc DOCSafeCenteringContainerView..cxx_destruct <stripped>

	// Swift methods
 }

 struct DocumentManagerExecutables.LaunchUtils { }

 class DocumentManagerExecutables.OpenAppDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let completionBlock : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x2b490  @objc OpenAppDelegate.openResourceOperation:didFinishCopyingResource: <stripped>
	0x2b750  @objc OpenAppDelegate.openResourceOperationDidComplete: <stripped>
	0x2ba80  @objc OpenAppDelegate.openResourceOperation:didFailWithError: <stripped>
	0x2bb40  @objc OpenAppDelegate.init <stripped>
	0x2bb20  @objc OpenAppDelegate..cxx_destruct <stripped>

	// Swift methods
	0x2b560  func <stripped> // method 
	0x2b7a0  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCTypeToFocusController : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : DOCTypeToFocusControllerDelegate // +0x8 (0x10)
	var typeToFocusInputBuffer : String // +0x18 (0x10)
	var typeToFocusTimeout : NSTimer? // +0x28 (0x8)
	var typeToFocusInputView : UIView // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x34f20  @objc DOCTypeToFocusController.autocorrectionType <stripped>
	0x34f40  @objc DOCTypeToFocusController.setAutocorrectionType: <stripped>
	0x34f90  @objc DOCTypeToFocusController.inputAssistantItem <stripped>
	0x34fe0  @objc DOCTypeToFocusController.hasText <stripped>
	0x350a0  @objc DOCTypeToFocusController.dealloc <stripped>
	0x354e0  @objc DOCTypeToFocusController.insertText: <stripped>
	0x35570  @objc DOCTypeToFocusController.deleteBackward <stripped>
	0x35580  @objc DOCTypeToFocusController.inputView <stripped>
	0x35970  @objc DOCTypeToFocusController.typingTimeout <stripped>
	0x36360  @objc DOCTypeToFocusController.init <stripped>
	0x35130  @objc DOCTypeToFocusController..cxx_destruct <stripped>

	// Swift methods
	0x34d70  func DOCTypeToFocusController.delegate.getter // getter 
	0x34db0  func DOCTypeToFocusController.delegate.setter // setter 
	0x34e30  func DOCTypeToFocusController.delegate.modify // modifyCoroutine 
	0x34f30  func DOCTypeToFocusController.autocorrectionType.getter // getter 
	0x34f50  func DOCTypeToFocusController.autocorrectionType.setter // setter 
	0x34f60  func DOCTypeToFocusController.autocorrectionType.modify // modifyCoroutine 
	0x34ff0  func DOCTypeToFocusController.hasText.getter // getter 
	0x35190  func DOCTypeToFocusController.insertText(_:) // method 
	0x35560  func DOCTypeToFocusController.deleteBackward() // method 
	0x35620  func <stripped> // method 
	0x358b0  func <stripped> // method 
	0x359a0  func <stripped> // method 
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
	0x39690  @objc DOCEmptyContentsInfoView.initWithFrame: <stripped>
	0x399a0  @objc DOCEmptyContentsInfoView.initWithCoder: <stripped>
	0x399e0  @objc DOCEmptyContentsInfoView..cxx_destruct <stripped>

	// Swift methods
	0x396b0  func DOCEmptyContentsInfoView.title.getter // getter 
	0x396d0  func DOCEmptyContentsInfoView.title.setter // setter 
	0x396f0  func DOCEmptyContentsInfoView.title.modify // modifyCoroutine 
	0x39780  func DOCEmptyContentsInfoView.message.getter // getter 
	0x397f0  func DOCEmptyContentsInfoView.message.setter // setter 
	0x398a0  func DOCEmptyContentsInfoView.message.modify // modifyCoroutine 
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
	0x39c50  @objc DOCEmtptyContentsLabelsView.initWithFrame: <stripped>
	0x39c80  @objc DOCEmtptyContentsLabelsView.initWithCoder: <stripped>
	0x3a980  @objc DOCEmtptyContentsLabelsView.updateConstraints <stripped>
	0x3aa00  @objc DOCEmtptyContentsLabelsView..cxx_destruct <stripped>

	// Swift methods
	0x39dd0  func <stripped> // method 
 }
