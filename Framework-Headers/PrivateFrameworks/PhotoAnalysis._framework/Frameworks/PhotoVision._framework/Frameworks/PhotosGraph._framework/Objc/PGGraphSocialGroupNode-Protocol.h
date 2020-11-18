//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSSet;

@protocol PGGraphSocialGroupNode <NSObject>

@property (readonly, nonatomic) unsigned long long rank;

- (void)socialGroupEnumerateMomentNodesUsingBlock:(void (^)(PGGraphEdge *, PGGraphMomentNode *, BOOL *))arg1;
- (void)socialGroupEnumeratePersonNodesUsingBlock:(void (^)(PGGraphEdge *, PGGraphPersonNode *, BOOL *))arg1;
- (NSSet *)socialGroupMomentNodes;
- (NSSet *)socialGroupPersonNodes;
@end

