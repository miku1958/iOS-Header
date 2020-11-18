//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSFetchedResultsControllerDelegate-Protocol.h>

@class BKSProcessAssertion, NSArray, NSFetchRequest, NSFetchedResultsController, NSManagedObjectContext, NSManagedObjectModel, NSMapTable, NSOperationQueue, NSPersistentStoreCoordinator, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RadioModel : NSObject <NSFetchedResultsControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSOperationQueue *_backgroundCleanupQueue;
    BKSProcessAssertion *_backgroundProcessAssertion;
    long long _backgroundTaskCount;
    NSObject<OS_dispatch_source> *_backgroundTaskInvalidateTimerSource;
    NSManagedObjectContext *_context;
    BOOL _isBackgroundModel;
    NSManagedObjectModel *_model;
    int _modelChangedToken;
    BOOL _modelChangedTokenIsValid;
    int _modelDeletedToken;
    BOOL _modelDeletedTokenIsValid;
    NSFetchedResultsController *_stationFetchedResultsController;
    NSFetchRequest *_stationFetchRequest;
    NSMapTable *_stationToSkipControllerMapTable;
    NSPersistentStoreCoordinator *_storeCoordinator;
    long long _transactionCount;
}

@property (readonly, nonatomic) NSArray *allStations;
@property (nonatomic) unsigned long long authenticatedAccountIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *featuredStations;
@property (copy, nonatomic) NSString *globalHash;
@property (nonatomic) unsigned long long globalVersion;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *previewStations;
@property (readonly, copy, nonatomic) NSArray *reportProblemIssueTypes;
@property (copy, nonatomic) NSArray *stationSortOrdering;
@property (readonly, nonatomic) NSArray *stations;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *userStations;

+ (id)_persistentStoreConfigurationOptions;
+ (void)_postAccountDidDeauthenticateNotification;
+ (id)_radioDatabasePath;
+ (id)_radioDirectoryPath;
+ (id)backgroundModel;
+ (void)deleteAllData;
+ (void)initialize;
+ (id)sharedModel;
- (void).cxx_destruct;
- (void)_addTimestamp:(double)arg1 toManagedSkipHistory:(id)arg2 withSkipIntervalForCulling:(double)arg3;
- (id)_arrayByReplacingManagedObjectsInArray:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_contextDidSaveNotification:(id)arg1;
- (void)_createRadioDirectoryAndDatabaseIfNecessary;
- (id)_databasePropertyValueForKey:(id)arg1;
- (void)_defaultRadioModelInitialization;
- (void)_endBackgroundTaskAssertion;
- (id)_init;
- (id)_initBackgroundModelWithPersistentStoreCoordinator:(id)arg1;
- (void)_insertRevisionWithStationID:(long long)arg1 revisionType:(long long)arg2;
- (id)_managedSkipHistoryWithSkipIdentifier:(id)arg1;
- (id)_managedSkipHistoryWithStationHash:(id)arg1;
- (id)_managedSkipHistoryWithStationID:(long long)arg1;
- (id)_newManagedSkipHistoryWithSkipIdentifier:(id)arg1;
- (id)_newManagedSkipHistoryWithStationHash:(id)arg1;
- (id)_newManagedSkipHistoryWithStationID:(long long)arg1;
- (unsigned long long)_numberOfSkipsUsedWithSkipTimestamps:(id)arg1 currentTimestamp:(double)arg2 skipInterval:(double)arg3 returningEarliestSkipTimestamp:(double *)arg4;
- (void)_performTransactionAndSave:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_postContextDidChangeNotification:(id)arg1;
- (void)_prepareModel;
- (void)_registerStationSkipController:(id)arg1;
- (void)_resetModel;
- (id)_setByReplacingManagedObjectsInSet:(id)arg1;
- (void)_setDatabasePropertyValue:(id)arg1 forKey:(id)arg2;
- (void)_unregisterStationSkipController:(id)arg1;
- (BOOL)canSkipTracksForStation:(id)arg1;
- (id)context;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (id)convertObject:(id)arg1;
- (id)convertObjects:(id)arg1;
- (id)convertObjectsInSet:(id)arg1;
- (void)copySkipHistoryFromStationHash:(id)arg1 toStationID:(long long)arg2;
- (long long)databaseVersion;
- (void)dealloc;
- (void)deleteAllData;
- (void)deletePreviewStation:(id)arg1;
- (void)deleteStation:(id)arg1;
- (void)deleteStationWithID:(long long)arg1;
- (void)enumerateRevisionsSinceRevisionID:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)newFeaturedStationWithDictionary:(id)arg1;
- (id)newPreviewStationWithDictionary:(id)arg1;
- (id)newStationWithDictionary:(id)arg1;
- (void)noteTrackWasSkippedForStation:(id)arg1;
- (void)noteTrackWasSkippedForStation:(id)arg1 onDate:(id)arg2;
- (unsigned long long)numberOfTracksSkippedForStation:(id)arg1;
- (unsigned long long)numberOfTracksSkippedForStation:(id)arg1 returningEarliestSkipDate:(id *)arg2;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)performWriteTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)removeTrackPlaybackDescriptor:(id)arg1 fromStation:(id)arg2;
- (void)removeTrackPlaybackDescriptorQueuesForAllStations;
- (void)setDatabaseVersion:(long long)arg1;
- (void)setReportProblemIssueTypes:(id)arg1;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1 forStation:(id)arg2;
- (id)skipControllerForStation:(id)arg1;
- (id)stationWithHash:(id)arg1;
- (id)stationWithID:(long long)arg1;
- (id)stationWithPersistentID:(long long)arg1;
- (id)stationWithStationStringID:(id)arg1;

@end

