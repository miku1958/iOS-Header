//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPredicateBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMPredicateAny : CEMPredicateBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadPredicates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *payloadPredicates; // @synthesize payloadPredicates=_payloadPredicates;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithPredicates:(id)arg1;
+ (id)buildWithPredicates:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
