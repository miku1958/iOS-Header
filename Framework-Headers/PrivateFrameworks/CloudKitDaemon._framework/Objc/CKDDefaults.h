//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKDDefaults : NSObject
{
}

+ (id)sharedDefaults;
- (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)synchronize;

@end

