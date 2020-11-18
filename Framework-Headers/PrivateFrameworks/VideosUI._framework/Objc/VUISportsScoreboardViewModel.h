//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUISportsScoreboardViewModel : NSObject
{
    BOOL _showScoreboard;
    NSString *_canonicalId;
    NSDictionary *_leagueContext;
    NSArray *_scores;
}

@property (readonly, nonatomic) NSString *canonicalId; // @synthesize canonicalId=_canonicalId;
@property (readonly, nonatomic) NSDictionary *leagueContext; // @synthesize leagueContext=_leagueContext;
@property (readonly, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property (readonly, nonatomic) BOOL showScoreboard; // @synthesize showScoreboard=_showScoreboard;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)jsContextDictionary;

@end
