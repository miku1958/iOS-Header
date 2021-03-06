//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPContactInformation : PBCodable <NSCopying>
{
    NSString *_containerScopedUserId;
    NSString *_emailAddress;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_phoneNumber;
}

@property (strong, nonatomic) NSString *containerScopedUserId; // @synthesize containerScopedUserId=_containerScopedUserId;
@property (strong, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (readonly, nonatomic) BOOL hasContainerScopedUserId;
@property (readonly, nonatomic) BOOL hasEmailAddress;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (readonly, nonatomic) BOOL hasPhoneNumber;
@property (strong, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (strong, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

