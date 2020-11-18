//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IOKService;

@interface IOKConnection : NSObject
{
    unsigned int _connection;
}

@property (readonly, nonatomic) unsigned int connection; // @synthesize connection=_connection;
@property (readonly, copy, nonatomic) IOKService *service;

- (BOOL)callAsyncMethodWithSelector:(unsigned int)arg1 wakePort:(unsigned int)arg2 reference:(unsigned long long *)arg3 referenceCount:(unsigned int)arg4 scalarInputs:(const unsigned long long *)arg5 scalarInputCount:(unsigned int)arg6 scalarOutputs:(unsigned long long *)arg7 scalarOutputCount:(unsigned int *)arg8 error:(id *)arg9;
- (BOOL)callAsyncMethodWithSelector:(unsigned int)arg1 wakePort:(unsigned int)arg2 reference:(unsigned long long *)arg3 referenceCount:(unsigned int)arg4 scalarInputs:(const unsigned long long *)arg5 scalarInputCount:(unsigned int)arg6 structInput:(const void *)arg7 structInputSize:(unsigned long long)arg8 scalarOutputs:(unsigned long long *)arg9 scalarOutputCount:(unsigned int *)arg10 structOutput:(void *)arg11 structOutputSize:(unsigned long long *)arg12 error:(id *)arg13;
- (BOOL)callAsyncMethodWithSelector:(unsigned int)arg1 wakePort:(unsigned int)arg2 reference:(unsigned long long *)arg3 referenceCount:(unsigned int)arg4 structInput:(const void *)arg5 structInputSize:(unsigned long long)arg6 structOutput:(void *)arg7 structOutputSize:(unsigned long long *)arg8 error:(id *)arg9;
- (BOOL)callMethodWithSelector:(unsigned int)arg1 scalarInputs:(const unsigned long long *)arg2 scalarInputCount:(unsigned int)arg3 scalarOutputs:(unsigned long long *)arg4 scalarOutputCount:(unsigned int *)arg5 error:(id *)arg6;
- (BOOL)callMethodWithSelector:(unsigned int)arg1 scalarInputs:(const unsigned long long *)arg2 scalarInputCount:(unsigned int)arg3 structInput:(const void *)arg4 structInputSize:(unsigned long long)arg5 scalarOutputs:(unsigned long long *)arg6 scalarOutputCount:(unsigned int *)arg7 structOutput:(void *)arg8 structOutputSize:(unsigned long long *)arg9 error:(id *)arg10;
- (BOOL)callMethodWithSelector:(unsigned int)arg1 structInput:(const void *)arg2 structInputSize:(unsigned long long)arg3 structOutput:(void *)arg4 structOutputSize:(unsigned long long *)arg5 error:(id *)arg6;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithService:(id)arg1;
- (id)initWithService:(id)arg1 andType:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mapMemory64OfType:(unsigned int)arg1 withOptions:(unsigned int)arg2 atAddress:(unsigned long long *)arg3 ofSize:(unsigned long long *)arg4 error:(id *)arg5;
- (BOOL)setNotificationPort:(id)arg1 ofType:(unsigned int)arg2 withReference:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)setProperties:(id)arg1 error:(id *)arg2;
- (BOOL)setProperty:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (BOOL)trap:(unsigned int)arg1 error:(id *)arg2;
- (BOOL)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 error:(id *)arg6;
- (BOOL)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 error:(id *)arg7;
- (BOOL)trap:(unsigned int)arg1 p1:(unsigned long long)arg2 p2:(unsigned long long)arg3 p3:(unsigned long long)arg4 p4:(unsigned long long)arg5 p5:(unsigned long long)arg6 p6:(unsigned long long)arg7 error:(id *)arg8;
- (BOOL)unmapMemory64OfType:(unsigned int)arg1 atAddress:(unsigned long long)arg2 error:(id *)arg3;

@end
