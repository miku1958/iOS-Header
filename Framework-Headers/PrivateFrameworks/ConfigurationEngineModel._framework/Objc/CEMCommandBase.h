//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSNumber, NSString;

@interface CEMCommandBase : CEMPayloadBase
{
    NSString *_commandType;
    NSString *_commandIdentifier;
    NSString *_commandDescription;
    NSNumber *_commandRequiresNetworkTether;
    CEMAnyPayload *_commandPayload;
}

@property (copy, nonatomic) NSString *commandDescription; // @synthesize commandDescription=_commandDescription;
@property (copy, nonatomic) NSString *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
@property (copy, nonatomic) CEMAnyPayload *commandPayload; // @synthesize commandPayload=_commandPayload;
@property (copy, nonatomic) NSNumber *commandRequiresNetworkTether; // @synthesize commandRequiresNetworkTether=_commandRequiresNetworkTether;
@property (copy, nonatomic) NSString *commandType; // @synthesize commandType=_commandType;

+ (id)commandForData:(id)arg1 error:(id *)arg2;
+ (id)commandForPayload:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)executionLevel;
- (BOOL)loadCommandFromDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)mustBeSupervised;
- (id)serialize;
- (id)serializeAsDataWithError:(id *)arg1;

@end
