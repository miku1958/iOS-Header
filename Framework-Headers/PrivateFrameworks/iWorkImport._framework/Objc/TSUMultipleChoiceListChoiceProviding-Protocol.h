//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSString;
@protocol TSUMultipleChoiceListChoiceProviding;

@protocol TSUMultipleChoiceListChoiceProviding
- (BOOL)booleanAtIndex:(unsigned long long)arg1;
- (NSArray *)choices;
- (NSDate *)dateAtIndex:(unsigned long long)arg1;
- (NSString *)displayStringAtIndex:(unsigned long long)arg1;
- (BOOL)isEqualToChoices:(id<TSUMultipleChoiceListChoiceProviding>)arg1;
- (double)numberAtIndex:(unsigned long long)arg1;
- (NSString *)stringAtIndex:(unsigned long long)arg1;
- (int)valueTypeOfItemAtIndex:(unsigned long long)arg1;
@end
