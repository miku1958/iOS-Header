//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import <MapKit/MKCollectionCarouselAnalyticsDelegate-Protocol.h>
#import <MapKit/MKCollectionCarouselRoutingDelegate-Protocol.h>
#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class MKCollectionsCarouselView, MKCuratedCollectionsPlacecardAnalyticsManager, MKMapItem, MKPlaceSectionHeaderView, NSArray, NSString;
@protocol MKPlaceCollectionsDelegate;

@interface MKPlaceCuratedCollectionsViewController : MKPlaceSectionViewController <MKCollectionCarouselRoutingDelegate, MKCollectionCarouselAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    MKMapItem *_mapItem;
    struct CGSize _viewSize;
    MKPlaceSectionHeaderView *_headerView;
    MKCollectionsCarouselView *_carouselView;
    NSArray *_placeCollections;
    NSArray *_collectionIds;
    MKCuratedCollectionsPlacecardAnalyticsManager *_analyticsManager;
    id<MKPlaceCollectionsDelegate> _collectionsDelegate;
}

@property (strong, nonatomic) MKCuratedCollectionsPlacecardAnalyticsManager *analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property (strong, nonatomic) MKCollectionsCarouselView *carouselView; // @synthesize carouselView=_carouselView;
@property (strong, nonatomic) NSArray *collectionIds; // @synthesize collectionIds=_collectionIds;
@property (weak, nonatomic) id<MKPlaceCollectionsDelegate> collectionsDelegate; // @synthesize collectionsDelegate=_collectionsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MKPlaceSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(BOOL)arg3;
- (void)collectionsCarouselDidScrollBackward;
- (void)collectionsCarouselDidScrollForward;
- (id)initWithDelegate:(id)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 usingMapItem:(id)arg4 usingCollectionIds:(id)arg5;
- (void)refreshCollections;
- (void)routeToCuratedCollection:(id)arg1;
- (void)setUpHeaderView;
- (void)showMoreTapped;
- (void)updateConstraintsForCarouselView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

