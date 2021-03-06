//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/GCControllerComponent-Protocol.h>
#import <GameController/GCNamedProfile-Protocol.h>

@class GCController, GCControllerElement, GCControllerSettings, GCMotion, NSMutableDictionary, NSMutableSet, NSString;
@protocol GCDevice, NSObject><NSCopying><NSSecureCoding;

@interface GCPhysicalInputProfile : NSObject <GCNamedProfile, GCControllerComponent>
{
    GCController *_controller;
    id<GCDevice> _device;
    GCMotion *_motion;
    GCControllerElement *_remappedElements[41];
    GCControllerSettings *_appliedSettings;
    id<NSObject><NSCopying><NSSecureCoding> _identifier;
    double _lastEventTimestamp;
    NSMutableDictionary *_elements;
    NSMutableDictionary *_buttons;
    NSMutableDictionary *_axes;
    NSMutableDictionary *_dpads;
    NSMutableSet *_allElements;
    NSMutableSet *_allButtons;
    NSMutableSet *_allAxes;
    NSMutableSet *_allDpads;
    GCControllerSettings *_bundleSettings;
    GCControllerSettings *_defaultSettings;
    NSMutableSet *__topLevelElements;
    NSMutableSet *__topLevelButtons;
    NSMutableSet *__topLevelDirectionPads;
    NSMutableSet *__topLevelTouchpads;
}

@property (strong) GCMotion *_motion;
@property (strong, nonatomic) NSMutableSet *_topLevelButtons; // @synthesize _topLevelButtons=__topLevelButtons;
@property (strong, nonatomic) NSMutableSet *_topLevelDirectionPads; // @synthesize _topLevelDirectionPads=__topLevelDirectionPads;
@property (strong, nonatomic) NSMutableSet *_topLevelElements; // @synthesize _topLevelElements=__topLevelElements;
@property (strong, nonatomic) NSMutableSet *_topLevelTouchpads; // @synthesize _topLevelTouchpads=__topLevelTouchpads;
@property (strong, nonatomic) NSMutableSet *allAxes; // @synthesize allAxes=_allAxes;
@property (strong, nonatomic) NSMutableSet *allButtons; // @synthesize allButtons=_allButtons;
@property (strong, nonatomic) NSMutableSet *allDpads; // @synthesize allDpads=_allDpads;
@property (strong, nonatomic) NSMutableSet *allElements; // @synthesize allElements=_allElements;
@property (strong, nonatomic) NSMutableDictionary *axes; // @synthesize axes=_axes;
@property (strong, nonatomic) GCControllerSettings *bundleSettings; // @synthesize bundleSettings=_bundleSettings;
@property (strong, nonatomic) NSMutableDictionary *buttons; // @synthesize buttons=_buttons;
@property (readonly, weak, nonatomic) GCController *controller; // @synthesize controller=_controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) GCControllerSettings *defaultSettings; // @synthesize defaultSettings=_defaultSettings;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<GCDevice> device;
@property (strong, nonatomic) NSMutableDictionary *dpads; // @synthesize dpads=_dpads;
@property (strong, nonatomic) NSMutableDictionary *elements; // @synthesize elements=_elements;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property double lastEventTimestamp; // @synthesize lastEventTimestamp=_lastEventTimestamp;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buttonWithInfo:(CDStruct_e11ff636)arg1;
- (id)_cursorWithInfo:(CDStruct_e11ff636)arg1;
- (id)_directionPadWithInfo:(CDStruct_e11ff636)arg1;
- (void)_receivedEvent;
- (void)_registerAxis:(id)arg1;
- (void)_registerButton:(id)arg1;
- (void)_registerDirectionPad:(id)arg1;
- (void)_registerTopLevelButton:(id)arg1;
- (void)_registerTopLevelDirectionPad:(id)arg1;
- (void)_registerTopLevelTouchpad:(id)arg1;
- (void)_registerTouchpad:(id)arg1;
- (id)_touchpadWithInfo:(CDStruct_e11ff636)arg1;
- (void)_triggerValueChangedHandlerForElement:(id)arg1 queue:(id)arg2;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void)applySettings:(id)arg1;
- (id)capture;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (id)init;
- (id)initWithController:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)productCategory;
- (id)remappedElementForIndex:(long long)arg1;
- (unsigned int)sampleRate;
- (void)setButton:(id)arg1 pressed:(BOOL)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setController:(id)arg1;
- (void)setDefaultSettings:(id)arg1 bundleSettings:(id)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setPlayerIndex:(long long)arg1;
- (void)setStateFromPhysicalInput:(id)arg1;
- (void)updateElementControllerReferences;
- (CDUnknownBlockType)valueChangedHandler;

@end

