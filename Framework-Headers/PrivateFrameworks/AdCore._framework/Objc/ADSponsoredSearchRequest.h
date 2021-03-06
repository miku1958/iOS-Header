//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <AdCore/NSCopying-Protocol.h>

@class ADUserTargetingProperties, NSString;

@interface ADSponsoredSearchRequest : PBRequest <NSCopying>
{
    NSString *_deploymentID;
    NSString *_experimentID;
    ADUserTargetingProperties *_properties;
    int _supportedODMLVersion;
    NSString *_treatmentID;
    BOOL _clientExclusive;
    BOOL _enableImagesForDupes;
    BOOL _inAllocation;
    BOOL _isBaseline;
    BOOL _isTest;
    struct {
        unsigned int supportedODMLVersion:1;
        unsigned int clientExclusive:1;
        unsigned int enableImagesForDupes:1;
        unsigned int inAllocation:1;
        unsigned int isBaseline:1;
        unsigned int isTest:1;
    } _has;
}

@property (nonatomic) BOOL clientExclusive; // @synthesize clientExclusive=_clientExclusive;
@property (strong, nonatomic) NSString *deploymentID; // @synthesize deploymentID=_deploymentID;
@property (nonatomic) BOOL enableImagesForDupes; // @synthesize enableImagesForDupes=_enableImagesForDupes;
@property (strong, nonatomic) NSString *experimentID; // @synthesize experimentID=_experimentID;
@property (nonatomic) BOOL hasClientExclusive;
@property (readonly, nonatomic) BOOL hasDeploymentID;
@property (nonatomic) BOOL hasEnableImagesForDupes;
@property (readonly, nonatomic) BOOL hasExperimentID;
@property (nonatomic) BOOL hasInAllocation;
@property (nonatomic) BOOL hasIsBaseline;
@property (nonatomic) BOOL hasIsTest;
@property (readonly, nonatomic) BOOL hasProperties;
@property (nonatomic) BOOL hasSupportedODMLVersion;
@property (readonly, nonatomic) BOOL hasTreatmentID;
@property (nonatomic) BOOL inAllocation; // @synthesize inAllocation=_inAllocation;
@property (nonatomic) BOOL isBaseline; // @synthesize isBaseline=_isBaseline;
@property (nonatomic) BOOL isTest; // @synthesize isTest=_isTest;
@property (strong, nonatomic) ADUserTargetingProperties *properties; // @synthesize properties=_properties;
@property (nonatomic) int supportedODMLVersion; // @synthesize supportedODMLVersion=_supportedODMLVersion;
@property (strong, nonatomic) NSString *treatmentID; // @synthesize treatmentID=_treatmentID;

+ (id)options;
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

