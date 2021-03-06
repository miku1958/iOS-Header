//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFTriggerNaturalLanguageOptions, HMHome, NAFuture, NSArray, NSString;

@protocol HFTimeEventBuilder <NSObject>
- (NSString *)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(HMHome *)arg2 recurrences:(NSArray *)arg3;
- (NSString *)naturalLanguageWithOptions:(HFTriggerNaturalLanguageOptions *)arg1 recurrences:(NSArray *)arg2;
- (NAFuture *)performValidation;
@end

