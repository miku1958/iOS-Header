//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTMapItemProviderBase.h>

#import <coreroutine/RTMapItemProvider-Protocol.h>

@class NSString, RTEventManager, RTMapItemProviderEventKitParameters, RTMapServiceManager;

@interface RTMapItemProviderEventKit : RTMapItemProviderBase <RTMapItemProvider>
{
    RTEventManager *_eventManager;
    RTMapServiceManager *_mapServiceManager;
    RTMapItemProviderEventKitParameters *_parameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RTEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RTMapServiceManager *mapServiceManager; // @synthesize mapServiceManager=_mapServiceManager;
@property (readonly, copy, nonatomic) RTMapItemProviderEventKitParameters *parameters; // @synthesize parameters=_parameters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 eventManager:(id)arg3 mapServiceManager:(id)arg4 parameters:(id)arg5;
- (id)mapItemsWithOptions:(id)arg1 error:(id *)arg2;

@end

