//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableCompanionUserNotificationConfiguration, NSString;

@interface HDCodableCompanionUserNotificationRequest : PBRequest <NSCopying>
{
    HDCodableCompanionUserNotificationConfiguration *_notificationConfiguration;
    NSString *_requestIdentifier;
}

@property (readonly, nonatomic) BOOL hasNotificationConfiguration;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (strong, nonatomic) HDCodableCompanionUserNotificationConfiguration *notificationConfiguration; // @synthesize notificationConfiguration=_notificationConfiguration;
@property (strong, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;

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
