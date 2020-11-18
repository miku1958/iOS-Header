//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _DKThrottledActivity;
@protocol OS_dispatch_queue;

@interface _DKCloudUtilities : NSObject
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    _DKThrottledActivity *_activityThrottler;
    BOOL _supportsDeviceToDeviceEncryption;
    BOOL _isSingleDevice;
}

@property (readonly, nonatomic) BOOL isCloudSyncAvailable;
@property (readonly, nonatomic) BOOL isSingleDevice;
@property (readonly, nonatomic) BOOL isSiriCloudSyncEnabled;
@property (readonly, nonatomic) BOOL supportsDeviceToDeviceEncryption;

+ (id)containerIdentifier;
+ (BOOL)isCloudKitEnabled;
+ (BOOL)isSyncAvailableAndEnabled;
+ (BOOL)isSyncAvailableAndEnabledWithVerboseLogging:(BOOL)arg1;
+ (BOOL)isUnitTesting;
+ (void)setCloudKitEnabled:(BOOL)arg1;
+ (void)setUnitTesting:(BOOL)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_accountDidChange:(id)arg1;
- (void)dealloc;
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (void)setCloudSyncAvailable:(BOOL)arg1;

@end
