//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/_GEOCountryConfigurationServerProxyDelegate-Protocol.h>

@class NSLock, NSMutableArray, NSMutableDictionary, NSString;
@protocol _GEOCountryConfigurationServerProxy;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate>
{
    NSString *_countryCode;
    NSLock *_countryCodeLock;
    NSMutableArray *_updateCompletionHandlers;
    NSLock *_supportedFeaturesLock;
    NSMutableDictionary *_supportedFeatures;
    double _urlAuthenticationTimeToLive;
    BOOL _hasURLAuthenticationTimeToLive;
    id<_GEOCountryConfigurationServerProxy> _serverProxy;
}

@property (copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL currentCountrySupportsCarIntegration;
@property (readonly, nonatomic) BOOL currentCountrySupportsDirections;
@property (readonly, nonatomic) BOOL currentCountrySupportsNavigation;
@property (readonly, nonatomic) BOOL currentCountrySupportsRouteGenius;
@property (readonly, nonatomic) BOOL currentCountrySupportsTraffic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double urlAuthenticationTimeToLive;

+ (void)disableServerConnection;
+ (void)setUseLocalProxy:(BOOL)arg1;
+ (id)sharedConfiguration;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long *)arg3;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long *)arg4;
- (void)_resetSupportedFeatures;
- (void)_updateCountryConfiguration:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (BOOL)countryCode:(id)arg1 supportsFeature:(long long)arg2;
- (BOOL)currentCountrySupportsFeature:(long long)arg1;
- (void)dealloc;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long *)arg3;
- (id)init;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)serverProxyProvidersDidChange:(id)arg1;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)updateProvidersForCurrentCountry;

@end

