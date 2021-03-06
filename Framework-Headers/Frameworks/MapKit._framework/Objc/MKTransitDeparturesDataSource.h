//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKTransitDeparturesCellDelegate-Protocol.h>
#import <MapKit/MKTransitDeparturesDataProviderDelegate-Protocol.h>
#import <MapKit/UITableViewDataSource-Protocol.h>
#import <MapKit/UITableViewDelegate-Protocol.h>
#import <MapKit/_MKTransitConnectionCellDelegate-Protocol.h>

@class MKArtworkDataSourceCache, MKMapItem, MKTransitDeparturesDataProvider, NSMapTable, NSMutableDictionary, NSString, UITableView;
@protocol MKTransitDeparturesDataSourceHosting, _MKInfoCardAnalyticsDelegate;

@interface MKTransitDeparturesDataSource : NSObject <_MKTransitConnectionCellDelegate, MKTransitDeparturesCellDelegate, MKTransitDeparturesDataProviderDelegate, UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSMapTable *_cachedSectionHeaders;
    NSMapTable *_cachedSectionFooters;
    NSMutableDictionary *_cachedImageOptions;
    NSMutableDictionary *_cachedMaxImageWidths;
    NSMutableDictionary *_cachedColumnCenteringWidths;
    BOOL _animatingRowInsertion;
    struct CGSize _transitioningSize;
    struct CGRect _lastMaxWidthBounds;
    BOOL _showingIncidents;
    BOOL _limitInteraction;
    BOOL _allowTransitLineSelection;
    BOOL _supportSystemSectionCollapsing;
    MKMapItem *_mapItem;
    MKArtworkDataSourceCache *_artworkCache;
    id<MKTransitDeparturesDataSourceHosting> _host;
    id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
    MKTransitDeparturesDataProvider *_dataProvider;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=allowsTransitLineSelection) BOOL allowTransitLineSelection; // @synthesize allowTransitLineSelection=_allowTransitLineSelection;
@property (weak, nonatomic) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property (readonly, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property (readonly, nonatomic) MKTransitDeparturesDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<MKTransitDeparturesDataSourceHosting> host; // @synthesize host=_host;
@property (nonatomic, getter=hasLimitedInteraction) BOOL limitInteraction; // @synthesize limitInteraction=_limitInteraction;
@property (strong, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property (readonly) Class superclass;
@property (nonatomic, getter=supportsSystemSectionCollapsing) BOOL supportSystemSectionCollapsing; // @synthesize supportSystemSectionCollapsing=_supportSystemSectionCollapsing;

- (void).cxx_destruct;
- (double)_availableWidth;
- (id)_cellForRowAtIndexPath:(id)arg1;
- (void)_configureDeparturesCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_connectionCellForRow:(long long)arg1;
- (id)_departureSequenceForIndexPath:(id)arg1;
- (id)_departureSequenceForIndexPath:(id)arg1 outIsNewLine:(BOOL *)arg2 outNextLineIsSame:(BOOL *)arg3;
- (long long)_departureSequenceFrequencyTypeForAllDeparturesSections;
- (id)_departuresCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)_existingCellAtIndexPath:(id)arg1;
- (id)_headerTextForSection:(long long)arg1;
- (double)_heightForFooterInSection:(long long)arg1;
- (id)_imageForLine:(id)arg1;
- (id)_imageForLine:(id)arg1 size:(long long)arg2;
- (id)_imageOptionSizeArraysForEnumeration;
- (id)_imageWithArtworkDataSource:(id)arg1;
- (id)_imageWithArtworkDataSource:(id)arg1 size:(long long)arg2;
- (id)_incidentCellForRow:(long long)arg1 inSection:(long long)arg2;
- (void)_incrementPageControlValueForSection:(long long)arg1 identifier:(id)arg2;
- (id)_indexPathWithHeader:(id)arg1;
- (id)_indexPathWithoutHeader:(id)arg1;
- (long long)_lineImageSizeForSystem:(id)arg1;
- (double)_maxImageWidthForSystem:(id)arg1;
- (id)_messageCellForSection:(long long)arg1;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (id)_pagingPromptForSection:(long long)arg1;
- (void)_sectionHeaderButtonPressed:(id)arg1;
- (void)_setDisclosureArrowExpanded:(BOOL)arg1 inSystemCellAtIndexPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_shouldPageSection:(long long)arg1;
- (void)_showIncidentDetails;
- (id)_smallerImageWithArtworkDataSource:(id)arg1;
- (id)_smallestImageWithArtworkDataSource:(id)arg1;
- (id)_systemCellForSection:(long long)arg1;
- (void)_toggleHiddenSystemInSection:(long long)arg1 animated:(BOOL)arg2;
- (int)_transitCategoryForSection:(long long)arg1;
- (int)_transitCategoryForSequence:(id)arg1;
- (id)_viewForFooterInSection:(long long)arg1;
- (id)_viewForHeaderInSection:(long long)arg1;
- (BOOL)allowsSystemSectionCollapsing;
- (int)currentTransitCategory;
- (void)didTransition;
- (id)imageForTransitLine:(id)arg1;
- (void)incidentButtonSelectedInDeparturesCell:(id)arg1;
- (void)infoButtonSelectedInConnectionCell:(id)arg1;
- (id)initWithTableView:(id)arg1 mapItem:(id)arg2;
- (void)invalidateLayout;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)possibleActions;
- (void)recordIncidentsShowing:(BOOL)arg1;
- (void)reloadData;
- (void)reloadSections;
- (BOOL)sectionHasFooter:(long long)arg1;
- (BOOL)sectionHasHeader:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)traitsForTransitDeparturesDataProvider:(id)arg1;
- (int)transitCategoryForFrequencyType:(long long)arg1;
- (void)transitDeparturesDataProviderDidReload:(id)arg1;
- (void)transitDeparturesDataProviderDidUpdateDepartures:(id)arg1;
- (void)transitDeparturesDataProviderWillUpdateDepartures:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1;

@end

