//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMFUI/NSObject-Protocol.h>

@protocol MKUserTrackingView <NSObject>
- (void)_setUserTrackingMode:(long long)arg1 animated:(BOOL)arg2 fromTrackingButton:(BOOL)arg3;
- (BOOL)canRotateForHeading;
- (BOOL)hasUserLocation;
- (BOOL)isCurrentlyRotated;
- (long long)userTrackingMode;

@optional
- (BOOL)hasRenderedSomething;
- (BOOL)postsMapViewInitialRenderingNotification;
@end

