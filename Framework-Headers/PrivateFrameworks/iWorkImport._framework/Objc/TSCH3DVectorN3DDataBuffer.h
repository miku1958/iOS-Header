//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DDataBuffer.h>

__attribute__((visibility("hidden")))
@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer
{
    struct DataBuffer3DDimension mDimension;
    vector_aab22ae2 mContainer;
}

@property (readonly, nonatomic) vector_aab22ae2 *container;

+ (id)bufferWithCapacity3DDimension:(const struct DataBuffer3DDimension *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)componentByteSize;
- (int)componentType;
- (unsigned long long)components;
- (unsigned long long)count;
- (const void *)data;
- (void)fillCapacity;
- (id)initWithCapacity3DDimension:(const struct DataBuffer3DDimension *)arg1;
- (tvec3_c2818ced)size;

@end
