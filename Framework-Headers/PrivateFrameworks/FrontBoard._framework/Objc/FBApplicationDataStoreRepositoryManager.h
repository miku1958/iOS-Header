//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoard/FBApplicationDataStoreRepositoryDelegate-Protocol.h>

@class FBSqliteApplicationDataStoreRepository, LSApplicationWorkspace, NSString, NSURL;
@protocol FBApplicationDataStoreRepository, OS_dispatch_queue;

@interface FBApplicationDataStoreRepositoryManager : NSObject <FBApplicationDataStoreRepositoryDelegate>
{
    NSURL *_dataStoreURL;
    FBSqliteApplicationDataStoreRepository *_dataStore;
    LSApplicationWorkspace *_lsApplicationWorkspace;
    NSObject<OS_dispatch_queue> *_deferredWorkQueue;
}

@property (strong, nonatomic) id<FBApplicationDataStoreRepository> dataStore; // @synthesize dataStore=_dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) LSApplicationWorkspace *lsApplicationWorkspace; // @synthesize lsApplicationWorkspace=_lsApplicationWorkspace;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleApplicationInstalled:(id)arg1;
- (id)_initWithDataStore:(id)arg1 lsWorkspace:(id)arg2;
- (void)_performAfterDeferredWork:(CDUnknownBlockType)arg1;
- (id)_safeObjectForKey:(id)arg1 forApplication:(id)arg2 ofType:(Class)arg3;
- (void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
- (void)dealloc;
- (id)init;
- (void)migrateApplicationStorePathIfNecessary;
- (BOOL)migrateFromApplicationStore:(id)arg1 toApplicationStore:(id)arg2 error:(id *)arg3;
- (BOOL)migrateFromPlistStoreAtURL:(id)arg1 toSqliteStoreAtURL:(id)arg2 error:(id *)arg3;
- (void)objectChangedForKeys:(id)arg1 application:(id)arg2;
- (BOOL)removeStoreAtURL:(id)arg1 error:(out id *)arg2;
- (void)storeInvalidatedForIdentifier:(id)arg1;
- (id)urlByAppendingString:(id)arg1 toURL:(id)arg2;

@end

