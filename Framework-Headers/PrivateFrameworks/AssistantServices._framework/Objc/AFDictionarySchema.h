//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFDictionarySchema : NSObject
{
    NSMutableDictionary *_coercions;
}

- (void).cxx_destruct;
- (id)coerceObject:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)setObjectCoercion:(id)arg1 forKey:(id)arg2;

@end
