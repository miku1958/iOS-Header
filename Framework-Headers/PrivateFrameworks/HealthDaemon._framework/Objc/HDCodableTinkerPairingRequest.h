//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableTinkerPairingRequest : PBRequest <NSCopying>
{
    long long _guardianDSID;
    NSString *_guardianFirstName;
    NSString *_guardianIcloudIdentifier;
    NSString *_guardianLastName;
    NSData *_profileIdentifier;
    NSString *_requestIdentifier;
    int _setupType;
    NSString *_tinkerFirstName;
    NSString *_tinkerLastName;
    struct {
        unsigned int guardianDSID:1;
        unsigned int setupType:1;
    } _has;
}

@property (nonatomic) long long guardianDSID; // @synthesize guardianDSID=_guardianDSID;
@property (strong, nonatomic) NSString *guardianFirstName; // @synthesize guardianFirstName=_guardianFirstName;
@property (strong, nonatomic) NSString *guardianIcloudIdentifier; // @synthesize guardianIcloudIdentifier=_guardianIcloudIdentifier;
@property (strong, nonatomic) NSString *guardianLastName; // @synthesize guardianLastName=_guardianLastName;
@property (nonatomic) BOOL hasGuardianDSID;
@property (readonly, nonatomic) BOOL hasGuardianFirstName;
@property (readonly, nonatomic) BOOL hasGuardianIcloudIdentifier;
@property (readonly, nonatomic) BOOL hasGuardianLastName;
@property (readonly, nonatomic) BOOL hasProfileIdentifier;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (nonatomic) BOOL hasSetupType;
@property (readonly, nonatomic) BOOL hasTinkerFirstName;
@property (readonly, nonatomic) BOOL hasTinkerLastName;
@property (strong, nonatomic) NSData *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property (strong, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property (nonatomic) int setupType; // @synthesize setupType=_setupType;
@property (strong, nonatomic) NSString *tinkerFirstName; // @synthesize tinkerFirstName=_tinkerFirstName;
@property (strong, nonatomic) NSString *tinkerLastName; // @synthesize tinkerLastName=_tinkerLastName;

- (void).cxx_destruct;
- (int)StringAsSetupType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)setupTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

