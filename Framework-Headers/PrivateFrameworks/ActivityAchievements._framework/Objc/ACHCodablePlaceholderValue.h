//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivityAchievements/NSCopying-Protocol.h>

@class NSString;

@interface ACHCodablePlaceholderValue : PBCodable <NSCopying>
{
    NSString *_placeholder;
    NSString *_value;
}

@property (readonly, nonatomic) BOOL hasPlaceholder;
@property (readonly, nonatomic) BOOL hasValue;
@property (strong, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property (strong, nonatomic) NSString *value; // @synthesize value=_value;

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
