//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKFeatureMarker.h>

@class GEOMapItemIdentifier, NSArray;

@interface VKVenueFeatureMarker : VKFeatureMarker
{
    BOOL _localize;
}

@property (readonly, nonatomic) NSArray *buildings;
@property (readonly, nonatomic) unsigned long long businessID;
@property (readonly, nonatomic) GEOMapItemIdentifier *mapIdentifier;

- (id)initWithVenue:(const struct Venue *)arg1 localize:(BOOL)arg2;
- (id)name;
- (id)shortName;
- (const shared_ptr_c500bfa8 *)venueFeatureMarker;

@end
