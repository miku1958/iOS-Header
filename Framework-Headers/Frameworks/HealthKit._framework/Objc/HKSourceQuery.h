//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKSourceQueryClientInterface-Protocol.h>

@class NSString;
@protocol HKQueryServerInterface;

@interface HKSourceQuery : HKQuery <HKSourceQueryClientInterface>
{
    BOOL _hasDeliveredInitialResults;
    id<HKQueryServerInterface> _serverProxy;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _updateHandler;
}

@property (readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
+ (void)configureServerInterface:(id)arg1;
- (void).cxx_destruct;
- (void)client_deliverSources:(id)arg1 forQuery:(id)arg2;
- (void)client_deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end

