//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_os_log;

@protocol ASCSignpostGroup <NSObject>
+ (NSString *)category;
+ (NSObject<OS_os_log> *)log;
+ (NSString *)subsystem;
+ (void)willEmitSignpostOfType:(long long)arg1 withName:(NSString *)arg2;
@end

