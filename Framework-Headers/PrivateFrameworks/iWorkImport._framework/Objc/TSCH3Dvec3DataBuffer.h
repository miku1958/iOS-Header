//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DFloatVectorDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3Dvec3DataBuffer : TSCH3DFloatVectorDataBuffer
{
    vector_45b393db mContainer;
}

@property (readonly, nonatomic) vector_45b393db *container;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)componentByteSize;
- (unsigned long long)components;
- (unsigned long long)count;
- (const void *)data;
- (id)elementsAtIndices:(id)arg1;
- (void)fillCapacity;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

