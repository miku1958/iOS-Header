//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PXMediaProvider;
@protocol PXDisplayAsset;

@interface PXGridInlinePlaybackRecord : NSObject
{
    BOOL _isInvalid;
    float _videoScore;
    float _curationScore;
    id<PXDisplayAsset> _displayAsset;
    PXMediaProvider *_mediaProvider;
    id _geometryReference;
    long long _desiredPlayState;
    long long _visibilityScore;
    double _distanceToCenterScore;
    double _cellSizeScore;
    NSString *_diagnosticLog;
    CDStruct_e83c9415 _bestVideoTimeRange;
}

@property (readonly, nonatomic) CDStruct_e83c9415 bestVideoTimeRange; // @synthesize bestVideoTimeRange=_bestVideoTimeRange;
@property (nonatomic) double cellSizeScore; // @synthesize cellSizeScore=_cellSizeScore;
@property (readonly, nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property (nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property (copy) NSString *diagnosticLog; // @synthesize diagnosticLog=_diagnosticLog;
@property (readonly, copy) NSString *diagnosticScoresDescription;
@property (readonly, nonatomic) id<PXDisplayAsset> displayAsset; // @synthesize displayAsset=_displayAsset;
@property (nonatomic) double distanceToCenterScore; // @synthesize distanceToCenterScore=_distanceToCenterScore;
@property (readonly, nonatomic) id geometryReference; // @synthesize geometryReference=_geometryReference;
@property (nonatomic) BOOL isInvalid; // @synthesize isInvalid=_isInvalid;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly, nonatomic) float videoScore; // @synthesize videoScore=_videoScore;
@property (nonatomic) long long visibilityScore; // @synthesize visibilityScore=_visibilityScore;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;
- (void)prepareForInvisible;
- (void)prepareForVisible;

@end

