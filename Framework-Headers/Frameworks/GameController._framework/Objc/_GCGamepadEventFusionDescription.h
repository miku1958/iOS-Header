//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/_GCGamepadEventSourceDescription-Protocol.h>

@class NSArray, NSString, _GCGamepadEventFusion, _GCGamepadEventFusionConfig;

__attribute__((visibility("hidden")))
@interface _GCGamepadEventFusionDescription : NSObject <_GCGamepadEventSourceDescription>
{
    _GCGamepadEventFusionConfig *_config;
    NSArray *_sourcesDescription;
    _GCGamepadEventFusion *_materializedObject;
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
- (id)initWithConfiguration:(id)arg1 sources:(id)arg2;
- (id)materializeWithContext:(id)arg1;

@end
