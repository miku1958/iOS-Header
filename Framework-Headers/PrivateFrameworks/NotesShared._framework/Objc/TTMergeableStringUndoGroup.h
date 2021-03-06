//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/TTMergeableStringUndoCommand-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TTMergeableStringUndoGroup : NSObject <TTMergeableStringUndoCommand>
{
    NSMutableDictionary *_seen;
    NSMutableArray *_commands;
}

@property (strong, nonatomic) NSMutableArray *commands; // @synthesize commands=_commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *seen; // @synthesize seen=_seen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCommand:(id)arg1;
- (BOOL)addSeenRange:(struct TopoIDRange)arg1;
- (BOOL)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (void)closeGroup;
- (BOOL)hasTopoIDsThatCanChange;
- (id)init;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;

@end

