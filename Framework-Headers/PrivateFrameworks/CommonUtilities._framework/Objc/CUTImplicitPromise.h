//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTPromise;

@interface CUTImplicitPromise : NSObject
{
    CUTPromise *_promise;
}

@property (strong, nonatomic) CUTPromise *promise; // @synthesize promise=_promise;

- (void).cxx_destruct;
- (id)initWithPromise:(id)arg1;
- (void)registerFulfillBlock:(CDUnknownBlockType)arg1;

@end
