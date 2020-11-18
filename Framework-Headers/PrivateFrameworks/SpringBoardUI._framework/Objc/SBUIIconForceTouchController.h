//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/SBUIIconForceTouchViewControllerDelegate-Protocol.h>

@class NSString, SBUIIconForceTouchViewController, UIWindow;
@protocol SBUIIconForceTouchControllerDataSource, SBUIIconForceTouchControllerDelegate;

@interface SBUIIconForceTouchController : NSObject <SBUIIconForceTouchViewControllerDelegate>
{
    struct {
        unsigned int iconForceTouchController_shouldHandleGestureRecognizer:1;
        unsigned int iconForceTouchController_shouldUseSecureWindowForGestureRecognizer:1;
        unsigned int iconForceTouchController_willPresentForGestureRecognizer:1;
        unsigned int iconForceTouchController_didPresentForGestureRecognizer:1;
        unsigned int iconForceTouchController_willDismissForGestureRecognizer:1;
        unsigned int iconForceTouchController_didDismissForGestureRecognizer:1;
    } _delegateRespondsTo;
    UIWindow *_window;
    id<SBUIIconForceTouchControllerDataSource> _dataSource;
    id<SBUIIconForceTouchControllerDelegate> _delegate;
    SBUIIconForceTouchViewController *_iconForceTouchViewController;
}

@property (weak, nonatomic) id<SBUIIconForceTouchControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBUIIconForceTouchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SBUIIconForceTouchViewController *iconForceTouchViewController; // @synthesize iconForceTouchViewController=_iconForceTouchViewController;
@property (readonly, nonatomic) long long layout;
@property (readonly, nonatomic) long long state;
@property (readonly) Class superclass;

+ (void)_addIconForceTouchController:(id)arg1;
+ (void)_dismissAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)_iconForceTouchControllerHashTable;
+ (BOOL)_isPeekingOrShowing;
+ (BOOL)_isWidgetVisible:(id)arg1;
+ (id)_windows;
- (void).cxx_destruct;
- (void)_cleanWithGestureRecognizer:(id)arg1;
- (void)_dismissAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_peekAnimated:(BOOL)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(BOOL)arg3;
- (void)_presentAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_setupWithGestureRecognizer:(id)arg1;
- (id)_window;
- (void)dismissAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)iconForceTouchViewControllerDidDismiss:(id)arg1;
- (void)iconForceTouchViewControllerWillDismiss:(id)arg1;
- (id)init;
- (void)startHandlingGestureRecognizer:(id)arg1;
- (void)stopHandlingGestureRecognizer:(id)arg1;

@end

