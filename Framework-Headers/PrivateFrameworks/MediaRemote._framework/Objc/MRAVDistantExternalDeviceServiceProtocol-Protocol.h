//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class NSArray, NSData, NSError, NSString;

@protocol MRAVDistantExternalDeviceServiceProtocol <NSObject>
- (void)connectWithOptions:(unsigned int)arg1;
- (void)disconnect:(NSError *)arg1;
- (void)getConnectionStateWithCompletion:(void (^)(unsigned int, NSError *))arg1;
- (void)getCustomOriginDataWithCompletion:(void (^)(NSData *, NSError *))arg1;
- (void)getExternalDeviceMetadataWithCompletion:(void (^)(MRAVDistantExternalDeviceMetadata *, NSError *))arg1;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(NSArray *)arg2 removingDeviceUIDs:(NSArray *)arg3 settingDeviceUIDs:(NSArray *)arg4 completion:(void (^)(NSError *))arg5;
- (void)outputDeviceVolume:(NSString *)arg1 withCompletion:(void (^)(float, NSError *))arg2;
- (void)outputDeviceVolumeControlCapabilities:(NSString *)arg1 withCompletion:(void (^)(unsigned int, NSError *))arg2;
- (void)pingWithTimeout:(double)arg1 callback:(void (^)(NSError *))arg2;
- (void)sendButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 down:(BOOL)arg3;
- (void)sendCustomData:(NSData *)arg1 withName:(NSString *)arg2;
- (void)setNotifications:(unsigned long long)arg1;
- (void)setOutputDeviceVolume:(float)arg1 forOutputDevice:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)setRegisteredCallbacks:(unsigned long long)arg1;
- (void)unpair;
@end
