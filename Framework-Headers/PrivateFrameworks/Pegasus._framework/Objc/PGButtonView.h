//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Pegasus/PGMaterialView.h>

#import <Pegasus/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIFont, UIPointerInteraction, UIViewPropertyAnimator, _PGButton;
@protocol BSInvalidatable, PGButtonViewDelegate;

__attribute__((visibility("hidden")))
@interface PGButtonView : PGMaterialView <UIPointerInteractionDelegate>
{
    double _currentGlyphSize;
    NSString *_currentGlyphImageName;
    id<BSInvalidatable> _preventAutoHideOfControlsAssertion;
    BOOL _circular;
    BOOL _highlighted;
    id<PGButtonViewDelegate> _delegate;
    NSString *_systemImageName;
    double _glyphSize;
    _PGButton *_actualButton;
    UIViewPropertyAnimator *_highlightAnimator;
    UIPointerInteraction *_pointerInteraction;
}

@property (strong, nonatomic) _PGButton *actualButton; // @synthesize actualButton=_actualButton;
@property (nonatomic, getter=isCircular) BOOL circular; // @synthesize circular=_circular;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PGButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) double glyphSize; // @synthesize glyphSize=_glyphSize;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator; // @synthesize highlightAnimator=_highlightAnimator;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (weak, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemImageName; // @synthesize systemImageName=_systemImageName;
@property (copy, nonatomic) NSString *text;

+ (id)buttonWithDelegate:(id)arg1;
+ (id)disabledTintColor;
+ (id)enabledTintColor;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_handleDragEnter:(id)arg1;
- (void)_handleDragExit:(id)arg1;
- (void)_handleTouchDown:(id)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_handleTouchUpOrCancel:(id)arg1;
- (BOOL)_shouldHitTest;
- (void)_updateForCircularAppearanceIfNeeded;
- (void)_updateGlyphConfigurationIfNeeded;
- (id)accessibilityIdentifier;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)sizeToFit;

@end

