//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMNebulaDaemonTimelapseProtocolLimited-Protocol.h>

@class NSString;

@protocol CAMNebulaDaemonTimelapseProtocol <CAMNebulaDaemonTimelapseProtocolLimited>
- (void)finishCaptureForTimelapseWithUUID:(NSString *)arg1;
- (void)resumeTimelapseWithUUID:(NSString *)arg1;
- (void)startTimelapseWithUUID:(NSString *)arg1;
- (void)stopTimelapseWithUUID:(NSString *)arg1;
- (void)updateTimelapseWithUUID:(NSString *)arg1;
@end

