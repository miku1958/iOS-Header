//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CKAlertControllerDelegate-Protocol.h>
#import <ChatKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class CKPresentationControllerWindow, NSString, UIPopoverPresentationController, UIViewController;

@interface CKAdaptivePresentationController : NSObject <UIPopoverPresentationControllerDelegate, CKAlertControllerDelegate>
{
    UIViewController *_presentedViewController;
    UIPopoverPresentationController *_currentPresentationController;
    CKPresentationControllerWindow *_presentationWindow;
    CDUnknownBlockType _presentationHandler;
    CDUnknownBlockType _dismissalHandler;
}

@property (strong, nonatomic) UIPopoverPresentationController *currentPresentationController; // @synthesize currentPresentationController=_currentPresentationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType presentationHandler; // @synthesize presentationHandler=_presentationHandler;
@property (strong, nonatomic) CKPresentationControllerWindow *presentationWindow; // @synthesize presentationWindow=_presentationWindow;
@property (strong, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)_cleanup;
- (void)alertControllerViewDidDisappear:(id)arg1;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 presentationHandler:(CDUnknownBlockType)arg3 dismissalHandler:(CDUnknownBlockType)arg4 animated:(BOOL)arg5;

@end
