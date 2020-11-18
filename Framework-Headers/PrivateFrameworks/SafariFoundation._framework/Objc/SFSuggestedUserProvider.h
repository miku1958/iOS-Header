//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface SFSuggestedUserProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedEmails;
    NSArray *_suggestedNonEmails;
}

+ (id)sharedProvider;
- (void).cxx_destruct;
- (id)_allCachedSuggestedUsersWithType:(long long)arg1;
- (id)_cachedSuggestedUsersWithType:(long long)arg1 matchingText:(id)arg2;
- (void)_getSuggestedUsersFromSavedPasswords:(id)arg1 suggestedEmails:(id *)arg2 suggestedNonEmails:(id *)arg3;
- (void)_passwordStoreChangedNotification:(id)arg1;
- (id)init;
- (void)suggestedUsersOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)suggestedUsersOfType:(long long)arg1 matchingText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

