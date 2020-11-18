//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityCustomAction.h>

@class NSString, UIImage;

@interface UIAccessibilityCustomAction (Private)

@property (nonatomic) BOOL ignoreWhenVoiceOverTouches;
@property (strong, nonatomic, getter=_image, setter=_setImage:) UIImage *image;
@property (strong, nonatomic, getter=_shortName, setter=_setShortName:) NSString *shortName;
@property (nonatomic) BOOL shouldSuppressActionHint;

- (id)_accessibilityAXAttributedName;
- (id)_accessibilityCustomActionIdentifier;
- (BOOL)_accessibilityMatchesCustomActionIdentifier:(id)arg1;
@end

