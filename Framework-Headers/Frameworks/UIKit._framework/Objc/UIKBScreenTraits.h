//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScreen;

@interface UIKBScreenTraits : NSObject
{
    BOOL _knobInput;
    BOOL _touchInput;
    BOOL _touchpadInput;
    BOOL _isKeyboardMinorEdgeWidth;
    UIScreen *_screen;
    long long _orientation;
    double _keyboardWidth;
    double _keyboardBarHeight;
    struct CGRect _bounds;
}

@property (nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) BOOL isKeyboardMinorEdgeWidth; // @synthesize isKeyboardMinorEdgeWidth=_isKeyboardMinorEdgeWidth;
@property (nonatomic) double keyboardBarHeight; // @synthesize keyboardBarHeight=_keyboardBarHeight;
@property (nonatomic) double keyboardWidth; // @synthesize keyboardWidth=_keyboardWidth;
@property (readonly, nonatomic) BOOL knobInput; // @synthesize knobInput=_knobInput;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property (readonly, nonatomic) BOOL touchInput; // @synthesize touchInput=_touchInput;
@property (readonly, nonatomic) BOOL touchpadInput; // @synthesize touchpadInput=_touchpadInput;

+ (id)fullScreenTraitsWithScreen:(id)arg1 orientation:(long long)arg2;
+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2;
+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ignoreRemoteKeyboard:(BOOL)arg3;
- (void).cxx_destruct;
- (id)description;
- (id)initWithScreen:(id)arg1 orientation:(long long)arg2 allowFloating:(BOOL)arg3 ignoreRemoteKeyboard:(BOOL)arg4;
- (void)updateForTextInputTraits:(id)arg1 supportedInteractionModel:(unsigned long long)arg2;

@end
