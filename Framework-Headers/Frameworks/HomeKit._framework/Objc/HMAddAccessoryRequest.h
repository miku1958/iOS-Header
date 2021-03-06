//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMHome, HMSetupAccessoryDescription, NSString, NSUUID;

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding>
{
    BOOL _requiresSetupPayloadURL;
    BOOL _requiresOwnershipToken;
    HMHome *_home;
    NSString *_accessoryName;
    HMAccessoryCategory *_accessoryCategory;
    NSUUID *_requestIdentifier;
    HMSetupAccessoryDescription *_accessoryDescription;
}

@property (readonly, nonatomic) HMAccessoryCategory *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property (strong, nonatomic) HMSetupAccessoryDescription *accessoryDescription; // @synthesize accessoryDescription=_accessoryDescription;
@property (readonly, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property (strong, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property (readonly, nonatomic) BOOL requiresOwnershipToken; // @synthesize requiresOwnershipToken=_requiresOwnershipToken;
@property (readonly, nonatomic) BOOL requiresSetupPayloadURL; // @synthesize requiresSetupPayloadURL=_requiresSetupPayloadURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)payloadWithOwnershipToken:(id)arg1;
- (id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2;

@end

