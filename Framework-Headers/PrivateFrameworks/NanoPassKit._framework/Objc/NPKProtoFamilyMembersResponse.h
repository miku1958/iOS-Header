//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoFamilyMembersResponse : PBCodable <NSCopying>
{
    NSMutableArray *_familyMembers;
    BOOL _success;
    CDStruct_f2ecb737 _has;
}

@property (strong, nonatomic) NSMutableArray *familyMembers; // @synthesize familyMembers=_familyMembers;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success; // @synthesize success=_success;

+ (Class)familyMembersType;
- (void).cxx_destruct;
- (void)addFamilyMembers:(id)arg1;
- (void)clearFamilyMembers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)familyMembersAtIndex:(unsigned long long)arg1;
- (unsigned long long)familyMembersCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
