//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying>
{
    struct GEOSessionID _sessionId;
    NSString *_sourceAppBundleId;
    NSString *_uriScheme;
    struct {
        unsigned int sessionId:1;
    } _has;
}

@property (nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasSourceAppBundleId;
@property (readonly, nonatomic) BOOL hasUriScheme;
@property (nonatomic) struct GEOSessionID sessionId; // @synthesize sessionId=_sessionId;
@property (strong, nonatomic) NSString *sourceAppBundleId; // @synthesize sourceAppBundleId=_sourceAppBundleId;
@property (strong, nonatomic) NSString *uriScheme; // @synthesize uriScheme=_uriScheme;

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

