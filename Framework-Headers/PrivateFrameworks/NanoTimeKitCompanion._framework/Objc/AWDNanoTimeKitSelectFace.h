//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>

@class NSString;

@interface AWDNanoTimeKitSelectFace : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_selectedFace;
    struct {
        unsigned int timestamp:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasSelectedFace;
@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) NSString *selectedFace; // @synthesize selectedFace=_selectedFace;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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
