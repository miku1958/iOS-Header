//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class CKDClientProxy;

__attribute__((visibility("hidden")))
@interface CKDProxyOperationQueue : NSOperationQueue
{
    CKDClientProxy *_proxy;
}

@property (weak, nonatomic) CKDClientProxy *proxy; // @synthesize proxy=_proxy;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)initWithProxy:(id)arg1;

@end
