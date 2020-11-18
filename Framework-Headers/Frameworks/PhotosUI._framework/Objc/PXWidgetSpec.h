//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@interface PXWidgetSpec : PXFeatureSpec
{
    double _distanceBetweenMainContentBottomAndCaptionBaseline;
    unsigned long long _detailsOptions;
    double _distanceBetweenTopAndFirstHeaderBaseline;
    double _distanceBetweenTopAndHeaderlessWidgetContentTop;
    double _distanceBetweenHeaderBaselineAndWidgetContentTop;
    double _distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline;
    double _distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop;
    double _distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline;
    double _distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop;
    double _distanceBetweenWidgetContentBottomAndFooterBaseline;
    double _distanceBetweenFooterBaselineAndBottom;
    double _distanceBetweenFooterlessWidgetContentBottomAndBottom;
    double _distanceBetweenHeaderTopAndHeaderBaseline;
    double _distanceBetweenHeaderBaselineAndHeaderBottom;
    double _distanceBetweenFooterTopAndFooterBaseline;
    double _distanceBetweenFooterBaselineAndFooterBottom;
    struct UIEdgeInsets _contentGuideInsets;
}

@property (nonatomic) struct UIEdgeInsets contentGuideInsets; // @synthesize contentGuideInsets=_contentGuideInsets;
@property (readonly, nonatomic) unsigned long long detailsOptions; // @synthesize detailsOptions=_detailsOptions;
@property (nonatomic) double distanceBetweenFooterBaselineAndBottom; // @synthesize distanceBetweenFooterBaselineAndBottom=_distanceBetweenFooterBaselineAndBottom;
@property (nonatomic) double distanceBetweenFooterBaselineAndFooterBottom; // @synthesize distanceBetweenFooterBaselineAndFooterBottom=_distanceBetweenFooterBaselineAndFooterBottom;
@property (nonatomic) double distanceBetweenFooterTopAndFooterBaseline; // @synthesize distanceBetweenFooterTopAndFooterBaseline=_distanceBetweenFooterTopAndFooterBaseline;
@property (nonatomic) double distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline; // @synthesize distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline=_distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline;
@property (nonatomic) double distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop; // @synthesize distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop=_distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndBottom; // @synthesize distanceBetweenFooterlessWidgetContentBottomAndBottom=_distanceBetweenFooterlessWidgetContentBottomAndBottom;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline; // @synthesize distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline=_distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop; // @synthesize distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop=_distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenHeaderBaselineAndHeaderBottom; // @synthesize distanceBetweenHeaderBaselineAndHeaderBottom=_distanceBetweenHeaderBaselineAndHeaderBottom;
@property (nonatomic) double distanceBetweenHeaderBaselineAndWidgetContentTop; // @synthesize distanceBetweenHeaderBaselineAndWidgetContentTop=_distanceBetweenHeaderBaselineAndWidgetContentTop;
@property (nonatomic) double distanceBetweenHeaderTopAndHeaderBaseline; // @synthesize distanceBetweenHeaderTopAndHeaderBaseline=_distanceBetweenHeaderTopAndHeaderBaseline;
@property (readonly, nonatomic) double distanceBetweenMainContentBottomAndCaptionBaseline; // @synthesize distanceBetweenMainContentBottomAndCaptionBaseline=_distanceBetweenMainContentBottomAndCaptionBaseline;
@property (nonatomic) double distanceBetweenTopAndFirstHeaderBaseline; // @synthesize distanceBetweenTopAndFirstHeaderBaseline=_distanceBetweenTopAndFirstHeaderBaseline;
@property (nonatomic) double distanceBetweenTopAndHeaderlessWidgetContentTop; // @synthesize distanceBetweenTopAndHeaderlessWidgetContentTop=_distanceBetweenTopAndHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenWidgetContentBottomAndFooterBaseline; // @synthesize distanceBetweenWidgetContentBottomAndFooterBaseline=_distanceBetweenWidgetContentBottomAndFooterBaseline;

- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;

@end

