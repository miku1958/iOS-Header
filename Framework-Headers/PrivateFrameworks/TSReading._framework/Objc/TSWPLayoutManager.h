//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPStorageObserver-Protocol.h>

@class TSWPCTTypesetterCache, TSWPStorage;
@protocol TSWPLayoutOwner;

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver>
{
    id<TSWPLayoutOwner> _owner;
    TSWPStorage *_storage;
    BOOL _isObservingStorage;
    BOOL _useLigatures;
    long long _delta;
    struct _NSRange _dirtyRange;
    TSWPCTTypesetterCache *_typesetterCache;
    struct TSWPTopicNumberHints _cachedTopicNumbers;
}

@property (readonly, nonatomic) struct _NSRange dirtyRange; // @synthesize dirtyRange=_dirtyRange;
@property (readonly, nonatomic) id<TSWPLayoutOwner> owner; // @synthesize owner=_owner;
@property (readonly, strong, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property (readonly, strong, nonatomic) TSWPCTTypesetterCache *typesetterCache;

+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(BOOL)arg7 styleProvider:(id)arg8 vertical:(BOOL)arg9;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearOwner;
- (void)clearTypesetterCache;
- (void)dealloc;
- (void)deflateTarget:(id)arg1 intoHints:(vector_2f7f6b92 *)arg2 childHints:(id [2])arg3 anchoredAttachmentPositions:(id *)arg4 topicNumbers:(struct TSWPTopicNumberHints *)arg5 layoutState:(void *)arg6;
- (void)destroyLayoutState:(void *)arg1;
- (void)inflateTarget:(id)arg1 fromHints:(const vector_2f7f6b92 *)arg2 childHint:(id)arg3 anchoredAttachmentPositions:(id)arg4 topicNumbers:(const struct TSWPTopicNumberHints *)arg5;
- (id)initWithStorage:(id)arg1 owner:(id)arg2;
- (void *)layoutIntoTarget:(id)arg1 withLayoutState:(void *)arg2 outSync:(BOOL *)arg3;
- (double)layoutIntoTarget:(id)arg1 withRange:(struct _NSRange)arg2;
- (void *)layoutStateForLayoutTarget:(id)arg1 afterHint:(const CDStruct_6026ced1 *)arg2 childHint:(id)arg3 topicNumbers:(const struct TSWPTopicNumberHints *)arg4 textIsVertical:(BOOL)arg5;
- (BOOL)needsLayoutInColumn:(id)arg1;
- (int)p_layoutConfigFlagsForTarget:(id)arg1;
- (void)resetTopicNumbers;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (id)styleProvider;
- (void)willRemoveAttachmentLayout:(id)arg1;

@end

