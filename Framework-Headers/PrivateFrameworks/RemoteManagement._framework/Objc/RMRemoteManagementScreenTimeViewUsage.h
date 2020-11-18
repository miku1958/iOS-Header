//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <RemoteManagement/NSCopying-Protocol.h>

@class NSString;

@interface RMRemoteManagementScreenTimeViewUsage : PBCodable <NSCopying>
{
    unsigned long long _daysSinceLastView;
    unsigned long long _timestamp;
    NSString *_familyMemberType;
    BOOL _hasPasscode;
    BOOL _isManaged;
    BOOL _remoteUser;
    struct {
        unsigned int daysSinceLastView:1;
        unsigned int timestamp:1;
        unsigned int hasPasscode:1;
        unsigned int isManaged:1;
        unsigned int remoteUser:1;
    } _has;
}

@property (nonatomic) unsigned long long daysSinceLastView; // @synthesize daysSinceLastView=_daysSinceLastView;
@property (strong, nonatomic) NSString *familyMemberType; // @synthesize familyMemberType=_familyMemberType;
@property (nonatomic) BOOL hasDaysSinceLastView;
@property (readonly, nonatomic) BOOL hasFamilyMemberType;
@property (nonatomic) BOOL hasHasPasscode;
@property (nonatomic) BOOL hasIsManaged;
@property (nonatomic) BOOL hasPasscode; // @synthesize hasPasscode=_hasPasscode;
@property (nonatomic) BOOL hasRemoteUser;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
@property (nonatomic) BOOL remoteUser; // @synthesize remoteUser=_remoteUser;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

