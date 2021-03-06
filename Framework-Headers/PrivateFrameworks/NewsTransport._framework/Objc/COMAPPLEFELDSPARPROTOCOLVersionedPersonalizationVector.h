//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector : PBCodable <NSCopying>
{
    NSData *_bundleSubscribedVector;
    NSString *_bundleSubscribedVectorVersion;
    NSData *_personalizationVector;
    NSString *_version;
}

@property (strong, nonatomic) NSData *bundleSubscribedVector; // @synthesize bundleSubscribedVector=_bundleSubscribedVector;
@property (strong, nonatomic) NSString *bundleSubscribedVectorVersion; // @synthesize bundleSubscribedVectorVersion=_bundleSubscribedVectorVersion;
@property (readonly, nonatomic) BOOL hasBundleSubscribedVector;
@property (readonly, nonatomic) BOOL hasBundleSubscribedVectorVersion;
@property (readonly, nonatomic) BOOL hasPersonalizationVector;
@property (readonly, nonatomic) BOOL hasVersion;
@property (strong, nonatomic) NSData *personalizationVector; // @synthesize personalizationVector=_personalizationVector;
@property (strong, nonatomic) NSString *version; // @synthesize version=_version;

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

