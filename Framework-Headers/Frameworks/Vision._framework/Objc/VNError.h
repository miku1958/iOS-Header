//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNError : NSObject
{
}

+ (id)errorForCancellationOfRequest:(id)arg1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInvalidArgument:(id)arg1 named:(id)arg2;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2;
+ (id)errorForMemoryAllocationFailure;
+ (id)errorForMissingOptionNamed:(id)arg1;
+ (id)errorForUnimplementedFunctionWithLocalizedDescription:(id)arg1;
+ (id)errorWithAlgorithmError:(id)arg1;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (void)logInternalError:(id)arg1;

@end

