//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariCore/WBSRemotePlistControllerDelegate-Protocol.h>

@class NSString, WBSAutoFillAssociatedDomainsManager, WBSPasswordGenerationManager, WBSRemotePlistController;

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate>
{
    WBSPasswordGenerationManager *_passwordGenerationManager;
    WBSAutoFillAssociatedDomainsManager *_associatedDomainsManager;
    WBSRemotePlistController *_remotePlistController;
}

@property (readonly, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WBSPasswordGenerationManager *passwordGenerationManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
- (id)_passwordRequirementsByDomainFromCurrentSnapshot;
- (void)beginLoadingQuirksFromDisk;
- (void)didDownloadPlistForRemotePlistController:(id)arg1;
- (id)init;
- (id)initWithBuiltInQuirksURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6;
- (void)prepareForTermination;

@end

