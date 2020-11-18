//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceSectionHeaderView, NSString, _MKPlaceBusinessInfoRow;

__attribute__((visibility("hidden")))
@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate>
{
    MKMapItem *_mapItem;
    MKPlaceSectionHeaderView *_headerView;
    _MKPlaceBusinessInfoRow *_businessInfoRow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MKMapItem *mapItem;
@property (readonly) Class superclass;

+ (BOOL)mapItemHasBusinessInfoToDisplay:(id)arg1;
- (void).cxx_destruct;
- (void)_updateBusinessInfo;
- (void)dealloc;
- (id)infoCardChildUnactionableUIElements;
- (void)infoCardThemeChanged:(id)arg1;
- (void)viewDidLoad;

@end
