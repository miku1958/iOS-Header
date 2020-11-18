//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIAlertView;

@interface EKUIDeclineCommentController : NSObject
{
    UIAlertView *_alertView;
    CDUnknownBlockType _completionBlock;
}

+ (id)_newDeclineCommentControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)presentDeclineCommentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_completeWithButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_presentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;

@end

