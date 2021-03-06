//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderOutput/SCROHandlerProtocol-Protocol.h>

@class NSLock;

@interface SCROHandler : NSObject <SCROHandlerProtocol>
{
    NSLock *_lock;
    BOOL isInvalid;
    id _callbackDelegate;
}

@property (weak, nonatomic) id callbackDelegate; // @synthesize callbackDelegate=_callbackDelegate;

- (void).cxx_destruct;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;
- (int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (id)init;
- (void)invalidate;
- (void)lock;
- (void)unlock;

@end

