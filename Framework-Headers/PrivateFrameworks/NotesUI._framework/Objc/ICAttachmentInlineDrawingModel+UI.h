//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentInlineDrawingModel.h>

@class NSObject, PKDrawing;
@protocol OS_dispatch_queue;

@interface ICAttachmentInlineDrawingModel (UI)

@property (readonly, nonatomic) PKDrawing *handwritingRecognitionDrawing;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *handwritingRecognitionDrawingQueue;
@property (nonatomic, getter=isHandwritingRecognitionEnabled) BOOL handwritingRecognitionEnabled;
@property (nonatomic, getter=isTitleQueryEnabled) BOOL titleQueryEnabled;

- (id)activityItem;
- (id)activityItems;
- (BOOL)actuallyMergeWithDrawing:(id)arg1;
- (void)attachmentModelDealloc;
- (struct UIImage *)imageForActivityItem;
- (BOOL)mergeWithDrawing:(id)arg1;
- (BOOL)mergeWithMergeableData:(id)arg1;
- (id)mergeableDataForCopying;
- (id)newDrawingFromMergeableData;
- (void)setHandwritingRecognitionDrawing:(id)arg1;
- (void)setHandwritingRecognitionDrawingQueue:(id)arg1;
- (void)setTitleQuery:(id)arg1;
- (id)titleQuery;
- (void)titleQuery:(id)arg1 didUpdateWithItem:(id)arg2;
@end

