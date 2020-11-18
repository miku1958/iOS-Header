//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSString;

@interface BLTPBBulletinAttachment : PBCodable <NSCopying>
{
    NSString *_identifier;
    unsigned int _type;
    NSString *_uRL;
    BOOL _isUpdated;
    struct {
        unsigned int type:1;
        unsigned int isUpdated:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsUpdated;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasURL;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isUpdated; // @synthesize isUpdated=_isUpdated;
@property (nonatomic) unsigned int type; // @synthesize type=_type;
@property (strong, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;

- (void).cxx_destruct;
- (id)attachmentURLURL;
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
