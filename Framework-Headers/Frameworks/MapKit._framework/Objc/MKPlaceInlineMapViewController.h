//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class MKMapCamera, MKMapItem, NSArray, NSString, _MKPlaceInlineMapContentView, _MKPlaceViewController;

__attribute__((visibility("hidden")))
@interface MKPlaceInlineMapViewController : UIViewController <MKModuleViewControllerProtocol>
{
    _MKPlaceInlineMapContentView *_contentView;
    MKMapItem *_updatingInlineMapItem;
    BOOL _bottomHairlineHidden;
    MKMapItem *_mapItem;
    _MKPlaceViewController *_owner;
    MKMapCamera *_mapCamera;
}

@property (nonatomic, getter=isBottomHairlineHidden) BOOL bottomHairlineHidden; // @synthesize bottomHairlineHidden=_bottomHairlineHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MKMapCamera *mapCamera; // @synthesize mapCamera=_mapCamera;
@property (strong, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property (weak, nonatomic) _MKPlaceViewController *owner; // @synthesize owner=_owner;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visibleMapItems;

+ (id)inlineMapWithMapItem:(id)arg1;
- (void).cxx_destruct;
- (void)_handleTapOnMap;
- (void)_launchMaps;
- (struct CGSize)_mapSize;
- (void)_updateInlineMapWithRefinedMapItems;
- (void)_updateMap;
- (void)_updateSnapshotImage:(id)arg1;
- (id)initWithMKMapItem:(id)arg1;
- (void)loadView;
- (CDStruct_02837cd9)mapRectContainingMapItems;
- (id)snapshot;
- (void)updateInlineMapWithRefinedMapItems;
- (void)viewDidLoad;

@end

