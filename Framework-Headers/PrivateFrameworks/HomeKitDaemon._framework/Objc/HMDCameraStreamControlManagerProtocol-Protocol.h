//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraStreamMetrics, NSDictionary, NSError, NSString;

@protocol HMDCameraStreamControlManagerProtocol <NSObject>

@property (readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics;

- (void)negotiateStream;
- (void)reconfigureStream:(NSDictionary *)arg1;
- (void)remoteSetup:(NSString *)arg1;
- (void)startStream:(NSDictionary *)arg1;
- (void)stopStream:(NSError *)arg1;
- (void)updateAudioSetting:(unsigned long long)arg1;
@end
