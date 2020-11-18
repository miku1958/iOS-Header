//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveInputPredictionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface PSGPBQuery : PBCodable <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_experimentId;
    NSString *_initiatingProcess;
    NSString *_localeIdentifier;
    unsigned int _maxPredictionItems;
    unsigned int _maxStructuredInfoItems;
    unsigned int _maxTextualResponseItems;
    NSString *_textContentType;
    NSString *_treatmentId;
    NSString *_treatmentName;
    BOOL _hasContextBeforeInput;
    BOOL _hasRecipientNames;
    BOOL _hasResponseContext;
    BOOL _isDocumentEmpty;
    BOOL _isResponseContextBlacklisted;
    struct {
        unsigned int maxPredictionItems:1;
        unsigned int maxStructuredInfoItems:1;
        unsigned int maxTextualResponseItems:1;
        unsigned int hasContextBeforeInput:1;
        unsigned int hasRecipientNames:1;
        unsigned int hasResponseContext:1;
        unsigned int isDocumentEmpty:1;
        unsigned int isResponseContextBlacklisted:1;
    } _has;
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (nonatomic) BOOL hasContextBeforeInput; // @synthesize hasContextBeforeInput=_hasContextBeforeInput;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasHasContextBeforeInput;
@property (nonatomic) BOOL hasHasRecipientNames;
@property (nonatomic) BOOL hasHasResponseContext;
@property (readonly, nonatomic) BOOL hasInitiatingProcess;
@property (nonatomic) BOOL hasIsDocumentEmpty;
@property (nonatomic) BOOL hasIsResponseContextBlacklisted;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (nonatomic) BOOL hasMaxPredictionItems;
@property (nonatomic) BOOL hasMaxStructuredInfoItems;
@property (nonatomic) BOOL hasMaxTextualResponseItems;
@property (nonatomic) BOOL hasRecipientNames; // @synthesize hasRecipientNames=_hasRecipientNames;
@property (nonatomic) BOOL hasResponseContext; // @synthesize hasResponseContext=_hasResponseContext;
@property (readonly, nonatomic) BOOL hasTextContentType;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentName;
@property (strong, nonatomic) NSString *initiatingProcess; // @synthesize initiatingProcess=_initiatingProcess;
@property (nonatomic) BOOL isDocumentEmpty; // @synthesize isDocumentEmpty=_isDocumentEmpty;
@property (nonatomic) BOOL isResponseContextBlacklisted; // @synthesize isResponseContextBlacklisted=_isResponseContextBlacklisted;
@property (strong, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property (nonatomic) unsigned int maxPredictionItems; // @synthesize maxPredictionItems=_maxPredictionItems;
@property (nonatomic) unsigned int maxStructuredInfoItems; // @synthesize maxStructuredInfoItems=_maxStructuredInfoItems;
@property (nonatomic) unsigned int maxTextualResponseItems; // @synthesize maxTextualResponseItems=_maxTextualResponseItems;
@property (strong, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property (strong, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property (strong, nonatomic) NSString *treatmentName; // @synthesize treatmentName=_treatmentName;

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
