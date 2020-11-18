//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTMapItemProviderBase.h>

#import <coreroutine/RTMapItemProvider-Protocol.h>

@class NSString, RTMapItemProviderMapsSupportParameters, RTMapsSupportManager;

@interface RTMapItemProviderMapsSupport : RTMapItemProviderBase <RTMapItemProvider>
{
    RTMapsSupportManager *_mapsSupportManager;
    RTMapItemProviderMapsSupportParameters *_parameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RTMapsSupportManager *mapsSupportManager; // @synthesize mapsSupportManager=_mapsSupportManager;
@property (readonly, copy, nonatomic) RTMapItemProviderMapsSupportParameters *parameters; // @synthesize parameters=_parameters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)confidenceFromMapItemSource:(unsigned long long)arg1;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapsSupportManager:(id)arg3;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 mapsSupportManager:(id)arg3 parameters:(id)arg4;
- (id)mapItemsWithOptions:(id)arg1 error:(id *)arg2;

@end
