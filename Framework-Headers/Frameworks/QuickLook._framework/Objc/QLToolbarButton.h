//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/NSSecureCoding-Protocol.h>

@class NSArray, NSString, QLToolbarButtonItemRepresentation, QLToolbarUnderlyingButton, UIAlertController, UIImage;

__attribute__((visibility("hidden")))
@interface QLToolbarButton : NSObject <NSSecureCoding>
{
    QLToolbarButtonItemRepresentation *_currentItemRepresentation;
    UIAlertController *_alertController;
    id _target;
    QLToolbarUnderlyingButton *_underlyingButton;
    SEL _action;
    BOOL _forceToNavBar;
    BOOL _selected;
    BOOL _enabled;
    BOOL _roundedSelectedIndicator;
    NSString *_identifier;
    UIImage *_image;
    long long _systemItem;
    NSString *_title;
    NSString *_accessibilityIdentifier;
    NSArray *_options;
    unsigned long long _placement;
}

@property (copy) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property BOOL enabled; // @synthesize enabled=_enabled;
@property BOOL forceToNavBar; // @synthesize forceToNavBar=_forceToNavBar;
@property (readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy) UIImage *image; // @synthesize image=_image;
@property (copy) NSArray *options; // @synthesize options=_options;
@property unsigned long long placement; // @synthesize placement=_placement;
@property BOOL roundedSelectedIndicator; // @synthesize roundedSelectedIndicator=_roundedSelectedIndicator;
@property BOOL selected; // @synthesize selected=_selected;
@property long long systemItem; // @synthesize systemItem=_systemItem;
@property (copy) NSString *title; // @synthesize title=_title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)barButtonWithTarget:(id)arg1 action:(SEL)arg2 maxSize:(struct CGSize)arg3;
- (void)encodeWithCoder:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidateCurrentState;
- (BOOL)isEqual:(id)arg1;

@end

