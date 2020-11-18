//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNPixelBufferObservation.h>

@class NSArray;

@interface VNSaliencyImageObservation : VNPixelBufferObservation
{
    struct CGSize _mOriginalImageSize;
    struct CGRect _mSalientRegion;
    struct CGRect _mHighlySalientRegion;
    struct os_unfair_lock_s _mComputeBoundingBoxesLock;
    NSArray *_mSalientObjects;
}

@property (readonly, nonatomic) struct CGRect boundingBox;
@property (readonly, nonatomic) struct CGRect narrowedBoundingBox;
@property (readonly, nonatomic) NSArray *salientObjects;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_computeBoundingBoxes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __CVBuffer *)createSaliencyImageAndReturnError:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(struct __CVBuffer *)arg2 originalImageSize:(struct CGSize)arg3 salientObjectBoundingBoxes:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)salientObjectsAndReturnError:(id *)arg1;

@end
