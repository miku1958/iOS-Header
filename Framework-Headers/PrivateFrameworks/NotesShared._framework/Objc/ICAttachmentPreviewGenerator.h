//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICProgressIndicatorTrackerDelegate-Protocol.h>

@class ICProgressIndicatorTracker, NSMutableSet, NSOperationQueue, NSString;

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate>
{
    NSOperationQueue *_asyncGeneratorQueue;
    NSOperationQueue *_costlyGeneratorQueue;
    NSOperationQueue *_generatorQueue;
    NSMutableSet *_attachmentIDsInProgress;
    NSMutableSet *_attachmentIDsToRetry;
    NSMutableSet *_attachmentIDsPending;
    ICProgressIndicatorTracker *_progressTracker;
    unsigned long long _previewGenerationState;
    long long _suspendCount;
}

@property (strong, nonatomic) NSOperationQueue *asyncGeneratorQueue; // @synthesize asyncGeneratorQueue=_asyncGeneratorQueue;
@property (strong, nonatomic) NSMutableSet *attachmentIDsInProgress; // @synthesize attachmentIDsInProgress=_attachmentIDsInProgress;
@property (strong, nonatomic) NSMutableSet *attachmentIDsPending; // @synthesize attachmentIDsPending=_attachmentIDsPending;
@property (strong, nonatomic) NSMutableSet *attachmentIDsToRetry; // @synthesize attachmentIDsToRetry=_attachmentIDsToRetry;
@property (strong, nonatomic) NSOperationQueue *costlyGeneratorQueue; // @synthesize costlyGeneratorQueue=_costlyGeneratorQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSOperationQueue *generatorQueue; // @synthesize generatorQueue=_generatorQueue;
@property (readonly) unsigned long long hash;
@property unsigned long long previewGenerationState; // @synthesize previewGenerationState=_previewGenerationState;
@property (strong, nonatomic) ICProgressIndicatorTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property (readonly) Class superclass;
@property (nonatomic) long long suspendCount; // @synthesize suspendCount=_suspendCount;

+ (id)sharedGenerator;
- (void).cxx_destruct;
- (void)attachmentDidLoad:(id)arg1;
- (void)attachmentWillBeDeleted:(id)arg1;
- (void)cancelAttachmentPreviewGeneration;
- (void)cloudContextFetchRecordChangeOperationDidFinish:(id)arg1;
- (void)dealloc;
- (void)generatePendingPreviewForAttachment:(id)arg1;
- (void)generatePendingPreviews;
- (void)generatePreviewIfNeededForAttachment:(id)arg1;
- (void)generatePreviewsIfNeeded;
- (id)init;
- (BOOL)isPreviewGenerationSupported;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)mediaDidLoad:(id)arg1;
- (void)operationComplete:(id)arg1;
- (void)progressIndicatorTrackerStartAnimation;
- (void)progressIndicatorTrackerStopAnimation;
- (void)resume;
- (void)setupAttachmentPreviewGeneratorObservers;
- (void)suspend;

@end

