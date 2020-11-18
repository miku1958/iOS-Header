//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTPredictionController.h>

@class RTLocationManager, RTMicroLocation;

@interface RTPredictionControllerRoomAssist : RTPredictionController
{
    CDUnknownBlockType _roomPredictionMonitorHandler;
    RTLocationManager *_locationManager;
    RTMicroLocation *_cachedMicroLocation;
    double _timeOfDayAddonWindowDuration;
    double _timeOfDayAddonMidnightOffset;
}

@property (strong, nonatomic) RTMicroLocation *cachedMicroLocation; // @synthesize cachedMicroLocation=_cachedMicroLocation;
@property (strong, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (copy, nonatomic) CDUnknownBlockType roomPredictionMonitorHandler; // @synthesize roomPredictionMonitorHandler=_roomPredictionMonitorHandler;
@property (nonatomic) double timeOfDayAddonMidnightOffset; // @synthesize timeOfDayAddonMidnightOffset=_timeOfDayAddonMidnightOffset;
@property (nonatomic) double timeOfDayAddonWindowDuration; // @synthesize timeOfDayAddonWindowDuration=_timeOfDayAddonWindowDuration;

+ (id)defaultProviders;
- (void).cxx_destruct;
- (void)__processData:(CDUnknownBlockType)arg1;
- (void)_buildExpertsWithHandler:(CDUnknownBlockType)arg1;
- (id)_createExpertsWithFeatureAddonArray:(id)arg1 dataSource:(id)arg2;
- (void)_handleErrorWhileProcessingData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_processData:(CDUnknownBlockType)arg1;
- (void)_processMicroLocationUpdate:(id)arg1;
- (void)_registerForNotifications;
- (void)_setup;
- (void)_unregisterForNotifications;
- (void)_updateRegisteredDefaults:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)fetchPredictedRoomsAtCurrentLocation:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithExperts:(id)arg1 dataProviders:(id)arg2 defaultsManager:(id)arg3 authorizationManager:(id)arg4 persistenceManager:(id)arg5 dataProtectionManager:(id)arg6 metricManager:(id)arg7 locationTagger:(id)arg8 predictionTable:(id)arg9;
- (id)initWithExperts:(id)arg1 dataProviders:(id)arg2 defaultsManager:(id)arg3 authorizationManager:(id)arg4 persistenceManager:(id)arg5 dataProtectionManager:(id)arg6 metricManager:(id)arg7 locationTagger:(id)arg8 predictionTable:(id)arg9 locationManager:(id)arg10;
- (void)onDefaultsUpdate:(id)arg1;
- (void)onMicroLocationUpdate:(id)arg1;
- (void)predictWithMicroLocation:(id)arg1 limit:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)predictWithMicroLocation:(id)arg1 limit:(unsigned long long)arg2 minimumConfidence:(double)arg3 handler:(CDUnknownBlockType)arg4;
- (void)printRoomAssistModel:(CDUnknownBlockType)arg1;
- (void)startMonitoringForPredictedRoomsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopMonitoringForPredictedRooms;
- (void)updateValueForKey:(id)arg1 expectedClass:(Class)arg2 handler:(CDUnknownBlockType)arg3;

@end
