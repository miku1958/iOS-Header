//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWProcessTerminationManager-Protocol.h>

@class NSMutableArray, NSString;
@protocol SWErrorReporting, SWProcessTerminationPolicyDecider;

@interface SWProcessTerminationManager : NSObject <SWProcessTerminationManager>
{
    id<SWProcessTerminationPolicyDecider> _throttler;
    id<SWErrorReporting> _errorReporter;
    NSMutableArray *_onRetryBlocks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SWErrorReporting> errorReporter; // @synthesize errorReporter=_errorReporter;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableArray *onRetryBlocks; // @synthesize onRetryBlocks=_onRetryBlocks;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SWProcessTerminationPolicyDecider> throttler; // @synthesize throttler=_throttler;

- (void).cxx_destruct;
- (id)initWithTerminationThrottler:(id)arg1 errorReporter:(id)arg2;
- (void)onRetry:(CDUnknownBlockType)arg1;
- (void)webContentProcessTerminated;

@end
