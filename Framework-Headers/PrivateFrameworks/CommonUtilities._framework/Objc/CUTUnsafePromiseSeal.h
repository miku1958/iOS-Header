//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject
{
    CUTUnsafePromise *_promise;
}

@property (strong, nonatomic) CUTUnsafePromise *promise; // @synthesize promise=_promise;

- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)fulfillWithValue:(id)arg1;
- (id)init;

@end

