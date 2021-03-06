//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLAccelerationStructureGeometryDescriptor.h>

@protocol MTLBuffer;

@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor
{
    id<MTLBuffer> _boundingBoxBuffer;
    unsigned long long _boundingBoxBufferOffset;
    unsigned long long _boundingBoxStride;
    unsigned long long _boundingBoxCount;
}

@property (strong, nonatomic) id<MTLBuffer> boundingBoxBuffer; // @synthesize boundingBoxBuffer=_boundingBoxBuffer;
@property (nonatomic) unsigned long long boundingBoxBufferOffset; // @synthesize boundingBoxBufferOffset=_boundingBoxBufferOffset;
@property (nonatomic) unsigned long long boundingBoxCount; // @synthesize boundingBoxCount=_boundingBoxCount;
@property (nonatomic) unsigned long long boundingBoxStride; // @synthesize boundingBoxStride=_boundingBoxStride;

+ (id)descriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

