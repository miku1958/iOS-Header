//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, SALCMLiveTuneInButton, SALCMToggleButton, SASportsEntity, SAUIAppPunchOut;
@protocol SAServerBoundCommand;

@interface SASportsMatchup : SADomainObject
{
}

@property (strong, nonatomic) SASportsEntity *awayEntity;
@property (copy, nonatomic) NSArray *awayLineScores;
@property (copy, nonatomic) NSString *awayScore;
@property (copy, nonatomic) NSNumber *awayShootoutPoints;
@property (copy, nonatomic) NSString *awayTeamRecordSummary;
@property (copy, nonatomic) NSString *currentPeriod;
@property (copy, nonatomic) NSNumber *expectedLineScoreCount;
@property (copy, nonatomic) NSString *favoredEntity;
@property (copy, nonatomic) NSString *gameSummary;
@property (copy, nonatomic) NSString *gameType;
@property (strong, nonatomic) id<SAServerBoundCommand> getAppsCommand;
@property (strong, nonatomic) id<SAServerBoundCommand> getModalDetailSnippetCommand;
@property (strong, nonatomic) SASportsEntity *homeEntity;
@property (copy, nonatomic) NSArray *homeLineScores;
@property (copy, nonatomic) NSString *homeScore;
@property (copy, nonatomic) NSNumber *homeShootoutPoints;
@property (copy, nonatomic) NSString *homeTeamRecordSummary;
@property (nonatomic) BOOL isAvailable;
@property (copy, nonatomic) NSNumber *isExplicitlyEndOfPeriod;
@property (nonatomic) BOOL isOnNow;
@property (nonatomic) BOOL isWatchlistable;
@property (copy, nonatomic) NSString *line;
@property (strong, nonatomic) SALCMLiveTuneInButton *liveTuneInButton;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) NSString *matchupOrder;
@property (copy, nonatomic) NSString *overUnder;
@property (copy, nonatomic) NSString *periodDescription;
@property (copy, nonatomic) NSArray *playSummaries;
@property (copy, nonatomic) NSNumber *playoff;
@property (strong, nonatomic) SAUIAppPunchOut *punchout;
@property (copy, nonatomic) NSDate *startTime;
@property (copy, nonatomic) NSNumber *statsId;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *timeRemaining;
@property (copy, nonatomic) NSNumber *timeTBD;
@property (copy, nonatomic) NSString *title;
@property (strong, nonatomic) SALCMToggleButton *toggleButton;
@property (copy, nonatomic) NSString *tournamentSeriesDescription;
@property (copy, nonatomic) NSArray *tvChannels;
@property (copy, nonatomic) NSString *winningEntity;

+ (id)matchup;
+ (id)matchupWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

