//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSXPCProxyCreating-Protocol.h>

@class NSFileAccessProcessManager;
@protocol NSFilePresenterXPCInterface><NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface NSFilePresenterManagedProxy : NSObject <NSXPCProxyCreating>
{
    unsigned long long _filePresenterResponses;
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> *_xpcProxy;
    NSObject<NSFilePresenterXPCInterface><NSXPCProxyCreating> *_nonboostingXPCProxy;
    NSFileAccessProcessManager *_processManager;
    CDUnknownBlockType _errorHandler;
}

@property (copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property unsigned long long filePresenterResponses; // @synthesize filePresenterResponses=_filePresenterResponses;
@property (strong) NSFileAccessProcessManager *processManager; // @synthesize processManager=_processManager;

- (BOOL)_presenterRespondsToSelector:(SEL)arg1;
- (void)_safelySendMessageWithSelector:(SEL)arg1 withErrorCompletionHandler:(CDUnknownBlockType)arg2 sender:(CDUnknownBlockType)arg3;
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCProxy:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
