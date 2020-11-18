//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ICDocCamPhysicalCaptureRecognizer : UIGestureRecognizer
{
    BOOL _suspended;
    long long _activeButton;
    NSArray *_desiredButtons;
    long long _physicalButtonType;
}

@property (nonatomic) long long activeButton; // @synthesize activeButton=_activeButton;
@property (copy, nonatomic) NSArray *desiredButtons; // @synthesize desiredButtons=_desiredButtons;
@property (nonatomic) long long physicalButtonType; // @synthesize physicalButtonType=_physicalButtonType;
@property (nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;

- (void).cxx_destruct;
- (long long)_captureButtonForPhysicalButtonType:(long long)arg1;
- (void)_updateApplicationButtonStatus;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setEnabled:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

