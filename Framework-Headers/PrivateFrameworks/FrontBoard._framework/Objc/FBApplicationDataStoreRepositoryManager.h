//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/FBApplicationDataStoreRepositoryDelegate-Protocol.h>

@class FBPlistApplicationDataStoreRepository, FBSSerialQueue, LSApplicationWorkspace, NSString, NSURL;
@protocol FBApplicationDataStoreRepository;

@interface FBApplicationDataStoreRepositoryManager : NSObject <FBApplicationDataStoreRepositoryDelegate>
{
    NSURL *_dataStoreURL;
    FBPlistApplicationDataStoreRepository *_dataStore;
    LSApplicationWorkspace *_lsApplicationWorkspace;
    FBSSerialQueue *_queue;
}

@property (strong, nonatomic) id<FBApplicationDataStoreRepository> dataStore; // @synthesize dataStore=_dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) LSApplicationWorkspace *lsApplicationWorkspace; // @synthesize lsApplicationWorkspace=_lsApplicationWorkspace;
@property (readonly) Class superclass;

- (void)_handleApplicationInstalled:(id)arg1;
- (void)_handleApplicationsUninstalled:(id)arg1;
- (id)_initWithDataStore:(id)arg1 lsWorkspace:(id)arg2;
- (void)_performAfterDeferredWorkWithBlock:(CDUnknownBlockType)arg1;
- (id)_safeObjectForKey:(id)arg1 forApplication:(id)arg2 ofType:(Class)arg3;
- (void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)migrateApplicationStorePathIfNecessary;
- (void)objectChangedForKeys:(id)arg1 application:(id)arg2;
- (void)storeInvalidatedForIdentifier:(id)arg1;

@end
