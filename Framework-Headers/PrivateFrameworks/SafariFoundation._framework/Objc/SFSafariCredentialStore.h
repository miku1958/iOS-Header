//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SFSafariCredentialStore : NSObject
{
}

+ (void)_approvedAndValidSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_approvedSharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)_bestDomainFromApprovedDomainsForWebCredentials:(id)arg1 appLinks:(id)arg2 continuity:(id)arg3 appID:(id)arg4 allDomains:(id *)arg5;
+ (id)_credentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 savedPasswords:(id)arg3;
+ (void)_getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 shouldAnalyzeExistingCredentials:(BOOL)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (void)_getCredentialsForAppWithApprovedAndValidSharedWebCredentialsDatabaseEntries:(id)arg1 websiteURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_getExternalCredentialsMatchingSharedWebCredentialsDatabaseEntries:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_highLevelDomainsFromDatabaseEntries:(id)arg1;
+ (BOOL)_savedPassword:(id)arg1 isRelatedToEntryHighLevelDomains:(id)arg2 andWebsiteURL:(id)arg3;
+ (void)_sharedWebCredentialsDatabaseEntriesForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_sortCredentials:(id)arg1 usingApprovedSharedWebCredentialsDatabaseEntries:(id)arg2;
+ (void)bestDomainForAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)bestDomainForAutoFillFromDomains:(id)arg1 appID:(id)arg2;
+ (void)getAllApprovedSharedWebCredentialsEntries:(CDUnknownBlockType)arg1;
+ (void)getAllowedActionForAppCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 user:(id)arg3 password:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)getApprovedSharedWebCredentialsEntriesForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getApprovedSharedWebCredentialsEntriesSortedByHighestValueForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getCanSaveCredentialsWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getCredentialsForAppWithAppID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getCredentialsForAppWithAppID:(id)arg1 externallyVerifiedAndApprovedSharedWebCredentialDomains:(id)arg2 websiteURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)getCredentialsForAppWithAppID:(id)arg1 websiteURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)isAppAutoFillAvailable;
+ (BOOL)isRemoteAutoFillAvailable;
+ (id)textSuggestionHeaderForExternalCredential:(id)arg1;
+ (id)titleForPasswordCredentialIdentity:(id)arg1 formURL:(id)arg2;

@end

