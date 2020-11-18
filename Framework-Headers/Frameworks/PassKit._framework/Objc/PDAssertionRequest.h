//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAssertion;
@protocol OS_dispatch_source;

@interface PDAssertionRequest : NSObject
{
    PDAssertion *_assertion;
    CDUnknownBlockType _resultHandler;
    NSObject<OS_dispatch_source> *_invalidationTimer;
}

@property (strong, nonatomic) PDAssertion *assertion; // @synthesize assertion=_assertion;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *invalidationTimer; // @synthesize invalidationTimer=_invalidationTimer;
@property (copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAssertion:(id)arg1 delegate:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
