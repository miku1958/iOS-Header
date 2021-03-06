//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/NSObject-Protocol.h>

@class AVOutputDevice, AVOutputDeviceGroup, NSArray, NSDictionary;

@protocol AVOutputDeviceGroupImpl <NSObject>

@property (readonly) AVOutputDevice *groupLeader;
@property (readonly) NSArray *outputDevices;
@property (weak) AVOutputDeviceGroup *parentOutputDeviceGroup;
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice;
@property (readonly) float volume;

- (void)addOutputDevice:(AVOutputDevice *)arg1 withOptions:(NSDictionary *)arg2 completionHandler:(void (^)(AVOutputDeviceGroupMembershipChangeResult *))arg3;
- (void)removeOutputDevice:(AVOutputDevice *)arg1 withOptions:(NSDictionary *)arg2 completionhandler:(void (^)(AVOutputDeviceGroupMembershipChangeResult *))arg3;
- (void)setVolume:(float)arg1;
- (long long)volumeControlType;
@end

