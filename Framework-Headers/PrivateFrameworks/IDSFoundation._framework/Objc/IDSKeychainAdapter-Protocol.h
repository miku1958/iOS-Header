//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/NSObject-Protocol.h>

@class NSData, NSString;

@protocol IDSKeychainAdapter <NSObject>
- (BOOL)getKeychainData:(id *)arg1 service:(NSString *)arg2 account:(NSString *)arg3 accessGroup:(NSString *)arg4 error:(int *)arg5;
- (BOOL)removeKeychainDataOnService:(NSString *)arg1 account:(NSString *)arg2 error:(int *)arg3;
- (BOOL)setKeychainData:(NSData *)arg1 service:(NSString *)arg2 account:(NSString *)arg3 accessGroup:(NSString *)arg4 allowSync:(BOOL)arg5 error:(int *)arg6;
@end

