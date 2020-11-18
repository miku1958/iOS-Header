//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iPhotoMigrationSupport/BLAlertViewControllerDelegate-Protocol.h>
#import <iPhotoMigrationSupport/UIAlertViewDelegate-Protocol.h>

@class BLAlertAction, BLAlertViewController, NSArray, NSString;

@interface BLAlert : NSObject <BLAlertViewControllerDelegate, UIAlertViewDelegate>
{
    BLAlertAction *_cancelAction;
    NSArray *_actions;
    CDUnknownBlockType _conditionBlock;
    id _context;
    CDUnknownBlockType _executionBlock;
    BOOL _showing;
    int _options;
    BLAlertViewController *_alertView;
    BLAlert *_strongSelf;
}

@property (copy) CDUnknownBlockType conditionBlock; // @synthesize conditionBlock=_conditionBlock;
@property (strong) id context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) BLAlert *strongSelf; // @synthesize strongSelf=_strongSelf;
@property (readonly) Class superclass;

+ (id)pendingAlerts;
+ (void)performWithTitle:(id)arg1 message:(id)arg2 action:(id)arg3;
+ (id)popPendingAlert;
+ (void)pushPendingAlert:(id)arg1;
- (void).cxx_destruct;
- (void)alertViewController:(id)arg1 didPressButtonAtIndex:(long long)arg2;
- (void)cancelDelayedHide;
- (void)dealloc;
- (void)hide;
- (void)hide:(BOOL)arg1;
- (void)hideWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)hideWithDelay:(double)arg1;
- (void)hideWithDelay:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelAction:(id)arg3 otherActions:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 options:(int)arg3 cancelAction:(id)arg4 otherActions:(id)arg5;
- (BOOL)isShowing;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)show;
- (void)showPendingAlertIfNeeded;
- (void)showWithExecutionBlock:(CDUnknownBlockType)arg1;
- (BOOL)wantSingular;

@end

