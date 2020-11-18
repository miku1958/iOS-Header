//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/NSURLConnectionDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate>
{
    struct ResourceHandle *m_handle;
    NSObject<OS_dispatch_semaphore> *m_semaphore;
    MessageQueue_9c2548bf *m_messageQueue;
    struct RetainPtr<NSURLRequest> m_requestResult;
    struct Lock m_mutex;
    struct RetainPtr<NSCachedURLResponse> m_cachedResponseResult;
    struct optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair>>, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair>>>>> m_scheduledPairs;
    BOOL m_boolResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)callFunctionOnMainThread:(Function_89d21b48 *)arg1;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)continueCanAuthenticateAgainstProtectionSpace:(BOOL)arg1;
- (void)continueDidReceiveResponse;
- (void)continueWillCacheResponse:(id)arg1;
- (void)dealloc;
- (void)detachHandle;
- (id)initWithHandle:(struct ResourceHandle *)arg1 messageQueue:(MessageQueue_9c2548bf *)arg2;

@end

