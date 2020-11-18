//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsMapsSyncConnector-Protocol.h>
#import <MapsSuggestions/_TtP8MapsSync25MapsSyncDataQueryDelegate_-Protocol.h>

@class NSString, _TtC8MapsSync24MapsSyncHistoryItemQuery;
@protocol MapsSuggestionsMapsSyncConnectorDelegate;

@interface MapsSuggestionsRealMapsSyncConnector : NSObject <_TtP8MapsSync25MapsSyncDataQueryDelegate_, MapsSuggestionsMapsSyncConnector>
{
    id<MapsSuggestionsMapsSyncConnectorDelegate> _delegate;
    _TtC8MapsSync24MapsSyncHistoryItemQuery *_historyQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (void).cxx_destruct;
- (id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg1;
- (BOOL)allContentOfType:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)newReviewedPlace;
- (void)queryContentsDidChangeWithQuery:(id)arg1;

@end
