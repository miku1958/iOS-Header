//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKWorkoutDataSource-Protocol.h>
#import <HealthKit/HKWorkoutRouteDataSourceClientInterface-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKTaskServerProxyProvider, NSString, NSUUID;
@protocol HKWorkoutRouteDataSourceDelegate;

@interface HKWorkoutRouteDataSource : NSObject <_HKXPCExportable, HKWorkoutRouteDataSourceClientInterface, HKWorkoutDataSource>
{
    id<HKWorkoutRouteDataSourceDelegate> _delegate;
    NSUUID *_identifier;
    NSUUID *_sessionIdentifier;
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKWorkoutRouteDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // @synthesize proxyProvider=_proxyProvider;
@property (readonly, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverIdentifier;
+ (id)serverInterface;
- (void).cxx_destruct;
- (void)clientRemote_didUpdateElevation:(id)arg1;
- (void)clientRemote_didUpdateRoute:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithWorkoutSession:(id)arg1;
- (id)remoteInterface;
- (void)workoutBuilderDidFinish;

@end

