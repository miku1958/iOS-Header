//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@class BLTPBAppearance, NSData, NSString;

@interface BLTPBAction : PBCodable <NSCopying>
{
    int _activationMode;
    BLTPBAppearance *_appearance;
    int _behavior;
    NSData *_behaviorParameters;
    NSData *_behaviorParametersNulls;
    NSString *_identifier;
    NSString *_launchURL;
    struct {
        unsigned int behavior:1;
    } _has;
}

@property (nonatomic) int activationMode; // @synthesize activationMode=_activationMode;
@property (strong, nonatomic) BLTPBAppearance *appearance; // @synthesize appearance=_appearance;
@property (nonatomic) int behavior; // @synthesize behavior=_behavior;
@property (strong, nonatomic) NSData *behaviorParameters; // @synthesize behaviorParameters=_behaviorParameters;
@property (strong, nonatomic) NSData *behaviorParametersNulls; // @synthesize behaviorParametersNulls=_behaviorParametersNulls;
@property (nonatomic) BOOL hasBehavior;
@property (readonly, nonatomic) BOOL hasBehaviorParameters;
@property (readonly, nonatomic) BOOL hasBehaviorParametersNulls;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLaunchURL;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *launchURL; // @synthesize launchURL=_launchURL;

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

