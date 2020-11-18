//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HDCodableAuthorizationResponseMessage : PBCodable <NSCopying>
{
    NSString *_appBundleIdentifier;
    NSString *_errorDescription;
    NSString *_hostAppName;
    NSData *_requestIdentifier;
    BOOL _shouldPrompt;
    struct {
        unsigned int shouldPrompt:1;
    } _has;
}

@property (strong, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property (strong, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasHostAppName;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (nonatomic) BOOL hasShouldPrompt;
@property (strong, nonatomic) NSString *hostAppName; // @synthesize hostAppName=_hostAppName;
@property (strong, nonatomic) NSData *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property (nonatomic) BOOL shouldPrompt; // @synthesize shouldPrompt=_shouldPrompt;

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
