//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSMutableArray;

@interface CLPIonosphereCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_ionoDatas;
    CLPMeta *_meta;
}

@property (readonly, nonatomic) BOOL hasMeta;
@property (strong, nonatomic) NSMutableArray *ionoDatas; // @synthesize ionoDatas=_ionoDatas;
@property (strong, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;

+ (Class)ionoDataType;
- (void).cxx_destruct;
- (void)addIonoData:(id)arg1;
- (void)clearIonoDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)ionoDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)ionoDatasCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
