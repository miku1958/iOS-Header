//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@class ICDrawing, ICDrawingVersionedDocument;

@interface ICAttachmentDrawingModel : ICAttachmentModel
{
    ICDrawingVersionedDocument *_drawingDocument;
    BOOL _observingAttachment;
}

@property (readonly, nonatomic) ICDrawing *drawing;
@property (nonatomic) BOOL observingAttachment; // @synthesize observingAttachment=_observingAttachment;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)attachmentIsDeallocating:(id)arg1;
- (BOOL)canSaveURL;
- (void)dealloc;
- (id)drawingDocument;
- (void)drawingPreviewIsUpToDate;
- (BOOL)hasPreviews;
- (id)initWithAttachment:(id)arg1;
- (BOOL)mergeWithMergeableData:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)previewImageOrientation;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (id)previewImageURL;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)saveURL;
- (id)sharedDrawingController;
- (BOOL)shouldSyncPreviewImageToCloud:(id)arg1;
- (BOOL)showThumbnailInNoteList;
- (void)startObservingAttachment;
- (void)stopObservingAttachment:(id)arg1;
- (BOOL)supportsQuickLook;
- (void)writeMergeableData;

@end

