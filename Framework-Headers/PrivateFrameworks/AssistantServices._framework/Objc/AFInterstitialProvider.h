//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class AFInterstitialConfiguration, NSMutableArray, NSString;
@protocol AFInterstitialProviderDelegate, OS_dispatch_queue;

@interface AFInterstitialProvider : NSObject <AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    AFInterstitialConfiguration *_configuration;
    NSMutableArray *_pendingActions;
    id _context;
    id<AFInterstitialProviderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_performNextAction;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)invalidate;

@end

