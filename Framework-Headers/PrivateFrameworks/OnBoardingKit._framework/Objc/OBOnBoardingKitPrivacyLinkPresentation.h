//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <OnBoardingKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OBOnBoardingKitPrivacyLinkPresentation : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_bundleid;
    CDStruct_b5306035 _has;
}

@property (strong, nonatomic) NSString *bundleid; // @synthesize bundleid=_bundleid;
@property (readonly, nonatomic) BOOL hasBundleid;
@property (nonatomic) BOOL hasTimestamp;
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
