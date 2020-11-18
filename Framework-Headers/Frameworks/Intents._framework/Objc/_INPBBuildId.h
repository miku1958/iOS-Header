//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBBuildId-Protocol.h>

@class NSString;

@interface _INPBBuildId : PBCodable <_INPBBuildId, NSSecureCoding, NSCopying>
{
    struct _has;
    NSString *_buildNumber;
    NSString *_versionNumber;
}

@property (copy, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBuildNumber;
@property (readonly, nonatomic) BOOL hasVersionNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *versionNumber; // @synthesize versionNumber=_versionNumber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

