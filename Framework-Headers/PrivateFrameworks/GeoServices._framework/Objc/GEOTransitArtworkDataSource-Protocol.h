//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSString;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource;

@protocol GEOTransitArtworkDataSource <NSObject>

@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly, nonatomic) long long artworkSourceType;
@property (readonly, nonatomic) long long artworkUseType;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource;

@end

