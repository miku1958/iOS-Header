//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/ENDeviceKey-Protocol.h>

@class IDSAccountIdentity, IDSMPFullDeviceIdentity, IDSMPFullLegacyIdentity, NSString;
@protocol ENDevicePublicKey;

@interface IDSDeviceIdentity : NSObject <ENDeviceKey>
{
    IDSMPFullLegacyIdentity *_legacyIdentity;
    IDSMPFullDeviceIdentity *_modernIdentity;
    IDSAccountIdentity *_accountIdentity;
}

@property (readonly, nonatomic) IDSAccountIdentity *accountIdentity; // @synthesize accountIdentity=_accountIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<ENDevicePublicKey> devicePublicKey;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) IDSMPFullLegacyIdentity *legacyIdentity; // @synthesize legacyIdentity=_legacyIdentity;
@property (readonly, nonatomic) IDSMPFullDeviceIdentity *modernIdentity; // @synthesize modernIdentity=_modernIdentity;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacyIdentity:(id)arg1 modernIdentity:(id)arg2 accountIdentity:(id)arg3;

@end

