//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKEdgeLocatable-Protocol.h>
#import <PencilKit/PKPaletteMoreOptionsViewControllerDelegate-Protocol.h>
#import <PencilKit/PKPalettePopoverDismissing-Protocol.h>
#import <PencilKit/PKPalettePopoverUpdating-Protocol.h>
#import <PencilKit/PKPaletteViewSizeScaling-Protocol.h>
#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PKPaletteButton, PKPaletteButtonGroupView, PKPaletteKeyboardButton, PKPaletteMoreOptionsViewController, UIStackView, UIViewController;
@protocol PKPaletteAdditionalOptionsViewDelegate, PKPalettePopoverPresenting;

@interface PKPaletteAdditionalOptionsView : UIView <PKPaletteMoreOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate, PKEdgeLocatable, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>
{
    BOOL _supportsAnnotationEditing;
    BOOL _autoHideOn;
    BOOL _isFingerDrawsOn;
    BOOL _shouldShowFingerDrawsOption;
    BOOL _shouldShowTapToRadarOption;
    BOOL _wantsEllipsisButtonVisible;
    BOOL _wantsInputAssistantViewVisible;
    BOOL _enableKeyboardButtons;
    unsigned long long _edgeLocation;
    double _scalingFactor;
    id<PKPalettePopoverPresenting> _palettePopoverPresenting;
    id<PKPaletteAdditionalOptionsViewDelegate> _delegate;
    long long _floatingKeyboardType;
    UIStackView *_contentStackView;
    UIStackView *_stackView;
    PKPaletteButton *_plusButton;
    PKPaletteButton *_ellipsisButton;
    PKPaletteButtonGroupView *_keyboardButtonGroupView;
    PKPaletteKeyboardButton *_keyboardButton;
    PKPaletteButton *_returnKeyButton;
    PKPaletteMoreOptionsViewController *_moreOptionsViewController;
    UIViewController *_presentedPopoverViewController;
    NSLayoutConstraint *_plusButtonWidthConstraint;
    NSLayoutConstraint *_plusButtonHeightConstraint;
    NSLayoutConstraint *_ellipsisButtonWidthConstraint;
    NSLayoutConstraint *_ellipsisButtonHeightConstraint;
}

@property (nonatomic, getter=isAutoHideOn) BOOL autoHideOn; // @synthesize autoHideOn=_autoHideOn;
@property (strong, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaletteAdditionalOptionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
@property (strong, nonatomic) PKPaletteButton *ellipsisButton; // @synthesize ellipsisButton=_ellipsisButton;
@property (strong, nonatomic) NSLayoutConstraint *ellipsisButtonHeightConstraint; // @synthesize ellipsisButtonHeightConstraint=_ellipsisButtonHeightConstraint;
@property (strong, nonatomic) NSLayoutConstraint *ellipsisButtonWidthConstraint; // @synthesize ellipsisButtonWidthConstraint=_ellipsisButtonWidthConstraint;
@property (nonatomic) BOOL enableKeyboardButtons; // @synthesize enableKeyboardButtons=_enableKeyboardButtons;
@property (nonatomic) long long floatingKeyboardType; // @synthesize floatingKeyboardType=_floatingKeyboardType;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isFingerDrawsOn; // @synthesize isFingerDrawsOn=_isFingerDrawsOn;
@property (strong, nonatomic) PKPaletteKeyboardButton *keyboardButton; // @synthesize keyboardButton=_keyboardButton;
@property (strong, nonatomic) PKPaletteButtonGroupView *keyboardButtonGroupView; // @synthesize keyboardButtonGroupView=_keyboardButtonGroupView;
@property (strong, nonatomic) PKPaletteMoreOptionsViewController *moreOptionsViewController; // @synthesize moreOptionsViewController=_moreOptionsViewController;
@property (weak, nonatomic) id<PKPalettePopoverPresenting> palettePopoverPresenting; // @synthesize palettePopoverPresenting=_palettePopoverPresenting;
@property (strong, nonatomic) PKPaletteButton *plusButton; // @synthesize plusButton=_plusButton;
@property (strong, nonatomic) NSLayoutConstraint *plusButtonHeightConstraint; // @synthesize plusButtonHeightConstraint=_plusButtonHeightConstraint;
@property (strong, nonatomic) NSLayoutConstraint *plusButtonWidthConstraint; // @synthesize plusButtonWidthConstraint=_plusButtonWidthConstraint;
@property (strong, nonatomic) UIViewController *presentedPopoverViewController; // @synthesize presentedPopoverViewController=_presentedPopoverViewController;
@property (strong, nonatomic) PKPaletteButton *returnKeyButton; // @synthesize returnKeyButton=_returnKeyButton;
@property (nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property (nonatomic) BOOL shouldShowFingerDrawsOption; // @synthesize shouldShowFingerDrawsOption=_shouldShowFingerDrawsOption;
@property (nonatomic) BOOL shouldShowTapToRadarOption; // @synthesize shouldShowTapToRadarOption=_shouldShowTapToRadarOption;
@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAnnotationEditing; // @synthesize supportsAnnotationEditing=_supportsAnnotationEditing;
@property (nonatomic) BOOL wantsEllipsisButtonVisible; // @synthesize wantsEllipsisButtonVisible=_wantsEllipsisButtonVisible;
@property (nonatomic) BOOL wantsInputAssistantViewVisible; // @synthesize wantsInputAssistantViewVisible=_wantsInputAssistantViewVisible;

- (void).cxx_destruct;
- (void)_didSelectEllipsisButton:(id)arg1;
- (void)_didSelectPlusButton:(id)arg1;
- (void)_handleKeyboardButton;
- (void)_handleReturnKeyButton;
- (id)_keyboardButtonGroupViewButtons;
- (void)_updateUI;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)dealloc;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)moreOptionsViewControllerDidSelectOpenPencilSettings:(id)arg1;
- (void)moreOptionsViewControllerDidSelectTapToRadar:(id)arg1;
- (void)moreOptionsViewControllerDidToggleAutoHide:(id)arg1;
- (void)moreOptionsViewControllerDidToggleFingerDraws:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGRect)plusButtonFrame;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePopoverUI;
- (void)willMoveToSuperview:(id)arg1;

@end

