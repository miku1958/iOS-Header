//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotifier.h>

@class RTApplicationManager, RTDataProviderHeroApp;

@interface RTPredictionControllerHero : RTNotifier
{
    RTDataProviderHeroApp *_dataProvider;
    RTApplicationManager *_applicationManager;
}

@property (strong, nonatomic) RTApplicationManager *applicationManager; // @synthesize applicationManager=_applicationManager;
@property (strong, nonatomic) RTDataProviderHeroApp *dataProvider; // @synthesize dataProvider=_dataProvider;

- (void).cxx_destruct;
- (void)_onApplicationChange:(id)arg1;
- (void)_onHeroAppPrediction:(id)arg1;
- (void)_refreshAllData;
- (void)_startMonitoringForPredictedApplications;
- (void)_stopMonitoringForPredictedApplications;
- (void)dealloc;
- (void)fetchPredictedApplications:(CDUnknownBlockType)arg1;
- (void)fetchPredictedApplicationsAtLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchPredictedApplicationsWithPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithDataProvider:(id)arg1 applicationManager:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 dataProvider:(id)arg2 applicationManager:(id)arg3;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)invalidate;
- (void)onApplicationChange:(id)arg1;
- (void)onHeroAppPrediction:(id)arg1;
- (void)startMonitoringForPredictedApplications;
- (void)stopMonitoringForPredictedApplications;

@end

