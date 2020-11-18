//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BBBulletin, NSData, NSString;

@protocol BLTTTestServiceServerExportedInterface <NSObject>
- (void)addBulletin:(BBBulletin *)arg1 forFeed:(unsigned long long)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(NSData *)arg4 attachmentType:(long long)arg5 completion:(void (^)(BOOL))arg6;
- (void)clearSectionInfoSentCacheWithCompletion:(void (^)(void))arg1;
- (void)disableStandaloneTestModeWithCompletion:(void (^)(void))arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 completion:(void (^)(void))arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(void (^)(BOOL))arg1;
- (void)originalSettingsWithCompletion:(void (^)(NSArray *))arg1;
- (void)overriddenSettingsWithCompletion:(void (^)(NSArray *))arg1;
- (void)sendAllSectionInfoWithCompletion:(void (^)(void))arg1;
- (void)sendSectionInfoWithSectionID:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)settingOverridesWithCompletion:(void (^)(NSArray *))arg1;
- (void)willAlertForSectionID:(NSString *)arg1 subtype:(long long)arg2 considerSubtype:(BOOL)arg3 completion:(void (^)(BOOL))arg4;
@end

