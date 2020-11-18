//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/UIActivityItemSource-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, RCCaptureSession, RCComposition, RCSSavedRecordingService, _RCCompositionUndoItem;

@interface RCCompositionController : NSObject <UIActivityItemSource>
{
    BOOL _hasStartedRecording;
    NSMutableDictionary *_accessTokensByName;
    NSMutableArray *_undoableCompositionItemStack;
    NSMutableArray *_finalizeCompletionBlocks;
    BOOL _hasLoggedUsageStatisticRecordingEvent;
    unsigned long long _usageHistoryMask;
    _RCCompositionUndoItem *_trimCancelUndoItem;
    RCSSavedRecordingService *_sharedService;
    RCComposition *_composition;
    RCCaptureSession *_activeCaptureSession;
}

@property (readonly, nonatomic) RCCaptureSession *activeCaptureSession; // @synthesize activeCaptureSession=_activeCaptureSession;
@property (strong, nonatomic) RCComposition *composition; // @synthesize composition=_composition;
@property (readonly, nonatomic) unsigned long long countOfUndoableCompositions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isTopUndoableCompositionFromCapture;
@property (readonly, nonatomic) NSString *savedRecordingUUID;
@property (readonly) Class superclass;

+ (id)compositionControllerForComposedAVURL:(id)arg1;
+ (id)compositionControllerForSavedRecording:(id)arg1;
- (void).cxx_destruct;
- (id)_activitySourceRecording;
- (id)_compositionByReplacingDecomposedFragments:(id)arg1;
- (void)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(BOOL)arg1;
- (void)_eaccess_saveCompositionAfterAppendingInProgressCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAfterCommitingFinalizedCaptureDataSource:(id)arg1;
- (void)_eaccess_saveCompositionAndRecordingDuration:(BOOL)arg1;
- (void)_endAccessSessionWithToken:(id)arg1 forKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_endAccessSessions:(CDUnknownBlockType)arg1;
- (void)_finalizeComposedAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_nextCaptureWaveformDataSourceWithDestinationTimeRange:(CDStruct_73a5d3ca)arg1 isOverdub:(BOOL)arg2;
- (void)_setEditingFlag:(BOOL)arg1;
- (void)activeRecordingSessionWillFinish;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)beginAccessSessionToExportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)beginAccessSessionToPlayTimeRange:(CDStruct_73a5d3ca)arg1 readyToPlayBlock:(CDUnknownBlockType)arg2;
- (void)beginAccessSessionToTrimAsCopy:(BOOL)arg1 assetReadyBlock:(CDUnknownBlockType)arg2;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(CDStruct_73a5d3ca)arg2 isUndoable:(BOOL)arg3 isOverdub:(BOOL)arg4 sessionPreparedBlock:(CDUnknownBlockType)arg5 sessionFinishedBlock:(CDUnknownBlockType)arg6;
- (BOOL)compositionIsShareable;
- (void)dealloc;
- (void)deleteCompositionFromFileSystem;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (void)endAccessSessionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)endEditingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)endPreviewAccessSession;
- (void)endTrimAccessSessionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)finalizingComposedAssetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (BOOL)isCaptureSessionActive;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performCompositionUndoWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)performTrimModeCancelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prepareToBeginEditingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(BOOL)arg1 composeWaveform:(BOOL)arg2 canGenerateWaveformByProcessingAVURL:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)rcs_repairDecomposedFragmentMetadataIfNecessary;
- (void)reloadComposition;
- (void)sanitizeWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

