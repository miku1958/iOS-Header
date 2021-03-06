//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAccount.h>

@class NSMutableArray, NSMutableSet;

@interface LDAPAccount : DAAccount
{
    NSMutableSet *_searchTaskSet;
    NSMutableArray *_mutableSearchSettings;
}

@property (strong, nonatomic) NSMutableArray *mutableSearchSettings; // @synthesize mutableSearchSettings=_mutableSearchSettings;
@property (strong, nonatomic) NSMutableSet *searchTaskSet; // @synthesize searchTaskSet=_searchTaskSet;

- (void).cxx_destruct;
- (void)_reallyCancelAllSearchQueries;
- (void)_reallyCancelSearchQuery:(id)arg1;
- (void)_reallyPerformSearchQuery:(id)arg1;
- (void)addSearchSettings:(id)arg1;
- (id)connectionURL;
- (id)connectionURLWithSSL:(BOOL)arg1;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (void)ingestBackingAccountInfoProperties;
- (id)initWithBackingAccountInfo:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)isLDAPAccount;
- (void)ldapGetDefaultSearchBaseTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 defaultSearchBase:(id)arg4;
- (void)ldapSearchTask:(id)arg1 finishedWithError:(id)arg2 foundItems:(id)arg3;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (id)onBehalfOfBundleIdentifier;
- (void)removeSearchSettings:(id)arg1;
- (id)searchSettings;

@end

