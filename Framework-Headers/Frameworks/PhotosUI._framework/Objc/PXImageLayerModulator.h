//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXMutableImageLayerModulator_Private-Protocol.h>

@class CAFilter, CALayer, NSString, PXGainMapAnimationDurationFilter;

@interface PXImageLayerModulator : NSObject <PXMutableImageLayerModulator_Private>
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct {
        BOOL filterInput;
        BOOL filter;
        BOOL filteredLayer;
        BOOL displayingVideoComplement;
        BOOL filterIntensity;
        BOOL gainMapVisibility;
        BOOL gainMapAppearance;
    } _needsUpdateFlags;
    BOOL _displayingVideoComplement;
    BOOL _revealsGainMapImage;
    BOOL _animateGainMapAppearance;
    BOOL _enabled;
    float _gainMapValue;
    float _hdrGain;
    CALayer *_layer;
    struct CGImage *_gainMapImage;
    long long _filterType;
    CAFilter *_filter;
    NSString *_layerFilterIntensityKeyPath;
    CALayer *_filteredLayer;
    CALayer *_gainMapLayer;
    PXGainMapAnimationDurationFilter *_gainMapAnimationDurationFilter;
    double _intensityAnimationDuration;
    double _intensity;
    CDStruct_0b45e515 _options;
}

@property (nonatomic) BOOL animateGainMapAppearance; // @synthesize animateGainMapAppearance=_animateGainMapAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingVideoComplement) BOOL displayingVideoComplement; // @synthesize displayingVideoComplement=_displayingVideoComplement;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) CAFilter *filter; // @synthesize filter=_filter;
@property (readonly, nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property (strong, nonatomic) CALayer *filteredLayer; // @synthesize filteredLayer=_filteredLayer;
@property (strong, nonatomic) PXGainMapAnimationDurationFilter *gainMapAnimationDurationFilter; // @synthesize gainMapAnimationDurationFilter=_gainMapAnimationDurationFilter;
@property (readonly, nonatomic) struct CGImage *gainMapImage; // @synthesize gainMapImage=_gainMapImage;
@property (strong, nonatomic) CALayer *gainMapLayer; // @synthesize gainMapLayer=_gainMapLayer;
@property (readonly, nonatomic) float gainMapValue; // @synthesize gainMapValue=_gainMapValue;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) float hdrGain; // @synthesize hdrGain=_hdrGain;
@property (readonly, nonatomic) double intensity; // @synthesize intensity=_intensity;
@property (nonatomic) double intensityAnimationDuration; // @synthesize intensityAnimationDuration=_intensityAnimationDuration;
@property (readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property (strong, nonatomic) NSString *layerFilterIntensityKeyPath; // @synthesize layerFilterIntensityKeyPath=_layerFilterIntensityKeyPath;
@property (readonly, nonatomic) CDStruct_0b45e515 options; // @synthesize options=_options;
@property (readonly, nonatomic) BOOL revealsGainMapImage; // @synthesize revealsGainMapImage=_revealsGainMapImage;
@property (readonly) Class superclass;

+ (struct CGImage *)_gainMapPlaceholderImage;
- (void).cxx_destruct;
- (void)_addFilterToLayer:(id)arg1;
- (void)_invalidateFilter;
- (void)_invalidateFilterInput;
- (void)_invalidateFilterIntensity;
- (void)_invalidateFilteredLayer;
- (void)_invalidateGainMapAppearance;
- (void)_invalidateGainMapVisibility;
- (BOOL)_needsUpdate;
- (void)_removeFilterFromLayer:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateFilter;
- (void)_updateFilterInput;
- (void)_updateFilterIntensityIfNeeded;
- (void)_updateFilteredLayerIfNeeded;
- (void)_updateGainMapAppearance;
- (void)_updateGainMapVisibility;
- (void)_updateIfNeeded;
- (void)animateChangesWithDuration:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(CDStruct_0b45e515)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)performChanges_Private:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (void)removeFilterFromUnownedLayer:(id)arg1;
- (void)setDisplayingVideoComplement:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setGainMapImage:(struct CGImage *)arg1;
- (void)setGainMapImage:(struct CGImage *)arg1 animated:(BOOL)arg2;
- (void)setGainMapValue:(float)arg1;
- (void)setHdrGain:(float)arg1;
- (void)setIntensity:(double)arg1;
- (void)setLayer:(id)arg1;
- (void)setRevealsGainMapImage:(BOOL)arg1;

@end

