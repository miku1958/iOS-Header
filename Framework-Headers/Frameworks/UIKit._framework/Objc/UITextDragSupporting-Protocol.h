//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextDraggable-Protocol.h>

@class NSArray, UITextRange;
@protocol UITextDragFinishState, UITextDraggableGeometry;

@protocol UITextDragSupporting <UITextDraggable>
- (BOOL)allowsDraggingAttachments;
- (BOOL)allowsEditingTextAttributes;
- (void)draggingFinished:(id<UITextDragFinishState>)arg1;
- (void)draggingStarted;

@optional
- (NSArray *)_customDraggableObjectsForRange:(UITextRange *)arg1;
- (UITextRange *)_rangeOfCustomDraggableObjectsInRange:(UITextRange *)arg1;
- (BOOL)_shouldObscureInput;
- (id<UITextDraggableGeometry>)_textGeometry;
- (struct _NSRange)_visibleRangeWithLayout:(BOOL)arg1;
- (void)didGenerateCancelPreview:(id)arg1;
- (void)performCancelAnimations;
- (id)willGenerateCancelPreview;
@end
