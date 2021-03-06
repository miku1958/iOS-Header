//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAPresentationModifierGroup, NSString;

@interface CAPresentationModifier : NSObject
{
    void *_impl;
    id _keyPath;
    id _value;
    id _group;
    int _l;
    unsigned int _f;
}

@property (readonly) BOOL additive;
@property (getter=isEnabled) BOOL enabled;
@property (readonly) CAPresentationModifierGroup *group;
@property (readonly, copy) NSString *keyPath;
@property (strong) id value;

- (struct Object *)CA_copyRenderValue;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(BOOL)arg3 group:(id)arg4;
- (void)write;

@end

