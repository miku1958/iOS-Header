//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLSSettingsVisibilityController;

@interface PSUIClassKitVisibilityArbitrator : NSObject
{
    unsigned long long _visibilityState;
    CDUnknownBlockType _visibilityStateChangeHandler;
    CLSSettingsVisibilityController *_visibilityController;
}

@property (strong, nonatomic) CLSSettingsVisibilityController *visibilityController; // @synthesize visibilityController=_visibilityController;
@property (nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
@property (copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)reloadVisibilityState;
- (void)settingsVisibilityDidChange:(id)arg1;

@end

