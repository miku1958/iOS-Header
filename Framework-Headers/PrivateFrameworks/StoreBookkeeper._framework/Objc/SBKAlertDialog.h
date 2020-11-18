//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SBKAlertDialog : NSObject
{
    NSString *_title;
    NSString *_message;
    NSString *_cancelButtonTitle;
    CDUnknownBlockType _completionHandler;
    NSString *_acceptButtonTitle;
}

@property (copy) NSString *acceptButtonTitle; // @synthesize acceptButtonTitle=_acceptButtonTitle;
@property (copy) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property (copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy) NSString *message; // @synthesize message=_message;
@property (copy) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)_runAsCFUserNotificationDisplayAlert;
- (BOOL)_runAsUIAlertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

