//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASXPCClientHelper;

@interface ATXInfoSuggestionFeedbackClient : NSObject
{
    _PASXPCClientHelper *_xpcClientHelper;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)stackDidRotateProactivelyForInfoSuggestion:(id)arg1 isStalenessRotation:(BOOL)arg2;
- (void)suggestionDismissed:(id)arg1 isDismissalLongTerm:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

