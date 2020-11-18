//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSFilePresenter-Protocol.h>
#import <UIKit/NSProgressReporting-Protocol.h>

@class NSDate, NSDocumentDifferenceSize, NSLock, NSMutableArray, NSOperationQueue, NSProgress, NSSet, NSString, NSTimer, NSURL, NSUndoManager, NSUserActivity;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface UIDocument : NSObject <NSFilePresenter, NSProgressReporting>
{
    NSUserActivity *_currentUserActivity;
    NSLock *_activityContinuationLock;
    NSURL *_fileURL;
    NSString *_fileType;
    NSString *_localizedName;
    NSUndoManager *_undoManager;
    NSDate *_fileModificationDate;
    NSObject<OS_dispatch_queue> *_fileAccessQueue;
    NSObject<OS_dispatch_queue> *_openingQueue;
    NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;
    NSOperationQueue *_filePresenterQueue;
    id _differenceDueToRecentChanges;
    id _differenceSincePreservingPreviousVersion;
    id _differenceSinceSaving;
    NSTimer *_autosavingTimer;
    double _lastSaveTime;
    double _lastPreservationTime;
    id _versionWithoutRecentChanges;
    NSMutableArray *_versions;
    NSLock *_documentPropertyLock;
    id _alertPresenter;
    id _progressSubscriber;
    struct __docFlags {
        unsigned int inClose:1;
        unsigned int isOpen:1;
        unsigned int inOpen:1;
        unsigned int isAutosavingBecauseOfTimer:1;
        unsigned int versionWithoutRecentChangesIsNotLastOpened:1;
        unsigned int ignoreUndoAndRedoNotifications:1;
        unsigned int editingTemporarilyDisabled:1;
        unsigned int editingDisabledDueToPermissions:1;
        unsigned int isRegisteredAsFilePresenter:1;
        unsigned int movingFile:1;
        unsigned int savingError:1;
        unsigned int inConflict:1;
        unsigned int needToStopAccessingSecurityScopedResource:1;
    } _docFlags;
    NSProgress *_progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDocumentDifferenceSize *differenceDueToRecentChanges; // @synthesize differenceDueToRecentChanges=_differenceDueToRecentChanges;
@property (readonly, nonatomic) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion; // @synthesize differenceSincePreservingPreviousVersion=_differenceSincePreservingPreviousVersion;
@property (readonly, nonatomic) NSDocumentDifferenceSize *differenceSinceSaving; // @synthesize differenceSinceSaving=_differenceSinceSaving;
@property (readonly) unsigned long long documentState;
@property (copy) NSDate *fileModificationDate;
@property (readonly, copy) NSString *fileType;
@property (readonly) NSURL *fileURL;
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *localizedName;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, strong) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (strong, nonatomic, getter=progress, setter=_setProgress:) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) NSString *savingFileType;
@property (readonly) Class superclass;
@property (strong) NSUndoManager *undoManager;

+ (void)_autosavingTimerDidFireSoContinue:(id)arg1;
+ (id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4;
+ (id)_fileModificationDateForURL:(id)arg1;
+ (void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4;
+ (id)_typeForContentsOfURL:(id)arg1 error:(id *)arg2;
+ (BOOL)_url:(id)arg1 matchesURL:(id)arg2;
- (void).cxx_destruct;
- (id)_activityTypeIdentifierForCloudDocument:(BOOL *)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_autosaveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_autosavingCompletedSuccessfully:(BOOL)arg1;
- (double)_autosavingDelay;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)_clearUserActivity;
- (BOOL)_coordinateWritingItemAtURL:(id)arg1 error:(id *)arg2 byAccessor:(CDUnknownBlockType)arg3;
- (BOOL)_documentIsUbiquitous;
- (id)_fileOpeningQueue;
- (void)_finishSavingToURL:(id)arg1 forSaveOperation:(long long)arg2 changeCount:(id)arg3;
- (BOOL)_hasSavingError;
- (BOOL)_hasUnsavedChanges;
- (void)_invalidateCurrentUserActivity;
- (BOOL)_isEditingDisabledDueToPermissions;
- (BOOL)_isEditingTemporarilyDisabled;
- (BOOL)_isInConflict;
- (BOOL)_isInOpen;
- (BOOL)_isOpen;
- (void)_lockFileAccessQueueAndPerformBlock:(CDUnknownBlockType)arg1;
- (void)_manageUserActivity;
- (void)_performBlock:(CDUnknownBlockType)arg1 synchronouslyOnQueue:(id)arg2;
- (void)_performBlockSynchronouslyOnMainThread:(CDUnknownBlockType)arg1;
- (id)_presentableFileNameForSaveOperation:(long long)arg1 url:(id)arg2;
- (void)_progressPublished:(id)arg1;
- (void)_progressUnpublished;
- (void)_reallyManageUserActivity;
- (void)_registerAsFilePresenterIfNecessary;
- (void)_releaseUndoManager;
- (void)_rescheduleAutosaving;
- (void)_saveUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_scheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2;
- (void)_sendStateChangedNotification;
- (void)_setEditingDisabledDueToPermissions:(BOOL)arg1;
- (void)_setEditingTemporarilyDisabled:(BOOL)arg1;
- (void)_setFileURL:(id)arg1;
- (void)_setHasSavingError:(BOOL)arg1;
- (void)_setInConflict:(BOOL)arg1;
- (void)_setInOpen:(BOOL)arg1;
- (void)_setOpen:(BOOL)arg1;
- (void)_setUserActivity:(id)arg1;
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;
- (id)_titleForActivityContinuation;
- (void)_unlockFileAccessQueue;
- (void)_unregisterAsFilePresenterIfNecessary;
- (void)_updateConflictState;
- (void)_updateLastUsedDate;
- (void)_updateLocalizedName;
- (void)_updatePermissionsState:(BOOL)arg1;
- (id)_userActivityWithActivityType:(id)arg1;
- (id)_userInfoForActivityContinuation;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)autosaveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)changeCountTokenForSaveOperation:(long long)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)contentsForType:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)disableEditing;
- (void)enableEditing;
- (id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(long long)arg2 error:(id *)arg3;
- (id)fileNameExtensionForType:(id)arg1 saveOperation:(long long)arg2;
- (void)finishedHandlingError:(id)arg1 recovered:(BOOL)arg2;
- (void)handleError:(id)arg1 userInteractionPermitted:(BOOL)arg2;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)arg1;
- (void)presentedItemDidLoseVersion:(id)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)presentedItemDidResolveConflictVersion:(id)arg1;
- (void)presentedItemHasUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
- (void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
- (void)presentedSubitemDidAppearAtURL:(id)arg1;
- (void)presentedSubitemDidChangeAtURL:(id)arg1;
- (BOOL)readFromURL:(id)arg1 error:(id *)arg2;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (void)restoreUserActivityState:(id)arg1;
- (void)revertToContentsOfURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveToURL:(id)arg1 forSaveOperation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setFileType:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (void)updateChangeCount:(long long)arg1;
- (void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(long long)arg2;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivity;
- (void)userInteractionNoLongerPermittedForError:(id)arg1;
- (BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(long long)arg4 error:(id *)arg5;
- (BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;

@end
