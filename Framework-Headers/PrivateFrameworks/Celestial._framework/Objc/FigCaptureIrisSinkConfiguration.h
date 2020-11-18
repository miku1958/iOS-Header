//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@class FigCaptureIrisPreparedSettings;

@interface FigCaptureIrisSinkConfiguration : FigCaptureSinkConfiguration
{
    BOOL _movieCaptureEnabled;
    CDStruct_1b6d18a9 _movieDuration;
    CDStruct_1b6d18a9 _movieVideoFrameDuration;
    int _movieAutoTrimMethod;
    FigCaptureIrisPreparedSettings *_preparedSettings;
    BOOL _optimizesImagesForOfflineVideoStabilization;
    BOOL _quadraHighResCaptureEnabled;
    BOOL _depthDataDeliveryEnabled;
    BOOL _filterRenderingEnabled;
    BOOL _bravoDualPhotoDeliveryEnabled;
}

@property (nonatomic) BOOL bravoDualPhotoDeliveryEnabled; // @synthesize bravoDualPhotoDeliveryEnabled=_bravoDualPhotoDeliveryEnabled;
@property (nonatomic) BOOL depthDataDeliveryEnabled; // @synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled;
@property (nonatomic) BOOL filterRenderingEnabled; // @synthesize filterRenderingEnabled=_filterRenderingEnabled;
@property (nonatomic) int irisMovieAutoTrimMethod; // @synthesize irisMovieAutoTrimMethod=_movieAutoTrimMethod;
@property (nonatomic) BOOL irisMovieCaptureEnabled; // @synthesize irisMovieCaptureEnabled=_movieCaptureEnabled;
@property (nonatomic) CDStruct_1b6d18a9 irisMovieDuration; // @synthesize irisMovieDuration=_movieDuration;
@property (nonatomic) CDStruct_1b6d18a9 irisMovieVideoFrameDuration; // @synthesize irisMovieVideoFrameDuration=_movieVideoFrameDuration;
@property (strong, nonatomic) FigCaptureIrisPreparedSettings *irisPreparedSettings; // @synthesize irisPreparedSettings=_preparedSettings;
@property (nonatomic) BOOL optimizesImagesForOfflineVideoStabilization; // @synthesize optimizesImagesForOfflineVideoStabilization=_optimizesImagesForOfflineVideoStabilization;
@property (nonatomic) BOOL quadraHighResCaptureEnabled; // @synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)sinkType;

@end
