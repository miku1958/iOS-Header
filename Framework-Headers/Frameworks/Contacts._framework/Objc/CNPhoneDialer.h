//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhoneDialer : NSObject
{
}

+ (id)URLWithPhoneNumber:(id)arg1;
+ (BOOL)cancelDialMessage:(id)arg1 error:(id *)arg2;
+ (id)cancelMessageWithDialMessageID:(id)arg1;
+ (id)dialMessageWithDataValue:(id)arg1 displayName:(id)arg2;
+ (id)dialNumber:(id)arg1 displayName:(id)arg2 error:(id *)arg3;
+ (void)loadIdentityServices;
+ (id)messageWithAdditionalParameters:(id)arg1;
+ (id)sanitizePhoneNumber:(id)arg1;
+ (id)sendDialMessage:(id)arg1 displayName:(id)arg2 error:(id *)arg3;
+ (BOOL)sendMessage:(id)arg1 error:(id *)arg2;

@end

