//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPredicateBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMPredicateBudget : CEMPredicateBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCalendarIdentifier;
    NSString *_payloadMonitor;
    NSArray *_payloadIdentifiers;
    NSArray *_payloadIdentifiersVersion2;
    NSArray *_payloadNotificationTimes;
    NSArray *_payloadTimeBudget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *payloadCalendarIdentifier; // @synthesize payloadCalendarIdentifier=_payloadCalendarIdentifier;
@property (copy, nonatomic) NSArray *payloadIdentifiers; // @synthesize payloadIdentifiers=_payloadIdentifiers;
@property (copy, nonatomic) NSArray *payloadIdentifiersVersion2; // @synthesize payloadIdentifiersVersion2=_payloadIdentifiersVersion2;
@property (copy, nonatomic) NSString *payloadMonitor; // @synthesize payloadMonitor=_payloadMonitor;
@property (copy, nonatomic) NSArray *payloadNotificationTimes; // @synthesize payloadNotificationTimes=_payloadNotificationTimes;
@property (copy, nonatomic) NSArray *payloadTimeBudget; // @synthesize payloadTimeBudget=_payloadTimeBudget;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithMonitor:(id)arg1 withTimeBudget:(id)arg2;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withIdentifiersVersion2:(id)arg4 withNotificationTimes:(id)arg5 withTimeBudget:(id)arg6;
+ (id)buildWithCalendarIdentifier:(id)arg1 withMonitor:(id)arg2 withIdentifiers:(id)arg3 withNotificationTimes:(id)arg4 withTimeBudget:(id)arg5;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
