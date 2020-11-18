//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/ISOperationDelegate-Protocol.h>

@class NSLock, NSMutableArray, NSString;

@interface SUScriptOperationDelegate : NSObject <ISOperationDelegate>
{
    NSMutableArray *_operations;
    NSLock *_lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_removeOperation:(id)arg1;
- (void)cancelAllOperations;
- (void)dealloc;
- (void)enqueueOperation:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;

@end
