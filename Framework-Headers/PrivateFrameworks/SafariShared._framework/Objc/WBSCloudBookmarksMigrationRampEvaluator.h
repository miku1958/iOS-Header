//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface WBSCloudBookmarksMigrationRampEvaluator : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_dateOfLastSettingsUpdate;
    BOOL _rampIncludesUserIdentity;
    NSDictionary *_settingsDictionary;
    NSString *_userIdentity;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL rampIncludesUserIdentity;

- (void).cxx_destruct;
- (void)_didFetchSettingsDictionary:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_evaluateRampIncludesUserIdentity;
- (BOOL)_isInternalBuild;
- (void)_updateSettingsIfNeeded:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_updateUserIdentityIfNeededWithFetcher:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clearUserIdentity;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (void)updateForced:(BOOL)arg1 withUserIdentityFetcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

