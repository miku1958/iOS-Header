//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CNFoundationError : NSObject
{
}

+ (id)errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;
+ (id)errorWithErrno;
+ (id)errorWithErrno:(int)arg1;
+ (id)errorWithErrno:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithErrnoAndUserInfo:(id)arg1;
+ (id)ifResultIsNil:(id)arg1 setOutputError:(id *)arg2 toError:(id)arg3;
+ (id)ifResultIsNil:(id)arg1 setOutputError:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id *)arg2 toError:(id)arg3;
+ (BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (BOOL)isCanceledError:(id)arg1;
+ (BOOL)isCertificateError:(id)arg1;
+ (BOOL)isError:(id)arg1 errorWithDomain:(id)arg2 code:(long long)arg3;
+ (BOOL)isFileNotFoundError:(id)arg1;
+ (BOOL)isTimeoutError:(id)arg1;
+ (id)timeoutError;

@end

