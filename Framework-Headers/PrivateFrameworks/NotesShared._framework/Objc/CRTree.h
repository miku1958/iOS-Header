//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/CRObject.h>

@class CRDocument, CROrderedSet, CRTreeNode;

@interface CRTree : CRObject
{
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) CRDocument *document;
@property (readonly, nonatomic) CROrderedSet *nodes;
@property (readonly, nonatomic) CRTreeNode *root;

+ (id)CRProperties;
- (void)computeChildren;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2;
- (void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)invalidateChildren;
- (void)mergeWith:(id)arg1;
- (void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)removeNode:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2;

@end

