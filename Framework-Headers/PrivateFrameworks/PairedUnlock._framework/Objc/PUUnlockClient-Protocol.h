//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PairedUnlock/NSObject-Protocol.h>

@class NSError, PURemoteDeviceState;

@protocol PUUnlockClient <NSObject>
- (void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)didGetRemoteDeviceState:(PURemoteDeviceState *)arg1 error:(NSError *)arg2;
- (void)didPairForUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)didUnpairForUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)remoteDeviceDidCompleteRemoteAction:(BOOL)arg1 remoteDeviceState:(PURemoteDeviceState *)arg2 error:(NSError *)arg3;
- (void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(NSError *)arg2;
- (void)remoteDeviceDidUnlock;
@end

