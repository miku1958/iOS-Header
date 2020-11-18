//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <SpringBoard/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UIView;

@interface SBFluidSwitcherButton : UIControl <UIPointerInteractionDelegate>
{
    UIView *_backgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
    UIImage *_image;
    NSString *_backdropGroupName;
    long long _buttonStyle;
    struct UIEdgeInsets _extendedEdgeInsets;
}

@property (strong, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property (nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets extendedEdgeInsets; // @synthesize extendedEdgeInsets=_extendedEdgeInsets;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHighlightViewIfNecessary;
- (id)_backgroundMaterialView;
- (void)_configureBackgroundViewIfNecessaryForStyle:(long long)arg1;
- (void)_configureGlyphImageViewIfNecessaryForStyle:(long long)arg1;
- (void)_configureXPlusDViewIfNecessaryForStyle:(long long)arg1;
- (void)_invalidateBackgroundView;
- (void)_invalidateXPlusDView;
- (void)didMoveToSuperview;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;

@end
