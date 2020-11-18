//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@protocol MTLBuffer;

@interface ARSCNFaceGeometry : SCNGeometry
{
    id<MTLBuffer> _vertexBuffer;
    id<MTLBuffer> _normalBuffer;
}

@property (strong, nonatomic) id<MTLBuffer> normalBuffer; // @synthesize normalBuffer=_normalBuffer;
@property (strong, nonatomic) id<MTLBuffer> vertexBuffer; // @synthesize vertexBuffer=_vertexBuffer;

+ (id)faceGeometryWithDevice:(id)arg1;
+ (id)faceGeometryWithDevice:(id)arg1 eyesFilled:(BOOL)arg2 mouthFilled:(BOOL)arg3;
+ (id)faceGeometryWithDevice:(id)arg1 fillMesh:(BOOL)arg2;
- (void).cxx_destruct;
- (void)updateFromFaceGeometry:(id)arg1;

@end

