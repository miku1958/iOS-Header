//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _TtC9Coherence9CRContext;

@interface TTMergeableStringIndex : NSObject
{
    _TtC9Coherence9CRContext *_context;
    unsigned long long _affinity;
    struct TopoID _index;
}

@property (readonly, nonatomic) unsigned long long affinity; // @synthesize affinity=_affinity;
@property (readonly, nonatomic) _TtC9Coherence9CRContext *context; // @synthesize context=_context;
@property (readonly, nonatomic) struct TopoID index; // @synthesize index=_index;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_objCRenameSequence;
- (void)dealloc;
- (id)initWithContext:(id)arg1 topoID:(struct TopoID)arg2 affinity:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end
