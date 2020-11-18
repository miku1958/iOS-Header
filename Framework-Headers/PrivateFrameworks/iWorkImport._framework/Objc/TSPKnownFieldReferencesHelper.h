//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSPLazyReferenceArray;

__attribute__((visibility("hidden")))
@interface TSPKnownFieldReferencesHelper : NSObject
{
    struct RepeatedField<long long> _objectReferences;
    struct RepeatedField<long long> _dataReferences;
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
    NSArray *_datas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFieldDescriptor:(const struct FieldDescriptor *)arg1 message:(const struct Message *)arg2 reflection:(const struct Reflection *)arg3;
- (void)loadFromUnarchiver:(id)arg1;
- (void)processFieldDescriptor:(const struct FieldDescriptor *)arg1 message:(const struct Message *)arg2 reflection:(const struct Reflection *)arg3;
- (void)processFieldsFromMessage:(const struct Message *)arg1 messageDescriptor:(const struct Descriptor *)arg2 reflection:(const struct Reflection *)arg3;
- (void)saveToArchiver:(id)arg1;

@end

