//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSError, NSString, RTPredictionModel;
@protocol RTDataProviderProtocol;

@protocol RTPredictionModelDelegate <NSObject>
- (unsigned long long)countOfDataProviders;
- (id<RTDataProviderProtocol>)dataProviderForName:(NSString *)arg1;
- (id<RTDataProviderProtocol>)predictionModel:(RTPredictionModel *)arg1 dataProviderAtIndex:(unsigned long long)arg2;

@optional
- (void)predictionModel:(RTPredictionModel *)arg1 receivedError:(NSError *)arg2;
- (void)predictionModelDidBecomeInvalid:(RTPredictionModel *)arg1;
- (void)predictionModelDidFinishProcessingData:(RTPredictionModel *)arg1;
- (void)predictionModelWillStartProcessingData:(RTPredictionModel *)arg1;
@end

