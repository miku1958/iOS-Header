//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ADDefaults : NSObject
{
    NSMutableDictionary *_factoryDefaults;
    struct __CFString *_defaultsBundleID;
}

@property (nonatomic) struct __CFString *defaultsBundleID; // @synthesize defaultsBundleID=_defaultsBundleID;
@property (strong, nonatomic) NSMutableDictionary *factoryDefaults; // @synthesize factoryDefaults=_factoryDefaults;

+ (id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2;
+ (void)_setDefaultValue:(id)arg1 forKey:(id)arg2;
+ (void)addFactoryDefaults:(id)arg1;
+ (id)arrayForKey:(id)arg1;
+ (BOOL)boolForKey:(id)arg1;
+ (BOOL)defaultIsSetForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1;
+ (id)factoryDefaults;
+ (long long)integerForKey:(id)arg1;
+ (void)setArray:(id)arg1 forKey:(id)arg2;
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
+ (void)setDouble:(double)arg1 forKey:(id)arg2;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (id)sharedInstance;
+ (id)stringForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

