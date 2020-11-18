//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKPlacePhotosViewDelegate-Protocol.h>
#import <MapKit/UIScrollViewDelegate-Protocol.h>

@class GEOMapItemAttribution, NSString, UIScrollView, UIStackView;
@protocol GEOPictureItemContainer, MKPictureItemContainerAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPictureItemContainerViewController : UIViewController <UIScrollViewDelegate, MKPlacePhotosViewDelegate>
{
    id<MKPictureItemContainerAnalyticsDelegate> _analyticsDelegate;
    id<GEOPictureItemContainer> _pictureItemContainer;
    GEOMapItemAttribution *_attribution;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    struct CGPoint _beginAnalyticsScrollingPoint;
}

@property (weak, nonatomic) id<MKPictureItemContainerAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property (readonly, nonatomic) GEOMapItemAttribution *attribution; // @synthesize attribution=_attribution;
@property (nonatomic) struct CGPoint beginAnalyticsScrollingPoint; // @synthesize beginAnalyticsScrollingPoint=_beginAnalyticsScrollingPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<GEOPictureItemContainer> pictureItemContainer; // @synthesize pictureItemContainer=_pictureItemContainer;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)didTapOnPictureItemView:(id)arg1;
- (void)downloadImageForVisiblePictureItemViews;
- (void)infoCardThemeChanged;
- (id)initWithPictureItemContainer:(id)arg1 attribution:(id)arg2;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)updateUIForTheme:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)visiblePictureItemViews;

@end
