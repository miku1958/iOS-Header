//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying>
{
    NSString *_significantEvent;
    BOOL _offsetPresent;
    struct {
        unsigned int offsetPresent:1;
    } _has;
}

@property (nonatomic) BOOL hasOffsetPresent;
@property (readonly, nonatomic) BOOL hasSignificantEvent;
@property (nonatomic) BOOL offsetPresent; // @synthesize offsetPresent=_offsetPresent;
@property (strong, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;

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

