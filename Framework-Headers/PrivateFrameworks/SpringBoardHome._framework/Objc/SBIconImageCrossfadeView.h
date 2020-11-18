//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIView;
@protocol SBCrossfadingIconImageSource;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView
{
    double _containerScaleX;
    double _containerScaleY;
    BOOL _masksCorners;
    BOOL _performsTrueCrossfade;
    unsigned long long _crossfadeStyle;
    UIView *_containerView;
    id<SBCrossfadingIconImageSource> _iconImageSource;
    UIView *_iconImageView;
    UIView *_crossfadeView;
    UIView *_crossfadeContainerView;
    double _morphFraction;
    struct CGPoint _stretchAnchorPoint;
}

@property (readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (readonly, nonatomic) UIView *crossfadeContainerView; // @synthesize crossfadeContainerView=_crossfadeContainerView;
@property (nonatomic) unsigned long long crossfadeStyle; // @synthesize crossfadeStyle=_crossfadeStyle;
@property (readonly, nonatomic) UIView *crossfadeView; // @synthesize crossfadeView=_crossfadeView;
@property (readonly, nonatomic) id<SBCrossfadingIconImageSource> iconImageSource; // @synthesize iconImageSource=_iconImageSource;
@property (readonly, nonatomic) UIView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (nonatomic) BOOL masksCorners; // @synthesize masksCorners=_masksCorners;
@property (readonly, nonatomic) double morphFraction; // @synthesize morphFraction=_morphFraction;
@property (nonatomic) BOOL performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
@property (readonly, nonatomic) BOOL reparentsSourceView;
@property (nonatomic) struct CGPoint stretchAnchorPoint; // @synthesize stretchAnchorPoint=_stretchAnchorPoint;

+ (Class)_containerViewClass;
- (void).cxx_destruct;
- (void)_applyCornerRadius:(double)arg1;
- (void)_applyCrossfadeScaleX:(double)arg1 scaleY:(double)arg2;
- (void)_setCornerRadiusEnabled:(BOOL)arg1;
- (void)_updateCornerMask;
- (void)cleanup;
- (id)initWithSource:(id)arg1 crossfadeView:(id)arg2;
- (void)layoutSubviews;
- (void)prepareGeometry;
- (void)setAppSnapshotCornerRadius:(double)arg1;
- (void)setCrossfadeFraction:(double)arg1;
- (void)setMorphFraction:(double)arg1;

@end
