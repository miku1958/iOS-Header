//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileMailUI/NSObject-Protocol.h>

@class NSObject;
@protocol OS_os_log;

@protocol EFSignpostable <NSObject>

@property (readonly) unsigned long long signpostID;

+ (NSObject<OS_os_log> *)signpostLog;
@end
