//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ARQAHelper : NSObject
{
}

+ (float)_meanDepthValueFromFrame:(id)arg1;
+ (id)arrayFromRaycastResults:(id)arg1;
+ (id)arrayOf2dPoints:(const MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
+ (id)arrayOf3dPoints:(const MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithMatrix4x4:(CDStruct_14d5dc5e)arg1;
+ (id)arrayWithVector2: /* Error: Ran out of types for this method. */;
+ (id)arrayWithVector3: /* Error: Ran out of types for this method. */;
+ (id)arrayWithVector4: /* Error: Ran out of types for this method. */;
+ (id)dictionaryFromCLLocation:(id)arg1;
+ (id)dictionaryFromPatchGrid:(id)arg1;
+ (id)dictionaryFromRaycastQuery:(id)arg1;
+ (id)dictionaryFromVertices:(const MISSING_TYPE **)arg1 vertexCount:(unsigned long long)arg2 textureCoordinates:(const MISSING_TYPE **)arg3 textureCoordinateCount:(unsigned long long)arg4;
+ (id)extractAnchorDataForFrame:(id)arg1;
+ (id)extractDetectedBodiesForFrame:(id)arg1;
+ (id)generateTagsForConfiguration:(id)arg1 replaySensor:(id)arg2 technique:(id)arg3;
+ (id)headerInformationWithSize:(struct CGSize)arg1 frameLabelRect:(struct CGRect)arg2 configuration:(id)arg3 technique:(id)arg4;
+ (void)techniquesArray:(id)arg1 array:(id)arg2;
+ (id)traceFrameData:(id)arg1 withFrameIndex:(unsigned long long)arg2;

@end
