//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray;
@protocol WFTreeObserver;

@interface WFTreeNode : NSObject
{
    id _representedObject;
    WFTreeNode *_parentNode;
    id<WFTreeObserver> _observer;
    NSArray *_flattenedDescendents;
    NSMutableArray *_mutableChildNodes;
}

@property (copy, nonatomic) NSArray *childNodes;
@property (readonly, nonatomic) NSArray *flattenedDescendents; // @synthesize flattenedDescendents=_flattenedDescendents;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (readonly, nonatomic) NSMutableArray *mutableChildNodes; // @synthesize mutableChildNodes=_mutableChildNodes;
@property (weak, nonatomic) id<WFTreeObserver> observer; // @synthesize observer=_observer;
@property (readonly, weak, nonatomic) WFTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property (strong, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;

- (void).cxx_destruct;
- (void)addNode:(id)arg1;
- (void)childDescendentsDidChange:(id)arg1 oldValue:(id)arg2 changeSource:(id)arg3;
- (id)debugDescription;
- (id)debugDescriptionAtDepth:(unsigned long long)arg1;
- (id)descendentNodeAtRelativeIndexPath:(id)arg1;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)moveNodeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)paddedStringAtDepth:(unsigned long long)arg1;
- (void)removeNode:(id)arg1;
- (void)removeNodeAtIndex:(unsigned long long)arg1;
- (void)setFlattenedDescendents:(id)arg1 changeSource:(id)arg2;
- (void)setParentNode:(id)arg1;

@end
