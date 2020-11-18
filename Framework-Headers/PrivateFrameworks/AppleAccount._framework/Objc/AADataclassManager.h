//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface AADataclassManager : NSObject
{
    ACAccountStore *_store;
}

+ (id)appBundleIdentifierDictionary;
+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_filteredDataclassesForAccountClass:(id)arg1;
- (BOOL)_hideDataclassWhenAppRemoved:(id)arg1;
- (BOOL)_isRestrictedForDataclass:(id)arg1;
- (id)_nonVisibleServiceDataclass;
- (BOOL)_shouldProvisionNotesForAccount:(id)arg1;
- (id)_userVisibleDataclasses;
- (id)appBundleIdentifierForDataclass:(id)arg1;
- (id)blackListedMacOSDataclasses;
- (id)buildAutoEnableableDataclassesAndActionsForAccount:(id)arg1 dataclassesForEnablement:(id)arg2;
- (BOOL)canAutoEnableDataclass:(id)arg1 forAccount:(id)arg2;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:(id)arg1 fromAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)filterDataclassesForPossibleAutoEnablementForAccount:(id)arg1;
- (id)filteredServerProvidedFeatures:(id)arg1 forAccount:(id)arg2;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (BOOL)isDataclassActionSafeForAutoEnablement:(id)arg1;
- (BOOL)isSystemAppRestrictedOrRemovedForDataclass:(id)arg1;
- (BOOL)shouldProvisionDataclass:(id)arg1 forAccount:(id)arg2;
- (id)whitelistedDataclassesForAppleAccountClassBasic;
- (id)whitelistedDataclassesForAppleAccountClassFull;

@end
