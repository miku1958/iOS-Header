//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/NSObject-Protocol.h>

@class NSError, RBSAssertion;

@protocol RBSAssertionObserving <NSObject>

@optional
- (void)assertion:(RBSAssertion *)arg1 didInvalidateWithError:(NSError *)arg2;
- (void)assertionWillInvalidate:(RBSAssertion *)arg1;
@end
