//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBSCloudHistoryConfiguration : NSObject
{
    NSString *_singleDeviceSaveChangesThrottlingPolicyString;
    NSString *_multipleDeviceSaveChangesThrottlingPolicyString;
    NSString *_singleDeviceFetchChangesThrottlingPolicyString;
    NSString *_multipleDeviceFetchChangesThrottlingPolicyString;
    NSString *_syncCircleSizeRetrievalThrottlingPolicyString;
    unsigned long long _maximumRequestCharacterCount;
    double _syncWindow;
}

@property unsigned long long maximumRequestCharacterCount; // @synthesize maximumRequestCharacterCount=_maximumRequestCharacterCount;
@property (strong) NSString *multipleDeviceFetchChangesThrottlingPolicyString; // @synthesize multipleDeviceFetchChangesThrottlingPolicyString=_multipleDeviceFetchChangesThrottlingPolicyString;
@property (strong) NSString *multipleDeviceSaveChangesThrottlingPolicyString; // @synthesize multipleDeviceSaveChangesThrottlingPolicyString=_multipleDeviceSaveChangesThrottlingPolicyString;
@property (readonly) BOOL shouldBatchSaveRecords;
@property (readonly) BOOL shouldUseLongLivedOperationsToSaveRecords;
@property (strong) NSString *singleDeviceFetchChangesThrottlingPolicyString; // @synthesize singleDeviceFetchChangesThrottlingPolicyString=_singleDeviceFetchChangesThrottlingPolicyString;
@property (strong) NSString *singleDeviceSaveChangesThrottlingPolicyString; // @synthesize singleDeviceSaveChangesThrottlingPolicyString=_singleDeviceSaveChangesThrottlingPolicyString;
@property (strong) NSString *syncCircleSizeRetrievalThrottlingPolicyString; // @synthesize syncCircleSizeRetrievalThrottlingPolicyString=_syncCircleSizeRetrievalThrottlingPolicyString;
@property double syncWindow; // @synthesize syncWindow=_syncWindow;

- (void).cxx_destruct;
- (void)_applyBuiltInConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (id)_builtInConfiguration;
- (id)_sharedBuiltInConfiguration;
- (void)applyPlatformConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (void)applyRemoteConfiguration:(id)arg1;
- (id)init;
- (id)platformBuiltInConfiguration;
- (id)remoteConfiguration;

@end

