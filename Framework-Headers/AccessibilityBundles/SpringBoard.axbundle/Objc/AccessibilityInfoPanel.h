//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AccessibilityInfoPanelWindow, NSString, UILabel, UIView, UIViewController;

@interface AccessibilityInfoPanel : NSObject
{
    UIViewController *_accessibilityInfoPanelController;
    AccessibilityInfoPanelWindow *_accessibilityInfoPanelWindow;
    UIView *_accessibilityInfoPanelView;
    UIView *_rootView;
    UILabel *_labelView;
    UIView *_backgroundView;
    NSString *_title;
    BOOL _displayOnBottomEdge;
}

@property (nonatomic) BOOL displayOnBottomEdge; // @dynamic displayOnBottomEdge;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)_accessibilityInfoPanelController;
- (id)_accessibilityInfoPanelView;
- (id)_accessibilityInfoPanelWindow;
- (struct CGRect)_displayFrame;
- (void)_layoutSubviews;
- (id)_rootView;
- (void)_setup;
- (void)dealloc;
- (void)fadeOut;
- (void)hide;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (void)show;

@end

