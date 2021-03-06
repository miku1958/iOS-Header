//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BusinessChatService/BCSRealTimeSignposter.h>

#import <BusinessChatService/BCSRealTimeTimingMeasurementHandler-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSRealTimeTimingSignposter : BCSRealTimeSignposter <BCSRealTimeTimingMeasurementHandler>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)signposterForBCSType:(long long)arg1;
+ (id)signposterForBCSType:(long long)arg1 signpostIdentifier:(unsigned long long)arg2;
+ (id)signposterForItemIdentifier:(id)arg1;
+ (id)signposterForShardIdentifier:(id)arg1;
- (void)_handleBusinessLinkChoppedFetch:(long long)arg1;
- (void)_handleBusinessLinkHashFetch:(long long)arg1;
- (void)_handleCloudKitConfigFetch:(long long)arg1;
- (void)_handleCloudKitConfigFetchAndDecode:(long long)arg1;
- (void)_handleCloudKitItemFetch:(long long)arg1;
- (void)_handleCloudKitItemFetchAndDecode:(long long)arg1;
- (void)_handleCloudKitMegashardFetch:(long long)arg1;
- (void)_handleCloudKitMegashardFetchAndDecode:(long long)arg1;
- (void)_handleCloudKitShardFetch:(long long)arg1;
- (void)_handleCloudKitShardFetchAndDecode:(long long)arg1;
- (void)_handleConfigResolution:(long long)arg1;
- (void)_handleItemFetch:(long long)arg1;
- (void)_handleItemIsRegistered:(long long)arg1;
- (void)_handleItemResolution:(long long)arg1;
- (void)_handleShardResolution:(long long)arg1;
- (void)timingMeasurementDidBegin:(id)arg1;
- (void)timingMeasurementDidEnd:(id)arg1;

@end

