//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray;

@interface VSTreeNode : NSObject
{
    id _representedObject;
    VSTreeNode *_parentNode;
    NSMutableArray *_children;
}

@property (readonly, copy, nonatomic) NSArray *childNodes;
@property (strong, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property (readonly, copy, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (readonly, nonatomic) NSMutableArray *mutableChildNodes;
@property (weak, nonatomic) VSTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property (readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;

+ (id)keyPathsForValuesAffectingIndexPath;
+ (id)keyPathsForValuesAffectingLeaf;
+ (id)treeNodeWithRepresentedObject:(id)arg1;
- (void).cxx_destruct;
- (id)_descendantNodesAtDepth:(unsigned long long)arg1;
- (id)descendantNodeAtIndexPath:(id)arg1;
- (void)enumerateDescendantsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;
- (void)insertChildNodes:(id)arg1 atIndexes:(id)arg2;
- (void)removeChildNodesAtIndexes:(id)arg1;

@end

