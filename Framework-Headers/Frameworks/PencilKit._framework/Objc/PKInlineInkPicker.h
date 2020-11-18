//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <PencilKit/PKInkAttributesPickerDelegate-Protocol.h>
#import <PencilKit/PKInlineColorPickerContentsHiddenDelegate-Protocol.h>
#import <PencilKit/PKInlineColorPickerDelegate-Protocol.h>
#import <PencilKit/PKInlineColorPickerSerialViewControllerTransitionDelegate-Protocol.h>
#import <PencilKit/UIPencilInteractionDelegate-Protocol.h>
#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PencilKit/_PKAllowDrawingWhilePresentingPopoverViewDelegate-Protocol.h>
#import <PencilKit/_PKInlineColorPickerAllowDrawingWithPopoverDelegate-Protocol.h>
#import <PencilKit/_PKToolIndicatorDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSObject, NSString, PKInk, PKInkAttributesPicker, PKInlineColorPicker, UIColor, UILayoutGuide, UIPencilInteraction, UIView, _PKAllowDrawingWhilePresentingPopoverView, _PKToolIndicator;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, PKInlineInkPickerDelegate;

@interface PKInlineInkPicker : UIControl <PKInlineColorPickerDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate, PKInkAttributesPickerDelegate, UIPopoverPresentationControllerDelegate, PKInlineColorPickerContentsHiddenDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate, UIPencilInteractionDelegate, _PKToolIndicatorDelegate>
{
    BOOL _shouldAnimateRuler;
    BOOL _shouldEmboss;
    BOOL _forceCompactLayout;
    BOOL _isUsedOnDarkBackground;
    BOOL _contentsHidden;
    BOOL _rulerEnabled;
    BOOL _pencilGestureSupportEnabled;
    NSArray *_inkIdentifiers;
    unsigned long long _selectedInkIndex;
    unsigned long long _previousDrawingToolIndex;
    unsigned long long _previousToolIndex;
    NSArray *_toolButtonItems;
    PKInlineColorPicker *_colorPicker;
    UIView *_backgroundView;
    UIView *_separatorView;
    UIView *_clippingView;
    NSMutableDictionary *__inkForIdentifierDict;
    _PKAllowDrawingWhilePresentingPopoverView *__allowDrawingWhilePresentingPopoverView;
    PKInkAttributesPicker *_presentedInkAttributesPicker;
    NSObject<OS_dispatch_queue> *_serialViewControllerTransitionQueue;
    NSObject<OS_dispatch_semaphore> *_serialViewControllerTransitionSemaphore;
    UIPencilInteraction *_pencilInteraction;
    _PKToolIndicator *_contentsHiddenToolIndicator;
    id<PKInlineInkPickerDelegate> _delegate;
    unsigned long long _sizeState;
    unsigned long long _selectionState;
    UILayoutGuide *_backgroundViewLayoutGuide;
    NSArray *_allowedTools;
    unsigned long long _attributeSet;
}

@property (strong, nonatomic) _PKAllowDrawingWhilePresentingPopoverView *_allowDrawingWhilePresentingPopoverView; // @synthesize _allowDrawingWhilePresentingPopoverView=__allowDrawingWhilePresentingPopoverView;
@property (readonly, nonatomic) struct CGRect _extentRect; // @dynamic _extentRect;
@property (strong, nonatomic) NSMutableDictionary *_inkForIdentifierDict; // @synthesize _inkForIdentifierDict=__inkForIdentifierDict;
@property (strong, nonatomic) NSArray *allowedTools; // @synthesize allowedTools=_allowedTools;
@property (nonatomic) unsigned long long attributeSet; // @synthesize attributeSet=_attributeSet;
@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) UILayoutGuide *backgroundViewLayoutGuide; // @synthesize backgroundViewLayoutGuide=_backgroundViewLayoutGuide;
@property (strong, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property (strong, nonatomic) PKInlineColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property (nonatomic) unsigned long long colorSet;
@property (nonatomic) BOOL contentsHidden; // @synthesize contentsHidden=_contentsHidden;
@property (strong, nonatomic) _PKToolIndicator *contentsHiddenToolIndicator; // @synthesize contentsHiddenToolIndicator=_contentsHiddenToolIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKInlineInkPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceCompactLayout; // @synthesize forceCompactLayout=_forceCompactLayout;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *inkIdentifiers; // @synthesize inkIdentifiers=_inkIdentifiers;
@property (nonatomic) BOOL isUsedOnDarkBackground; // @synthesize isUsedOnDarkBackground=_isUsedOnDarkBackground;
@property (nonatomic) BOOL pencilGestureSupportEnabled; // @synthesize pencilGestureSupportEnabled=_pencilGestureSupportEnabled;
@property (strong, nonatomic) UIPencilInteraction *pencilInteraction; // @synthesize pencilInteraction=_pencilInteraction;
@property (strong, nonatomic) PKInkAttributesPicker *presentedInkAttributesPicker; // @synthesize presentedInkAttributesPicker=_presentedInkAttributesPicker;
@property (readonly, nonatomic) unsigned long long previousDrawingToolIndex; // @synthesize previousDrawingToolIndex=_previousDrawingToolIndex;
@property (readonly, nonatomic) unsigned long long previousToolIndex; // @synthesize previousToolIndex=_previousToolIndex;
@property (nonatomic) BOOL rulerEnabled; // @synthesize rulerEnabled=_rulerEnabled;
@property (copy, nonatomic) UIColor *selectedColor;
@property (copy, nonatomic) PKInk *selectedInk;
@property (copy, nonatomic) NSString *selectedInkIdentifier;
@property (readonly, nonatomic) unsigned long long selectedInkIndex; // @synthesize selectedInkIndex=_selectedInkIndex;
@property (nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
@property (strong, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialViewControllerTransitionQueue; // @synthesize serialViewControllerTransitionQueue=_serialViewControllerTransitionQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *serialViewControllerTransitionSemaphore; // @synthesize serialViewControllerTransitionSemaphore=_serialViewControllerTransitionSemaphore;
@property (nonatomic) BOOL shouldEmboss; // @synthesize shouldEmboss=_shouldEmboss;
@property (nonatomic) unsigned long long sizeState; // @synthesize sizeState=_sizeState;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *toolButtonItems; // @synthesize toolButtonItems=_toolButtonItems;

+ (BOOL)_axLargerTextSizesEnabled;
+ (id)_defaultCriticallyDampedSpringAnimator;
+ (id)_defaultInkForIdentifier:(id)arg1 attributeSet:(unsigned long long)arg2;
+ (double)_outputForResistanceFunction:(double)arg1 factor:(double)arg2;
+ (id)_sharedPencilUserDefaults;
+ (id)defaultInkForAttributeSet:(unsigned long long)arg1;
+ (id)imageNamed:(id)arg1;
+ (BOOL)inkIdentifierHasMutableAttributes:(id)arg1;
+ (id)sharedImageNameCache;
+ (double)spacingForToolIndex:(unsigned long long)arg1 sizeState:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)arg1;
- (id)_allowDrawingWhilePresentingPopoverViewPassthroughArray;
- (void)_animateRulerToggled:(id)arg1;
- (void)_axHandleLongPressForLargeTextHUD:(id)arg1;
- (id)_axLabelForToolButton:(id)arg1;
- (id)_colorPickerBarButtonItemForContentsHiddenColorPickerPresentation:(id)arg1;
- (BOOL)_colorPickerIsInkPickerContentsHidden:(id)arg1;
- (struct CGRect)_colorPickerRectForContentsHiddenColorPickerPresentation:(id)arg1;
- (void)_commonInit;
- (void)_dismissInkAttributesPicker:(CDUnknownBlockType)arg1;
- (id)_effectiveViewControllerForPopoverPresentation;
- (void)_forceSetAttributeSet:(unsigned long long)arg1;
- (struct CGRect)_frameForNonDrawingToolAtIndex:(long long)arg1;
- (id)_inkForSwitchingToPreviousToolOnPencilDoubleTap;
- (id)_inkForTogglingEraserAndLastDrawingToolOnPencilDoubleTap;
- (id)_inlineColorPickerAllowDrawingPassthroughView:(id)arg1;
- (void)_inlineColorPickerSetupAllowDrawingPassthroughViewIfNeeded:(id)arg1;
- (void)_inlineColorPickerTeardownAllowDrawingPassthroughView:(id)arg1;
- (void)_inlineColorPickerUpdateFrameForAllowDrawingPassthroughView:(id)arg1;
- (double)_layoutAlphaForToolIndex:(long long)arg1;
- (BOOL)_layoutButtonSelectedForToolIndex:(long long)arg1;
- (id)_layoutCalculateUncenteredSubviewFrames;
- (struct CGRect)_layoutCenteredFrameForToolIndex:(long long)arg1 uncenteredFrames:(id)arg2 centeringTransform:(struct CGAffineTransform)arg3;
- (id)_layoutSeparatorViewColorEmbossed:(BOOL)arg1 isUsedOnDarkBackground:(BOOL)arg2;
- (void)_layoutUpdateSizeAndSelectionState;
- (double)_layoutYOffsetForToolIndex:(long long)arg1;
- (void)_loadToolbarItems;
- (id)_queueForSerialViewControllerTransitionFromColorPicker:(id)arg1;
- (void)_reloadToolbarItems;
- (void)_resetUIOnPencilDoubleTapTimerEnded;
- (id)_semaphoreForSerialViewControllerTransitionFromColorPicker:(id)arg1;
- (void)_setSelectionStateNoLayout:(unsigned long long)arg1;
- (void)_setSizeStateNoLayout:(unsigned long long)arg1;
- (void)_setupAllowDrawingWhilePresentingPopoverViewIfNecessaryWithDelegate:(id)arg1;
- (BOOL)_shouldEnablePencilGestures;
- (void)_showInkAttributesPickerFromView:(id)arg1 frame:(struct CGRect)arg2 displayMode:(unsigned long long)arg3 shouldHideArrow:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_teardownAllowDrawingWhilePresentingPopoverView;
- (id)_toolButtonContainingPoint:(struct CGPoint)arg1;
- (void)_updateFrameForAllowDrawingWhilePresentingPopoverView;
- (void)_updateSelectedInkIndex:(unsigned long long)arg1;
- (void)_updateSubviewsWithInk:(id)arg1 animated:(BOOL)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (double)cachedToolButtonWidthForSizeState:(unsigned long long)arg1;
- (id)colorForInkIdentifier:(id)arg1;
- (void)colorPickerColorTappedInCompactChooseToolState:(id)arg1;
- (void)colorPickerDidSelectColor:(id)arg1 colorChanged:(BOOL)arg2;
- (id)createToolButtonItemWithInkIdentifier:(id)arg1 shouldEmboss:(BOOL)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithEmbossing:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)inkAttributesPickerDidChangeSelectedInk:(id)arg1;
- (id)inkIdentifierForIndex:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isDrawingToolIdentifier:(id)arg1;
- (BOOL)isDrawingToolIndex:(unsigned long long)arg1;
- (id)lastDrawingToolInk;
- (void)layoutSubviews;
- (id)minimizedImageForInk:(id)arg1 small:(BOOL)arg2;
- (struct CGSize)minimumSizeForSizeState:(unsigned long long)arg1 selectionState:(unsigned long long)arg2;
- (void)notifyColorSelected:(id)arg1 didChange:(BOOL)arg2;
- (void)notifyToolSelected:(BOOL)arg1;
- (double)offsetForToolIndex:(unsigned long long)arg1 pressed:(BOOL)arg2;
- (void)pencilInteractionDidTap:(id)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (BOOL)presentationControllerShouldDismiss:(id)arg1;
- (void)resetToDrawingToolWithAnimation:(BOOL)arg1;
- (void)selectColorPickerColor:(id)arg1;
- (unsigned long long)selectionStateForSizeState:(unsigned long long)arg1 previousSelectionState:(unsigned long long)arg2;
- (void)setContentsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelectedColor:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectedInk:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectedInkIdentifier:(id)arg1 animated:(BOOL)arg2;
- (unsigned long long)sizeStateForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 sizeState:(unsigned long long)arg2 selectionState:(unsigned long long)arg3;
- (void)toggleRuler;
- (void)toolIndicator:(id)arg1 willPresent:(BOOL)arg2 animated:(BOOL)arg3;
- (struct CGRect)toolIndicatorCenteringRect:(id)arg1;
- (void)toolTapped:(id)arg1;
- (void)updateSelectedToolColor:(id)arg1;
- (void)userDidTouchTool:(id)arg1;
- (id)viewControllerForPopoverPresentationFromColorPicker:(id)arg1;

@end
