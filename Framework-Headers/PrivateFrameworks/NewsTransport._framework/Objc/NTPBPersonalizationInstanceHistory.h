//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBPersonalizationInstanceHistory : PBCodable <NSCopying>
{
    unsigned long long _lastChangeNumber;
    NSString *_instanceIdentifier;
    struct {
        unsigned int lastChangeNumber:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasInstanceIdentifier;
@property (nonatomic) BOOL hasLastChangeNumber;
@property (strong, nonatomic) NSString *instanceIdentifier; // @synthesize instanceIdentifier=_instanceIdentifier;
@property (nonatomic) unsigned long long lastChangeNumber; // @synthesize lastChangeNumber=_lastChangeNumber;

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

