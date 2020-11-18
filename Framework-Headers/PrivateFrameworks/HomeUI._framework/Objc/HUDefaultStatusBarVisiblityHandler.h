//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUStatusBarVisibilityHandling-Protocol.h>

@class NSString;

@interface HUDefaultStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (readonly) Class superclass;

- (id)_statusBarAnimationParametersForAnimationSettings:(id)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimationSettings:(id)arg2;

@end
