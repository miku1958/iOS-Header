//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarAction.h>

__attribute__((visibility("hidden")))
@interface _UIStatusBarSystemNavigationAction : _UIStatusBarAction
{
    unsigned long long _destination;
}

@property (nonatomic) unsigned long long destination; // @synthesize destination=_destination;

+ (id)_navigationActionForDestination:(unsigned long long)arg1;
+ (id)backNavigationAction;
+ (id)forwardNavigationAction;

@end

