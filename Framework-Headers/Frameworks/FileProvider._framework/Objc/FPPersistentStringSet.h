//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSUserDefaults;

@interface FPPersistentStringSet : NSObject
{
    NSString *_key;
    NSMutableSet *_strings;
    NSUserDefaults *_defaults;
}

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (BOOL)contains:(id)arg1;
- (id)initWithDefaults:(id)arg1 key:(id)arg2;
- (void)remove:(id)arg1;
- (void)save;

@end

