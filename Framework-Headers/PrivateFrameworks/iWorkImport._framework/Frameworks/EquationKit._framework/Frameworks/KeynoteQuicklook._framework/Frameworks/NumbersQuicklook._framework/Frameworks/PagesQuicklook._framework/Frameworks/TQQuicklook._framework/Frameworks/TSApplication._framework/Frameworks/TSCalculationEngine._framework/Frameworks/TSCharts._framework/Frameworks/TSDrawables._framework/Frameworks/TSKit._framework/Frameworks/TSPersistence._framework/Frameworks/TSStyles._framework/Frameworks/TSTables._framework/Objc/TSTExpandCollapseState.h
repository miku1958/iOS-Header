//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKSosBase.h>

#import <TSTables/NSCopying-Protocol.h>

@class TSUUUIDSet;

@interface TSTExpandCollapseState : TSKSosBase <NSCopying>
{
    vector_4dc5f307 _collapsedGroupUIDs;
    vector_4dc5f307 _expandedGroupUIDs;
    TSUUUIDSet *_uidsCollapsed;
    TSUUUIDSet *_uidsExpanded;
}

@property (readonly, nonatomic) TSUUUIDSet *uidsCollapsed; // @synthesize uidsCollapsed=_uidsCollapsed;
@property (readonly, nonatomic) TSUUUIDSet *uidsExpanded; // @synthesize uidsExpanded=_uidsExpanded;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArchive:(const struct ExpandCollapseStateArchive *)arg1;
- (id)initWithCollapsed:(id)arg1 expanded:(id)arg2;
- (id)makeInverse;
- (void)saveToArchive:(struct ExpandCollapseStateArchive *)arg1;

@end

