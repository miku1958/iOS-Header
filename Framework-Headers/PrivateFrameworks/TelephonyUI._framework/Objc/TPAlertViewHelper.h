//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUI/UIAlertViewDelegate-Protocol.h>

@class NSString, UIAlertView;

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _completionHandler;
    UIAlertView *_alertView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long firstOtherButtonIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allHelpersArray;
+ (id)_workQueue;
+ (id)alertHelperWithHandler:(CDUnknownBlockType)arg1 style:(long long)arg2 title:(id)arg3 message:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 style:(long long)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)_underlyingAlertView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)dismissWithCancelAnimated:(BOOL)arg1;
- (void)dismissWithClickedButtonIndexAnimated:(long long)arg1;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)show;

@end
