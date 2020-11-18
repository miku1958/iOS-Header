//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NSCopying-Protocol.h>

@class NSString, NUAdContextDefinition;

@interface NUAdContextPropertyDefinition : NSObject <NSCopying>
{
    NSString *_keyPath;
    Class _valueClass;
    unsigned long long _requirement;
    id _defaultValue;
    NUAdContextDefinition *_nestedDefinition;
}

@property (readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property (readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property (strong, nonatomic) NUAdContextDefinition *nestedDefinition; // @synthesize nestedDefinition=_nestedDefinition;
@property (readonly, nonatomic) unsigned long long requirement; // @synthesize requirement=_requirement;
@property (readonly, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithKey:(id)arg1 nestedDefinition:(id)arg2 requirement:(unsigned long long)arg3;
- (id)initWithKey:(id)arg1 valueClass:(Class)arg2 requirement:(unsigned long long)arg3 defaultValue:(id)arg4;
- (BOOL)validateValue:(id)arg1;

@end

