//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFSearchResult;

__attribute__((visibility("hidden")))
@interface PARResultAndScore : NSObject
{
    SFSearchResult *_result;
    double _topicScore;
    double _mediatypeScore;
    double _tldScore;
    double _totalScore;
    double _serverScore;
    double _personalizationBorda;
    double _serverBorda;
    double _blendedBordaScore;
}

@property (nonatomic) double blendedBordaScore; // @synthesize blendedBordaScore=_blendedBordaScore;
@property (nonatomic) double mediatypeScore; // @synthesize mediatypeScore=_mediatypeScore;
@property (nonatomic) double personalizationBorda; // @synthesize personalizationBorda=_personalizationBorda;
@property (strong, nonatomic) SFSearchResult *result; // @synthesize result=_result;
@property (nonatomic) double serverBorda; // @synthesize serverBorda=_serverBorda;
@property (nonatomic) double serverScore; // @synthesize serverScore=_serverScore;
@property (nonatomic) double tldScore; // @synthesize tldScore=_tldScore;
@property (nonatomic) double topicScore; // @synthesize topicScore=_topicScore;
@property (nonatomic) double totalScore; // @synthesize totalScore=_totalScore;

- (void).cxx_destruct;

@end
