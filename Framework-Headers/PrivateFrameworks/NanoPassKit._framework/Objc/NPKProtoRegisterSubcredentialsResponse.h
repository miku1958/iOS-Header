//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoRegisterSubcredentialsResponse : PBCodable <NSCopying>
{
    NSMutableArray *_errorsDatas;
    NSMutableArray *_passesDatas;
}

@property (strong, nonatomic) NSMutableArray *errorsDatas; // @synthesize errorsDatas=_errorsDatas;
@property (strong, nonatomic) NSMutableArray *passesDatas; // @synthesize passesDatas=_passesDatas;

+ (Class)errorsDataType;
+ (Class)passesDataType;
- (void).cxx_destruct;
- (void)addErrorsData:(id)arg1;
- (void)addPassesData:(id)arg1;
- (void)clearErrorsDatas;
- (void)clearPassesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorsDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorsDatasCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passesDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)passesDatasCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

