//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDKeychain : NSObject
{
}

+ (id)_knownMissingKeychainItems;
+ (id)_missingKeychainItemSpecifierForService:(id)arg1 username:(id)arg2;
+ (void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (BOOL)canAccessPasswordsWithPolicy:(id)arg1;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (void)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 error:(id *)arg5;

@end

