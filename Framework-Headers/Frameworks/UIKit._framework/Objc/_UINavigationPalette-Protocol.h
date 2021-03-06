//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UINavigationController, UIView;

@protocol _UINavigationPalette <NSObject>

@property (strong, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (nonatomic, setter=_setPaletteOverridesPinningBar:) BOOL _paletteOverridesPinningBar;
@property (readonly, nonatomic) unsigned long long boundaryEdge;
@property (readonly, nonatomic) UINavigationController *navController;
@property (nonatomic) BOOL paletteShadowIsHidden;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic) BOOL pinningBarShadowIsHidden;
@property (nonatomic) BOOL pinningBarShadowWasHidden;
@property (nonatomic) struct UIEdgeInsets preferredContentInsets;
@property (nonatomic, getter=isVisibleWhenPinningBarIsHidden) BOOL visibleWhenPinningBarIsHidden;

- (void)_setLeftConstraintConstant:(double)arg1;
- (void)_setTopConstraintConstant:(double)arg1;
- (BOOL)isAttached;
- (BOOL)paletteIsHidden;
- (void)setFrame:(struct CGRect)arg1 isAnimating:(BOOL)arg2;
@end

