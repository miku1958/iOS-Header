//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoLeash/NSCopying-Protocol.h>

@interface NFMProtoDidPlaySoundAndFlashLEDResponse : PBCodable <NSCopying>
{
    BOOL _didPlay;
}

@property (nonatomic) BOOL didPlay; // @synthesize didPlay=_didPlay;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

