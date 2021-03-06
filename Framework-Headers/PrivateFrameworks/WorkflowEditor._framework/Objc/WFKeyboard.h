//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFKeyboard : NSObject
{
    BOOL _visible;
    long long _animationCurve;
    double _animationDuration;
    struct CGRect _keyboardFrame;
}

@property (readonly, nonatomic) long long animationCurve; // @synthesize animationCurve=_animationCurve;
@property (readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property (readonly, nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

+ (void)beginObservingKeyboardNotifications;
+ (id)sharedKeyboard;
- (void)dealloc;
- (id)init;
- (struct CGRect)keyboardFrameInView:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillChangeVisible:(id)arg1;

@end

