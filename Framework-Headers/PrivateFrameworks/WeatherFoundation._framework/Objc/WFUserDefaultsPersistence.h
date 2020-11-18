//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WeatherPreferencesPersistence-Protocol.h>

@class NSString, NSUserDefaults;

@interface WFUserDefaultsPersistence : NSObject <WeatherPreferencesPersistence>
{
    NSUserDefaults *_userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;

@end
