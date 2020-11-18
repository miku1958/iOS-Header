//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol HMDCameraStreamControlManagerProtocol <NSObject>
- (void)negotiateStream;
- (void)reconfigureStream:(NSDictionary *)arg1;
- (void)remoteSetup:(NSString *)arg1;
- (void)startStream:(NSDictionary *)arg1;
- (void)stopStream;
- (void)updateAudioSetting:(unsigned long long)arg1;
@end

