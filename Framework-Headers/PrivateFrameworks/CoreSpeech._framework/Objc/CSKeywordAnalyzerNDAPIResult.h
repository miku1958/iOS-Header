//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CSKeywordAnalyzerNDAPIResult : NSObject
{
    BOOL _isEarlyWarning;
    BOOL _isRescoring;
    float _bestScore;
    unsigned long long _phraseId;
    unsigned long long _samplesFed;
    unsigned long long _bestPhrase;
    unsigned long long _bestStart;
    unsigned long long _bestEnd;
    unsigned long long _samplesAtFire;
    unsigned long long _startSampleCount;
}

@property (nonatomic) unsigned long long bestEnd; // @synthesize bestEnd=_bestEnd;
@property (nonatomic) unsigned long long bestPhrase; // @synthesize bestPhrase=_bestPhrase;
@property (nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property (nonatomic) unsigned long long bestStart; // @synthesize bestStart=_bestStart;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL isEarlyWarning; // @synthesize isEarlyWarning=_isEarlyWarning;
@property (nonatomic) BOOL isRescoring; // @synthesize isRescoring=_isRescoring;
@property (nonatomic) unsigned long long phraseId; // @synthesize phraseId=_phraseId;
@property (nonatomic) unsigned long long samplesAtFire; // @synthesize samplesAtFire=_samplesAtFire;
@property (nonatomic) unsigned long long samplesFed; // @synthesize samplesFed=_samplesFed;
@property (nonatomic) unsigned long long startSampleCount; // @synthesize startSampleCount=_startSampleCount;

- (id)init;

@end

