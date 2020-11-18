//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface VNFaceLandmarks : NSObject
{
    float _confidence;
    unsigned long long _pointCount;
    NSData *_pointsData;
    struct _Geometry2D_rect2D_ _alignedBBox;
    struct CGRect _userFacingBBox;
}

@property struct _Geometry2D_rect2D_ alignedBBox; // @synthesize alignedBBox=_alignedBBox;
@property (readonly) float confidence; // @synthesize confidence=_confidence;
@property unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property (strong) NSData *pointsData; // @synthesize pointsData=_pointsData;
@property struct CGRect userFacingBBox; // @synthesize userFacingBBox=_userFacingBBox;

- (void).cxx_destruct;
- (void *)createPointArray:(const int *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)initWithPointsData:(id)arg1 pointCount:(unsigned long long)arg2 userFacingBBox:(struct CGRect)arg3 alignedBBox:(struct _Geometry2D_rect2D_)arg4 landmarkScore:(float)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUserFacingBBoxEquivalentToAlignedBBox;

@end

