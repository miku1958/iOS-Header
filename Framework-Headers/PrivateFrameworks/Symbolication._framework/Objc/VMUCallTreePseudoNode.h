//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUCallTreeNode.h>

__attribute__((visibility("hidden")))
@interface VMUCallTreePseudoNode : VMUCallTreeNode
{
}

- (void)addChildCountsIntoNode;
- (BOOL)isPseudo;
- (id)largestTopOfStackPath;
- (id)pseudoNodeTopOfStackChild;
- (id)sortedChildrenWithPseudoNode;

@end

