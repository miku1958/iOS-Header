//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVButton, NSString, UIImage, UIView;

@interface AVControlItem : NSObject
{
    AVButton *_button;
    BOOL _enabled;
    long long _type;
    NSString *_title;
    UIImage *_image;
    CDUnknownBlockType _action;
}

@property (copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)_updateButton;
- (id)initWithTitle:(id)arg1 type:(long long)arg2;
- (void)setAccessibilityAttributedHint:(id)arg1;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;

@end

