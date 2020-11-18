//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CXCallObserver, NSString;
@protocol OS_dispatch_queue;

@interface CXCallController : NSObject
{
    CXCallObserver *_callObserver;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSString *_extensionIdentifier;
}

@property (strong, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property (copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

