//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/TMLBinder-Protocol.h>
#import <TouchML/TMLValue-Protocol.h>

@class NSArray, NSString;

@interface TMLReactiveValue : NSObject <TMLBinder, TMLValue>
{
    NSArray *_bindings;
    id _targetWeak;
    id _targetUnsafe;
    NSString *_keyPath;
    unsigned long long _valueType;
}

@property (readonly, nonatomic) long long bindingOrder;
@property (readonly, nonatomic) NSArray *bindings; // @synthesize bindings=_bindings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)removeReactiveValuesForTarget:(id)arg1;
+ (id)valueForTarget:(id)arg1 withKeyPath:(id)arg2;
- (void).cxx_destruct;
- (void)assignToTarget:(id)arg1 withKeyPath:(id)arg2;
- (void)bindingValueChanged:(id)arg1;
- (id)initWithBindings:(id)arg1 valueType:(unsigned long long)arg2;
- (void)unassign;
- (id)value;
- (unsigned long long)valueType;

@end

