//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCControllerButtonInput.h>

@protocol _GCACHomeButtonDelegate;

@interface _GCACHomeButton : _GCControllerButtonInput
{
    id<_GCACHomeButtonDelegate> _delegate;
    BOOL needsReset;
}

- (void).cxx_destruct;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
