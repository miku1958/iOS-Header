//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface PKAppletSubcredentialSharingInvitationRequest : NSObject <NSSecureCoding>
{
    NSString *_credentialIdentifier;
    NSString *_sharedCredentialIdentifier;
    NSUUID *_sharingSessionIdentifier;
    long long _deviceType;
}

@property (copy, nonatomic) NSString *credentialIdentifier; // @synthesize credentialIdentifier=_credentialIdentifier;
@property (nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property (copy, nonatomic) NSString *sharedCredentialIdentifier; // @synthesize sharedCredentialIdentifier=_sharedCredentialIdentifier;
@property (strong, nonatomic) NSUUID *sharingSessionIdentifier; // @synthesize sharingSessionIdentifier=_sharingSessionIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

