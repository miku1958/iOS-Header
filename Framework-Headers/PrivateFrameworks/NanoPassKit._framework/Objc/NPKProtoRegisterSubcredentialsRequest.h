//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoRegisterSubcredentialsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_identifiers;
}

@property (strong, nonatomic) NSMutableArray *identifiers; // @synthesize identifiers=_identifiers;

+ (Class)identifiersType;
- (void).cxx_destruct;
- (void)addIdentifiers:(id)arg1;
- (void)clearIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
