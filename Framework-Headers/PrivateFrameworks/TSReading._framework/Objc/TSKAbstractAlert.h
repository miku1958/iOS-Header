//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TSKUIAlertProtocol;

@interface TSKAbstractAlert : NSObject
{
    long long _result;
    id _context;
    id<TSKUIAlertProtocol> _delegate;
    BOOL _isDelegateRetained;
    BOOL _cancelOnEnterBackground;
    BOOL _inBackground;
    BOOL _clickedButtonAtIndex;
    BOOL _didDismissWithButtonIndex;
    BOOL _willDismissWithButtonIndex;
    BOOL _didPresentAlertView;
    BOOL _willPresentAlertView;
    CDUnknownBlockType _clickedBlock;
    CDUnknownBlockType _dismissedBlock;
    id<TSKUIAlertProtocol> _retainedDelegate;
}

@property (nonatomic) long long cancelButtonIndex;
@property (nonatomic) BOOL cancelOnEnterBackground; // @synthesize cancelOnEnterBackground=_cancelOnEnterBackground;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (nonatomic) id<TSKUIAlertProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL inBackground; // @synthesize inBackground=_inBackground;
@property (strong, nonatomic) id<TSKUIAlertProtocol> retainedDelegate; // @synthesize retainedDelegate=_retainedDelegate;

- (long long)addButtonWithTitle:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)buttonTitleAtIndex:(long long)arg1;
- (void)clickedButtonAtIndex:(long long)arg1;
- (void)dealloc;
- (void)didDismissWithButtonIndex:(long long)arg1;
- (void)didPresentAlertView;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)enterBackground;
- (long long)firstOtherButtonIndex;
- (id)init;
- (long long)numberOfButtons;
- (long long)result;
- (void)show;
- (void)showAlert;
- (long long)showSynchronously;
- (void)showWithClickedButtonBlock:(CDUnknownBlockType)arg1;
- (void)showWithDelegate:(id)arg1 context:(id)arg2;
- (void)showWithDismissedByButtonBlock:(CDUnknownBlockType)arg1;
- (void)willDismissWithButtonIndex:(long long)arg1;
- (void)willPresentAlertView;

@end

