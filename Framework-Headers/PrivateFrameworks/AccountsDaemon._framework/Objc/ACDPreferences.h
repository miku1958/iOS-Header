//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDPreferences : NSObject
{
}

+ (id)sharedPreferences;
- (id)objectForKey:(id)arg1;
- (void)reset;
- (double)serverTimeoutInterval;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)synchronize;

@end
