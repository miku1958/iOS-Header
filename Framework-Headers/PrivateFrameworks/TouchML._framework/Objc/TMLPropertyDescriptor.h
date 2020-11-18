//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLModelSerialize-Protocol.h>

@class NSString;

@interface TMLPropertyDescriptor : NSObject <TMLModelSerialize>
{
    NSString *_propertyName;
    NSString *_propertyType;
    BOOL _readonly;
    BOOL _optional;
    unsigned long long _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property (readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly; // @synthesize readonly=_readonly;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, nonatomic) NSString *typeClassName;

+ (id)decode:(const struct ProtobufCMessage *)arg1;
- (void).cxx_destruct;
- (BOOL)canMergeFromPropertyDescriptor:(id)arg1;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 attributes:(id)arg3;
- (id)initWithName:(id)arg1 typeName:(id)arg2 attributes:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
