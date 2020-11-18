//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DCService, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL;

@interface DCDatabase : NSObject
{
    NSManagedObjectModel *_model;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    DCService *_service;
    NSURL *_databaseURL;
    NSManagedObjectContext *_managedObjectContext;
}

@property (strong, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property (readonly, nonatomic) NSManagedObjectModel *model; // @synthesize model=_model;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property (readonly, nonatomic) DCService *service; // @synthesize service=_service;

+ (id)_managedObjectModel;
+ (id)databaseForService:(id)arg1;
- (void).cxx_destruct;
- (id)_databaseDirectory;
- (BOOL)_databaseFileExists;
- (void)_setupManagedObjectContext;
- (id)allUploads;
- (void)deleteDatabase;
- (id)documentIdentifierForPath:(id)arg1;
- (id)initWithService:(id)arg1;
- (unsigned long long)numberOfPendingUploads;
- (id)otherMetadataForDocumentIdentifier:(id)arg1;
- (id)otherMetadataForDocumentIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)pathsForDocumentIdentifier:(id)arg1;
- (void)removeCancelledUpload:(id)arg1;
- (void)removeOtherMetadataForDocumentIdentifier:(id)arg1;
- (void)removePath:(id)arg1;
- (void)removeStoredLocalMetadataForDocumentIdentifier:(id)arg1;
- (void)removeUploadForPath:(id)arg1;
- (void)renamePath:(id)arg1 toPath:(id)arg2;
- (void)reset;
- (BOOL)save;
- (void)saveOtherMetadata:(id)arg1 forDocumentIdentifier:(id)arg2;
- (void)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2;
- (void)saveUploadFileURL:(id)arg1 forPath:(id)arg2;
- (void)saveUploadFileURL:(id)arg1 generationIdentifier:(id)arg2 taskIdentifier:(id)arg3 forPath:(id)arg4;
- (BOOL)saveWithError:(id *)arg1;
- (BOOL)saveWithError:(id *)arg1 rollbackOnFailure:(BOOL)arg2;
- (void)setDocumentIdentifier:(id)arg1 forPath:(id)arg2;
- (id)storedLocalMetadataForDocumentIdentifier:(id)arg1;
- (id)uploadForPath:(id)arg1;
- (id)uploadForTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2;
- (id)uploadPaths;

@end
