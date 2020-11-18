//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol TIKeyboardInputManager, _UIIVCResponseDelegateImpl;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerMux : NSObject
{
    NSMutableArray *_clients;
    id<_UIIVCResponseDelegateImpl> _responseDelegate;
    id<TIKeyboardInputManager> _systemInputManager;
}

@property (readonly, nonatomic) BOOL hasSystemInputManager;
@property (strong, nonatomic) id<_UIIVCResponseDelegateImpl> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
@property (strong, nonatomic) id<TIKeyboardInputManager> systemInputManager; // @synthesize systemInputManager=_systemInputManager;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)sharedInstance;
- (BOOL)_systemHasKbd;
- (void)addClient:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)releaseConnectedClients;
- (void)removeAllClients;
- (void)removeClient:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setSystemInputManagerFromKeyboardState:(id)arg1;
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;

@end

