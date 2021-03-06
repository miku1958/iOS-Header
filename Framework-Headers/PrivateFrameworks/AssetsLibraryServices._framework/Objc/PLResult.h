//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface PLResult : NSObject
{
    id _result;
    NSError *_error;
}

@property (readonly, copy) NSError *error; // @synthesize error=_error;
@property (readonly) BOOL isFailure;
@property (readonly) BOOL isSuccess;
@property (readonly) id result; // @synthesize result=_result;

+ (id)failureWithError:(id)arg1;
+ (id)successWithResult:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResult:(id)arg1 error:(id)arg2;
- (id)resultWithError:(id *)arg1;

@end

