//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CloudServicesError : NSObject
{
}

+ (long long)codeForErrno:(long long)arg1;
+ (long long)codeForNSError:(id)arg1;
+ (id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(long long)arg1 format:(id)arg2;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3;
+ (id)sanitizedError:(id)arg1;

@end

