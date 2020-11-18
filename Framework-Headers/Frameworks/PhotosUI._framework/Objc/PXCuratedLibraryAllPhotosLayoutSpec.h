//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class NSArray, PXCuratedLibraryInlineHeadersLayoutSpec;

@interface PXCuratedLibraryAllPhotosLayoutSpec : PXFeatureSpec
{
    BOOL _preferAspectFitContentMode;
    BOOL _useSaliency;
    BOOL _allowsAspectFit;
    long long _defaultNumberOfColumns;
    long long _initialNumberOfColumns;
    long long _maxColumnsForIndividualItems;
    double _interitemSpacing;
    double _aspectFitInteritemSpacing;
    long long _maxColumnsForSaliency;
    NSArray *_supportedColumns;
    PXCuratedLibraryInlineHeadersLayoutSpec *_inlineHeadersSpec;
    struct UIEdgeInsets _aspectFitEdgeMargins;
    struct UIEdgeInsets _squareEdgeMargins;
}

@property (readonly, nonatomic) BOOL allowsAspectFit; // @synthesize allowsAspectFit=_allowsAspectFit;
@property (readonly, nonatomic) struct UIEdgeInsets aspectFitEdgeMargins; // @synthesize aspectFitEdgeMargins=_aspectFitEdgeMargins;
@property (readonly, nonatomic) double aspectFitInteritemSpacing; // @synthesize aspectFitInteritemSpacing=_aspectFitInteritemSpacing;
@property (readonly, nonatomic) long long defaultNumberOfColumns; // @synthesize defaultNumberOfColumns=_defaultNumberOfColumns;
@property (readonly, nonatomic) long long initialNumberOfColumns; // @synthesize initialNumberOfColumns=_initialNumberOfColumns;
@property (readonly, nonatomic) PXCuratedLibraryInlineHeadersLayoutSpec *inlineHeadersSpec; // @synthesize inlineHeadersSpec=_inlineHeadersSpec;
@property (readonly, nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property (readonly, nonatomic) long long maxColumnsForIndividualItems; // @synthesize maxColumnsForIndividualItems=_maxColumnsForIndividualItems;
@property (readonly, nonatomic) long long maxColumnsForSaliency; // @synthesize maxColumnsForSaliency=_maxColumnsForSaliency;
@property (readonly, nonatomic) BOOL preferAspectFitContentMode; // @synthesize preferAspectFitContentMode=_preferAspectFitContentMode;
@property (readonly, nonatomic) struct UIEdgeInsets squareEdgeMargins; // @synthesize squareEdgeMargins=_squareEdgeMargins;
@property (readonly, nonatomic) NSArray *supportedColumns; // @synthesize supportedColumns=_supportedColumns;
@property (readonly, nonatomic) BOOL useSaliency; // @synthesize useSaliency=_useSaliency;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3;

@end
