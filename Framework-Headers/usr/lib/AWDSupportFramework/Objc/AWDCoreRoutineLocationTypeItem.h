//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineLocationTypeItem : PBCodable <NSCopying>
{
    int _locationType;
    int _percentage;
    struct {
        unsigned int locationType:1;
        unsigned int percentage:1;
    } _has;
}

@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) BOOL hasPercentage;
@property (nonatomic) int locationType; // @synthesize locationType=_locationType;
@property (nonatomic) int percentage; // @synthesize percentage=_percentage;

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

