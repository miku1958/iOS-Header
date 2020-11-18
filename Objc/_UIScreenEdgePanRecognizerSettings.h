//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISettings.h>

@class NSString, _UIScreenEdgePanRecognizerCornerSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerEdgeSettings;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerSettings : _UISettings
{
    NSString *_multitaskingGestureMode;
    NSString *_navigationGestureMode;
    _UIScreenEdgePanRecognizerEdgeSettings *_edgeSettings;
    _UIScreenEdgePanRecognizerDwellSettings *_dwellSettings;
    _UIScreenEdgePanRecognizerCornerSettings *_cornerSettings;
}

@property (strong, nonatomic) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings; // @synthesize cornerSettings=_cornerSettings;
@property (strong, nonatomic) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings; // @synthesize dwellSettings=_dwellSettings;
@property (strong, nonatomic) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings; // @synthesize edgeSettings=_edgeSettings;
@property (copy, nonatomic) NSString *multitaskingGestureMode; // @synthesize multitaskingGestureMode=_multitaskingGestureMode;
@property (copy, nonatomic) NSString *navigationGestureMode; // @synthesize navigationGestureMode=_navigationGestureMode;

+ (id)settingsControllerModule;
- (void).cxx_destruct;

@end

