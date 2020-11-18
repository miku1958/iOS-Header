//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestAccountConfig : PBCodable <NSCopying>
{
    BOOL _corporateSharingEnabled;
    struct {
        unsigned int corporateSharingEnabled:1;
    } _has;
}

@property (nonatomic) BOOL corporateSharingEnabled; // @synthesize corporateSharingEnabled=_corporateSharingEnabled;
@property (nonatomic) BOOL hasCorporateSharingEnabled;

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

