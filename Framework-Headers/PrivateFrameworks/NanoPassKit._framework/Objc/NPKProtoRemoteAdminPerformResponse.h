//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying>
{
    NSData *_responseDictionary;
    unsigned int _resultCode;
}

@property (readonly, nonatomic) BOOL hasResponseDictionary;
@property (strong, nonatomic) NSData *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property (nonatomic) unsigned int resultCode; // @synthesize resultCode=_resultCode;

- (void).cxx_destruct;
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

