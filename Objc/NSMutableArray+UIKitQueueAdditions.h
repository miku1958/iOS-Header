//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (UIKitQueueAdditions)
- (void)_kb_reverse;
- (BOOL)_listContainsOrderedItems;
- (void)_set_listContainsOrderedItems:(BOOL)arg1;
- (void)_set_syncQueue:(id)arg1;
- (id)_syncQueue;
- (id)_ui_dequeue;
- (void)_ui_enqueue:(id)arg1;
- (id)_ui_peek;
- (void)_uikbrtInsert:(id)arg1 after:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 before:(id)arg2;
- (void)_uikbrtInsert:(id)arg1 beforeItemPassingTest:(CDUnknownBlockType)arg2;
- (void)_uikbrtRemove:(id)arg1;
- (void)removeViewsFromSuperview;
@end

