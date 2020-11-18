//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PUTileLayoutInfo, PUTilingView;

@interface PUTileController : NSObject
{
    BOOL _active;
    BOOL _detached;
    BOOL _shouldPreserveCurrentContent;
    BOOL _reusable;
    BOOL _wantsVisibleRectChanges;
    NSString *_reuseIdentifier;
    long long _animationCount;
    PUTilingView *_tilingView;
    PUTileLayoutInfo *_layoutInfo;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property (nonatomic, getter=isDetached) BOOL detached; // @synthesize detached=_detached;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL isPresentationActive;
@property (readonly, nonatomic) PUTileLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property (readonly, nonatomic) PUTileLayoutInfo *presentationLayoutInfo;
@property (nonatomic, getter=isReusable) BOOL reusable; // @synthesize reusable=_reusable;
@property (readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property (readonly, nonatomic) BOOL shouldAvoidInPlaceSnapshottedFadeOut;
@property (nonatomic) BOOL shouldPreserveCurrentContent; // @synthesize shouldPreserveCurrentContent=_shouldPreserveCurrentContent;
@property (readonly, weak, nonatomic) PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
@property (readonly, nonatomic) struct CGRect visibleRect;
@property (readonly, nonatomic) BOOL wantsVisibleRectChanges; // @synthesize wantsVisibleRectChanges=_wantsVisibleRectChanges;

- (void).cxx_destruct;
- (void)addToTilingView:(id)arg1;
- (BOOL)adoptAssetTransitionInfo:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (id)description;
- (void)didChangeActive;
- (void)didChangeAnimating;
- (void)didChangeVisibleRect;
- (void)didEndAnimation:(long long)arg1;
- (id)freeze;
- (id)generateAssetTransitionInfo;
- (id)init;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)notifyWhenReadyForDisplayWithTimeOut:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForReuse;
- (void)removeAllAnimations;
- (void)reuseIfApplicable;
- (void)setLayoutInfo:(id)arg1;
- (void)setPreloadedImage:(id)arg1;
- (void)setTilingView:(id)arg1;
- (long long)willBeginAnimation;

@end
