//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTDiagnostics-Protocol.h>

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, RTDataProtectionManager, RTInvocationDispatcher, RTKeepAliveTransaction, RTMigrationManager;
@protocol OS_dispatch_queue;

@interface RTPersistenceManager : NSObject <RTDiagnostics>
{
    BOOL _legacyMigrationsComplete;
    RTKeepAliveTransaction *_markDirtyKeepAliveTransaction;
    NSObject<OS_dispatch_queue> *_queue;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    RTInvocationDispatcher *_dispatcher;
    RTInvocationDispatcher *_preMigrationDispatcher;
    RTDataProtectionManager *_dataProtectionManager;
    RTMigrationManager *_migrationManager;
    NSString *_storeName;
    NSString *_setupVersion;
}

@property (strong, nonatomic) RTDataProtectionManager *dataProtectionManager; // @synthesize dataProtectionManager=_dataProtectionManager;
@property (strong, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property (nonatomic) BOOL legacyMigrationsComplete; // @synthesize legacyMigrationsComplete=_legacyMigrationsComplete;
@property (strong, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property (strong, nonatomic) RTKeepAliveTransaction *markDirtyKeepAliveTransaction; // @synthesize markDirtyKeepAliveTransaction=_markDirtyKeepAliveTransaction;
@property (strong, nonatomic) RTMigrationManager *migrationManager; // @synthesize migrationManager=_migrationManager;
@property (strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property (strong, nonatomic) RTInvocationDispatcher *preMigrationDispatcher; // @synthesize preMigrationDispatcher=_preMigrationDispatcher;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (copy, nonatomic) NSString *setupVersion; // @synthesize setupVersion=_setupVersion;
@property (copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;

+ (id)diagnosticFiles;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_changeModelVersion:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_configureDirtyStateForEncryptedDataAvailability:(long long)arg1;
- (void)_createPrivateManagedObjectContext:(CDUnknownBlockType)arg1;
- (id)_latestCoreDataModelVersion;
- (id)_loadManagedObjectModelWithPath:(id)arg1;
- (id)_managedObjectModelDirectoryURL;
- (id)_managedObjectModelURL:(id)arg1;
- (void)_onDataProtectionChange:(id)arg1;
- (void)_onMigrationNotification:(id)arg1;
- (BOOL)_persistenceStackInitialized;
- (id)_persistentStoreURL;
- (void)_registerForNotifications;
- (void)_resetPersistentStoreAtURL:(id)arg1;
- (void)_setupPersistenceStack;
- (void)_setupPersistenceStack:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setupPersistenceStackForEncryptedDataAvailability:(long long)arg1;
- (id)_setupPersistentStoreCoordinatorWithObjectModel:(id)arg1 persistentStorePath:(id)arg2 error:(id *)arg3;
- (BOOL)_setupPersistentStoreWithCoordinator:(id)arg1 persistentStorePath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)_teardownPersistenceStack;
- (void)_unregisterForNotifications;
- (void)changeModelVersion:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createPrivateManagedObjectContext:(CDUnknownBlockType)arg1;
- (void)createPrivateManagedObjectContextForMigration:(CDUnknownBlockType)arg1;
- (void)createPrivateManagedObjectContextWithOptions:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithStoreName:(id)arg1 dataProtectionManager:(id)arg2 migrationManager:(id)arg3;
- (void)onDataProtectionChange:(id)arg1;
- (void)onMigrationNotification:(id)arg1;
- (void)resetPersistentStoreAtURL:(id)arg1;
- (void)shutdown;

@end

