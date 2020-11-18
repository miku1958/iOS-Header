//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/NSCopying-Protocol.h>
#import <ModelIO/NSFastEnumeration-Protocol.h>

@class MDLVertexDescriptor, NSMutableArray, NSURL;
@protocol MDLMeshBufferAllocator, MDLObjectContainerComponent;

@interface MDLAsset : NSObject <NSCopying, NSFastEnumeration>
{
    NSURL *_URL;
    NSMutableArray *_objects;
    id<MDLObjectContainerComponent> _masters;
    double _startTime;
    double _endTime;
    double _frameInterval;
    id<MDLMeshBufferAllocator> _bufferAllocator;
    MDLVertexDescriptor *_vertexDescriptor;
}

@property (readonly, strong, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct MDLAABB _bounds;
@property (readonly, nonatomic) struct boundingBox;
@property (readonly, strong, nonatomic) id<MDLMeshBufferAllocator> bufferAllocator; // @synthesize bufferAllocator=_bufferAllocator;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) double endTime;
@property (nonatomic) double frameInterval; // @synthesize frameInterval=_frameInterval;
@property (strong, nonatomic) id<MDLObjectContainerComponent> masters; // @synthesize masters=_masters;
@property (nonatomic) double startTime;
@property (readonly, strong, nonatomic) MDLVertexDescriptor *vertexDescriptor; // @synthesize vertexDescriptor=_vertexDescriptor;

+ (BOOL)canExportFileExtension:(id)arg1;
+ (BOOL)canImportFileExtension:(id)arg1;
+ (id)placeLightProbesWithDensity:(float)arg1 heuristic:(long long)arg2 usingIrradianceDataSource:(id)arg3;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)addObject:(id)arg1;
- (struct)boundingBoxAtTime:(double)arg1;
- (id)childObjectsOfClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (BOOL)exportAssetToURL:(id)arg1;
- (BOOL)exportAssetToURL:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithBufferAllocator:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3;
- (id)initWithURL:(id)arg1 vertexDescriptor:(id)arg2 bufferAllocator:(id)arg3 preserveTopology:(BOOL)arg4 error:(id *)arg5;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objects;
- (void)removeObject:(id)arg1;

@end

