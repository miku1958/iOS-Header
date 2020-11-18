//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface CVMLFaceRegionMap : NSObject <NSSecureCoding>
{
    struct vImage_Buffer mRegionMap;
    struct CGRect mUserBBox;
    struct _Geometry2D_rect2D_ mInternalAlignedBBox;
    BOOL mDeallocateBuffer;
    NSDictionary *mPixelValueToRegionLabelMap;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)getRegionLabels;
- (id)getRegionNameAtImageCoordinate:(struct CGPoint)arg1 andImageSize:(struct CGSize)arg2;
- (id)getRegionNameAtNormalizedAlignedFaceCoordinate:(struct CGPoint)arg1;
- (id)getRegionNameAtNormalizedFaceCoordinate:(struct CGPoint)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setRegionMap:(struct vImage_Buffer *)arg1 deallocateBuffer:(BOOL)arg2 withUserBBox:(struct CGRect)arg3 andAlignedBBox:(struct _Geometry2D_rect2D_)arg4 andValueToLabelMap:(id)arg5;

@end

