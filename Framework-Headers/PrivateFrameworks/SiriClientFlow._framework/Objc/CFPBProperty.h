//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSInvocation, NSString;

@interface CFPBProperty : NSObject
{
    NSString *_name;
    BOOL _type;
    BOOL _subType;
    NSInvocation *_setter;
    NSInvocation *_getter;
    NSInvocation *_has;
    NSInvocation *_count;
    NSInvocation *_convertToString;
    NSInvocation *_convertFromString;
    CDUnknownFunctionPointerType _toDictionaryReprFn;
    CDUnknownFunctionPointerType _fromDictionaryReprFn;
    NSString *_structName;
    NSArray *_structFields;
    unsigned long long _structSize;
    Class _objectType;
    Class _subObjectType;
}

@property (readonly, nonatomic) BOOL canConvertFromString;
@property (readonly, nonatomic) BOOL isObject;
@property (readonly, nonatomic) BOOL isStruct;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) Class objectType; // @synthesize objectType=_objectType;
@property (strong, nonatomic) Class subObjectType; // @synthesize subObjectType=_subObjectType;
@property (nonatomic) BOOL subType; // @synthesize subType=_subType;
@property (nonatomic) BOOL type; // @synthesize type=_type;

+ (id)getValidPropertiesForType:(Class)arg1 withCache:(id)arg2;
+ (id)pbPropertyFor:(struct objc_property *)arg1 type:(Class)arg2;
- (void).cxx_destruct;
- (id)_parseStructDefinition:(id)arg1;
- (id)description;
- (unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1;
- (id)getNumberValueFromInstance:(id)arg1;
- (id)getObjValueFromInstance:(id)arg1;
- (id)getPtrArrayValueFromInstance:(id)arg1;
- (id)getStructValueFromInstance:(id)arg1;
- (id)initWith:(struct objc_property *)arg1 type:(Class)arg2;
- (BOOL)instanceHasValue:(id)arg1;
- (void)setNumberValue:(id)arg1 onInstance:(id)arg2;
- (void)setObjValue:(id)arg1 onInstance:(id)arg2;
- (BOOL)setStructValue:(id)arg1 onInstance:(id)arg2;

@end

