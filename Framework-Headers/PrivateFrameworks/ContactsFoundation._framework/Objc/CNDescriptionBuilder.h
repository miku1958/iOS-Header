//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface CNDescriptionBuilder : NSObject
{
    NSObject *_object;
    NSMutableString *_description;
    NSString *_separator;
}

@property (copy, nonatomic) NSString *separator; // @synthesize separator=_separator;

+ (id)descriptionBuilderWithObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 withNamesAndObjects:(id)arg2;
- (id)appendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendName:(id)arg1 boolValue:(BOOL)arg2;
- (id)appendName:(id)arg1 doubleValue:(double)arg2;
- (id)appendName:(id)arg1 intValue:(int)arg2;
- (id)appendName:(id)arg1 integerValue:(long long)arg2;
- (id)appendName:(id)arg1 object:(id)arg2;
- (id)appendName:(id)arg1 pointerValue:(void *)arg2;
- (id)appendName:(id)arg1 selector:(SEL)arg2;
- (id)appendName:(id)arg1 unsignedInteger:(unsigned long long)arg2;
- (id)appendNamesAndObjects:(id)arg1;
- (id)appendNamesAndObjects:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)build;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (void)tryAppendKey:(id)arg1;

@end

