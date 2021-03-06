//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoPhotosForFamilyMembersWithDSIDsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_familyPhotos;
    NSMutableArray *_familyPhotosIDs;
    BOOL _success;
    CDStruct_f2ecb737 _has;
}

@property (strong, nonatomic) NSMutableArray *familyPhotos; // @synthesize familyPhotos=_familyPhotos;
@property (strong, nonatomic) NSMutableArray *familyPhotosIDs; // @synthesize familyPhotosIDs=_familyPhotosIDs;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success; // @synthesize success=_success;

+ (Class)familyPhotosIDsType;
+ (Class)familyPhotosType;
- (void).cxx_destruct;
- (void)addFamilyPhotos:(id)arg1;
- (void)addFamilyPhotosIDs:(id)arg1;
- (void)clearFamilyPhotos;
- (void)clearFamilyPhotosIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)familyPhotosAtIndex:(unsigned long long)arg1;
- (unsigned long long)familyPhotosCount;
- (id)familyPhotosIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)familyPhotosIDsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

