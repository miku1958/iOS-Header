//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WLKSettingsCloudUtilities : NSObject
{
}

+ (id)_connection;
+ (void)_fetchSyncDictionary:(CDUnknownBlockType)arg1;
+ (void)_postChangeDictionaryToCloud:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_queue;
+ (id)_syncDictionaryForAppSettings:(id)arg1;
+ (id)_syncDictionaryForLocalStore;
+ (BOOL)cloudSyncEnabled;
+ (void)deleteAllHistoryWithCompletion:(CDUnknownBlockType)arg1;
+ (void)forceUpdateWithCompletion:(CDUnknownBlockType)arg1;
+ (void)resetAccountWithCompletion:(CDUnknownBlockType)arg1;
+ (BOOL)synchronizeSettingsFromCloudIfNeeded;
+ (void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 removeEntry:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)updateCloudStoreWithCompletion:(CDUnknownBlockType)arg1;
+ (void)updateLocalStoreWithCompletion:(CDUnknownBlockType)arg1;

@end

