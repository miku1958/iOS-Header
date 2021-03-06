//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKPlaceActionManagerProtocol-Protocol.h>

@class MKPlaceCardActionItem, NSString, TUCallProvider;

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol>
{
    MKPlaceCardActionItem *_favoriteActionItem;
    MKPlaceCardActionItem *_homeActionItem;
    MKPlaceCardActionItem *_collectionActionItem;
    MKPlaceCardActionItem *_callActionItem;
    MKPlaceCardActionItem *_websiteActionItem;
    MKPlaceCardActionItem *_brandStoreActionItem;
    TUCallProvider *_callProvider;
    BOOL _placeInBookmarks;
    BOOL _placeInShortcuts;
    BOOL _showContactActions;
    BOOL _isCurrentLocation;
    id _placeCardDelegate;
    id _transitCardDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isCurrentLocation; // @synthesize isCurrentLocation=_isCurrentLocation;
@property (weak, nonatomic) id placeCardDelegate; // @synthesize placeCardDelegate=_placeCardDelegate;
@property (nonatomic) BOOL placeInBookmarks; // @synthesize placeInBookmarks=_placeInBookmarks;
@property (nonatomic) BOOL placeInShortcuts; // @synthesize placeInShortcuts=_placeInShortcuts;
@property (nonatomic) BOOL showContactActions; // @synthesize showContactActions=_showContactActions;
@property (readonly) Class superclass;
@property (weak, nonatomic) id transitCardDelegate; // @synthesize transitCardDelegate=_transitCardDelegate;

- (void).cxx_destruct;
- (void)_canMakeCalls:(CDUnknownBlockType)arg1;
- (void)_enableStoreAction;
- (BOOL)_isCurrentLocationOrDroppedPin;
- (void)_launchMaps;
- (BOOL)_showAddPlaceEdit;
- (BOOL)_showCollectionItem;
- (BOOL)_showHomeShortcutItem;
- (BOOL)_showMapItemIdentifier;
- (BOOL)_showReportAProblem;
- (BOOL)_showReportAnIssue;
- (void)addLayoutInfoIfNeeded:(id)arg1;
- (id)addtoHomeItem;
- (id)collectionItemForFooter:(BOOL)arg1;
- (id)contact;
- (id)createFooterActions;
- (id)createMenuActions;
- (id)createRowActionsWithStyle:(unsigned long long)arg1;
- (id)delegate;
- (id)favoriteItemForFooter;
- (id)init;
- (id)mapItem;
- (void)openURL:(id)arg1;
- (id)optIntoAddingContributionsAction;
- (unsigned long long)options;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)placeItem;
- (id)reportAProblemAddPlaceFooterAction;
- (id)reportAProblemFooterAction;
- (id)shortPlacecardFooterActions;
- (id)transitDelegate;
- (id)transitLineItem;

@end

