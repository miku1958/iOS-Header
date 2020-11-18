//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKSampleTypeQueryClientInterface-Protocol.h>

@class NSString;

@interface _HKSampleTypeQuery : HKQuery <HKSampleTypeQueryClientInterface>
{
    CDUnknownBlockType _resultsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)arg1;
- (void).cxx_destruct;
- (void)client_deliverSampleTypes:(id)arg1 query:(id)arg2;
- (id)initWithPredicate:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;
- (void)queue_connectToQueryServerWithHealthStore:(id)arg1 activationUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queue_deliverError:(id)arg1;

@end

