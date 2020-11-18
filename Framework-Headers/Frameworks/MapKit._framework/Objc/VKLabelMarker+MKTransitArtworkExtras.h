//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKLabelMarker.h>

#import <MapKit/GEOTransitArtworkDataSource-Protocol.h>

@class NSString;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource;

@interface VKLabelMarker (MKTransitArtworkExtras) <GEOTransitArtworkDataSource>

@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly, nonatomic) long long artworkSourceType;
@property (readonly, nonatomic) long long artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource;
@property (readonly) Class superclass;

@end
