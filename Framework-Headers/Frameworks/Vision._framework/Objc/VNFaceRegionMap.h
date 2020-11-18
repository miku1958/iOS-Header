//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface VNFaceRegionMap : NSObject <NSSecureCoding, NSCopying>
{
    struct vImage_Buffer mRegionMap;
    struct CGRect mUserBBox;
    struct _Geometry2D_rect2D_ mInternalAlignedBBox;
    BOOL mDeallocateBuffer;
    NSDictionary *mPixelValueToRegionLabelMap;
    NSArray *_regionLabels;
}

@property (copy) NSArray *regionLabels; // @synthesize regionLabels=_regionLabels;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)getRegionLabels;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)regionNameAtImageCoordinate:(struct CGPoint)arg1 imageSize:(struct CGSize)arg2;
- (id)regionNameAtNormalizedAlignedFaceCoordinate:(struct CGPoint)arg1;
- (id)regionNameAtNormalizedFaceCoordinate:(struct CGPoint)arg1;
- (void)setRegionMap:(struct vImage_Buffer *)arg1 deallocateBuffer:(BOOL)arg2 userBBox:(struct CGRect)arg3 alignedBBox:(struct _Geometry2D_rect2D_)arg4 valueToLabelMap:(id)arg5;

@end
