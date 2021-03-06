//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSString, TIAnalyticsMetricsContext, TIUserModelValues;

@protocol TIUserModeling <NSObject>

@property (readonly, nonatomic) NSArray *contexts;

- (void)addDoubleToTransientCounter:(double)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TIAnalyticsMetricsContext *)arg4;
- (void)addIntegerToTransientCounter:(int)arg1 forKey:(NSString *)arg2 andCandidateLength:(int)arg3 andContext:(TIAnalyticsMetricsContext *)arg4;
- (void)addToDurableCounter:(int)arg1 forKey:(NSString *)arg2;
- (TIUserModelValues *)valuesFromContext:(TIAnalyticsMetricsContext *)arg1;
@end

