//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/CRObject.h>

@class CRTree, CRWeakReference, NSArray;

@interface CRTreeNode : CRObject
{
    CRTree *_tree;
    NSArray *_children;
}

@property (strong, nonatomic) NSArray *children; // @synthesize children=_children;
@property (weak, nonatomic) CRTreeNode *parent;
@property (strong, nonatomic) CRWeakReference *parentRef; // @dynamic parentRef;
@property (weak, nonatomic) CRTree *tree; // @synthesize tree=_tree;
@property (strong, nonatomic) id value; // @dynamic value;

+ (id)CRProperties;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isInLoop;
- (BOOL)isLoopNode;
- (void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)parentReference;
- (void)removeNode:(id)arg1;

@end

