//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLServiceVendor : NSObject
{
}

+ (BOOL)ensureServiceIsRunning:(id)arg1;
+ (BOOL)getKeyClass:(Class *)arg1 andSilo:(id *)arg2 forServiceWithName:(id)arg3;
+ (id)getServiceWithName:(id)arg1;
+ (id)getSiloForService:(id)arg1;
+ (void)initialize;
+ (BOOL)isServiceEnabled:(id)arg1;
+ (BOOL)isServiceRunning:(id)arg1;
+ (id)proxyForService:(id)arg1;
+ (id)proxyForService:(id)arg1 forClient:(id)arg2;
+ (void)rereadConfiguration;
+ (void)retireServiceWithName:(id)arg1;

@end
