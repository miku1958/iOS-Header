//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/NSFetchedResultsControllerDelegate-Protocol.h>

@class NSArray, NSFetchRequest, NSFetchedResultsController, NSManagedObjectContext, NSManagedObjectModel, NSString;

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate>
{
    int _notifyToken;
    NSManagedObjectModel *_model;
    NSManagedObjectContext *_context;
    NSFetchRequest *_savedRecordingsFetchRequest;
    NSFetchedResultsController *_fetchController;
    BOOL _valid;
    long long _isSavingDisabledCount;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) long long currentEntityRevision;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long isSavingDisabledCount; // @synthesize isSavingDisabledCount=_isSavingDisabledCount;
@property (readonly, nonatomic) NSArray *recordings;
@property (readonly) Class superclass;
@property BOOL valid; // @synthesize valid=_valid;

+ (id)_copyFileIntoRecordingsDirectory:(id)arg1;
+ (id)_dateFormatterComponentFormatting;
+ (void)_importImportableRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)creationDateFromStandardRecordingURL:(id)arg1;
+ (void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)initialize;
+ (id)savedRecordingsDirectory;
+ (id)sharedModelForQueue:(id)arg1;
+ (id)standardURLForRecordingWithCreationDate:(id)arg1;
- (void).cxx_destruct;
- (BOOL)__saveManagedObjectContext:(id *)arg1;
- (id)_allTitles;
- (void)_deleteOrphanedEntityRevisionsAndSave:(BOOL)arg1;
- (void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)_entityRevisionWithRecordingID:(long long)arg1;
- (void)_enumerateFetchedRecordingTitles:(CDUnknownBlockType)arg1;
- (void)_enumerateSavedRecordingsAndEntityRevisionInArrayOfManagedObjects:(id)arg1 createIfNeeded:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (void)_handleExternalModelDidSaveNotification:(id)arg1;
- (void)_handleInternalModelDidSaveNotification:(id)arg1;
- (id)_initWithManagedObjectContext:(id)arg1;
- (id)_labelPresetsForQuery:(id)arg1;
- (void)_migrateDatabaseIfNecessary;
- (long long)_nextEntityRevisionID;
- (long long)_nextRecordingID;
- (void)_postRecordingsModelDidChangeForNotificationName:(id)arg1;
- (id)_recordingWithRecordingID:(long long)arg1;
- (BOOL)_saveIfNecessary:(id *)arg1;
- (void)_scheduleAutomaticRecordingDeletions;
- (void)_setNextEntityRevisionID:(long long)arg1 save:(BOOL)arg2;
- (void)_setNextRecordingID:(long long)arg1 save:(BOOL)arg2;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)dealloc;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (void)deleteRecording:(id)arg1;
- (id)entityRevisionsForRecording:(id)arg1;
- (void)enumerateExistingRecordingsSinceEntityRevision:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateExistingRecordingsWithBlock:(CDUnknownBlockType)arg1;
- (id)fetchSavedRecordingIDs;
- (void)finishSaveByUpdatingSearchableIndexWithChangeContext:(id)arg1;
- (BOOL)hasExistingRecordingForAudioFile:(id)arg1;
- (id)indexPathForRecording:(id)arg1;
- (id)init;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customTitleBase:(id)arg4;
- (id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1;
- (id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performWithSavingDisabled:(CDUnknownBlockType)arg1;
- (void)prepareToSaveByUpdatingEntityRevisionsWithChangeContext:(id)arg1;
- (id)recordingAtIndex:(unsigned long long)arg1;
- (id)recordingWithID:(id)arg1;
- (id)recordingWithITunesPersistentID:(long long)arg1;
- (id)recordingWithURIRepresentation:(id)arg1;
- (id)recordingsForSpotlightSearch:(id)arg1;
- (void)saveIfNecessary;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(BOOL)arg3;
- (id)valueForDatabaseProperty:(id)arg1;

@end
