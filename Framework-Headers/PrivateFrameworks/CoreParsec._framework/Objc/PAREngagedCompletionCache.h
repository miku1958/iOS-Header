//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAREngagedCompletionCache : NSObject
{
}

+ (id)sharedInstance;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)clearAllCompletions;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (void)updateParametersForSmartSearchV1:(id)arg1 smartSearchV2:(id)arg2;

@end

