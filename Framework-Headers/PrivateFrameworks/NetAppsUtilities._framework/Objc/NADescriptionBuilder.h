//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;
@protocol NSObject;

@interface NADescriptionBuilder : NSObject
{
    id<NSObject> _object;
    NSMutableString *_proem;
    NSMutableString *_description;
    int _activeComponent;
    NSString *_activePrefix;
    BOOL _useDebugDescription;
}

@property (nonatomic) int activeComponent; // @synthesize activeComponent=_activeComponent;
@property (strong, nonatomic) NSString *activeMultilinePrefix; // @synthesize activeMultilinePrefix=_activePrefix;
@property (nonatomic) BOOL useDebugDescription; // @synthesize useDebugDescription=_useDebugDescription;

+ (id)builderWithObject:(id)arg1;
+ (id)componentSeparator;
+ (id)descriptionForObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;
+ (id)nameObjectSeparator;
+ (id)succinctDescriptionForObject:(id)arg1;
- (void).cxx_destruct;
- (id)_activeComponentString;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(CDUnknownBlockType)arg5;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3 objectTransformer:(CDUnknownBlockType)arg4;
- (void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)appendBool:(BOOL)arg1 withName:(id)arg2;
- (id)appendBool:(BOOL)arg1 withName:(id)arg2 ifEqualTo:(BOOL)arg3;
- (id)appendCString:(const char *)arg1 withName:(id)arg2;
- (id)appendClass:(Class)arg1 withName:(id)arg2;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(BOOL)arg4 objectTransformer:(CDUnknownBlockType)arg5;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendFormat:(id)arg1;
- (id)appendInt64:(long long)arg1 withName:(id)arg2;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendInteger:(long long)arg1 withName:(id)arg2;
- (id)appendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(BOOL)arg3;
- (id)appendObjectsAndNames:(id)arg1;
- (id)appendObjectsAndNames:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (id)appendPointer:(void *)arg1 withName:(id)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendString:(id)arg1;
- (void)appendString:(id)arg1 withName:(id)arg2;
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(BOOL)arg3;
- (id)appendSuper;
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(BOOL)arg3;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
- (id)build;
- (id)initWithObject:(id)arg1;
- (id)modifyBody:(CDUnknownBlockType)arg1;
- (id)modifyProem:(CDUnknownBlockType)arg1;
- (void)tryAppendKey:(id)arg1;

@end

