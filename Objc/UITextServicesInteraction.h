//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextInteraction.h>

#import <UIKitCore/_UITextServicesResponderProxyDelegate-Protocol.h>

@class UIResponder, _UITextServiceSession, _UITextServicesResponderProxy;

__attribute__((visibility("hidden")))
@interface UITextServicesInteraction : UITextInteraction <_UITextServicesResponderProxyDelegate>
{
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    _UITextServicesResponderProxy *_responderProxy;
}

@property (readonly, nonatomic) UIResponder *responder;
@property (strong, nonatomic) _UITextServicesResponderProxy *responderProxy; // @synthesize responderProxy=_responderProxy;

- (void).cxx_destruct;
- (void)_addShortcut:(id)arg1;
- (void)_beginSessionWithType:(long long)arg1 sender:(id)arg2;
- (void)_define:(id)arg1;
- (void)_removeShareController;
- (void)_removeShortcutController;
- (void)_share:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)finishSetup;

@end

