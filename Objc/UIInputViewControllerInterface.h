//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardInputManagerStub.h>

#import <UIKitCore/_UIIVCInterface-Protocol.h>

@class NSString, _UIInputViewControllerState;
@protocol _UIIVCInterface, _UIIVCResponseDelegate;

__attribute__((visibility("hidden")))
@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface>
{
    id<_UIIVCResponseDelegate> _responseDelegate;
    id<_UIIVCInterface> _forwardingInterface;
    _UIInputViewControllerState *_cachedState;
}

@property (strong, nonatomic, getter=_cachedState, setter=_setCachedState:) _UIInputViewControllerState *cachedState; // @synthesize cachedState=_cachedState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<_UIIVCInterface> forwardingInterface; // @synthesize forwardingInterface=_forwardingInterface;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<_UIIVCResponseDelegate> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
@property (readonly) Class superclass;

- (void)_handleInputViewControllerState:(id)arg1;
- (void)_tearDownRemoteService;
- (void)dealloc;
- (id)init;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

