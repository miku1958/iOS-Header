//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCKeychain : NSObject
{
}

+ (struct __CFDictionary *)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id *)arg7;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2;
+ (const void *)copyItemWithPersistentID:(id)arg1;
+ (const void *)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id *)arg6;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id *)arg7;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id *)arg5;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(id *)arg6;
+ (BOOL)itemExistsInKeychain:(void *)arg1;
+ (BOOL)itemExistsInKeychain:(void *)arg1 useSystemKeychain:(BOOL)arg2;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 group:(id)arg6;
+ (void)removeItemWithPersistentID:(id)arg1;
+ (void)removeItemWithPersistentID:(id)arg1 useSystemKeychain:(BOOL)arg2;
+ (id)saveItem:(void *)arg1 withLabel:(id)arg2 group:(id)arg3;
+ (id)saveItem:(void *)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(BOOL)arg4;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 outError:(id *)arg8;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 useSystemKeychain:(BOOL)arg8 outError:(id *)arg9;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 outError:(id *)arg7;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 useSystemKeychain:(BOOL)arg7 outError:(id *)arg8;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id *)arg6;
+ (BOOL)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id *)arg7;
+ (BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 outError:(id *)arg8;
+ (BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 useSystemKeychain:(BOOL)arg8 outError:(id *)arg9;
+ (BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 outError:(id *)arg7;
+ (BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 useSystemKeychain:(BOOL)arg7 outError:(id *)arg8;
+ (BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id *)arg6;
+ (BOOL)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id *)arg7;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id *)arg6;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(BOOL)arg6 outError:(id *)arg7;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id *)arg5;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(BOOL)arg5 outError:(id *)arg6;

@end

