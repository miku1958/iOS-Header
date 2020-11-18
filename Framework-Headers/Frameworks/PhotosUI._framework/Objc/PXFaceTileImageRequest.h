//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, PHAsset, PHFace, PHObject;

@interface PXFaceTileImageRequest : NSObject
{
    BOOL _fullResMissing;
    BOOL _canceled;
    int _requestID;
    int _imageManagerRequestID;
    PHFace *_face;
    NSString *_cacheKey;
    PHObject *_originalRequestObject;
    PHAsset *_assetContainingFace;
    NSDate *_ppt_requestStartDate;
    struct CGSize _lastDeliveredSize;
    struct CGRect _normalizedFaceCropRect;
    struct CGRect _normalizedActualFaceRect;
    struct PXFaceTileImageParams _params;
}

@property (strong, nonatomic) PHAsset *assetContainingFace; // @synthesize assetContainingFace=_assetContainingFace;
@property (readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property (getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property (strong, nonatomic) PHFace *face; // @synthesize face=_face;
@property (getter=isFullResMissing) BOOL fullResMissing; // @synthesize fullResMissing=_fullResMissing;
@property int imageManagerRequestID; // @synthesize imageManagerRequestID=_imageManagerRequestID;
@property (nonatomic) struct CGSize lastDeliveredSize; // @synthesize lastDeliveredSize=_lastDeliveredSize;
@property (nonatomic) struct CGRect normalizedActualFaceRect; // @synthesize normalizedActualFaceRect=_normalizedActualFaceRect;
@property (nonatomic) struct CGRect normalizedFaceCropRect; // @synthesize normalizedFaceCropRect=_normalizedFaceCropRect;
@property (strong, nonatomic) PHObject *originalRequestObject; // @synthesize originalRequestObject=_originalRequestObject;
@property (readonly, nonatomic) struct PXFaceTileImageParams params; // @synthesize params=_params;
@property (copy, nonatomic, setter=ppt_setRequestStartDate:) NSDate *ppt_requestStartDate; // @synthesize ppt_requestStartDate=_ppt_requestStartDate;
@property (readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithFace:(id)arg1 cacheKey:(id)arg2 params:(struct PXFaceTileImageParams)arg3;
- (void)ppt_reportMeasurementsForImageQuality:(long long)arg1;

@end

