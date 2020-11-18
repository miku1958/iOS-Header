//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTTransitionModel-Protocol.h>

@class AVTView;

@protocol AVTAvatarTransitionModel <AVTTransitionModel>
- (void)applyBaseAlpha;
- (void)applyFullAlpha;
- (AVTView *)liveView;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
@end

