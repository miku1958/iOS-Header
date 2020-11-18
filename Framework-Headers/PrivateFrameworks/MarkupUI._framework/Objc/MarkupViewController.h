//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MarkupUI/AKControllerDelegateProtocol-Protocol.h>
#import <MarkupUI/UINavigationBarDelegate-Protocol.h>
#import <MarkupUI/UIToolbarDelegate-Protocol.h>

@class AKController, NSArray, NSLayoutConstraint, NSString, NSUndoManager, UINavigationBar, UIToolbar, UIView;
@protocol MUContentViewControllerProtocol, MarkupViewControllerDelegate;

@interface MarkupViewController : UIViewController <AKControllerDelegateProtocol, UINavigationBarDelegate, UIToolbarDelegate>
{
    BOOL _toolbarHidden;
    BOOL _shapeDetectionEnabled;
    BOOL _allowShakeToUndo;
    BOOL _userDidCancel;
    BOOL _useFancyTransition;
    BOOL _isAnimatingMarkupExtensionTransition;
    AKController *_annotationController;
    UIToolbar *_toolbar;
    long long _toolbarPosition;
    UINavigationBar *_navBar;
    UIViewController<MUContentViewControllerProtocol> *_contentViewController;
    NSUndoManager *_akUndoManager;
    id<MarkupViewControllerDelegate> _delegate;
    NSString *_sourceContentType;
    id _sourceContent;
    id _digestedSourceContent;
    NSArray *_sourceContentReplacedAnnotationIndexes;
    NSLayoutConstraint *_toolbarTopConstraint;
    NSLayoutConstraint *_toolbarTopAttachedConstraint;
    NSLayoutConstraint *_toolbarBottomConstraint;
    NSString *_preferredFileDisplayName;
    UIView *_contentContainerView;
    UIView *_transitionDimmingView;
    UIView *_whiteView;
}

@property (strong, nonatomic) NSUndoManager *akUndoManager; // @synthesize akUndoManager=_akUndoManager;
@property (nonatomic) BOOL allowShakeToUndo; // @synthesize allowShakeToUndo=_allowShakeToUndo;
@property (strong) AKController *annotationController; // @synthesize annotationController=_annotationController;
@property (strong) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property (strong) UIViewController<MUContentViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MarkupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong) id digestedSourceContent; // @synthesize digestedSourceContent=_digestedSourceContent;
@property (readonly) unsigned long long hash;
@property BOOL isAnimatingMarkupExtensionTransition; // @synthesize isAnimatingMarkupExtensionTransition=_isAnimatingMarkupExtensionTransition;
@property (strong, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property (readonly, nonatomic) NSString *outputType;
@property (copy, nonatomic) NSString *preferredFileDisplayName; // @synthesize preferredFileDisplayName=_preferredFileDisplayName;
@property (nonatomic, getter=isShapeDetectionEnabled) BOOL shapeDetectionEnabled; // @synthesize shapeDetectionEnabled=_shapeDetectionEnabled;
@property (strong, nonatomic) id sourceContent; // @synthesize sourceContent=_sourceContent;
@property (strong) NSArray *sourceContentReplacedAnnotationIndexes; // @synthesize sourceContentReplacedAnnotationIndexes=_sourceContentReplacedAnnotationIndexes;
@property (strong) NSString *sourceContentType; // @synthesize sourceContentType=_sourceContentType;
@property (readonly) Class superclass;
@property (strong) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property (strong) NSLayoutConstraint *toolbarBottomConstraint; // @synthesize toolbarBottomConstraint=_toolbarBottomConstraint;
@property (nonatomic, getter=isToolbarHidden) BOOL toolbarHidden; // @synthesize toolbarHidden=_toolbarHidden;
@property (nonatomic) long long toolbarPosition; // @synthesize toolbarPosition=_toolbarPosition;
@property (strong) NSLayoutConstraint *toolbarTopAttachedConstraint; // @synthesize toolbarTopAttachedConstraint=_toolbarTopAttachedConstraint;
@property (strong) NSLayoutConstraint *toolbarTopConstraint; // @synthesize toolbarTopConstraint=_toolbarTopConstraint;
@property (strong) UIView *transitionDimmingView; // @synthesize transitionDimmingView=_transitionDimmingView;
@property BOOL useFancyTransition; // @synthesize useFancyTransition=_useFancyTransition;
@property BOOL userDidCancel; // @synthesize userDidCancel=_userDidCancel;
@property (strong) UIView *whiteView; // @synthesize whiteView=_whiteView;

+ (id)_exportedInterface;
+ (BOOL)_isInLowMemoryEnvironment;
+ (id)_remoteViewControllerInterface;
+ (Class)viewControllerClassForUTI:(struct __CFString *)arg1;
- (void).cxx_destruct;
- (void)_adjustContentInsetsForBars;
- (void)_adjustFormSheetFrameToFitSize:(struct CGSize)arg1;
- (void)_animateEnteringMarkupWithInfo:(id)arg1;
- (void)_animateExitWithInfo:(id)arg1;
- (id)_backgroundColor;
- (void)_bailFailedAnimateEnterMarkup;
- (void)_cancel;
- (void)_commonInit;
- (struct CGRect)_containerBounds;
- (void)_createCancelDoneNavBar;
- (void)_installContentViewControllerForUTI:(id)arg1;
- (void)_loadSourceContentWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)_minimumFormSheetDimensions;
- (id)_navBarTitleColor;
- (struct CGRect)_rectBetweenNavAndToolbar;
- (void)_saveEditing:(id)arg1;
- (void)_setData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_setupContainerAndDimmingViews;
- (void)_showTextStyleOptions:(id)arg1;
- (void)_teardownContentViewController;
- (id)_toolbarItemTintColor;
- (id)_toolbarTintColor;
- (struct CGAffineTransform)_transformToHideContainerViewBehindBounds:(struct CGRect)arg1;
- (void)_updateAndLoadSourceContent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateAppearanceForTraitCollection:(id)arg1;
- (void)_updateConstraintsForBarPosition:(long long)arg1;
- (BOOL)_validateAnimationDictionary:(id)arg1 isEntering:(BOOL)arg2;
- (void)_writeToDataConsumer:(struct CGDataConsumer *)arg1;
- (void)animateExitWithInfo:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)cancel:(id)arg1;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)controllerDidEnterToolMode:(id)arg1;
- (void)controllerDidExitToolMode:(id)arg1;
- (BOOL)controllerShouldDetectFormElements:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromModelToOverlayWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOverlayToModelWithPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (id)dataRepresentationWithError:(id *)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)done:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (struct CGRect)maxPageRectWithPageIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)arg1 forAnnotationController:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)arg1 atScale:(double)arg2 inRect:(struct CGRect)arg3 onOverlayAtPageIndex:(unsigned long long)arg4 forAnnotationController:(id)arg5;
- (long long)positionForBar:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)setData:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setImage:(id)arg1;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect)arg1 onOverlayAtPageIndex:(unsigned long long)arg2 forAnnotationController:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoManagerForAnnotationController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;

@end

