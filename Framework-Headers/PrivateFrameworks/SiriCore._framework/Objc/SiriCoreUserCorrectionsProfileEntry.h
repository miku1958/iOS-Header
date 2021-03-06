//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSString, SiriCoreCorrectionPronunciation;

@interface SiriCoreUserCorrectionsProfileEntry : PBCodable <NSCopying>
{
    unsigned int _alternativesCorrectionsCount;
    NSString *_correctedText;
    SiriCoreCorrectionPronunciation *_pronunciationData;
    unsigned int _spellingCorrectionsCount;
    unsigned int _tap2editCorrectionsCount;
    struct {
        unsigned int alternativesCorrectionsCount:1;
        unsigned int spellingCorrectionsCount:1;
        unsigned int tap2editCorrectionsCount:1;
    } _has;
}

@property (nonatomic) unsigned int alternativesCorrectionsCount; // @synthesize alternativesCorrectionsCount=_alternativesCorrectionsCount;
@property (strong, nonatomic) NSString *correctedText; // @synthesize correctedText=_correctedText;
@property (nonatomic) BOOL hasAlternativesCorrectionsCount;
@property (readonly, nonatomic) BOOL hasCorrectedText;
@property (readonly, nonatomic) BOOL hasPronunciationData;
@property (nonatomic) BOOL hasSpellingCorrectionsCount;
@property (nonatomic) BOOL hasTap2editCorrectionsCount;
@property (strong, nonatomic) SiriCoreCorrectionPronunciation *pronunciationData; // @synthesize pronunciationData=_pronunciationData;
@property (nonatomic) unsigned int spellingCorrectionsCount; // @synthesize spellingCorrectionsCount=_spellingCorrectionsCount;
@property (nonatomic) unsigned int tap2editCorrectionsCount; // @synthesize tap2editCorrectionsCount=_tap2editCorrectionsCount;

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

