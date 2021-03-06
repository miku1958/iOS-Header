//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface RESiriActionsDonationsWhitelist : NSObject
{
    NSDictionary *_whitelist;
    struct os_unfair_lock_s _lock;
    NSSet *_intentWhitelistBundleIDs;
    NSSet *_userActivityWhitelistBundleIDs;
}

@property (readonly, nonatomic) NSSet *intentWhitelistBundleIDs; // @synthesize intentWhitelistBundleIDs=_intentWhitelistBundleIDs;
@property (readonly, nonatomic) NSSet *userActivityWhitelistBundleIDs; // @synthesize userActivityWhitelistBundleIDs=_userActivityWhitelistBundleIDs;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (BOOL)intentIsWhitelistedForBundleID:(id)arg1 andTypeName:(id)arg2;
- (id)intentWhitelistedRelevanceThresholdForBundleID:(id)arg1 andTypeName:(id)arg2;
- (BOOL)userActivityIsWhitelistedForBundleID:(id)arg1 andActivityType:(id)arg2;
- (id)userActivityWhitelistedRelevanceThresholdForBundleID:(id)arg1 andActivityType:(id)arg2;

@end

