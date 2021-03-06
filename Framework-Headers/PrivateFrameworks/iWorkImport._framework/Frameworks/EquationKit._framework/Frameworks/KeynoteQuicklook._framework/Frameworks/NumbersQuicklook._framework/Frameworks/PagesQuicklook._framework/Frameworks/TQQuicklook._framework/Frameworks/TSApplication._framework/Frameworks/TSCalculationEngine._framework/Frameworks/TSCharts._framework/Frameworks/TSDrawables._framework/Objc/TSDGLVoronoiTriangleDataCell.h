//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSDGLVoronoiTriangleDataCell : NSObject
{
    unsigned long long _triangleCount;
    unsigned long long _vertexCount;
    CDStruct_6e3f967a *_vertexData;
    CDStruct_6e3f967a _centerPoint;
    struct CGRect _bounds;
}

@property (readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) CDStruct_6e3f967a centerPoint; // @synthesize centerPoint=_centerPoint;
@property (readonly, nonatomic) unsigned long long triangleCount; // @synthesize triangleCount=_triangleCount;
@property (readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property (readonly, nonatomic) CDStruct_6e3f967a *vertexData; // @synthesize vertexData=_vertexData;

- (id)cellsBySplittingCellIntoTriangles;
- (void)dealloc;
- (id)initWithEdges:(vector_5a9f1b73)arg1;
- (id)initWithTrianglePoints:(CDStruct_6e3f967a *)arg1;
- (void)p_setupTriangleDataWithEdges:(vector_5a9f1b73)arg1;

@end

