//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSCERegionAllocator : NSObject
{
    struct TSCERegionNode *_head;
    struct TSCERegionNode *_curBlock;
    unsigned int _blockOffset;
    struct vector<TSCEASTNodeArrayChunk *, std::__1::allocator<TSCEASTNodeArrayChunk *>> _nodeArrayChunks;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)calloc:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithInitialCapacity:(unsigned long long)arg1;
- (void *)malloc:(unsigned long long)arg1;
- (struct TSCEASTNodeArray *)managedNodeArrayWithCapacity:(unsigned long long)arg1;
- (void)reset;

@end

