//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASTask.h>

@class ASPolicy, NSDictionary, NSString;

@interface ASProvisionTask : ASTask
{
    BOOL _accountOnlyRemoteWipeSuccess;
    int _type;
    NSDictionary *_deviceInfo;
    ASPolicy *_policy;
    NSString *_key;
}

@property (nonatomic) BOOL accountOnlyRemoteWipeSuccess; // @synthesize accountOnlyRemoteWipeSuccess=_accountOnlyRemoteWipeSuccess;
@property (strong, nonatomic) NSDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) ASPolicy *policy; // @synthesize policy=_policy;
@property (nonatomic) int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3;
- (id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3 accountOnlyRemoteWipeSuccess:(BOOL)arg4;
- (id)_policyID;
- (id)_provisioningType;
- (int)commandCode;
- (void)finishWithError:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)initWithAccountOnlyRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2 accountOnlyRemoteWipeSuccess:(BOOL)arg3;
- (id)initWithOriginalKeyForPolicyRequest:(id)arg1;
- (id)initWithPolicyAcknowledgement:(id)arg1 withKey:(id)arg2;
- (id)initWithRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (BOOL)requiresEASVersionUpdate;
- (long long)taskStatusForExchangeStatus:(int)arg1;

@end

