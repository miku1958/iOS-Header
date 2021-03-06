//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface CLSDBCache : NSObject
{
    BOOL _supportsVersioning;
    NSURL *_diskCacheURL;
    NSString *_dataModelName;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property (readonly, copy, nonatomic) NSString *dataModelName; // @synthesize dataModelName=_dataModelName;
@property (readonly, copy, nonatomic) NSURL *diskCacheURL; // @synthesize diskCacheURL=_diskCacheURL;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property (nonatomic) BOOL supportsVersioning; // @synthesize supportsVersioning=_supportsVersioning;

+ (id)applicationDataUrlQueueWithURL:(id)arg1;
+ (id)currentApplicationDataUrlQueue;
+ (id)defaultCache;
+ (id)defaultCacheName;
+ (id)diskCacheWithName:(id)arg1;
+ (void)initialize;
+ (BOOL)locationIsValidForDatabaseAtURL:(id)arg1;
+ (id)urlForGraphApplicationData;
- (void).cxx_destruct;
- (void)_resetCoreDataStack;
- (BOOL)_save;
- (void)_saveAsync;
- (id)formatVersion;
- (id)initAtURL:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1;
- (id)initWithDiskCacheName:(id)arg1 dataModelName:(id)arg2;
- (void)invalidateDiskCaches;
- (void)invalidateMemoryCaches;
- (BOOL)save;

@end

