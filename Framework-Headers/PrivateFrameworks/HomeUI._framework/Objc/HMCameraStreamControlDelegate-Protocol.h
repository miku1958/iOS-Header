//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HMCameraStreamControl, NSError;

@protocol HMCameraStreamControlDelegate <NSObject>

@optional
- (void)cameraStreamControl:(HMCameraStreamControl *)arg1 didStopStreamWithError:(NSError *)arg2;
- (void)cameraStreamControlDidStartStream:(HMCameraStreamControl *)arg1;
@end
