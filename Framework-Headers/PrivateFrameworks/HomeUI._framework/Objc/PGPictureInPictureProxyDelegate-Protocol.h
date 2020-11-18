//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSError, PGPictureInPictureProxy;

@protocol PGPictureInPictureProxyDelegate <NSObject>

@optional
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(NSError *)arg3;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^)(BOOL))arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;
- (void)pictureInPictureProxy:(PGPictureInPictureProxy *)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;
- (long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(PGPictureInPictureProxy *)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(PGPictureInPictureProxy *)arg1;
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(PGPictureInPictureProxy *)arg1;
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(PGPictureInPictureProxy *)arg1;
@end

