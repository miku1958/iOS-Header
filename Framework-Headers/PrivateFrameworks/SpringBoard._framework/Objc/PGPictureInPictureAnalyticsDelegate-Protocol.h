//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol PGPictureInPictureAnalyticsDelegate <NSObject>
- (void)pictureInPictureAnalyticsSourceWithUUID:(NSUUID *)arg1 didBecomePossible:(BOOL)arg2;
- (void)pictureInPictureDidActivateAnalyticsSessionWithUUID:(NSUUID *)arg1 analyticsSourceUUID:(NSUUID *)arg2 automatically:(BOOL)arg3;
- (void)pictureInPictureDidChangeStashStateForAnalyticsSessionWithUUID:(NSUUID *)arg1 stashed:(BOOL)arg2;
- (void)pictureInPictureDidCreateAnalyticsSessionWithUUID:(NSUUID *)arg1 bundleIdentifier:(NSString *)arg2 contentType:(long long)arg3;
- (void)pictureInPictureDidCreateAnalyticsSourceWithUUID:(NSUUID *)arg1 bundleIdentifier:(NSString *)arg2 contentType:(long long)arg3;
- (void)pictureInPictureDidDeactivateAnalyticsSessionWithUUID:(NSUUID *)arg1 analyticsSourceUUID:(NSUUID *)arg2 appStoppedSession:(BOOL)arg3 restoredFullScreen:(BOOL)arg4;
- (void)pictureInPictureDidDestroyAnalyticsSessionWithUUID:(NSUUID *)arg1;
- (void)pictureInPictureDidDestroyAnalyticsSourceWithUUID:(NSUUID *)arg1;
@end

