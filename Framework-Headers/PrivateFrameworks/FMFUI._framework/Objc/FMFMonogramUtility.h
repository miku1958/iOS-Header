//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FMFMonogramUtility : NSObject
{
}

+ (void)clearMonogramCache;
+ (id)contactImageCache;
+ (id)contactStatusCache;
+ (id)monogramImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintColor:(id)arg4 customFont:(id)arg5 isPersonImage:(BOOL *)arg6;
+ (id)monogramImageOfDiameter:(double)arg1 forRecordID:(int)arg2 useTintColor:(id)arg3 useCustomFont:(BOOL)arg4 isPersonImage:(BOOL *)arg5;
+ (id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useTintColor:(id)arg3 customFont:(id)arg4;
+ (id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 useTintColor:(id)arg3;
+ (void)setAddressBook:(void *)arg1;

@end

