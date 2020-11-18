//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBHardwareDefaults : SBAbstractSpringBoardDefaultDomain
{
}

@property (readonly, nonatomic) BOOL disableHomeButton; // @dynamic disableHomeButton;
@property (readonly, nonatomic) BOOL disableHomeButtonDoublePress; // @dynamic disableHomeButtonDoublePress;
@property (readonly, nonatomic) BOOL disableProximitySensor; // @dynamic disableProximitySensor;
@property (nonatomic) BOOL hasSeenACaseLatchCoverOnce; // @dynamic hasSeenACaseLatchCoverOnce;
@property (nonatomic) long long homeButtonHapticType; // @dynamic homeButtonHapticType;
@property (readonly, nonatomic) BOOL useHardwareSwitchAsOrientationLock; // @dynamic useHardwareSwitchAsOrientationLock;

- (void)_bindAndRegisterDefaults;

@end

