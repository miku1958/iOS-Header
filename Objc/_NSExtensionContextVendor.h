//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _NSExtensionContextVendor : NSObject
{
}

+ (Class)_extensionContextClass;
+ (id)_extensionDictionary;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionPrincipalClass;
+ (id)_sharedExtensionContextVendor;
+ (void)_startListening;
+ (void)_startListening:(BOOL)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)_extensionContextForUUID:(id)arg1;
- (id)_init;
- (void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2;
- (void)_tearDownContextWithUUID:(id)arg1;
- (id)init;

@end

