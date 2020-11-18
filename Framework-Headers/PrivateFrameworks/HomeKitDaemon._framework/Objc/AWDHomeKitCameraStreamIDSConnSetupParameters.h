//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraStreamIDSConnSetupParameters : PBCodable <NSCopying>
{
    unsigned long long _connectionComplete;
    unsigned long long _connectionRequested;
    struct {
        unsigned int connectionComplete:1;
        unsigned int connectionRequested:1;
    } _has;
}

@property (nonatomic) unsigned long long connectionComplete; // @synthesize connectionComplete=_connectionComplete;
@property (nonatomic) unsigned long long connectionRequested; // @synthesize connectionRequested=_connectionRequested;
@property (nonatomic) BOOL hasConnectionComplete;
@property (nonatomic) BOOL hasConnectionRequested;

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

