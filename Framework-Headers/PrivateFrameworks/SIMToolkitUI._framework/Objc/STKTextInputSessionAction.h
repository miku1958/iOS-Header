//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SIMToolkitUI/STKSessionAction.h>

@class STKTextInputSessionData;

@interface STKTextInputSessionAction : STKSessionAction
{
}

@property (readonly, nonatomic) STKTextInputSessionData *sessionData;

- (id)initWithBehavior:(id)arg1 inputData:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)sendSuccessWithResponse:(id)arg1;

@end
