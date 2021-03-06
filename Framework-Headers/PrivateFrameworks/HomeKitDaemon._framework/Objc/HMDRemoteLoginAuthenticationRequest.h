//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMRemoteLoginMessage.h>

@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage
{
    unsigned long long _targetedAccountType;
}

@property (nonatomic) unsigned long long targetedAccountType; // @synthesize targetedAccountType=_targetedAccountType;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)xpcMessageName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)messagePayload;
- (id)xpcMessageName;

@end

