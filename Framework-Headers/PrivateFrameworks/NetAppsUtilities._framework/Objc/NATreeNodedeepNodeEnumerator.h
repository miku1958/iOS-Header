//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NATreeNode, NSArray, NSMutableArray;

@interface NATreeNodedeepNodeEnumerator : NSEnumerator <NSCopying>
{
    NSMutableArray *_enumeratorStack;
    NATreeNode *_node;
}

@property (readonly, copy, nonatomic) NSArray *allObjects;
@property (readonly, copy, nonatomic) NATreeNode *node; // @synthesize node=_node;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNode:(id)arg1;
- (id)nextObject;

@end

