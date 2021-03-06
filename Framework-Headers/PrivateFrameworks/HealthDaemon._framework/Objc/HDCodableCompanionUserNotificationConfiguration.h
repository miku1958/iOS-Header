//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDCodableCompanionUserNotificationConfiguration : PBCodable <NSCopying>
{
    int _notificationType;
    struct {
        unsigned int notificationType:1;
    } _has;
}

@property (nonatomic) BOOL hasNotificationType;
@property (nonatomic) int notificationType; // @synthesize notificationType=_notificationType;

- (int)StringAsNotificationType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notificationTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

