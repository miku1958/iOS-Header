//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSUIWebClientContext, AMSUIWebContainerViewController, NSLock, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebFlowController : NSObject
{
    AMSUIWebContainerViewController *_rootContainer;
    AMSUIWebClientContext *_context;
    NSString *_currentRefreshToken;
    NSLock *_timeoutLock;
    NSMutableSet *_timeouts;
}

@property (readonly, weak, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property (readonly, weak, nonatomic) AMSUIWebContainerViewController *currentContainer;
@property (strong, nonatomic) NSString *currentRefreshToken; // @synthesize currentRefreshToken=_currentRefreshToken;
@property (readonly, weak, nonatomic) AMSUIWebContainerViewController *rootContainer; // @synthesize rootContainer=_rootContainer;
@property (strong, nonatomic) NSLock *timeoutLock; // @synthesize timeoutLock=_timeoutLock;
@property (strong, nonatomic) NSMutableSet *timeouts; // @synthesize timeouts=_timeouts;

- (void).cxx_destruct;
- (id)_refreshPageWithForContainer:(id)arg1 options:(id)arg2 isRetry:(BOOL)arg3;
- (void)_takeSnapshotFromContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissViewController;
- (id)initWithRootContainer:(id)arg1 context:(id)arg2;
- (void)popViewController;
- (void)presentWithOptions:(id)arg1;
- (void)pushWithOptions:(id)arg1;
- (id)refreshPageForContainer:(id)arg1 options:(id)arg2;
- (void)replaceWithPageModel:(id)arg1 forContainer:(id)arg2 options:(id)arg3;
- (void)startTimeout:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)startTimeoutInterruption;
- (void)stopTimeoutInterruption;

@end
