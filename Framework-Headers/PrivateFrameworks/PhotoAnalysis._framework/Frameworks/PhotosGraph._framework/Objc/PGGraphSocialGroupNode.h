//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

@interface PGGraphSocialGroupNode : PGGraphNode
{
}

@property (readonly, nonatomic) unsigned long long rank;

+ (id)sortedSocialGroupNodeForMomentNodes:(id)arg1;
+ (id)weightSortDescriptors;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)momentNodes;
- (id)personNodes;

@end

