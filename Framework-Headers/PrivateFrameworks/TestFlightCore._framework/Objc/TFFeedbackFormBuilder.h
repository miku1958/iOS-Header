//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TFFeedbackFormBuilder : NSObject
{
}

- (id)_buildEmailGroupWithPrefilledEmail:(id)arg1;
- (id)_buildUserFeedbackGroupWithContext:(unsigned long long)arg1 hasScreenshots:(BOOL)arg2;
- (id)_feedbackCommentPlaceholderStringForContext:(unsigned long long)arg1;
- (id)buildFormForContext:(unsigned long long)arg1 withPrefilledEmail:(id)arg2 hasScreenshots:(BOOL)arg3;

@end
