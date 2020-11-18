//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/NSObject-Protocol.h>

@class MAEdge, MAMemoryFootprint, MANode, NSArray, NSMutableSet, NSSet, NSString;

@protocol MANodeImplementationProtocol <NSObject>
- (void)addEdge:(MAEdge *)arg1;
- (MAEdge *)anyEdgeOfType:(unsigned long long)arg1 withLabel:(NSString *)arg2 inDomain:(unsigned short)arg3;
- (MAEdge *)anyEdgeOfType:(unsigned long long)arg1 withNode:(MANode *)arg2;
- (MANode *)anyNeighborNodeThroughEdgesOfType:(unsigned long long)arg1 withLabel:(NSString *)arg2 inDomain:(unsigned short)arg3;
- (unsigned long long)countOfEdgesOfType:(unsigned long long)arg1 withLabel:(NSString *)arg2 inDomain:(unsigned short)arg3;
- (NSSet *)edgesOfType:(unsigned long long)arg1 withLabel:(NSString *)arg2 inDomain:(unsigned short)arg3;
- (NSSet *)edgesOfType:(unsigned long long)arg1 withNode:(MANode *)arg2;
- (void)enumerateDeepNeighborsWithLabel:(NSString *)arg1 domain:(unsigned short)arg2 edgeType:(unsigned long long)arg3 excluding:(NSMutableSet *)arg4 shouldStop:(BOOL *)arg5 block:(void (^)(MANode *, BOOL *))arg6;
- (void)enumerateEdgesInDomains:(NSArray *)arg1 usingBlock:(void (^)(MAEdge *, BOOL *))arg2;
- (void)enumerateEdgesOfType:(unsigned long long)arg1 withLabel:(NSString *)arg2 inDomain:(unsigned short)arg3 usingBlock:(void (^)(MAEdge *, BOOL *))arg4;
- (void)enumerateNeighborNodesThroughEdgesInDomains:(NSArray *)arg1 usingBlock:(void (^)(MAEdge *, MANode *, BOOL *))arg2;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(NSString *)arg2 inDomain:(unsigned short)arg3 usingBlock:(void (^)(MAEdge *, MANode *, BOOL *))arg4;
- (void)enumerateNeighborNodesWithLabel:(NSString *)arg1 inDomain:(unsigned short)arg2 usingBlock:(void (^)(MAEdge *, MANode *, BOOL *))arg3;
- (void)enumerateSiblingNodesThroughEdgesInDomains:(NSArray *)arg1 usingBlock:(void (^)(MANode *, MAEdge *, MANode *, MAEdge *, BOOL *))arg2;
- (void)enumerateSiblingNodesThroughEdgesWithLabel:(NSString *)arg1 inDomain:(unsigned short)arg2 usingBlock:(void (^)(MANode *, MAEdge *, MANode *, MAEdge *, BOOL *))arg3;
- (BOOL)hasEdgeOfType:(unsigned long long)arg1 withLabel:(NSString *)arg2 inDomain:(unsigned short)arg3;
- (BOOL)hasEdgeOfType:(unsigned long long)arg1 withNode:(MANode *)arg2;
- (unsigned long long)memoryFootprint:(MAMemoryFootprint *)arg1;
- (NSSet *)neighborNodesThroughEdgesOfType:(unsigned long long)arg1 withLabel:(NSString *)arg2 inDomain:(unsigned short)arg3;
- (NSSet *)neighborNodesWithLabel:(NSString *)arg1 inDomain:(unsigned short)arg2;
- (void)removeEdge:(MAEdge *)arg1;
- (NSSet *)siblingNodesThroughEdgesWithLabel:(NSString *)arg1 inDomain:(unsigned short)arg2;
@end
