//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CLIntersiloServiceProtocol-Protocol.h>

@class NSString;
@protocol CLIntersiloReplayServiceClientProtocol;

@protocol CLIntersiloReplayServicePublicProtocol <CLIntersiloServiceProtocol>
- (void)receiveConnectionTo:(byref id)arg1;
- (void)useRecordingFileForPlayback:(NSString *)arg1;
- (void)useRecordingFileForPlayback:(NSString *)arg1 coordinator:(byref id<CLIntersiloReplayServiceClientProtocol>)arg2 synchronousFilter:(CDUnknownFunctionPointerType)arg3;
@end
