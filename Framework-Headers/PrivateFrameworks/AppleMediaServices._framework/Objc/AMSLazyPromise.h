//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSPromise.h>

@interface AMSLazyPromise : AMSPromise
{
    BOOL _executedBlock;
    CDUnknownBlockType _block;
    double _timeout;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (nonatomic) BOOL executedBlock; // @synthesize executedBlock=_executedBlock;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;

- (void).cxx_destruct;
- (BOOL)_runBlock;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (void)addFinishBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)resultWithError:(id *)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;

@end
