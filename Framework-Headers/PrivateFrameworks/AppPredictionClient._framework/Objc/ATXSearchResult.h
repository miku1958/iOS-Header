//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXProactiveSuggestion, ATXResponse, ATXScoredPrediction;

@interface ATXSearchResult : SFSearchResult <NSSecureCoding>
{
    ATXScoredPrediction *_scoredBundleId;
    ATXResponse *_response;
    ATXProactiveSuggestion *_proactiveSuggestion;
}

@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion; // @synthesize proactiveSuggestion=_proactiveSuggestion;
@property (readonly, nonatomic) ATXResponse *response; // @synthesize response=_response;
@property (readonly, nonatomic) ATXScoredPrediction *scoredBundleId; // @synthesize scoredBundleId=_scoredBundleId;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScoredBundleId:(id)arg1 response:(id)arg2 proactiveSuggestion:(id)arg3;

@end
