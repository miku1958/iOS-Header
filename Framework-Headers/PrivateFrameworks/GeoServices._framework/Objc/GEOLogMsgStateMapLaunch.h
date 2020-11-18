//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateMapLaunch : PBCodable <NSCopying>
{
    NSString *_launchUri;
    NSString *_sourceAppId;
}

@property (readonly, nonatomic) BOOL hasLaunchUri;
@property (readonly, nonatomic) BOOL hasSourceAppId;
@property (strong, nonatomic) NSString *launchUri; // @synthesize launchUri=_launchUri;
@property (strong, nonatomic) NSString *sourceAppId; // @synthesize sourceAppId=_sourceAppId;

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

