//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class PPLocationQuery;

@protocol PPLocationReadOnlyServerProtocol <PPFeedbackAccepting>
- (void)locationRecordsWithQuery:(PPLocationQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)rankedLocationsWithQuery:(PPLocationQuery *)arg1 queryId:(unsigned long long)arg2;
@end

