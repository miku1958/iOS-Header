//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSManagedValue;

@interface _IKDOMNodeEventListener : NSObject
{
    BOOL _enabled;
    JSManagedValue *_managedValue;
}

@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) JSManagedValue *managedValue; // @synthesize managedValue=_managedValue;

- (void).cxx_destruct;
- (id)initWithListener:(id)arg1 forNode:(id)arg2;
- (id)value;

@end

