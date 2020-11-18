//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSNumber, NSPersistentStoreCoordinator;
@protocol ACDDatabaseConnectionDelegate, NSObject;

__attribute__((visibility("hidden")))
@interface ACDDatabaseConnection : NSObject
{
    id<NSObject> _managedObjectContextDidSaveObserver;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
    id<ACDDatabaseConnectionDelegate> _delegate;
}

@property (weak, nonatomic) id<ACDDatabaseConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSNumber *keychainVersion;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property (strong, nonatomic) NSNumber *version;

+ (id)new;
- (void).cxx_destruct;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)arg1;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (void)_handleManagedObjectContextError:(id)arg1;
- (void)_managedObjectContextDidSave:(id)arg1;
- (id)_managedObjectModel;
- (id)_persistentStore;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)arg1;
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (void)dealloc;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)existingObjectWithURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)managedObjectIDForURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (BOOL)saveWithError:(id *)arg1;
- (BOOL)saveWithError:(id *)arg1 rollbackOnFailure:(BOOL)arg2;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;

@end
