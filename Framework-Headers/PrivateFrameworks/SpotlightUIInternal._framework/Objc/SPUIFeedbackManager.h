//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPUIFeedbackManager : NSObject
{
}

+ (void)cardViewDidDisappearWithEvent:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2;
+ (void)didAppearFromSource:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2 queryString:(id)arg3;
+ (void)didClearInputWithEvent:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2;
+ (void)didDisappearWithReason:(unsigned long long)arg1 withQueryId:(unsigned long long)arg2;
+ (id)feedbackListener;
+ (void)flushFeedbackWithCompletion:(CDUnknownBlockType)arg1;

@end
