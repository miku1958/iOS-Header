//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/GEOTransitArtworkDataSource-Protocol.h>

@class NSString;
@protocol GEOTransitIconDataSource, GEOTransitShieldDataSource, GEOTransitTextDataSource;

@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource>
{
    NSString *_accessibilityText;
    BOOL _hasRoutingIncidentBadge;
    int _artworkSourceType;
    int _artworkUseType;
    id<GEOTransitShieldDataSource> _shieldDataSource;
    id<GEOTransitIconDataSource> _iconDataSource;
    id<GEOTransitShieldDataSource> _iconFallbackShieldDataSource;
    id<GEOTransitTextDataSource> _textDataSource;
}

@property (readonly, nonatomic) NSString *accessibilityText;
@property (readonly, nonatomic) int artworkSourceType; // @synthesize artworkSourceType=_artworkSourceType;
@property (readonly, nonatomic) int artworkUseType; // @synthesize artworkUseType=_artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasRoutingIncidentBadge; // @synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<GEOTransitIconDataSource> iconDataSource; // @synthesize iconDataSource=_iconDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource; // @synthesize iconFallbackShieldDataSource=_iconFallbackShieldDataSource;
@property (readonly, nonatomic) id<GEOTransitShieldDataSource> shieldDataSource; // @synthesize shieldDataSource=_shieldDataSource;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<GEOTransitTextDataSource> textDataSource; // @synthesize textDataSource=_textDataSource;

+ (id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2;
+ (id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2;
+ (id)artworkWithText:(id)arg1;
- (void).cxx_destruct;
- (id)initWithIcon:(id)arg1 accessibilityText:(id)arg2;
- (id)initWithIcon:(id)arg1 fallbackShield:(id)arg2 accessibilityText:(id)arg3;
- (id)initWithShield:(id)arg1 accessibilityText:(id)arg2;
- (id)initWithText:(id)arg1;

@end
