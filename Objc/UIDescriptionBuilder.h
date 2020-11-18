//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface UIDescriptionBuilder : NSObject
{
    NSString *_separator;
    NSObject *_object;
    NSMutableString *_descriptionString;
}

@property (strong, nonatomic) NSMutableString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property (nonatomic) NSObject *object; // @synthesize object=_object;
@property (copy, nonatomic) NSString *separator; // @synthesize separator=_separator;
@property (readonly, nonatomic) NSString *string;

+ (id)descriptionBuilderWithObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 keys:(id)arg2;
+ (id)descriptionForObject:(id)arg1 namesAndObjects:(id)arg2;
- (void).cxx_destruct;
- (id)appendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendName:(id)arg1 boolValue:(BOOL)arg2;
- (id)appendName:(id)arg1 doubleValue:(double)arg2;
- (id)appendName:(id)arg1 intValue:(int)arg2;
- (id)appendName:(id)arg1 integerValue:(long long)arg2;
- (id)appendName:(id)arg1 object:(id)arg2;
- (id)appendName:(id)arg1 object:(id)arg2 usingLightweightDescription:(BOOL)arg3;
- (id)appendName:(id)arg1 pointerValue:(void *)arg2;
- (id)appendName:(id)arg1 selector:(SEL)arg2;
- (id)appendName:(id)arg1 unsignedInteger:(unsigned long long)arg2;
- (id)appendNamesAndObjects:(id)arg1;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)initWithObject:(id)arg1;
- (void)tryAppendKey:(id)arg1;

@end

