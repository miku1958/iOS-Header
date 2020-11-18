//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationResponse : PBCodable <NSCopying>
{
    NSMutableArray *_conflictingExpressPassIdentifiers;
    NSMutableArray *_conflictingReferenceExpressPassIdentifiers;
    BOOL _pending;
    CDStruct_eab6c78c _has;
}

@property (strong, nonatomic) NSMutableArray *conflictingExpressPassIdentifiers; // @synthesize conflictingExpressPassIdentifiers=_conflictingExpressPassIdentifiers;
@property (strong, nonatomic) NSMutableArray *conflictingReferenceExpressPassIdentifiers; // @synthesize conflictingReferenceExpressPassIdentifiers=_conflictingReferenceExpressPassIdentifiers;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending; // @synthesize pending=_pending;

+ (Class)conflictingExpressPassIdentifiersType;
+ (Class)conflictingReferenceExpressPassIdentifiersType;
- (void).cxx_destruct;
- (void)addConflictingExpressPassIdentifiers:(id)arg1;
- (void)addConflictingReferenceExpressPassIdentifiers:(id)arg1;
- (void)clearConflictingExpressPassIdentifiers;
- (void)clearConflictingReferenceExpressPassIdentifiers;
- (id)conflictingExpressPassIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingExpressPassIdentifiersCount;
- (id)conflictingReferenceExpressPassIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingReferenceExpressPassIdentifiersCount;
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
