//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRGResourceCache : NSObject
{
}

+ (id)cacheDirPathForAppBundleID:(id)arg1 withSentCache:(BOOL)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)cacheDirPathForPairedDeviceStorePath:(id)arg1;
+ (id)cachePathForIconHash:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)cachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)cachePathForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)cachePathForSendableIconHash:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (void)deleteStaleSendablesWithPairedDeviceStorePath:(id)arg1;
+ (id)iconCacheDirPathForAppBundleID:(id)arg1 withSentCache:(BOOL)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)iconForHash:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)iconForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)iconHashCacheDirPathWithPairedDeviceStorePath:(id)arg1;
+ (void)invalidateBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (void)invalidateBundleID:(id)arg1 withSentCache:(BOOL)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)invalidatePairedDevice:(id)arg1;
+ (BOOL)isIconSent:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;
+ (BOOL)isResourceSent:(id)arg1 forResourceName:(id)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;
+ (void)markIconAsSent:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 wasSent:(BOOL)arg5;
+ (void)markResourceAsSent:(id)arg1 forResourceName:(id)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4 wasSent:(BOOL)arg5;
+ (id)resourceCacheDirPathForAppBundleID:(id)arg1 withSentCache:(BOOL)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)resourceForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)resourcePathForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)sendableIconForHash:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)sendableIconHashCacheDirPathWithPairedDeviceStorePath:(id)arg1;
+ (id)sentCachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)sentCachePathForResourceName:(id)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)setIcon:(id)arg1 forHash:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;
+ (void)setResource:(id)arg1 forResourceName:(id)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;
+ (void)setSendableIcon:(id)arg1 forHash:(id)arg2 withPairedDeviceStorePath:(id)arg3;

@end

