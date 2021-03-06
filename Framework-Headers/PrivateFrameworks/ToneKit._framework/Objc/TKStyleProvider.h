//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ToneKit/TKVibrationRecorderStyleProvider-Protocol.h>

@class NSBundle, NSMutableDictionary, NSString, UIColor, UIFont, UIImage, UIScreen;

@interface TKStyleProvider : NSObject <TKVibrationRecorderStyleProvider>
{
    NSBundle *_bundle;
    NSMutableDictionary *_cachedStyleProperties;
    UIScreen *_screen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double defaultAnimationDuration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *vibrationRecorderBarsBackgroundColor;
@property (readonly, nonatomic) double vibrationRecorderControlsToolbarAdditionalHeight;
@property (readonly, nonatomic) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property (readonly, nonatomic) double vibrationRecorderControlsToolbarVerticalOffset;
@property (readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelBackgroundColor;
@property (readonly, nonatomic) struct UIEdgeInsets vibrationRecorderInstructionsLabelEdgeInsets;
@property (readonly, nonatomic) double vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property (readonly, nonatomic) UIFont *vibrationRecorderInstructionsLabelFont;
@property (readonly, nonatomic) struct UIOffset vibrationRecorderInstructionsLabelPositionOffset;
@property (readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelTextColor;
@property (readonly, nonatomic) double vibrationRecorderProgressToolbarAdditionalHeight;
@property (readonly, nonatomic) double vibrationRecorderProgressToolbarVerticalOffset;
@property (readonly, nonatomic) double vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property (readonly, nonatomic) double vibrationRecorderProgressViewDotHorizontalInset;
@property (readonly, nonatomic) UIColor *vibrationRecorderProgressViewDotTintColor;
@property (readonly, nonatomic) double vibrationRecorderProgressViewHeight;
@property (readonly, nonatomic) double vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property (readonly, nonatomic) UIImage *vibrationRecorderProgressViewResizableDotImage;
@property (readonly, nonatomic) UIColor *vibrationRecorderProgressViewTrackColor;
@property (readonly, nonatomic) double vibrationRecorderRippleFinalRadius;
@property (readonly, nonatomic) double vibrationRecorderRippleFingerMovingSpeed;
@property (readonly, nonatomic) double vibrationRecorderRippleFingerStillSpeed;
@property (readonly, nonatomic) double vibrationRecorderRippleInitialRadius;
@property (readonly, nonatomic) double vibrationRecorderRippleRingLineWidth;
@property (readonly, nonatomic) UIColor *vibrationRecorderRippleViewBackgroundColor;

- (void).cxx_destruct;
- (id)_bundle;
- (id)_cachedImageWithName:(id)arg1 forPropertyWithSelector:(SEL)arg2;
- (id)_cachedResizableImageForPropertyWithSelector:(SEL)arg1 capInsets:(struct UIEdgeInsets)arg2 size:(struct CGSize)arg3 imageRenderingMode:(long long)arg4 withDrawingActions:(CDUnknownBlockType)arg5;
- (id)_cachedStyleObjectForPropertyWithSelector:(SEL)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_setCachedStyleObject:(id)arg1 forPropertyWithSelector:(SEL)arg2;
- (void)dealloc;
- (id)init;

@end

