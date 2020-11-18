//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregator : NSObject
{
    CDUnknownBlockType _updateBlock;
    NSCountedSet *_delayedKeys;
    NSMutableDictionary *_pendingUpdates;
    NSMutableDictionary *_coalescedKeys;
    NSMutableDictionary *_coalescedTimers;
}

@property (readonly, copy, nonatomic) NSSet *coalescedEntryKeys;
@property (strong, nonatomic) NSMutableDictionary *coalescedKeys; // @synthesize coalescedKeys=_coalescedKeys;
@property (strong, nonatomic) NSMutableDictionary *coalescedTimers; // @synthesize coalescedTimers=_coalescedTimers;
@property (readonly, copy, nonatomic) NSSet *delayedEntryKeys;
@property (strong, nonatomic) NSCountedSet *delayedKeys; // @synthesize delayedKeys=_delayedKeys;
@property (strong, nonatomic) NSMutableDictionary *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property (copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;

- (void).cxx_destruct;
- (void)_coalescedUpdateForEntryKeys:(id)arg1;
- (void)_updateForCoalescedKeysWithData:(id)arg1;
- (void)_updateForDelayedKeysWithData:(id)arg1;
- (void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2;
- (void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2;
- (void)beginDelayingUpdatesForEntryKeys:(id)arg1;
- (void)endCoalescingUpdatesForEntryKeys:(id)arg1;
- (void)endDelayingUpdatesForEntryKeys:(id)arg1;
- (id)initWithUpdateBlock:(CDUnknownBlockType)arg1;
- (void)updateWithData:(id)arg1;

@end

