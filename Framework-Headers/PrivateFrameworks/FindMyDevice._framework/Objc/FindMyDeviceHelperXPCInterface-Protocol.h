//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class FMDLostModeInfo;

@protocol FindMyDeviceHelperXPCInterface <NSObject>
- (oneway void)disableTouchIDWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)updateManagedLostModeInfo:(FMDLostModeInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)updateNeedsLocateAckLostModeInfo:(FMDLostModeInfo *)arg1 completion:(void (^)(NSError *))arg2;
@end

