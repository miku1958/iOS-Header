//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ScreenTimeCore/NSCopying-Protocol.h>

@class NSString;

@interface RMRemoteManagementScreenTimeLimitDelete : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_familyMemberType;
    BOOL _hasPasscode;
    BOOL _isManaged;
    BOOL _isManaging;
    CDStruct_8286c7c8 _has;
}

@property (strong, nonatomic) NSString *familyMemberType; // @synthesize familyMemberType=_familyMemberType;
@property (readonly, nonatomic) BOOL hasFamilyMemberType;
@property (nonatomic) BOOL hasHasPasscode;
@property (nonatomic) BOOL hasIsManaged;
@property (nonatomic) BOOL hasIsManaging;
@property (nonatomic) BOOL hasPasscode; // @synthesize hasPasscode=_hasPasscode;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
@property (nonatomic) BOOL isManaging; // @synthesize isManaging=_isManaging;
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

