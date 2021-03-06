//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PETSchemaPETRawMessage : PBCodable
{
    unsigned int _type_id;
    NSData *_raw_bytes;
    NSString *_name;
    struct {
        unsigned int type_id:1;
    } _has;
    BOOL _hasRaw_bytes;
    BOOL _hasName;
}

@property (nonatomic) BOOL hasName; // @synthesize hasName=_hasName;
@property (nonatomic) BOOL hasRaw_bytes; // @synthesize hasRaw_bytes=_hasRaw_bytes;
@property (nonatomic) BOOL hasType_id;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSData *raw_bytes; // @synthesize raw_bytes=_raw_bytes;
@property (nonatomic) unsigned int type_id; // @synthesize type_id=_type_id;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

