//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICAttachment, ICSelectorDelayer, NSManagedObjectContext, PKDrawing;

@interface ICInlineDrawingChangeCoalescer : NSObject
{
    ICAttachment *_attachment;
    ICSelectorDelayer *_processChangesSelectorDelayer;
    PKDrawing *_latestDrawing;
    unsigned long long _numberOfChanges;
    NSManagedObjectContext *_workerContext;
}

@property (strong, nonatomic) ICAttachment *attachment; // @synthesize attachment=_attachment;
@property (strong, nonatomic) PKDrawing *latestDrawing; // @synthesize latestDrawing=_latestDrawing;
@property (nonatomic) unsigned long long numberOfChanges; // @synthesize numberOfChanges=_numberOfChanges;
@property (strong, nonatomic) ICSelectorDelayer *processChangesSelectorDelayer; // @synthesize processChangesSelectorDelayer=_processChangesSelectorDelayer;
@property (strong, nonatomic) NSManagedObjectContext *workerContext; // @synthesize workerContext=_workerContext;

+ (void)generateMissingOrOutdatedHandwritingSummariesInContext:(id)arg1;
+ (id)handwritingSummaryAttachmentsInContext:(id)arg1;
+ (id)missingOrOutdatedHandwritingSummaryAttachmentIDsInContext:(id)arg1;
+ (void)purgeHandwritingSummariesInContext:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawingDataDidChange:(id)arg1;
- (BOOL)hasChanges;
- (id)initWithAttachment:(id)arg1;
- (void)mergeDrawingChanges;
- (void)mergeDrawingWithDrawing:(id)arg1;
- (void)processIndexableContentWithCompletion:(CDUnknownBlockType)arg1;
- (id)retrieveAndClearLatestDrawingToMerge;
- (void)updateNowIfNecessary;
- (void)updateVersionIfNeededForAttachment:(id)arg1 withDrawing:(id)arg2;

@end
