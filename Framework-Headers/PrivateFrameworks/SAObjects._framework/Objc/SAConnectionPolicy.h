//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SAConnectionPolicy : AceObject <SAAceSerializable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *disableMPTCP;
@property (copy, nonatomic) NSNumber *enableOptimisticDNS;
@property (copy, nonatomic) NSNumber *enableTLS13;
@property (copy, nonatomic) NSNumber *enableTLS13ZeroRTT;
@property (copy, nonatomic) NSNumber *enableTcpFastOpen;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSNumber *globalTimeout;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *mptcpFallbackPort;
@property (copy, nonatomic) NSString *policyId;
@property (copy, nonatomic) NSArray *routes;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *timeToLive;

+ (id)connectionPolicy;
+ (id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

