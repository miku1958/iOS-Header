//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPredicateBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMPredicateCompositeBudget_Monitors, NSArray, NSString;

@interface CEMPredicateCompositeBudget : CEMPredicateBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCalendarIdentifier;
    CEMPredicateCompositeBudget_Monitors *_payloadMonitors;
    NSArray *_payloadNotificationTimes;
    NSArray *_payloadTimeBudget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *payloadCalendarIdentifier; // @synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier;
@property (copy, nonatomic) CEMPredicateCompositeBudget_Monitors *payloadMonitors; // @synthesize payloadMonitors=_payloadMonitors;
@property (copy, nonatomic) NSArray *payloadNotificationTimes; // @synthesize payloadNotificationTimes=_payloadNotificationTimes;
@property (copy, nonatomic) NSArray *payloadTimeBudget; // @synthesize payloadTimeBudget=_payloadTimeBudget;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithMonitors:(id)arg1 withTimeBudget:(id)arg2;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitors:(id)arg2 withNotificationTimes:(id)arg3 withTimeBudget:(id)arg4;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end

