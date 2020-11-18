//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface BLTPBSectionBulletinList : PBCodable <NSCopying>
{
    NSMutableArray *_bulletinIdentifiers;
    NSString *_sectionID;
}

@property (strong, nonatomic) NSMutableArray *bulletinIdentifiers; // @synthesize bulletinIdentifiers=_bulletinIdentifiers;
@property (strong, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;

+ (Class)bulletinIdentifierType;
- (void).cxx_destruct;
- (void)addBulletinIdentifier:(id)arg1;
- (id)bulletinIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)bulletinIdentifiersCount;
- (void)clearBulletinIdentifiers;
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

