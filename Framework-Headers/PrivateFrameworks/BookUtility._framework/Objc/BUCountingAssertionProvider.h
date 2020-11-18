//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BUCountingAssertionProviderDelegate, OS_dispatch_queue;

@interface BUCountingAssertionProvider : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _count;
    id<BUCountingAssertionProviderDelegate> _delegate;
}

- (void).cxx_destruct;
- (BOOL)_beginAssertion;
- (BOOL)_endAssertion;
- (id)initWithDelegate:(id)arg1;
- (id)newAssertion;

@end
