//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface BLTTestService : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedTestService;
- (void).cxx_destruct;
- (void)_connectIfNecessary;
- (void)_disconnect;
- (void)addBulletin:(id)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)clearSectionInfoSentCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)disableStandaloneTestModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)originalSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)overriddenSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendAllSectionInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)settingOverridesWithCompletion:(CDUnknownBlockType)arg1;
- (void)willAlertForSectionID:(id)arg1 subtype:(long long)arg2 considerSubtype:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;

@end

