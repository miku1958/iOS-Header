//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNErrorFactory : NSObject
{
}

+ (long long)CNErrorCodeForABError:(struct __CFError *)arg1;
+ (id)_localizedDescriptionForCode:(long long)arg1;
+ (id)_localizedReasonForCode:(long long)arg1;
+ (id)errorByAddingUserInfoEntries:(id)arg1 toError:(id)arg2;
+ (id)errorByPrependingKeyPath:(id)arg1 toKeyPathsInError:(id)arg2;
+ (id)errorForiOSABError:(struct __CFError *)arg1;
+ (id)errorObject:(id)arg1 doesNotImplementSelector:(SEL)arg2;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)genericiOSABError;
+ (id)validationErrorByAggregatingValidationErrors:(id)arg1;

@end

