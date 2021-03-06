//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface BLTPBBulletinSummary : PBCodable <NSCopying>
{
    unsigned int _destinations;
    NSMutableArray *_keys;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
}

@property (nonatomic) unsigned int destinations; // @synthesize destinations=_destinations;
@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (strong, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property (strong, nonatomic) NSString *publisherBulletinID; // @synthesize publisherBulletinID=_publisherBulletinID;
@property (strong, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property (strong, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;

+ (Class)keyType;
- (void).cxx_destruct;
- (void)addKey:(id)arg1;
- (void)clearKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)keysCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

