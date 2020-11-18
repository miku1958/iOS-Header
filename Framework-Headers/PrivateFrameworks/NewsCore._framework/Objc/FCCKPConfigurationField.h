//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPConfigurationFieldValue, NSString;

@interface FCCKPConfigurationField : PBCodable <NSCopying>
{
    NSString *_name;
    FCCKPConfigurationFieldValue *_value;
}

@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasValue;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) FCCKPConfigurationFieldValue *value; // @synthesize value=_value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

