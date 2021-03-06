//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class NSData;

@interface VNFaceLandmarks : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding>
{
    float _confidence;
    unsigned long long _pointCount;
    NSData *_pointsData;
    struct _Geometry2D_rect2D_ _alignedBBox;
    struct CGRect _userFacingBBox;
    unsigned long long _requestRevision;
}

@property struct _Geometry2D_rect2D_ alignedBBox; // @synthesize alignedBBox=_alignedBBox;
@property (readonly) float confidence; // @synthesize confidence=_confidence;
@property unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property (strong) NSData *pointsData; // @synthesize pointsData=_pointsData;
@property (readonly, nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
@property struct CGRect userFacingBBox; // @synthesize userFacingBBox=_userFacingBBox;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void *)_createPointArray:(const int *)arg1 count:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 userFacingBBox:(struct CGRect)arg4 alignedBBox:(struct _Geometry2D_rect2D_)arg5 landmarkScore:(float)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUserFacingBBoxEquivalentToAlignedBBox;

@end

