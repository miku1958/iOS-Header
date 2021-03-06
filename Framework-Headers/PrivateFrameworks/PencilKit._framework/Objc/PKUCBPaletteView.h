//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKPaletteView.h>

#import <PencilKit/PKPaletteButtonIntrinsicContentSizeObserver-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, PKPaletteButtonGroupView, PKPaletteReturnKeyButton, UIStackView, UIView;

@interface PKUCBPaletteView : PKPaletteView <PKPaletteButtonIntrinsicContentSizeObserver>
{
    BOOL _returnKeyEnabled;
    BOOL _alwaysIncludeReturnKeyAndInputAssistantItems;
    BOOL _updatingUI;
    long long _returnKeyType;
    CDUnknownBlockType _returnKeyHandler;
    NSString *_localeIdentifier;
    NSArray *_leadingBarButtons;
    NSArray *_centeredBarButtons;
    NSArray *_trailingBarButtons;
    UIView *__contentView;
    NSLayoutConstraint *__contentViewTopAnchor;
    NSLayoutConstraint *__contentViewBottomAnchor;
    NSLayoutConstraint *__contentViewLeadingAnchor;
    NSLayoutConstraint *__contentViewTrailingAnchor;
    UIStackView *__buttonStackView;
    NSLayoutConstraint *__buttonStackViewHeightConstraint;
    NSLayoutConstraint *__buttonStackViewBottomConstraint;
    PKPaletteButtonGroupView *__leadingButtonGroupView;
    PKPaletteButtonGroupView *__centeredButtonGroupView;
    PKPaletteButtonGroupView *__trailingButtonGroupView;
    PKPaletteButtonGroupView *__returnKeyButtonGroupView;
    PKPaletteReturnKeyButton *__returnKeyButton;
    NSArray *_nonCompactContentViewConstraints;
    NSArray *_compactContentViewConstraints;
}

@property (strong, nonatomic) UIStackView *_buttonStackView; // @synthesize _buttonStackView=__buttonStackView;
@property (strong, nonatomic) NSLayoutConstraint *_buttonStackViewBottomConstraint; // @synthesize _buttonStackViewBottomConstraint=__buttonStackViewBottomConstraint;
@property (strong, nonatomic) NSLayoutConstraint *_buttonStackViewHeightConstraint; // @synthesize _buttonStackViewHeightConstraint=__buttonStackViewHeightConstraint;
@property (strong, nonatomic) PKPaletteButtonGroupView *_centeredButtonGroupView; // @synthesize _centeredButtonGroupView=__centeredButtonGroupView;
@property (strong, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property (strong, nonatomic) NSLayoutConstraint *_contentViewBottomAnchor; // @synthesize _contentViewBottomAnchor=__contentViewBottomAnchor;
@property (strong, nonatomic) NSLayoutConstraint *_contentViewLeadingAnchor; // @synthesize _contentViewLeadingAnchor=__contentViewLeadingAnchor;
@property (strong, nonatomic) NSLayoutConstraint *_contentViewTopAnchor; // @synthesize _contentViewTopAnchor=__contentViewTopAnchor;
@property (strong, nonatomic) NSLayoutConstraint *_contentViewTrailingAnchor; // @synthesize _contentViewTrailingAnchor=__contentViewTrailingAnchor;
@property (strong, nonatomic) PKPaletteButtonGroupView *_leadingButtonGroupView; // @synthesize _leadingButtonGroupView=__leadingButtonGroupView;
@property (strong, nonatomic) PKPaletteReturnKeyButton *_returnKeyButton; // @synthesize _returnKeyButton=__returnKeyButton;
@property (strong, nonatomic) PKPaletteButtonGroupView *_returnKeyButtonGroupView; // @synthesize _returnKeyButtonGroupView=__returnKeyButtonGroupView;
@property (strong, nonatomic) PKPaletteButtonGroupView *_trailingButtonGroupView; // @synthesize _trailingButtonGroupView=__trailingButtonGroupView;
@property (nonatomic) BOOL alwaysIncludeReturnKeyAndInputAssistantItems; // @synthesize alwaysIncludeReturnKeyAndInputAssistantItems=_alwaysIncludeReturnKeyAndInputAssistantItems;
@property (copy, nonatomic) NSArray *centeredBarButtons; // @synthesize centeredBarButtons=_centeredBarButtons;
@property (copy, nonatomic) NSArray *compactContentViewConstraints; // @synthesize compactContentViewConstraints=_compactContentViewConstraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *leadingBarButtons; // @synthesize leadingBarButtons=_leadingBarButtons;
@property (copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property (copy, nonatomic) NSArray *nonCompactContentViewConstraints; // @synthesize nonCompactContentViewConstraints=_nonCompactContentViewConstraints;
@property (nonatomic, getter=isReturnKeyEnabled) BOOL returnKeyEnabled; // @synthesize returnKeyEnabled=_returnKeyEnabled;
@property (copy, nonatomic) CDUnknownBlockType returnKeyHandler; // @synthesize returnKeyHandler=_returnKeyHandler;
@property (nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *trailingBarButtons; // @synthesize trailingBarButtons=_trailingBarButtons;
@property (nonatomic, getter=isUpdatingUI) BOOL updatingUI; // @synthesize updatingUI=_updatingUI;

+ (id)makeBackgroundView;
- (void).cxx_destruct;
- (double)_buttonGroupSpacing;
- (id)_centeredBarButtons;
- (double)_contentMargin;
- (void)_handleReturnKey;
- (double)_narrowLength;
- (void)_performUpdateUIBlock:(CDUnknownBlockType)arg1;
- (BOOL)_shouldHideLeadingButtonGroupView;
- (BOOL)_shouldHideReturnKeyButtonGroupView;
- (BOOL)_shouldHideTrailingButtonGroupView;
- (BOOL)_shouldShowCenterButtonGroupView;
- (BOOL)_shouldShowInputAssistantItems;
- (BOOL)_shouldShowReturnKey;
- (void)_updateCenteredButtonGroup;
- (void)_updateLeadingButtonGroup;
- (void)_updateReturnKeyButton;
- (void)_updateSubviewLayoutAxis;
- (void)_updateTrailingButtonGroup;
- (void)_updateUI;
- (id)borderColorForTraitCollection:(id)arg1;
- (double)borderWidthForTraitCollection:(id)arg1;
- (void)buttonDidChangeIntrinsicContentSize:(id)arg1;
- (double)compactPaletteHeight;
- (double)dampingRatioForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(struct CGPoint)arg3;
- (void)didChangePalettePosition;
- (void)didChangePaletteScaleFactor;
- (void)dismissPalettePopoverWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isPalettePresentingPopover;
- (struct CGSize)paletteSizeForEdge:(unsigned long long)arg1;
- (unsigned long long)paletteViewType;
- (double)responseForThrowingFromPosition:(long long)arg1 toPosition:(long long)arg2 withVelocity:(struct CGPoint)arg3;
- (double)shadowOpacity;
- (double)shadowRadius;
- (BOOL)shouldAdjustShadowRadiusForMinimized;
- (BOOL)shouldExpandFromCorner;
- (BOOL)shouldStartUpMinimized;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

