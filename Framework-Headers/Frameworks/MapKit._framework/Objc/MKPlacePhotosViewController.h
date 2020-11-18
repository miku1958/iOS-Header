//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKPlacePhotosViewDelegate-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, NSArray, NSString, _MKPlaceViewController;
@protocol MKPlaceCardPhotosControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlacePhotosViewController : UIViewController <MKPlacePhotosViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    NSArray *_photoViews;
    BOOL _constraintsAdded;
    BOOL _canUseInlineViewer;
    unsigned long long _photosCount;
    unsigned long long _mode;
    MKMapItem *_mapItem;
    id<MKPlaceCardPhotosControllerDelegate> _photosControllerDelegate;
    _MKPlaceViewController *_owner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property (readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (weak, nonatomic) _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property (weak, nonatomic) id<MKPlaceCardPhotosControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate=_photosControllerDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1 fromLicense:(BOOL)arg2;
- (void)_createPhotoViews;
- (void)_photoSelected:(id)arg1;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_reloadPhotos;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (id)infoCardChildPossibleActions;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithLayoutMode:(unsigned long long)arg1;
- (void)loadView;
- (id)photos;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerGetDelegatesMapItem;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)placePhotoViewerWillClose:(id)arg1 photo:(id)arg2 onIndex:(unsigned long long)arg3;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end
