//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class NSData;

@interface MNTraceBookmark : PBCodable <NSCopying>
{
    double _timestamp;
    NSData *_imageData;
    struct {
        unsigned int timestamp:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasImageData;
@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

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

