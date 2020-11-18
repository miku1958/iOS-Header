//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NUColorSpace, NUPixelFormat;
@protocol NUExtentPolicy, NUMutableImage, NURegionPolicy, NUScalePolicy;

@interface NUImageRenderRequest : NURenderRequest
{
    NUColorSpace *_colorSpace;
    id<NURegionPolicy> _regionPolicy;
    id<NUScalePolicy> _scalePolicy;
    id<NUExtentPolicy> _extentPolicy;
    NUPixelFormat *_pixelFormat;
    id<NUMutableImage> _targetImage;
    CDStruct_d58201db _tileSize;
    CDStruct_1b6d18a9 _time;
}

@property (strong, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property (strong) id<NUExtentPolicy> extentPolicy; // @synthesize extentPolicy=_extentPolicy;
@property (strong) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property (strong) id<NURegionPolicy> regionPolicy; // @synthesize regionPolicy=_regionPolicy;
@property (strong) id<NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property (strong) id<NUMutableImage> targetImage; // @synthesize targetImage=_targetImage;
@property CDStruct_912cb5d2 tileSize; // @synthesize tileSize=_tileSize;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithComposition:(id)arg1;
- (long long)mediaComponentType;

@end

