//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNCommuteDestinationScore.h>

#import <Navigation/MNCommuteDestinationLocationHistoryScore-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationLocationHistoryScore : MNCommuteDestinationScore <MNCommuteDestinationLocationHistoryScore>
{
    int _score;
    BOOL _destinationInvalid;
    NSArray *_locationHistory;
    double _scoredDistance;
    double _scoredTimeInterval;
}

@property (copy, nonatomic) NSArray *locationHistory; // @synthesize locationHistory=_locationHistory;
@property (nonatomic) double scoredDistance; // @synthesize scoredDistance=_scoredDistance;
@property (nonatomic) double scoredTimeInterval; // @synthesize scoredTimeInterval=_scoredTimeInterval;

+ (double)weight;
- (void).cxx_destruct;
- (int)_scoreForDistance:(double)arg1 timeInterval:(double)arg2;
- (id)descriptionExtras;
- (BOOL)destinationInvalid;
- (int)score;
- (void)updateLocationHistory:(id)arg1;
- (void)updateScoreIfPossible;

@end
