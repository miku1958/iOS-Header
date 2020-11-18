//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBString;

@interface _INPBIntentMetadata : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _RequiredEntitlements;
    NSString *_LaunchId;
    NSString *_intentId;
    _INPBString *_userUtterance;
    BOOL _backgroundLaunch;
    BOOL _confirmed;
    struct {
        unsigned int backgroundLaunch:1;
        unsigned int confirmed:1;
    } _has;
}

@property (strong, nonatomic) NSString *LaunchId; // @synthesize LaunchId=_LaunchId;
@property (readonly, nonatomic) int *RequiredEntitlements;
@property (readonly, nonatomic) unsigned long long RequiredEntitlementsCount;
@property (nonatomic) BOOL backgroundLaunch; // @synthesize backgroundLaunch=_backgroundLaunch;
@property (nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property (nonatomic) BOOL hasBackgroundLaunch;
@property (nonatomic) BOOL hasConfirmed;
@property (readonly, nonatomic) BOOL hasIntentId;
@property (readonly, nonatomic) BOOL hasLaunchId;
@property (readonly, nonatomic) BOOL hasUserUtterance;
@property (strong, nonatomic) NSString *intentId; // @synthesize intentId=_intentId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) _INPBString *userUtterance; // @synthesize userUtterance=_userUtterance;

- (void).cxx_destruct;
- (int)RequiredEntitlementAtIndex:(unsigned long long)arg1;
- (id)RequiredEntitlementsAsString:(int)arg1;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearRequiredEntitlements;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

