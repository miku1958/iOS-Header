//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIColor, UITraitCollection, UIView;
@protocol UIActionSheetPresentationControllerDismissActionView;

@protocol UIActionSheetPresentationControllerVisualStyle <NSObject>

@property (readonly) struct UIEdgeInsets contentInsets;
@property (readonly) double cornerRadius;
@property (readonly) UIColor *dimmingViewColor;
@property (readonly) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView;
@property (readonly) double dismissToContentSpacing;
@property (strong) UITraitCollection *traitCollection;

@end
