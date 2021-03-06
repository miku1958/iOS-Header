//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBErrorResponse : PBCodable <NSCopying>
{
    NSMutableArray *_errors;
}

@property (strong, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;

+ (Class)errorsType;
- (void).cxx_destruct;
- (void)addErrors:(id)arg1;
- (void)clearErrors;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

