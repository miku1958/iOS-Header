//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNMPClusteringTreeNodeWrapper : NSObject
{
    BOOL _freeNodeOnDealloc;
    void *_node;
}

@property BOOL freeNodeOnDealloc; // @synthesize freeNodeOnDealloc=_freeNodeOnDealloc;
@property void *node; // @synthesize node=_node;

- (float)avgDistance;
- (void)dealloc;
- (id)descriptor;
- (float)distance;
- (id)getLeafNodes;
- (id)initWithNode:(void *)arg1 freeNodeOnDealloc:(BOOL)arg2;
- (int)leafsCount;
- (id)left;
- (int)nodeId;
- (id)right;

@end

