//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAccount.h>

#import <DACardDAV/CoreDAVAccountInfoProvider-Protocol.h>
#import <DACardDAV/CoreDAVDiscoveryTaskGroupDelegate-Protocol.h>
#import <DACardDAV/CoreDAVLogDelegate-Protocol.h>
#import <DACardDAV/CoreDAVOAuthInfoProvider-Protocol.h>

@class CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, DACoreDAVTaskManager, NSString;

@interface CardDAVAccount : DAAccount <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate, CoreDAVDiscoveryTaskGroupDelegate>
{
    int _cardDAVAccountVersion;
    CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;
    DACoreDAVLogger *_curLogger;
}

@property (readonly, nonatomic) int cardDAVAccountVersion; // @synthesize cardDAVAccountVersion=_cardDAVAccountVersion;
@property (strong, nonatomic) CoreDAVDiscoveryTaskGroup *checkValidityTaskGroup; // @synthesize checkValidityTaskGroup=_checkValidityTaskGroup;
@property (strong, nonatomic) DACoreDAVLogger *curLogger; // @synthesize curLogger=_curLogger;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;

+ (id)addressBookConstraintsPlistPath;
- (void).cxx_destruct;
- (void)_massageAddedOrModifiedVCard:(id)arg1;
- (id)copyImageContentsAtURL:(id)arg1 outError:(id *)arg2;
- (void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;
- (long long)coreDAVLogLevel;
- (void)coreDAVLogTransmittedDataPartial:(id)arg1;
- (long long)coreDAVOutputLevel;
- (void)coreDAVTransmittedDataFinished;
- (void)dealloc;
- (void)discoverInitialPropertiesWithConsumer:(id)arg1;
- (void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3;
- (BOOL)handleTrustChallenge:(id)arg1;
- (id)initWithBackingAccountInfo:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
- (unsigned long long)oauthVariant;
- (id)onBehalfOfBundleIdentifier;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)serverComplianceClasses;
- (id)serverRoot;
- (void)setServerComplianceClasses:(id)arg1;
- (BOOL)shouldLogTransmittedData;
- (id)spinnerIdentifiers;
- (id)userAgentHeader;
- (id)wellKnownPaths;

@end

