//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@interface _ADRemoteViewController : _UIRemoteViewController
{
    BOOL _hasBeenDismissed;
    unsigned long long _remoteSupportedInterfaceOrientations;
    NSString *_vendedClass;
}

@property (nonatomic) BOOL hasBeenDismissed; // @synthesize hasBeenDismissed=_hasBeenDismissed;
@property (nonatomic) unsigned long long remoteSupportedInterfaceOrientations; // @synthesize remoteSupportedInterfaceOrientations=_remoteSupportedInterfaceOrientations;
@property (copy, nonatomic) NSString *vendedClass; // @synthesize vendedClass=_vendedClass;

+ (id)serviceViewControllerInterface;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateInterfaceOrientationIfNeeded;

@end

