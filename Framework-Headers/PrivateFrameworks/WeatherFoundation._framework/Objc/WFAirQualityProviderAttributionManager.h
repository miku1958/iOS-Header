//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WFAirQualityProviderAttribution;

@interface WFAirQualityProviderAttributionManager : NSObject
{
    struct os_unfair_lock_s _dataSynchronizationLock;
    NSMutableDictionary *_attributionCache;
}

@property (strong, nonatomic) NSMutableDictionary *attributionCache; // @synthesize attributionCache=_attributionCache;
@property (nonatomic) struct os_unfair_lock_s dataSynchronizationLock; // @synthesize dataSynchronizationLock=_dataSynchronizationLock;
@property (readonly, nonatomic) WFAirQualityProviderAttribution *defaultProviderAttribution;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)cachedAttributionForProvider:(id)arg1;
- (id)init;
- (void)loadAttributionForProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)p_archivedDataForProviderAttribution:(id)arg1;
- (void)p_updateCacheWithProviderAttribution:(id)arg1;
- (void)registerProviderAttribution:(id)arg1;

@end

