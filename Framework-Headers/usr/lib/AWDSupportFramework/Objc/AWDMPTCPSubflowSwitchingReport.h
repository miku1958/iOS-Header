//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDMPTCPSubflowSwitchingReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _switchCount;
    NSString *_switchFromInterfaceName;
    NSString *_switchToInterfaceName;
    struct {
        unsigned int timestamp:1;
        unsigned int switchCount:1;
    } _has;
}

@property (nonatomic) BOOL hasSwitchCount;
@property (readonly, nonatomic) BOOL hasSwitchFromInterfaceName;
@property (readonly, nonatomic) BOOL hasSwitchToInterfaceName;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int switchCount; // @synthesize switchCount=_switchCount;
@property (strong, nonatomic) NSString *switchFromInterfaceName; // @synthesize switchFromInterfaceName=_switchFromInterfaceName;
@property (strong, nonatomic) NSString *switchToInterfaceName; // @synthesize switchToInterfaceName=_switchToInterfaceName;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

