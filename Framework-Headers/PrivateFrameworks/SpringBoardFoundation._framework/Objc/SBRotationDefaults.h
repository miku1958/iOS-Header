//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain
{
}

@property (nonatomic) long long lastLockedOrientation; // @dynamic lastLockedOrientation;
@property (readonly, nonatomic, getter=isVideoRotationEnabled) BOOL videoRotationEnabled; // @dynamic videoRotationEnabled;

- (void)_bindAndRegisterDefaults;

@end

