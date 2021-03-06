//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUserDefaults;

@interface ANDefaults : NSObject
{
    NSDictionary *_defaultsItems;
    NSUserDefaults *_defaults;
}

@property (strong, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property (readonly, nonatomic) NSDictionary *defaultsItems; // @synthesize defaultsItems=_defaultsItems;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)boolForDefault:(id)arg1;
- (id)init;
- (id)numberForDefault:(id)arg1;
- (id)objectForDefault:(id)arg1;
- (void)setBool:(BOOL)arg1 forDefault:(id)arg2;
- (void)setNumber:(id)arg1 forDefault:(id)arg2;
- (void)setObject:(id)arg1 forDefault:(id)arg2;

@end

