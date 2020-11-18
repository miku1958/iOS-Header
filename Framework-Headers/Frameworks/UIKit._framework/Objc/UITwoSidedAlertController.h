//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/CAAnimationDelegate-Protocol.h>
#import <UIKit/UIAlertViewDelegate-Protocol.h>

@class NSString, UIAlertView;

@interface UITwoSidedAlertController : NSObject <UIAlertViewDelegate, CAAnimationDelegate>
{
    UIAlertView *_front;
    UIAlertView *_back;
    UIAlertView *_currentAlert;
    id _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)backAlert;
- (void)backAlertClickedButtonAtIndex:(long long)arg1;
- (id)createBackAlert;
- (id)createFrontAlert;
- (void)dealloc;
- (void)didPresentAlertView:(id)arg1;
- (void)dismiss;
- (void)flip;
- (id)frontAlert;
- (void)frontAlertClickedButtonAtIndex:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)show;

@end

