//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface BRAccount : NSObject
{
    NSString *_accountID;
    NSData *_perAppAccountIdentifier;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier; // @synthesize perAppAccountIdentifier=_perAppAccountIdentifier;

+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)arg1 error:(id *)arg2;
+ (id)currentCachedLoggedInAccountWithError:(id *)arg1;
+ (id)currentLoggedInAccountWithError:(id *)arg1;
+ (BOOL)refreshCurrentLoggedInAccount;
+ (void)startAccountTokenChangeObserverIfNeeded;
- (void).cxx_destruct;
- (id)containerWithPendingChanges;
- (void)evictOldDocumentsWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)getEvictableSpace:(id *)arg1 error:(id *)arg2;
- (BOOL)hasOptimizeStorageWithError:(id *)arg1;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id *)arg2;
- (id)initWithAccountID:(id)arg1;
- (BOOL)loginWithError:(id *)arg1;
- (BOOL)logoutWithError:(id *)arg1;
- (BOOL)setOptimizeStorageEnabled:(BOOL)arg1 error:(id *)arg2;

@end

