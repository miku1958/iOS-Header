//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDAssetDownloadScheduler, NSSet, NSString;

@interface EDMailDynamicDataAsset : NSObject <EFLoggable>
{
    BOOL _shouldIgnoreUserAccountDomains;
    NSSet *_ignoredDomains;
    EDAssetDownloadScheduler *_scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSSet *ignoredDomains; // @synthesize ignoredDomains=_ignoredDomains;
@property (strong, nonatomic) EDAssetDownloadScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property BOOL shouldIgnoreUserAccountDomains; // @synthesize shouldIgnoreUserAccountDomains=_shouldIgnoreUserAccountDomains;
@property (readonly) Class superclass;

+ (id)_ignoredDomainsFallback;
+ (id)log;
- (void).cxx_destruct;
- (void)_downloadAssetCatalogWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queryForAssetWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateIgnoredDomains:(id)arg1;
- (void)_updateStateFromAsset:(id)arg1;
- (id)init;
- (BOOL)shouldIgnoreDomain:(id)arg1;

@end

