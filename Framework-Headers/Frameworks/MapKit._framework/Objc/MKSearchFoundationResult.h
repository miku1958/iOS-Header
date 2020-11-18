//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <MapKit/MKLocationManagerObserver-Protocol.h>

@class MKLocationManager, MKMapItem, MKSearchFoundationRichText, NSArray, NSBundle, NSData, NSMutableArray, NSString, SFActionItem, SFImage, SFText;

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver>
{
    BOOL _optionSmallerScreen;
    NSData *_mapsData;
    MKMapItem *_mapItem;
    MKSearchFoundationRichText *_secondLineDisplayedText;
    NSString *_distanceString;
    NSString *_temporaryReviewString;
    NSArray *_descriptions;
    MKSearchFoundationRichText *_thirdLineDisplayedText;
    unsigned long long _iconSize;
    unsigned long long _mksfResultType;
    NSBundle *_bundle;
    NSString *_bundleID;
    MKLocationManager *_locationManager;
    MKSearchFoundationRichText *_fourthLineDisplayedText;
    NSMutableArray *_secondLineText;
    NSMutableArray *_thirdLineText;
    NSMutableArray *_fourthLineText;
    id _attributionObserver;
    SFText *_title;
    SFImage *_thumbnail;
    SFActionItem *_action;
}

@property (strong, nonatomic) id attributionObserver; // @synthesize attributionObserver=_attributionObserver;
@property (strong, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property (copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *distanceString; // @synthesize distanceString=_distanceString;
@property (strong, nonatomic) MKSearchFoundationRichText *fourthLineDisplayedText; // @synthesize fourthLineDisplayedText=_fourthLineDisplayedText;
@property (copy, nonatomic) NSMutableArray *fourthLineText; // @synthesize fourthLineText=_fourthLineText;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconSize; // @synthesize iconSize=_iconSize;
@property (strong, nonatomic) MKLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (strong, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property (strong, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
@property (nonatomic) unsigned long long mksfResultType; // @synthesize mksfResultType=_mksfResultType;
@property (nonatomic) BOOL optionSmallerScreen; // @synthesize optionSmallerScreen=_optionSmallerScreen;
@property (strong, nonatomic) MKSearchFoundationRichText *secondLineDisplayedText; // @synthesize secondLineDisplayedText=_secondLineDisplayedText;
@property (copy, nonatomic) NSMutableArray *secondLineText; // @synthesize secondLineText=_secondLineText;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *temporaryReviewString; // @synthesize temporaryReviewString=_temporaryReviewString;
@property (strong, nonatomic) MKSearchFoundationRichText *thirdLineDisplayedText; // @synthesize thirdLineDisplayedText=_thirdLineDisplayedText;
@property (copy, nonatomic) NSMutableArray *thirdLineText; // @synthesize thirdLineText=_thirdLineText;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_defaultRichTextItems;
- (BOOL)_isSmallerScreen;
- (void)_locationApprovalDidChange;
- (id)action;
- (void)dealloc;
- (id)descriptions;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapItemFromFavoritesData:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)styledStringFromStringArray:(id)arg1;
- (id)thumbnail;
- (id)title;

@end

