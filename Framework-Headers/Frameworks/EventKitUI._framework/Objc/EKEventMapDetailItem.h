//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

#import <EventKitUI/MKMapViewDelegate-Protocol.h>

@class CLLocation, MKMapView, NSString, UITableViewCell, UIView;

@interface EKEventMapDetailItem : EKEventDetailItem <MKMapViewDelegate>
{
    UITableViewCell *_cell;
    MKMapView *_mapView;
    UIView *_overlayView;
    UIView *_loadingView;
    CLLocation *_location;
    UITableViewCell *_oldCell;
    BOOL _hasMapItemLaunchOptionFromTimeToLeaveNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification; // @synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_locationStringForStructuredLocation:(id)arg1;
+ (id)_mapsURLForLocationOnEvent:(id)arg1 hasMapItemLaunchOptionFromTimeToLeaveNotification:(BOOL)arg2;
- (void).cxx_destruct;
- (double)_mapHeight;
- (id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2;
- (void)_setupMapView;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned long long)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)reset;

@end
