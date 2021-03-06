//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKCredentialRequestProtocol-Protocol.h>

@class NSString, NSUUID;

@interface AKCredentialRequest : NSObject <AKCredentialRequestProtocol>
{
    NSString *_altDSID;
    NSString *_userIdentifier;
    NSUUID *_requestIdentifier;
    NSUUID *_transactionID;
}

@property (readonly, copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *transactionID; // @synthesize transactionID=_transactionID;
@property (copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;

@end

