//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUndoManager.h>

@interface NSUndoManager (IC)

@property (readonly, nonatomic) BOOL ic_isUndoingOrRedoing;

- (void)ic_performUndoGroup:(CDUnknownBlockType)arg1;
- (void)ic_performUndoGroupWithActionName:(id)arg1 undoGroup:(CDUnknownBlockType)arg2;
@end

