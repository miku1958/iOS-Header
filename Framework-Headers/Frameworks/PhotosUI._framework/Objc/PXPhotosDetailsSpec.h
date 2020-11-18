//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class PXPhotosDetailsBarSpec, PXWidgetCompositionSpec, PXWidgetSpec, UIColor;

@interface PXPhotosDetailsSpec : PXFeatureSpec
{
    unsigned long long _detailsOptions;
    PXWidgetCompositionSpec *_compositionSpec;
    PXWidgetSpec *_widgetSpec;
    PXPhotosDetailsBarSpec *_barSpec;
    UIColor *_backgroundColor;
    UIColor *_dimmingColor;
    double _dimmingAlpha;
}

@property (readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, nonatomic) PXPhotosDetailsBarSpec *barSpec; // @synthesize barSpec=_barSpec;
@property (readonly, nonatomic) PXWidgetCompositionSpec *compositionSpec; // @synthesize compositionSpec=_compositionSpec;
@property (readonly, nonatomic) unsigned long long detailsOptions; // @synthesize detailsOptions=_detailsOptions;
@property (readonly, nonatomic) double dimmingAlpha; // @synthesize dimmingAlpha=_dimmingAlpha;
@property (readonly, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property (readonly, nonatomic) BOOL enableActionsWidget;
@property (readonly, nonatomic) BOOL shouldInitializeBarsController;
@property (readonly, nonatomic) PXWidgetSpec *widgetSpec; // @synthesize widgetSpec=_widgetSpec;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;

@end
