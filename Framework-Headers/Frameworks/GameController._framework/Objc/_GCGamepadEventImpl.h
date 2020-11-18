//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/_GCGamepadEvent-Protocol.h>

@class NSString;

@interface _GCGamepadEventImpl : NSObject <_GCGamepadEvent>
{
    CDStruct_5be5f302 _data;
}

@property (nonatomic) float buttonAValue;
@property (nonatomic) float buttonBValue;
@property (nonatomic) float buttonHome;
@property (nonatomic) float buttonLeftShoulder;
@property (nonatomic) float buttonMenu;
@property (nonatomic) float buttonOptions;
@property (nonatomic) float buttonRightShoulder;
@property (nonatomic) float buttonSpecial0;
@property (nonatomic) float buttonSpecial1;
@property (nonatomic) float buttonSpecial10;
@property (nonatomic) float buttonSpecial11;
@property (nonatomic) float buttonSpecial12;
@property (nonatomic) float buttonSpecial13;
@property (nonatomic) float buttonSpecial14;
@property (nonatomic) float buttonSpecial15;
@property (nonatomic) float buttonSpecial2;
@property (nonatomic) float buttonSpecial3;
@property (nonatomic) float buttonSpecial4;
@property (nonatomic) float buttonSpecial5;
@property (nonatomic) float buttonSpecial6;
@property (nonatomic) float buttonSpecial7;
@property (nonatomic) float buttonSpecial8;
@property (nonatomic) float buttonSpecial9;
@property (nonatomic) float buttonXValue;
@property (nonatomic) float buttonYValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float dpadDownValue;
@property (nonatomic) float dpadLeftValue;
@property (nonatomic) float dpadRightValue;
@property (nonatomic) float dpadUpValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) float leftThumbstickButton;
@property (nonatomic) float leftThumbstickDown;
@property (nonatomic) float leftThumbstickLeft;
@property (nonatomic) float leftThumbstickRight;
@property (nonatomic) float leftThumbstickUp;
@property (nonatomic) float leftTrigger;
@property (nonatomic) float rightThumbstickButton;
@property (nonatomic) float rightThumbstickDown;
@property (nonatomic) float rightThumbstickLeft;
@property (nonatomic) float rightThumbstickRight;
@property (nonatomic) float rightThumbstickUp;
@property (nonatomic) float rightTrigger;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)floatValueForElement:(long long)arg1;
- (BOOL)hasValidValueForElement:(long long)arg1;
- (id)initWithGameControllerInputs:(float [41])arg1 validMask:(unsigned long long)arg2;
- (id)initWithGamepadEvent:(id)arg1;

@end
