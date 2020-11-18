//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString, UIAlertController, UIAlertView, UIPopoverController, UIViewController, _UIAlertControllerShimPresenterWindow;
@protocol UIPopoverControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShimPresenter : NSObject <UIPopoverControllerDelegate>
{
    UIPopoverController *_popoverController;
    id<UIPopoverControllerDelegate> _popoverDelegate;
    UIViewController *_inPopoverViewController;
    _UIAlertControllerShimPresenterWindow *_window;
    UIAlertController *_alertController;
    UIAlertView *_legacyAlert;
}

@property (weak, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIAlertView *legacyAlert; // @synthesize legacyAlert=_legacyAlert;
@property (weak, nonatomic) id<UIPopoverControllerDelegate> popoverDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIAlertControllerShimPresenterWindow *window; // @synthesize window=_window;

+ (void)_addPresenter:(id)arg1;
+ (void)_cancelPendingTouchesIfAppropriate;
+ (id)_currentFullScreenAlertPresenters;
+ (void)_removePresenter:(id)arg1;
+ (BOOL)_shouldPresentActionSheetsFullscreen;
+ (id)_topmostAlertWindow;
+ (id)_topmostLegacyAlertIncludingPresentingAlerts:(BOOL)arg1;
- (void).cxx_destruct;
- (void)_createWindowIfNecessary;
- (void)_dismissAlertControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_popoverController;
- (void)_presentAlertControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentAlertControllerFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentAlertControllerFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_tearDownInPopoverViewController;
- (void)dealloc;

@end
