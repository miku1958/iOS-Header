//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKActionController, AKAttributeController, AKFormFeatureDetectorController, AKHighlightAnnotationController, AKLegacyDoodleController, AKMainEventHandler, AKModelController, AKPageController, AKPeripheralAvailabilityManager_iOS, AKSignatureModelController, AKStatistics, AKTextEditorController, AKToolController, AKToolbarView, AKToolbarViewController, AKUndoController, NSMapTable, NSMutableArray, NSString, UIView;
@protocol AKControllerDelegateProtocol;

@interface AKController : NSObject
{
    BOOL _isUsedOnDarkBackground;
    BOOL overlayShouldPixelate;
    BOOL _isTornDown;
    BOOL _allEditingDisabled;
    BOOL _annotationEditingEnabled;
    BOOL _pencilAlwaysDraws;
    BOOL _isTestingInstance;
    BOOL _showingMenu;
    BOOL _hideAllAdornments;
    BOOL _isLogging;
    BOOL _selectNewlyCreatedAnnotations;
    BOOL _shapeDetectionEnabled;
    BOOL _useHighVisibilityDefaultInks;
    id<AKControllerDelegateProtocol> _delegate;
    AKModelController *_modelController;
    UIView *_toolbarView;
    unsigned long long _currentPageIndex;
    NSString *_author;
    NSMutableArray *_pageControllers;
    NSMapTable *_pageModelControllersToPageControllers;
    AKActionController *_actionController;
    AKToolController *_toolController;
    AKToolbarViewController *_toolbarViewController;
    AKAttributeController *_attributeController;
    AKUndoController *_undoController;
    AKMainEventHandler *_mainEventHandler;
    AKTextEditorController *_textEditorController;
    AKLegacyDoodleController *_legacyDoodleController;
    AKSignatureModelController *_signatureModelController;
    AKFormFeatureDetectorController *_formDetectionController;
    AKHighlightAnnotationController *_highlightAnnotationController;
    AKStatistics *_statisticsLogger;
    AKPeripheralAvailabilityManager_iOS *_peripheralAvailabilityManager;
    unsigned long long _pasteCascadingMultiplier;
    long long _lastPasteboardChangeCount;
    unsigned long long _creationCascadingMultiplier;
    AKPageController *_lastCreationCascadingPageController;
    double _akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
    double _screenPixelsToCanvasPixelsDownscale;
    AKToolbarView *_modernToolbarView;
}

@property (strong) AKActionController *actionController; // @synthesize actionController=_actionController;
@property double akModelToCanvasFixedPixelScaleOfFirstEncounteredPage; // @synthesize akModelToCanvasFixedPixelScaleOfFirstEncounteredPage=_akModelToCanvasFixedPixelScaleOfFirstEncounteredPage;
@property (nonatomic) BOOL allEditingDisabled; // @synthesize allEditingDisabled=_allEditingDisabled;
@property (nonatomic) BOOL annotationEditingEnabled; // @synthesize annotationEditingEnabled=_annotationEditingEnabled;
@property (strong) AKAttributeController *attributeController; // @synthesize attributeController=_attributeController;
@property (copy) NSString *author; // @synthesize author=_author;
@property unsigned long long creationCascadingMultiplier; // @synthesize creationCascadingMultiplier=_creationCascadingMultiplier;
@property unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property (weak) id<AKControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property (strong) AKFormFeatureDetectorController *formDetectionController; // @synthesize formDetectionController=_formDetectionController;
@property (nonatomic) BOOL hideAllAdornments; // @synthesize hideAllAdornments=_hideAllAdornments;
@property (strong) AKHighlightAnnotationController *highlightAnnotationController; // @synthesize highlightAnnotationController=_highlightAnnotationController;
@property (nonatomic) BOOL isLogging; // @synthesize isLogging=_isLogging;
@property BOOL isTestingInstance; // @synthesize isTestingInstance=_isTestingInstance;
@property BOOL isTornDown; // @synthesize isTornDown=_isTornDown;
@property (nonatomic) BOOL isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property (weak) AKPageController *lastCreationCascadingPageController; // @synthesize lastCreationCascadingPageController=_lastCreationCascadingPageController;
@property long long lastPasteboardChangeCount; // @synthesize lastPasteboardChangeCount=_lastPasteboardChangeCount;
@property (strong) AKLegacyDoodleController *legacyDoodleController; // @synthesize legacyDoodleController=_legacyDoodleController;
@property (strong) AKMainEventHandler *mainEventHandler; // @synthesize mainEventHandler=_mainEventHandler;
@property (strong) AKModelController *modelController; // @synthesize modelController=_modelController;
@property (weak, nonatomic) AKToolbarView *modernToolbarView; // @synthesize modernToolbarView=_modernToolbarView;
@property (nonatomic) BOOL overlayShouldPixelate; // @synthesize overlayShouldPixelate;
@property (strong) NSMutableArray *pageControllers; // @synthesize pageControllers=_pageControllers;
@property (strong) NSMapTable *pageModelControllersToPageControllers; // @synthesize pageModelControllersToPageControllers=_pageModelControllersToPageControllers;
@property unsigned long long pasteCascadingMultiplier; // @synthesize pasteCascadingMultiplier=_pasteCascadingMultiplier;
@property (nonatomic) BOOL pencilAlwaysDraws; // @synthesize pencilAlwaysDraws=_pencilAlwaysDraws;
@property (strong) AKPeripheralAvailabilityManager_iOS *peripheralAvailabilityManager; // @synthesize peripheralAvailabilityManager=_peripheralAvailabilityManager;
@property double screenPixelsToCanvasPixelsDownscale; // @synthesize screenPixelsToCanvasPixelsDownscale=_screenPixelsToCanvasPixelsDownscale;
@property (nonatomic) BOOL selectNewlyCreatedAnnotations; // @synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations;
@property (nonatomic) BOOL shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property (getter=isShowingMenu) BOOL showingMenu; // @synthesize showingMenu=_showingMenu;
@property (strong) AKSignatureModelController *signatureModelController; // @synthesize signatureModelController=_signatureModelController;
@property (strong) AKStatistics *statisticsLogger; // @synthesize statisticsLogger=_statisticsLogger;
@property (strong) AKTextEditorController *textEditorController; // @synthesize textEditorController=_textEditorController;
@property (strong) AKToolController *toolController; // @synthesize toolController=_toolController;
@property (strong) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property (strong) AKToolbarViewController *toolbarViewController; // @synthesize toolbarViewController=_toolbarViewController;
@property (strong) AKUndoController *undoController; // @synthesize undoController=_undoController;
@property (nonatomic) BOOL useHighVisibilityDefaultInks; // @synthesize useHighVisibilityDefaultInks=_useHighVisibilityDefaultInks;

+ (BOOL)_isInLowMemoryEnvironment;
+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (id)akBundle;
+ (id)akBundleIdentifier;
+ (BOOL)canConnectToStylus;
+ (id)colorForHighlightAttributeWithTag:(long long)arg1;
+ (id)controllerWithDelegate:(id)arg1;
+ (BOOL)hasPressureCapableHardware;
+ (id)markupBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2;
+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
- (void).cxx_destruct;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_pageModelControllerSelectedAnnotationsChangedNotification:(id)arg1;
- (struct CGRect)_popoverAnchorFrameInModelForAnnotations:(id)arg1;
- (BOOL)_validateCutCopyDelete;
- (void)addPopupToAnnotation:(id)arg1 openPopup:(BOOL)arg2;
- (void)applyCurrentCrop;
- (void)beginLogging:(id)arg1 documentType:(id)arg2;
- (BOOL)canBeginEditingTextAnnotation:(id)arg1;
- (void)clearUndoStack;
- (void)commitEditing;
- (struct CGRect)contentAlignedRectForRect:(struct CGRect)arg1 onPageAtIndex:(unsigned long long)arg2;
- (void)copy:(id)arg1;
- (long long)currentExifOrientationForPageAtIndex:(unsigned long long)arg1;
- (double)currentModelBaseScaleFactorForPageAtIndex:(unsigned long long)arg1;
- (id)currentPageController;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (void)duplicate:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (void)enclosingScrollViewDidScroll:(id)arg1;
- (void)endLogging;
- (BOOL)handleEvent:(id)arg1;
- (void)hideSelectionMenu:(id)arg1;
- (void)highlightableSelectionChanged;
- (void)highlightableSelectionDidEndChanging;
- (void)highlightableSelectionWillBeginChanging;
- (id)imageForToolbarButtonItemOfType:(unsigned long long)arg1;
- (id)initForTesting;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isOverlayViewLoadedAtIndex:(unsigned long long)arg1;
- (BOOL)isPresentingPopover;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)overlayViewAtIndex:(unsigned long long)arg1;
- (id)pageControllerForAnnotation:(id)arg1;
- (id)pageControllerForPageModelController:(id)arg1;
- (id)panGestureRecognizer;
- (void)paste:(id)arg1;
- (void)performActionForSender:(id)arg1;
- (void)prepareOverlayAtIndex:(unsigned long long)arg1;
- (id)pressGestureRecognizer;
- (void)redo:(id)arg1;
- (void)relinquishOverlayAtIndex:(unsigned long long)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)removeNoteFromAnnotation:(id)arg1;
- (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)resetToDefaultToolMode;
- (id)rotationGestureRecognizer;
- (void)selectAll:(id)arg1;
- (void)setToolMode:(unsigned long long)arg1;
- (BOOL)shouldDrawVariableStrokeDoodles;
- (void)showAttributeInspector:(id)arg1;
- (void)showSelectionMenu:(id)arg1;
- (void)strokeAddedNotification:(id)arg1;
- (BOOL)supportForPencilAlwaysDrawsSatisfied;
- (id)tapGestureRecognizer;
- (void)teardown;
- (unsigned long long)toolMode;
- (id)toolbarButtonItemOfType:(unsigned long long)arg1;
- (void)undo:(id)arg1;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (BOOL)validateCopy:(id)arg1;
- (BOOL)validateCut:(id)arg1;
- (BOOL)validateDelete:(id)arg1;
- (BOOL)validateDuplicate:(id)arg1;
- (BOOL)validateEditTextAnnotation:(id)arg1;
- (BOOL)validatePaste:(id)arg1;
- (BOOL)validateRedo:(id)arg1;
- (BOOL)validateSelectAll:(id)arg1;
- (BOOL)validateSender:(id)arg1;
- (BOOL)validateShowAttributeInspector:(id)arg1;
- (BOOL)validateUndo:(id)arg1;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;

@end

