//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@class NSSet;

@interface PGGraphPetNode : PGGraphNode
{
}

@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) NSSet *ownerNodes;

- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateOwnerNodesUsingBlock:(CDUnknownBlockType)arg1;

@end
