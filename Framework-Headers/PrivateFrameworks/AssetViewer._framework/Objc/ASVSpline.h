//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ASVSpline : NSObject
{
    struct vector<ASVControlPoint, std::__1::allocator<ASVControlPoint>> _controlPoints;
    struct vector<ASVPatchData, std::__1::allocator<ASVPatchData>> _patchData;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _indices;
    float _relativeThickness;
    float _cap_error;
}

@property (readonly, nonatomic) CDStruct_37a3040a *controlPoints;
@property (readonly, nonatomic) unsigned short *indices;
@property (readonly, nonatomic) unsigned int numControlPoints;
@property (readonly, nonatomic) unsigned int numIndices;
@property (readonly, nonatomic) CDStruct_183601bc *patchData;
@property (readonly, nonatomic) unsigned int patchDataLength;

+ (MISSING_TYPE *)interpolate:(float)arg1 p1:p2:p3:t: /* Error: Ran out of types for this method. */;
+ (MISSING_TYPE *)interpolateTangent:(float)arg1 p1:p2:p3:t: /* Error: Ran out of types for this method. */;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)genLeftCapWithWidth:(float)arg1;
- (void)genRightCapWithWidth:(float)arg1;
- (void)genTubeIndicesWithPattern:(unsigned long long)arg1;
- (id)initWithPoints:(MISSING_TYPE **)arg1 numPoints:(unsigned int)arg2 relativeThickness:(float)arg3 pattern:(unsigned long long)arg4 mat:(CDStruct_14d5dc5e)arg5;

@end

