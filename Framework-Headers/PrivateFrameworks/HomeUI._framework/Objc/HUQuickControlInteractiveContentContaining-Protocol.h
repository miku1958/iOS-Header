//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol HULayoutAnchorProviding, HUQuickControlContentHosting;

@protocol HUQuickControlInteractiveContentContaining <NSObject>

@property (strong, nonatomic) id<HULayoutAnchorProviding> preferredFrameLayoutGuide;
@property (weak, nonatomic) id<HUQuickControlContentHosting> quickControlHost;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;

- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(UIGestureRecognizer *)arg1;

@optional
- (BOOL)shouldShowContentForReachabilityState:(BOOL)arg1;
@end

