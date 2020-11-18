//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2DDLinkShown : PBCodable <NSCopying>
{
    int _interface;
    NSString *_key;
    struct {
        unsigned int interface:1;
    } _has;
}

@property (nonatomic) BOOL hasInterface;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) int interface; // @synthesize interface=_interface;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;

- (void).cxx_destruct;
- (int)StringAsInterface:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)interfaceAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
