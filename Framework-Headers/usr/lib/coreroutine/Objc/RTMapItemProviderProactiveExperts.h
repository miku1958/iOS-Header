//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTMapItemProviderBase.h>

#import <coreroutine/RTMapItemProvider-Protocol.h>

@class NSString, RTMapItemProviderProactiveExpertsParameters, RTMapServiceManager, RTPersonalizationPortraitManager;

@interface RTMapItemProviderProactiveExperts : RTMapItemProviderBase <RTMapItemProvider>
{
    RTPersonalizationPortraitManager *_personalizationPortraitManager;
    RTMapServiceManager *_mapServiceManager;
    RTMapItemProviderProactiveExpertsParameters *_parameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property (readonly, copy, nonatomic) RTMapItemProviderProactiveExpertsParameters *parameters; // @synthesize parameters=_parameters;
@property (strong, nonatomic) RTPersonalizationPortraitManager *personalizationPortraitManager; // @synthesize personalizationPortraitManager=_personalizationPortraitManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_filterConnectionLocations:(id)arg1 location:(id)arg2 distance:(double)arg3 error:(id *)arg4;
- (id)_mapItemsWithConnectionsLocations:(id)arg1 options:(id)arg2;
- (id)_recentLocationsFrom:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 parameters:(id)arg4 personalizationPortraitManager:(id)arg5;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapServiceManager:(id)arg3 personalizationPortraitManager:(id)arg4;
- (id)mapItemsWithOptions:(id)arg1 error:(id *)arg2;

@end

