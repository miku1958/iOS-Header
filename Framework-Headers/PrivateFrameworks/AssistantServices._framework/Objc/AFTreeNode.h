//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface AFTreeNode : NSObject <NSFastEnumeration>
{
    id _item;
    AFTreeNode *_parentNode;
    NSMutableArray *_childNodes;
}

@property (readonly, nonatomic, getter=_childNodes) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property (strong, nonatomic) id item; // @synthesize item=_item;
@property (weak, nonatomic, setter=_setParentNode:) AFTreeNode *parentNode; // @synthesize parentNode=_parentNode;

+ (id)absoluteIndexPathsForTreeNodes:(id)arg1;
- (void).cxx_destruct;
- (void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;
- (id)absoluteIndexPath;
- (void)addChildNode:(id)arg1;
- (id)childNodeAtIndex:(long long)arg1;
- (BOOL)containsNodeAtIndexPath:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildNodesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDescendentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (long long)indexOfChildNode:(id)arg1;
- (id)indexPathFromAncestorNode:(id)arg1;
- (id)indexPathOfNodeWithItem:(id)arg1;
- (id)init;
- (void)insertChildNode:(id)arg1 atIndex:(long long)arg2;
- (id)lastChildNode;
- (id)nodeAtIndexPath:(id)arg1;
- (long long)numberOfChildNodes;
- (void)removeChildNode:(id)arg1;
- (void)removeChildNodeAtIndex:(long long)arg1;
- (void)removeFromParentNode;
- (void)replaceChildNodeAtIndex:(long long)arg1 withNode:(id)arg2;

@end

