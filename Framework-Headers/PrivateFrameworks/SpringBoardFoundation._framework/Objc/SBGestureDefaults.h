//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain
{
}

@property (strong, nonatomic) NSArray *systemGestureLoggingOptions; // @dynamic systemGestureLoggingOptions;
@property (readonly, nonatomic, getter=isSystemGesturesAllowed) BOOL systemGesturesAllowed; // @dynamic systemGesturesAllowed;

- (void)_bindAndRegisterDefaults;

@end
