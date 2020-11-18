//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/GCControllerElement.h>

@class GCControllerAxisInput, GCControllerButtonInput, NSString;

@interface GCControllerDirectionPad : GCControllerElement
{
    NSString *_descriptionName;
    BOOL _wasZeroed;
    int _timesPressed;
    BOOL _nonAnalog;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerAxisInput *_xAxis;
    GCControllerAxisInput *_yAxis;
}

@property (readonly, nonatomic) GCControllerButtonInput *down;
@property (readonly, nonatomic) GCControllerButtonInput *left;
@property BOOL nonAnalog; // @synthesize nonAnalog=_nonAnalog;
@property (readonly, nonatomic) GCControllerButtonInput *right;
@property (readonly, nonatomic) GCControllerButtonInput *up;
@property (copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
@property (strong, nonatomic) GCControllerAxisInput *xAxis; // @synthesize xAxis=_xAxis;
@property (strong, nonatomic) GCControllerAxisInput *yAxis; // @synthesize yAxis=_yAxis;

- (void).cxx_destruct;
- (void)_fireValueChanged;
- (void)_fireValueChangedWithQueue:(id)arg1;
- (id)description;
- (int)getAndResetTimesPressed;
- (id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2;
- (id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 descriptionName:(id)arg3;
- (BOOL)isAnalog;
- (void)setValueForXAxis:(float)arg1 yAxis:(float)arg2;

@end
