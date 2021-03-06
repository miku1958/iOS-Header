//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class NSArray, PXZoomableInlineHeadersLayoutSpec;

@interface PXZoomablePhotosLayoutSpec : PXFeatureSpec
{
    BOOL _useSaliency;
    long long _defaultNumberOfColumns;
    long long _initialNumberOfColumns;
    long long _staticNumberOfColumns;
    long long _maxColumnsForIndividualItems;
    long long _maxColumnsForBadges;
    double _interitemSpacing;
    double _aspectFitInteritemSpacing;
    double _panoramaItemAspectRatio;
    double _panoramaInteritemSpacing;
    long long _maxColumnsForSaliency;
    NSArray *_supportedColumns;
    NSArray *_minimumAssetsRequiredByColumn;
    NSArray *_legacyMacSupportedColumns;
    double _captionSpacing;
    PXZoomableInlineHeadersLayoutSpec *_inlineHeadersSpec;
    struct UIEdgeInsets _aspectFitEdgeMargins;
    struct UIEdgeInsets _squareEdgeMargins;
}

@property (readonly, nonatomic) struct UIEdgeInsets aspectFitEdgeMargins; // @synthesize aspectFitEdgeMargins=_aspectFitEdgeMargins;
@property (readonly, nonatomic) double aspectFitInteritemSpacing; // @synthesize aspectFitInteritemSpacing=_aspectFitInteritemSpacing;
@property (readonly, nonatomic) double captionSpacing; // @synthesize captionSpacing=_captionSpacing;
@property (readonly, nonatomic) long long defaultNumberOfColumns; // @synthesize defaultNumberOfColumns=_defaultNumberOfColumns;
@property (readonly, nonatomic) long long initialNumberOfColumns; // @synthesize initialNumberOfColumns=_initialNumberOfColumns;
@property (readonly, nonatomic) PXZoomableInlineHeadersLayoutSpec *inlineHeadersSpec; // @synthesize inlineHeadersSpec=_inlineHeadersSpec;
@property (readonly, nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property (readonly, nonatomic) NSArray *legacyMacSupportedColumns; // @synthesize legacyMacSupportedColumns=_legacyMacSupportedColumns;
@property (readonly, nonatomic) long long maxColumnsForBadges; // @synthesize maxColumnsForBadges=_maxColumnsForBadges;
@property (readonly, nonatomic) long long maxColumnsForIndividualItems; // @synthesize maxColumnsForIndividualItems=_maxColumnsForIndividualItems;
@property (readonly, nonatomic) long long maxColumnsForSaliency; // @synthesize maxColumnsForSaliency=_maxColumnsForSaliency;
@property (readonly, nonatomic) NSArray *minimumAssetsRequiredByColumn; // @synthesize minimumAssetsRequiredByColumn=_minimumAssetsRequiredByColumn;
@property (readonly, nonatomic) double panoramaInteritemSpacing; // @synthesize panoramaInteritemSpacing=_panoramaInteritemSpacing;
@property (readonly, nonatomic) double panoramaItemAspectRatio; // @synthesize panoramaItemAspectRatio=_panoramaItemAspectRatio;
@property (readonly, nonatomic) struct UIEdgeInsets squareEdgeMargins; // @synthesize squareEdgeMargins=_squareEdgeMargins;
@property (readonly, nonatomic) long long staticNumberOfColumns; // @synthesize staticNumberOfColumns=_staticNumberOfColumns;
@property (readonly, nonatomic) NSArray *supportedColumns; // @synthesize supportedColumns=_supportedColumns;
@property (readonly, nonatomic) BOOL useSaliency; // @synthesize useSaliency=_useSaliency;

- (void).cxx_destruct;
- (long long)bestColumnIndexForPreferredNumberOfColumns:(long long)arg1 allowedColumns:(id)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3 userDefaults:(id)arg4;

@end

