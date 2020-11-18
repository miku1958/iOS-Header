//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class NSArray, UIView;
@protocol MFDraggableItem;

@protocol MFMultiDragSource <NSObject>
- (BOOL)allowsDrag;
- (void)animatePlaceholderForDragFailureWithItems:(NSArray *)arg1;
- (void)dragCompletedWithItems:(NSArray *)arg1 success:(BOOL)arg2;
- (void)dragStartedWithItems:(NSArray *)arg1;
- (struct CGRect)frameForDraggedItem:(id<MFDraggableItem>)arg1 isPivotView:(out BOOL *)arg2;
- (NSArray *)itemsForDragAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldCollapseMultipleItems;
- (UIView *)viewForDragSource;
- (UIView *)viewForDraggedItem:(id<MFDraggableItem>)arg1 atScale:(double)arg2;
@end

