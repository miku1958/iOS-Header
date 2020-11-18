//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIUCBBarButtonVisualProviderIOS.h>

@class _UIUCBKBSelectionBackground;

__attribute__((visibility("hidden")))
@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS
{
    _UIUCBKBSelectionBackground *_selectionBackgroundView;
    BOOL _lightKeyboard;
}

@property (nonatomic) BOOL lightKeyboard; // @synthesize lightKeyboard=_lightKeyboard;

+ (id)darkKeyboardProvider;
+ (id)lightKeyboardProvider;
- (void).cxx_destruct;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2;
- (void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2;

@end

