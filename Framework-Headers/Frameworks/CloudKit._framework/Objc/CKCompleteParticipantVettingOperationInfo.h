//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding>
{
    NSString *_vettingToken;
    NSString *_vettingEmail;
    NSString *_vettingPhone;
    NSString *_routingKey;
    NSData *_encryptedKey;
    NSString *_baseToken;
    NSString *_displayedHostname;
}

@property (strong, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property (strong, nonatomic) NSString *displayedHostname; // @synthesize displayedHostname=_displayedHostname;
@property (strong, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property (strong, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property (strong, nonatomic) NSString *vettingEmail; // @synthesize vettingEmail=_vettingEmail;
@property (strong, nonatomic) NSString *vettingPhone; // @synthesize vettingPhone=_vettingPhone;
@property (copy, nonatomic) NSString *vettingToken; // @synthesize vettingToken=_vettingToken;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

