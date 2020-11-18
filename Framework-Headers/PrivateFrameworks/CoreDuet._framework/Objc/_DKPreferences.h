//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _DKPreferences : NSObject
{
    NSString *_domain;
}

@property (readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;

+ (id)preferencesForDomain:(id)arg1;
- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 havingClass:(Class)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;

@end

