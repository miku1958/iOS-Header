//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NAFuture, NSArray;

@protocol HMDUserActionPredictionDataSource

@property (readonly, getter=isDataAvailableForUserActionPredictionDataSource) BOOL dataAvailableForUserActionPredictionDataSource;

- (NAFuture *)addOrUpdateUserActionPredictions:(NSArray *)arg1;
- (NAFuture *)addOrUpdateUserActionPredictionsAndRemoveNonUpdatedPredictions:(NSArray *)arg1;
- (NAFuture *)fetchPredictionsWithLimitForUserActionPredictionDataSource:(unsigned long long)arg1;
- (NAFuture *)removeUserActionPredictions:(NSArray *)arg1;
@end
