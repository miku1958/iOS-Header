//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class PKInk, PKLinedPaper;
@protocol UITextViewDrawingDelegate;

@interface UITextView (UITextViewDrawing)

@property (weak, nonatomic) id<UITextViewDrawingDelegate> drawingDelegate;
@property (nonatomic, getter=isFingerDrawingEnabled) BOOL fingerDrawingEnabled;
@property (copy, nonatomic) PKInk *ink;
@property (copy, nonatomic) PKLinedPaper *linedPaper;
@property (nonatomic, getter=isStylusDrawingEnabled) BOOL stylusDrawingEnabled;

- (BOOL)_canAddDrawing;
- (BOOL)_canAddStroke;
- (BOOL)_canInsertDrawing;
- (BOOL)_canInsertDrawingInRange:(struct _NSRange)arg1;
- (void)_clearDrawingInfo;
- (void)_didEndStroke;
- (id)_drawingInfo;
- (void)_growView:(id)arg1 textAttachment:(id)arg2 atCharacterIndex:(long long)arg3 step:(double)arg4 stop:(CDUnknownBlockType)arg5;
- (void)_insertDrawing:(id)arg1;
- (void)_insertDrawingWithTap:(id)arg1;
- (id)_insertEmptyDrawingAttachmentAtLocation:(long long)arg1;
- (id)_pkTiledView;
- (void)_removeDrawingAttachment:(id)arg1 withView:(id)arg2 forDeletion:(BOOL)arg3;
- (id)_textRangeFromRange:(struct _NSRange)arg1;
- (void)_undoDrawingBounds:(struct CGRect)arg1 viewBounds:(struct CGRect)arg2 ofAttachmentUUID:(id)arg3;
- (void)_willBeginNewStrokeForTouch:(id)arg1;
@end

