//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class NSString;

@interface MCUIViewController : UIViewController <PSStateRestoration>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)updateExtendedLayoutIncludesOpaqueBars;

@end
