//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTLanguageDetectionPrediction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FTMutableLanguageDetectionPrediction : FTLanguageDetectionPrediction
{
}

@property (nonatomic) float confidence;
@property (nonatomic) BOOL is_low_confidence;
@property (copy, nonatomic) NSString *locale;
@property (nonatomic) float threshold;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

