//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@interface PBBProtoPushControllerType : PBCodable <NSCopying>
{
    double _intendedFireDate;
    unsigned int _controllerType;
    CDStruct_88f5f09d _has;
}

@property (nonatomic) unsigned int controllerType; // @synthesize controllerType=_controllerType;
@property (nonatomic) BOOL hasIntendedFireDate;
@property (nonatomic) double intendedFireDate; // @synthesize intendedFireDate=_intendedFireDate;

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

