//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSProtocolChecker.h>

@class NSObject, Protocol;

__attribute__((visibility("hidden")))
@interface NSConcreteProtocolChecker : NSProtocolChecker
{
    NSObject *_target;
    Protocol *_protocol;
}

- (void)dealloc;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (id)protocol;
- (id)target;

@end

