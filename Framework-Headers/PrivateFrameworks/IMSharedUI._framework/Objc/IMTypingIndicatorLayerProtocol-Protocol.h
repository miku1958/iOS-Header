//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUI/NSObject-Protocol.h>

@protocol IMTypingIndicatorLayerProtocol <NSObject>

@property (nonatomic) BOOL hasDarkBackground;

- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(void (^)(void))arg1;
- (void)stopAnimation;
- (void)stopPulseAnimation;
@end
