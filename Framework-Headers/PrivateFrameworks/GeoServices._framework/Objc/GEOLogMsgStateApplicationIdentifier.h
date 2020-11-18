//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying>
{
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    BOOL _appDarkMode;
    struct {
        unsigned int appDarkMode:1;
    } _has;
}

@property (nonatomic) BOOL appDarkMode; // @synthesize appDarkMode=_appDarkMode;
@property (strong, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property (strong, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
@property (strong, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property (nonatomic) BOOL hasAppDarkMode;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;

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

