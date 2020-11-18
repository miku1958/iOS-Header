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
	0x7be0  @objc DOCPostLaunchBuffer..cxx_destruct <stripped>

	// Swift methods
	0x7ac0  func DOCPostLaunchBuffer.performAfterLaunch(_:) // method 
 }

 class DocumentManagerExecutables.DOCOperation : NSOperation /System/Library/Frameworks/Foundation.framework/Foundation {

	// Properties
	let synchronizationQueue : OS_dispatch_queue // +0x8 (0x8)
	let callbackQueue : OS_dispatch_queue // +0x10 (0x8)
	var _isFinished : Bool // +0x18 (0x1)
	var _isExecuting : Bool // +0x19 (0x1)
	var finishedBlock : (_:_:)? // +0x20 (0x10)

	// ObjC -> Swift bridged methods
	0x80f0  @objc DOCOperation.init <stripped>
	0x8690  @objc DOCOperation.start <stripped>
	0x86c0  @objc DOCOperation.isAsynchronous <stripped>
	0x86f0  @objc DOCOperation.isFinished <stripped>
	0x8850  @objc DOCOperation.setFinished: <stripped>
	0x8b60  @objc DOCOperation.isExecuting <stripped>
	0x8d00  @objc DOCOperation.setExecuting: <stripped>
	0x9020  @objc DOCOperation.cancel <stripped>
	0x9970  @objc DOCOperation..cxx_destruct <stripped>

	// Swift methods
	0x7bf0  func DOCOperation.finishedBlock.getter // getter 
	0x7c60  func DOCOperation.finishedBlock.setter // setter 
	0x7ce0  func DOCOperation.finishedBlock.modify // modifyCoroutine 
	0x9090  func DOCOperation._finishIfCanceled() // method 
	0x94a0  func DOCOperation.completed(with:error:) // method 
 }

 class DocumentManagerExecutables.DOCChainOperation : DOCOperation {

	// Properties
	let operations : [DOCOperation]
	let operationQueue : NSOperationQueue
	var latestOperationResult : Any?
	var latestOperationError : Error?
	var mode : DOCChainOperationMode

	// ObjC -> Swift bridged methods
	0xad40  @objc DOCChainOperation.main <stripped>
	0xadc0  @objc DOCChainOperation.init <stripped>
	0xae60  @objc DOCChainOperation..cxx_destruct <stripped>

	// Swift methods
	0x9e10  func DOCChainOperation.mode.getter // getter 
	0x9e40  func DOCChainOperation.mode.setter // setter 
	0x9e80  func DOCChainOperation.mode.modify // modifyCoroutine 
	0x9ed0  class func DOCChainOperation.__allocating_init(operations:) // init 
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
	0xaf90  @objc DOCChainableOperation.main <stripped>
	0xb030  @objc DOCChainableOperation.init <stripped>
	0xb110  @objc DOCChainableOperation..cxx_destruct <stripped>

	// Swift methods
	0xafc0  func DOCChainableOperation.main(with:previousOperationError:) // method 
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
	0xc8f0  @objc DOCUTIDescriptorCollector.init <stripped>
	0xed60  @objc DOCUTIDescriptorCollector..cxx_destruct <stripped>

	// Swift methods
	0xc910  func DOCUTIDescriptorCollector.filteredUTIs(matching:allowedUTIs:completion:) // method 
	0xced0  func DOCUTIDescriptorCollector.cancelGathering() // method 
	0xcf70  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCQuickLookInfoPreview : QLPreviewController /System/Library/Frameworks/QuickLook.framework/QuickLook {

	// Properties
	var item : FPItem? // +0x8 (0x8)
	var qlItem : QLPreviewItem? // +0x10 (0x8)

	// ObjC -> Swift bridged methods
	0x14cb0  @objc DOCQuickLookInfoPreview.init <stripped>
	0x14d50  @objc DOCQuickLookInfoPreview.presentationMode <stripped>
	0x14e40  @objc DOCQuickLookInfoPreview.initWithCoder: <stripped>
	0x15570  @objc DOCQuickLookInfoPreview.initWithNibName:bundle: <stripped>
	0x15660  @objc DOCQuickLookInfoPreview.initWithPreviewItems: <stripped>
	0x156e0  @objc DOCQuickLookInfoPreview..cxx_destruct <stripped>

	// Swift methods
	0x14a40  func DOCQuickLookInfoPreview.item.getter // getter 
	0x14a80  func DOCQuickLookInfoPreview.item.setter // setter 
	0x14b50  func DOCQuickLookInfoPreview.item.modify // modifyCoroutine 
	0x14ed0  func DOCQuickLookInfoPreview.needsUpdate(for:) // method 
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
	0x1aa30  @objc DOCInteractionManager.lastOpenedItem <stripped>
	0x1aa70  @objc DOCInteractionManager.setLastOpenedItem: <stripped>
	0x1aec0  @objc DOCInteractionManager.lastSelectedItem <stripped>
	0x1af80  @objc DOCInteractionManager.setLastSelectedItem: <stripped>
	0x1b5c0  @objc DOCInteractionManager.init <stripped>
	0x1b6b0  @objc DOCInteractionManager..cxx_destruct <stripped>

	// Swift methods
	0x1aa50  func DOCInteractionManager.lastOpenedItem.getter // getter 
	0x1aa90  func DOCInteractionManager.lastOpenedItem.setter // setter 
	0x1ae40  func DOCInteractionManager.lastOpenedItem.modify // modifyCoroutine 
	0x1af20  func DOCInteractionManager.lastSelectedItem.getter // getter 
	0x1b030  func DOCInteractionManager.lastSelectedItem.setter // setter 
	0x1b410  func DOCInteractionManager.lastSelectedItem.modify // modifyCoroutine 
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
	0x1fce0  @objc DOCOperationBuffer.init <stripped>
	0x1fd60  @objc DOCOperationBuffer..cxx_destruct <stripped>

	// Swift methods
	0x1f920  class func DOCOperationBuffer.__allocating_init(label:targetQueue:) // init 
	0x1f560  func DOCOperationBuffer.signal() // method 
	0x1f670  func DOCOperationBuffer.buffer(_:) // method 
 }

 class DocumentManagerExecutables.DOCImageContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var contentOffsetFromTop : CGFloat
	var imageIsFolder : Bool
	let shadowView : UIView
	let imageView : DOCFittingImageView

	// ObjC -> Swift bridged methods
	0x1fdb0  @objc DOCImageContainerFittingView.contentOffsetFromTop <stripped>
	0x1fdf0  @objc DOCImageContainerFittingView.setContentOffsetFromTop: <stripped>
	0x203f0  @objc DOCImageContainerFittingView.initWithFrame: <stripped>
	0x20430  @objc DOCImageContainerFittingView.initWithCoder: <stripped>
	0x206f0  @objc DOCImageContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x20740  @objc DOCImageContainerFittingView.intrinsicContentSize <stripped>
	0x20a10  @objc DOCImageContainerFittingView.layoutSubviews <stripped>
	0x20e00  @objc DOCImageContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x1fe30  func DOCImageContainerFittingView.isShadowHidden.getter // getter 
	0x1fe50  func DOCImageContainerFittingView.isShadowHidden.setter // setter 
	0x1fe80  func DOCImageContainerFittingView.isShadowHidden.modify // modifyCoroutine 
	0x1fee0  func DOCImageContainerFittingView.imageIsFolder.getter // getter 
	0x1ff10  func DOCImageContainerFittingView.imageIsFolder.setter // setter 
	0x1ff50  func DOCImageContainerFittingView.imageIsFolder.modify // modifyCoroutine 
	0x20450  func DOCImageContainerFittingView.fittingSize.getter // getter 
	0x20470  func DOCImageContainerFittingView.fittingSize.setter // setter 
	0x204a0  func DOCImageContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x20530  func DOCImageContainerFittingView.image.getter // getter 
	0x20560  func DOCImageContainerFittingView.image.setter // setter 
	0x205c0  func DOCImageContainerFittingView.image.modify // modifyCoroutine 
	0x20a40  func DOCImageContainerFittingView.updateContentFrame() // method 
	0x20c50  func <stripped> // getter 
 }

 class DocumentManagerExecutables.DOCContainerFittingView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let containedViewController : UIViewController
	var fittingSize : CGSize
	var preventContentOffsetUpdates : Bool
	var contentOffsetFromTop : CGFloat
	var observationContext : NSKeyValueObservation?

	// ObjC -> Swift bridged methods
	0x210b0  @objc DOCContainerFittingView.contentOffsetFromTop <stripped>
	0x21160  @objc DOCContainerFittingView.setContentOffsetFromTop: <stripped>
	0x21700  @objc DOCContainerFittingView.layoutSubviews <stripped>
	0x21780  @objc DOCContainerFittingView.initWithCoder: <stripped>
	0x217a0  @objc DOCContainerFittingView.intrinsicContentSize <stripped>
	0x21860  @objc DOCContainerFittingView.systemLayoutSizeFittingSize: <stripped>
	0x21950  @objc DOCContainerFittingView.initWithFrame: <stripped>
	0x219e0  @objc DOCContainerFittingView..cxx_destruct <stripped>

	// Swift methods
	0x20f90  func DOCContainerFittingView.fittingSize.getter // getter 
	0x20fd0  func DOCContainerFittingView.fittingSize.setter // setter 
	0x21030  func DOCContainerFittingView.fittingSize.modify // modifyCoroutine 
	0x21220  class func DOCContainerFittingView.__allocating_init(containedViewController:) // init 
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
	let setTagsOperationTimeout : DispatchTimeInterval

	// ObjC -> Swift bridged methods
	0x25c80  @objc DOCTagManager.init <stripped>
	0x25ee0  @objc DOCTagManager..cxx_destruct <stripped>

	// Swift methods
	0x23d80  func DOCTagManager.scheduleAction(_:completionBlock:) // method 
	0x24fa0  func <stripped> // method 
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
	0x27780  @objc DOCTagCollectionObserver.observeValueForKeyPath:ofObject:change:context: <stripped>
	0x27990  @objc DOCTagCollectionObserver.collection:didInsertItemsAtIndexPaths: <stripped>
	0x278f0  @objc DOCTagCollectionObserver.collection:didMoveItemsFromIndexPaths:toIndexPaths: <stripped>
	0x27990  @objc DOCTagCollectionObserver.collection:didDeleteItemsAtIndexPaths: <stripped>
	0x27a10  @objc DOCTagCollectionObserver.collection:didUpdateItemsAtIndexPaths:changes: <stripped>
	0x27b70  @objc DOCTagCollectionObserver.dataForCollectionShouldBeReloaded: <stripped>
	0x27be0  @objc DOCTagCollectionObserver.collection:didPerformBatchUpdateWithReplayBlock: <stripped>
	0x27fb0  @objc DOCTagCollectionObserver.init <stripped>
	0x28030  @objc DOCTagCollectionObserver..cxx_destruct <stripped>

	// Swift methods
	0x264e0  func <stripped> // method 
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
	0x2d2f0  @objc DOCBlockOperation.main <stripped>
	0x2d3d0  @objc DOCBlockOperation.init <stripped>
	0x2d470  @objc DOCBlockOperation..cxx_destruct <stripped>

	// Swift methods
	0x2d120  class func DOCBlockOperation.__allocating_init(block:) // init 
 }

 class DocumentManagerExecutables.DOCSafeCenteringContainerView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	let scrollView : UIScrollView // +0x8 (0x8)
	let scrollContainerView : UIView // +0x10 (0x8)
	let centeredContentView : UIView // +0x18 (0x8)
	var scrollContainerViewMinHeightConstraint : NSLayoutConstraint? // +0x20 (0x8)

	// ObjC -> Swift bridged methods
	0x2de30  @objc DOCSafeCenteringContainerView.initWithCoder: <stripped>
	0x2df90  @objc DOCSafeCenteringContainerView.safeAreaInsetsDidChange <stripped>
	0x2dfc0  @objc DOCSafeCenteringContainerView.frame <stripped>
	0x2e030  @objc DOCSafeCenteringContainerView.setFrame: <stripped>
	0x2e2d0  @objc DOCSafeCenteringContainerView.initWithFrame: <stripped>
	0x2e350  @objc DOCSafeCenteringContainerView..cxx_destruct <stripped>

	// Swift methods
 }

 struct DocumentManagerExecutables.LaunchUtils { }

 class DocumentManagerExecutables.OpenAppDelegate : NSObject /usr/lib/libobjc.A.dylib {

	// Properties
	let completionBlock : (_:) // +0x8 (0x10)

	// ObjC -> Swift bridged methods
	0x2e8f0  @objc OpenAppDelegate.openResourceOperation:didFinishCopyingResource: <stripped>
	0x2ec60  @objc OpenAppDelegate.openResourceOperationDidComplete: <stripped>
	0x2f070  @objc OpenAppDelegate.openResourceOperation:didFailWithError: <stripped>
	0x2f0e0  @objc OpenAppDelegate.init <stripped>
	0x2f160  @objc OpenAppDelegate..cxx_destruct <stripped>

	// Swift methods
	0x2e9c0  func <stripped> // method 
	0x2ecb0  func <stripped> // method 
 }

 class DocumentManagerExecutables.DOCTypeToFocusController : UIResponder /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var delegate : DOCTypeToFocusControllerDelegate // +0x8 (0x10)
	var typeToFocusInputBuffer : String // +0x18 (0x10)
	var typeToFocusTimeout : NSTimer? // +0x28 (0x8)
	var typeToFocusInputView : UIView // +0x30 (0x8)

	// ObjC -> Swift bridged methods
	0x3a5f0  @objc DOCTypeToFocusController.autocorrectionType <stripped>
	0x3a610  @objc DOCTypeToFocusController.setAutocorrectionType: <stripped>
	0x3a660  @objc DOCTypeToFocusController.inputAssistantItem <stripped>
	0x3a6b0  @objc DOCTypeToFocusController.hasText <stripped>
	0x3a790  @objc DOCTypeToFocusController.dealloc <stripped>
	0x3a8b0  @objc DOCTypeToFocusController.insertText: <stripped>
	0x3a940  @objc DOCTypeToFocusController.deleteBackward <stripped>
	0x3a950  @objc DOCTypeToFocusController.inputView <stripped>
	0x3ad40  @objc DOCTypeToFocusController.typingTimeout <stripped>
	0x3b7d0  @objc DOCTypeToFocusController.init <stripped>
	0x3a840  @objc DOCTypeToFocusController..cxx_destruct <stripped>

	// Swift methods
	0x3a440  func DOCTypeToFocusController.delegate.getter // getter 
	0x3a480  func DOCTypeToFocusController.delegate.setter // setter 
	0x3a500  func DOCTypeToFocusController.delegate.modify // modifyCoroutine 
	0x3a600  func DOCTypeToFocusController.autocorrectionType.getter // getter 
	0x3a620  func DOCTypeToFocusController.autocorrectionType.setter // setter 
	0x3a630  func DOCTypeToFocusController.autocorrectionType.modify // modifyCoroutine 
	0x3a6c0  func DOCTypeToFocusController.hasText.getter // getter 
	0x3a8a0  func DOCTypeToFocusController.insertText(_:) // method 
	0x3a930  func DOCTypeToFocusController.deleteBackward() // method 
	0x3a9e0  func <stripped> // method 
	0x3ac80  func <stripped> // method 
	0x3ad70  func <stripped> // method 
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
	0x3f2d0  @objc DOCEmptyContentsInfoView.initWithFrame: <stripped>
	0x3f620  @objc DOCEmptyContentsInfoView.initWithCoder: <stripped>
	0x3f660  @objc DOCEmptyContentsInfoView..cxx_destruct <stripped>

	// Swift methods
	0x3f2f0  func DOCEmptyContentsInfoView.title.getter // getter 
	0x3f310  func DOCEmptyContentsInfoView.title.setter // setter 
	0x3f330  func DOCEmptyContentsInfoView.title.modify // modifyCoroutine 
	0x3f3c0  func DOCEmptyContentsInfoView.message.getter // getter 
	0x3f430  func DOCEmptyContentsInfoView.message.setter // setter 
	0x3f4e0  func DOCEmptyContentsInfoView.message.modify // modifyCoroutine 
 }

 class DocumentManagerExecutables.DOCEmtptyContentsLabelsView : UIView /System/Library/Frameworks/UIKit.framework/UIKit {

	// Properties
	var title : String
	var message : String
	var titleToMessageBaselineSpacingConstraint : NSLayoutConstraint?
	var messageLeadingConstraint : NSLayoutConstraint?
	var messageTrailingConstraint : NSLayoutConstraint?
	var maxWidthConstraint : NSLayoutConstraint?
	let defaultMaxWidth : CGFloat
	let titleLabel : UILabel
	let messageLabel : UILabel

	// ObjC -> Swift bridged methods
	0x3f8c0  @objc DOCEmtptyContentsLabelsView.initWithFrame: <stripped>
	0x3f8f0  @objc DOCEmtptyContentsLabelsView.initWithCoder: <stripped>
	0x40700  @objc DOCEmtptyContentsLabelsView.updateConstraints <stripped>
	0x40790  @objc DOCEmtptyContentsLabelsView..cxx_destruct <stripped>

	// Swift methods
	0x3fa40  func <stripped> // method 
 }
