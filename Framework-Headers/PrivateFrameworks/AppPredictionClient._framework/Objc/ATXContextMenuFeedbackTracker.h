//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ATXContextMenuFeedbackTracker : NSObject
{
}

+ (void)_logContextMenuFeedbackWithMenuActionType:(int)arg1 suggestion:(id)arg2 consumerSubType:(unsigned char)arg3 tracker:(id)arg4;
+ (id)_suggestionStringForProactiveSuggestion:(id)arg1;
+ (void)logContextMenuFeedbackForDismissOnceWithSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2 tracker:(id)arg3;
+ (void)logContextMenuFeedbackForNeverShowAgainWithSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2 tracker:(id)arg3;

@end

