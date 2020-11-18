//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSeriesBuilderServer.h>

#import <HealthDaemon/HKWorkoutRouteBuilderServerInterface-Protocol.h>

@class HKWorkoutRoute, NSString;

@interface HDWorkoutRouteBuilderServer : HDSeriesBuilderServer <HKWorkoutRouteBuilderServerInterface>
{
    HKWorkoutRoute *_route;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HKWorkoutRoute *route; // @synthesize route=_route;
@property (readonly) Class superclass;

+ (id)serverEntitlements;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (void)_queue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_validateRouteData:(id)arg1 error:(out id *)arg2;
- (void)connectionInvalidated;
- (void)createSeriesSampleIfNeeded:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)exportedInterface;
- (void)queue_recoverBuilder;
- (id)remoteInterface;
- (void)remote_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)seriesSample;
- (void)server_insertRouteData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

