//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUQuickControlPanningContext : NSObject
{
    BOOL _requiresSomeMovementBeforeActivation;
    double _initialSliderValue;
    double _verticalDragCoefficient;
    struct CGRect _controlFrame;
}

@property (nonatomic) struct CGRect controlFrame; // @synthesize controlFrame=_controlFrame;
@property (nonatomic) double initialSliderValue; // @synthesize initialSliderValue=_initialSliderValue;
@property (nonatomic) BOOL requiresSomeMovementBeforeActivation; // @synthesize requiresSomeMovementBeforeActivation=_requiresSomeMovementBeforeActivation;
@property (nonatomic) double verticalDragCoefficient; // @synthesize verticalDragCoefficient=_verticalDragCoefficient;

- (void)assertConfigurationIsValid;
- (id)init;

@end

