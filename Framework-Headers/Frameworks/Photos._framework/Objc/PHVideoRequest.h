//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequest.h>

@class PHImageDisplaySpec, PHVideoRequestBehaviorSpec, PHVideoResult, PLProgressFollower;
@protocol PHMediaRequestDelegate;

@interface PHVideoRequest : PHMediaRequest
{
    PHVideoResult *_videoResult;
    PLProgressFollower *_progressFollower;
    struct os_unfair_lock_s _lock;
    id<PHMediaRequestDelegate> _delegate;
    PHImageDisplaySpec *_displaySpec;
    PHVideoRequestBehaviorSpec *_behaviorSpec;
}

@property (readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property (readonly, weak, nonatomic) id<PHMediaRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) PHImageDisplaySpec *displaySpec; // @synthesize displaySpec=_displaySpec;

- (void).cxx_destruct;
- (void)_finish;
- (void)_handleResultVideoURL:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)cancel;
- (id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 displaySpec:(id)arg6 behaviorSpec:(id)arg7 delegate:(id)arg8;
- (BOOL)isNetworkAccessAllowed;
- (BOOL)isSynchronous;
- (void)startRequest;

@end
