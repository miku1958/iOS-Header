//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/_GCKeyboardEventSourceDescription-Protocol.h>

@class NSString, _GCCControllerHIDServiceInfoDescription, _GCKeyboardEventHIDAdapter;
@protocol _GCHIDEventSourceDescription;

__attribute__((visibility("hidden")))
@interface _GCKeyboardEventHIDAdapterDescription : NSObject <_GCKeyboardEventSourceDescription>
{
    id<_GCHIDEventSourceDescription> _sourceDescription;
    _GCCControllerHIDServiceInfoDescription *_serviceDescription;
    _GCKeyboardEventHIDAdapter *_materializedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 service:(id)arg2;
- (id)materializeWithContext:(id)arg1;

@end

