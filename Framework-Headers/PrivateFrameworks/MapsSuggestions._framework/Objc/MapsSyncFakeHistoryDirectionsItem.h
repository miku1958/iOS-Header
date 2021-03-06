//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSyncFakeHistoryItem.h>

#import <MapsSuggestions/MapsSyncHistoryDirectionsItem-Protocol.h>

@class GEOStorageRouteRequestStorage, NSDate, NSString, NSUUID;

@interface MapsSyncFakeHistoryDirectionsItem : MapsSyncFakeHistoryItem <MapsSyncHistoryDirectionsItem>
{
    BOOL _navigationInterrupted;
    GEOStorageRouteRequestStorage *_routeRequestStorage;
}

@property (readonly, copy, nonatomic) NSDate *createTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL navigationInterrupted; // @synthesize navigationInterrupted=_navigationInterrupted;
@property (readonly, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage; // @synthesize routeRequestStorage=_routeRequestStorage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 createTime:(id)arg2 routeRequestStorage:(id)arg3 navigationInterrupted:(BOOL)arg4;

@end

