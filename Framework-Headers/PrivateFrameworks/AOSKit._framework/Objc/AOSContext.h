//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AOSKit/NSPortDelegate-Protocol.h>

@class NSString, NSThread;

@interface AOSContext : NSObject <NSPortDelegate>
{
    struct AOSAccount *_account;
    struct AOSTransactionC *_transaction;
    CDUnknownFunctionPointerType _callback;
    NSThread *_callbackThread;
    id _info;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contextWithAccount:(struct AOSAccount *)arg1 andTransaction:(struct AOSTransactionC *)arg2;
- (id)_callbackThread;
- (void)_performCallback;
- (struct AOSAccount *)account;
- (void)dealloc;
- (void)finalize;
- (id)info;
- (id)init;
- (BOOL)scheduleCallback;
- (void)setAccount:(struct AOSAccount *)arg1;
- (void)setInfo:(id)arg1;
- (void)setTransaction:(struct AOSTransactionC *)arg1;
- (struct AOSTransactionC *)transaction;

@end

