//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPPackageManifestSection : PBCodable <NSCopying>
{
    long long _size;
    NSData *_signature;
    BOOL _lastSection;
    struct {
        unsigned int size:1;
        unsigned int lastSection:1;
    } _has;
}

@property (nonatomic) BOOL hasLastSection;
@property (readonly, nonatomic) BOOL hasSignature;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) BOOL lastSection; // @synthesize lastSection=_lastSection;
@property (strong, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property (nonatomic) long long size; // @synthesize size=_size;

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

