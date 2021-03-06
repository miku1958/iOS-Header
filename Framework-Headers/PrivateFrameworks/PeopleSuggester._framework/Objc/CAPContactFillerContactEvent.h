//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PeopleSuggester/NSCopying-Protocol.h>

@interface CAPContactFillerContactEvent : PBCodable <NSCopying>
{
    double _averageBehavioralRuleConfidence;
    double _averageBehavioralRuleConviction;
    double _averageBehavioralRuleLift;
    double _averageBehavioralRuleMLScore;
    double _averageBehavioralRulePowerFactor;
    double _averageBehavioralRuleSupport;
    double _interactionModelScore;
    double _maximumBehavioralRuleConfidence;
    double _maximumBehavioralRuleConviction;
    double _maximumBehavioralRuleLift;
    double _maximumBehavioralRuleMLScore;
    double _maximumBehavioralRulePowerFactor;
    double _maximumBehavioralRuleSupport;
    double _minimumBehavioralRuleConfidence;
    double _minimumBehavioralRuleConviction;
    double _minimumBehavioralRuleLift;
    double _minimumBehavioralRuleMLScore;
    double _minimumBehavioralRulePowerFactor;
    double _minimumBehavioralRuleSupport;
    double _stdevBehavioralRuleConfidence;
    double _stdevBehavioralRuleConviction;
    double _stdevBehavioralRuleLift;
    double _stdevBehavioralRuleMLScore;
    double _stdevBehavioralRulePowerFactor;
    double _stdevBehavioralRuleSupport;
    unsigned int _normalizedIncomingCallFrequency;
    unsigned int _normalizedIncomingTextFrequency;
    unsigned int _normalizedOutgoingCallFrequency;
    unsigned int _normalizedOutgoingTextFrequency;
    unsigned int _normalizedShareFrequency;
    unsigned int _numberOfBehavioralRulesAdvocating;
    int _timeSinceLastContactViaIncomingCall;
    int _timeSinceLastContactViaIncomingText;
    int _timeSinceLastContactViaOutgoingCall;
    int _timeSinceLastContactViaOutgoingText;
    int _timeSinceLastContactViaShare;
    BOOL _wasShareRecipient;
    struct {
        unsigned int averageBehavioralRuleConfidence:1;
        unsigned int averageBehavioralRuleConviction:1;
        unsigned int averageBehavioralRuleLift:1;
        unsigned int averageBehavioralRuleMLScore:1;
        unsigned int averageBehavioralRulePowerFactor:1;
        unsigned int averageBehavioralRuleSupport:1;
        unsigned int interactionModelScore:1;
        unsigned int maximumBehavioralRuleConfidence:1;
        unsigned int maximumBehavioralRuleConviction:1;
        unsigned int maximumBehavioralRuleLift:1;
        unsigned int maximumBehavioralRuleMLScore:1;
        unsigned int maximumBehavioralRulePowerFactor:1;
        unsigned int maximumBehavioralRuleSupport:1;
        unsigned int minimumBehavioralRuleConfidence:1;
        unsigned int minimumBehavioralRuleConviction:1;
        unsigned int minimumBehavioralRuleLift:1;
        unsigned int minimumBehavioralRuleMLScore:1;
        unsigned int minimumBehavioralRulePowerFactor:1;
        unsigned int minimumBehavioralRuleSupport:1;
        unsigned int stdevBehavioralRuleConfidence:1;
        unsigned int stdevBehavioralRuleConviction:1;
        unsigned int stdevBehavioralRuleLift:1;
        unsigned int stdevBehavioralRuleMLScore:1;
        unsigned int stdevBehavioralRulePowerFactor:1;
        unsigned int stdevBehavioralRuleSupport:1;
        unsigned int normalizedIncomingCallFrequency:1;
        unsigned int normalizedOutgoingCallFrequency:1;
        unsigned int numberOfBehavioralRulesAdvocating:1;
        unsigned int timeSinceLastContactViaIncomingCall:1;
        unsigned int timeSinceLastContactViaOutgoingCall:1;
    } _has;
}

@property (nonatomic) double averageBehavioralRuleConfidence; // @synthesize averageBehavioralRuleConfidence=_averageBehavioralRuleConfidence;
@property (nonatomic) double averageBehavioralRuleConviction; // @synthesize averageBehavioralRuleConviction=_averageBehavioralRuleConviction;
@property (nonatomic) double averageBehavioralRuleLift; // @synthesize averageBehavioralRuleLift=_averageBehavioralRuleLift;
@property (nonatomic) double averageBehavioralRuleMLScore; // @synthesize averageBehavioralRuleMLScore=_averageBehavioralRuleMLScore;
@property (nonatomic) double averageBehavioralRulePowerFactor; // @synthesize averageBehavioralRulePowerFactor=_averageBehavioralRulePowerFactor;
@property (nonatomic) double averageBehavioralRuleSupport; // @synthesize averageBehavioralRuleSupport=_averageBehavioralRuleSupport;
@property (nonatomic) BOOL hasAverageBehavioralRuleConfidence;
@property (nonatomic) BOOL hasAverageBehavioralRuleConviction;
@property (nonatomic) BOOL hasAverageBehavioralRuleLift;
@property (nonatomic) BOOL hasAverageBehavioralRuleMLScore;
@property (nonatomic) BOOL hasAverageBehavioralRulePowerFactor;
@property (nonatomic) BOOL hasAverageBehavioralRuleSupport;
@property (nonatomic) BOOL hasInteractionModelScore;
@property (nonatomic) BOOL hasMaximumBehavioralRuleConfidence;
@property (nonatomic) BOOL hasMaximumBehavioralRuleConviction;
@property (nonatomic) BOOL hasMaximumBehavioralRuleLift;
@property (nonatomic) BOOL hasMaximumBehavioralRuleMLScore;
@property (nonatomic) BOOL hasMaximumBehavioralRulePowerFactor;
@property (nonatomic) BOOL hasMaximumBehavioralRuleSupport;
@property (nonatomic) BOOL hasMinimumBehavioralRuleConfidence;
@property (nonatomic) BOOL hasMinimumBehavioralRuleConviction;
@property (nonatomic) BOOL hasMinimumBehavioralRuleLift;
@property (nonatomic) BOOL hasMinimumBehavioralRuleMLScore;
@property (nonatomic) BOOL hasMinimumBehavioralRulePowerFactor;
@property (nonatomic) BOOL hasMinimumBehavioralRuleSupport;
@property (nonatomic) BOOL hasNormalizedIncomingCallFrequency;
@property (nonatomic) BOOL hasNormalizedOutgoingCallFrequency;
@property (nonatomic) BOOL hasNumberOfBehavioralRulesAdvocating;
@property (nonatomic) BOOL hasStdevBehavioralRuleConfidence;
@property (nonatomic) BOOL hasStdevBehavioralRuleConviction;
@property (nonatomic) BOOL hasStdevBehavioralRuleLift;
@property (nonatomic) BOOL hasStdevBehavioralRuleMLScore;
@property (nonatomic) BOOL hasStdevBehavioralRulePowerFactor;
@property (nonatomic) BOOL hasStdevBehavioralRuleSupport;
@property (nonatomic) BOOL hasTimeSinceLastContactViaIncomingCall;
@property (nonatomic) BOOL hasTimeSinceLastContactViaOutgoingCall;
@property (nonatomic) double interactionModelScore; // @synthesize interactionModelScore=_interactionModelScore;
@property (nonatomic) double maximumBehavioralRuleConfidence; // @synthesize maximumBehavioralRuleConfidence=_maximumBehavioralRuleConfidence;
@property (nonatomic) double maximumBehavioralRuleConviction; // @synthesize maximumBehavioralRuleConviction=_maximumBehavioralRuleConviction;
@property (nonatomic) double maximumBehavioralRuleLift; // @synthesize maximumBehavioralRuleLift=_maximumBehavioralRuleLift;
@property (nonatomic) double maximumBehavioralRuleMLScore; // @synthesize maximumBehavioralRuleMLScore=_maximumBehavioralRuleMLScore;
@property (nonatomic) double maximumBehavioralRulePowerFactor; // @synthesize maximumBehavioralRulePowerFactor=_maximumBehavioralRulePowerFactor;
@property (nonatomic) double maximumBehavioralRuleSupport; // @synthesize maximumBehavioralRuleSupport=_maximumBehavioralRuleSupport;
@property (nonatomic) double minimumBehavioralRuleConfidence; // @synthesize minimumBehavioralRuleConfidence=_minimumBehavioralRuleConfidence;
@property (nonatomic) double minimumBehavioralRuleConviction; // @synthesize minimumBehavioralRuleConviction=_minimumBehavioralRuleConviction;
@property (nonatomic) double minimumBehavioralRuleLift; // @synthesize minimumBehavioralRuleLift=_minimumBehavioralRuleLift;
@property (nonatomic) double minimumBehavioralRuleMLScore; // @synthesize minimumBehavioralRuleMLScore=_minimumBehavioralRuleMLScore;
@property (nonatomic) double minimumBehavioralRulePowerFactor; // @synthesize minimumBehavioralRulePowerFactor=_minimumBehavioralRulePowerFactor;
@property (nonatomic) double minimumBehavioralRuleSupport; // @synthesize minimumBehavioralRuleSupport=_minimumBehavioralRuleSupport;
@property (nonatomic) unsigned int normalizedIncomingCallFrequency; // @synthesize normalizedIncomingCallFrequency=_normalizedIncomingCallFrequency;
@property (nonatomic) unsigned int normalizedIncomingTextFrequency; // @synthesize normalizedIncomingTextFrequency=_normalizedIncomingTextFrequency;
@property (nonatomic) unsigned int normalizedOutgoingCallFrequency; // @synthesize normalizedOutgoingCallFrequency=_normalizedOutgoingCallFrequency;
@property (nonatomic) unsigned int normalizedOutgoingTextFrequency; // @synthesize normalizedOutgoingTextFrequency=_normalizedOutgoingTextFrequency;
@property (nonatomic) unsigned int normalizedShareFrequency; // @synthesize normalizedShareFrequency=_normalizedShareFrequency;
@property (nonatomic) unsigned int numberOfBehavioralRulesAdvocating; // @synthesize numberOfBehavioralRulesAdvocating=_numberOfBehavioralRulesAdvocating;
@property (nonatomic) double stdevBehavioralRuleConfidence; // @synthesize stdevBehavioralRuleConfidence=_stdevBehavioralRuleConfidence;
@property (nonatomic) double stdevBehavioralRuleConviction; // @synthesize stdevBehavioralRuleConviction=_stdevBehavioralRuleConviction;
@property (nonatomic) double stdevBehavioralRuleLift; // @synthesize stdevBehavioralRuleLift=_stdevBehavioralRuleLift;
@property (nonatomic) double stdevBehavioralRuleMLScore; // @synthesize stdevBehavioralRuleMLScore=_stdevBehavioralRuleMLScore;
@property (nonatomic) double stdevBehavioralRulePowerFactor; // @synthesize stdevBehavioralRulePowerFactor=_stdevBehavioralRulePowerFactor;
@property (nonatomic) double stdevBehavioralRuleSupport; // @synthesize stdevBehavioralRuleSupport=_stdevBehavioralRuleSupport;
@property (nonatomic) int timeSinceLastContactViaIncomingCall; // @synthesize timeSinceLastContactViaIncomingCall=_timeSinceLastContactViaIncomingCall;
@property (nonatomic) int timeSinceLastContactViaIncomingText; // @synthesize timeSinceLastContactViaIncomingText=_timeSinceLastContactViaIncomingText;
@property (nonatomic) int timeSinceLastContactViaOutgoingCall; // @synthesize timeSinceLastContactViaOutgoingCall=_timeSinceLastContactViaOutgoingCall;
@property (nonatomic) int timeSinceLastContactViaOutgoingText; // @synthesize timeSinceLastContactViaOutgoingText=_timeSinceLastContactViaOutgoingText;
@property (nonatomic) int timeSinceLastContactViaShare; // @synthesize timeSinceLastContactViaShare=_timeSinceLastContactViaShare;
@property (nonatomic) BOOL wasShareRecipient; // @synthesize wasShareRecipient=_wasShareRecipient;

- (int)StringAsTimeSinceLastContactViaIncomingCall:(id)arg1;
- (int)StringAsTimeSinceLastContactViaIncomingText:(id)arg1;
- (int)StringAsTimeSinceLastContactViaOutgoingCall:(id)arg1;
- (int)StringAsTimeSinceLastContactViaOutgoingText:(id)arg1;
- (int)StringAsTimeSinceLastContactViaShare:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)timeSinceLastContactViaIncomingCallAsString:(int)arg1;
- (id)timeSinceLastContactViaIncomingTextAsString:(int)arg1;
- (id)timeSinceLastContactViaOutgoingCallAsString:(int)arg1;
- (id)timeSinceLastContactViaOutgoingTextAsString:(int)arg1;
- (id)timeSinceLastContactViaShareAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

