//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CATProperty : NSObject
{
    BOOL _readOnly;
    BOOL _nonAtomic;
    BOOL _weakReference;
    NSString *_name;
    NSString *_instanceVariableName;
    long long _type;
    Class _objectClass;
    long long _association;
    SEL _customGetterSelector;
    SEL _customSetterSelector;
}

@property (readonly) long long association; // @synthesize association=_association;
@property (readonly) SEL customGetterSelector; // @synthesize customGetterSelector=_customGetterSelector;
@property (readonly) SEL customSetterSelector; // @synthesize customSetterSelector=_customSetterSelector;
@property (readonly, copy) NSString *instanceVariableName; // @synthesize instanceVariableName=_instanceVariableName;
@property (readonly, copy) NSString *name; // @synthesize name=_name;
@property (readonly, getter=isNonAtomic) BOOL nonAtomic; // @synthesize nonAtomic=_nonAtomic;
@property (readonly) Class objectClass; // @synthesize objectClass=_objectClass;
@property (readonly, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property (readonly) long long type; // @synthesize type=_type;
@property (readonly, getter=isWeakReference) BOOL weakReference; // @synthesize weakReference=_weakReference;

+ (void)initialize;
+ (id)propertiesForClass:(Class)arg1;
+ (id)propertiesForProtocol:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(const char *)arg1 attributes:(const char *)arg2;

@end

