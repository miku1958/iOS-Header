//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFAuthenticationPolicy-Protocol.h>

@class NSString;

@interface PBAAuthenticationPolicy : NSObject <SBFAuthenticationPolicy>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)allowAuthenticationRevocation;
- (BOOL)shouldClearBlockStateOnSync;
- (BOOL)usesSecureMode;
- (void)wipeDeviceWithReason:(id)arg1;

@end
