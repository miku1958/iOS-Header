//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSwitcherLiveContentOverlay-Protocol.h>

@class NSString, SBSceneLayoutAnimationWrapperView, UIView;

@interface SBAnimationWrapperViewLiveContentOverlay : NSObject <SBSwitcherLiveContentOverlay>
{
    long long _containerOrientation;
    SBSceneLayoutAnimationWrapperView *_animationWrapperView;
}

@property (readonly, nonatomic) SBSceneLayoutAnimationWrapperView *animationWrapperView; // @synthesize animationWrapperView=_animationWrapperView;
@property (nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)disableAsynchronousRenderingForNextCommit;
- (id)initWithAnimationWrapperView:(id)arg1;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (long long)rasterizationStyle;
- (void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(CDUnknownBlockType)arg3;
- (void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1;

@end

