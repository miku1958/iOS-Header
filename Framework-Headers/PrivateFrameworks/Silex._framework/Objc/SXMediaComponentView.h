//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXMediaExposureEvent;
@protocol SXAnalyticsReporting;

@interface SXMediaComponentView : SXComponentView <SXViewportChangeListener>
{
    BOOL _isDisplayingMedia;
    id<SXAnalyticsReporting> _analyticsReporting;
    SXMediaExposureEvent *_mediaExposureEvent;
    double _minimumVisibleY;
    double _maximumVisibleY;
    struct CGRect _visibleBounds;
}

@property (readonly, nonatomic) id<SXAnalyticsReporting> analyticsReporting; // @synthesize analyticsReporting=_analyticsReporting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isDisplayingMedia; // @synthesize isDisplayingMedia=_isDisplayingMedia;
@property (nonatomic) double maximumVisibleY; // @synthesize maximumVisibleY=_maximumVisibleY;
@property (strong, nonatomic) SXMediaExposureEvent *mediaExposureEvent; // @synthesize mediaExposureEvent=_mediaExposureEvent;
@property (nonatomic) double minimumVisibleY; // @synthesize minimumVisibleY=_minimumVisibleY;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;

- (void).cxx_destruct;
- (unsigned long long)analyticsGalleryType;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsVideoType;
- (void)calculateVisibleBounds;
- (void)createMediaExposureEventIfNeeded;
- (void)finishMediaExposureEventIfNeeded;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6;
- (id)mediaEventForClass:(Class)arg1;
- (BOOL)shouldSubmitMediaExposureEventForExposedBounds:(struct CGRect)arg1;
- (void)submitEvents;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)visibleBoundsChanged;
- (void)willSubmitMediaExposureEvent:(id)arg1;

@end

