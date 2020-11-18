//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIBlurEffect, UIColor;

@interface UITextInputAssistantItem : NSObject
{
    BOOL _allowsHidingShortcuts;
    BOOL _showsBarButtonItemsInline;
    BOOL _independentGroupSizes;
    NSArray *_leadingBarButtonGroups;
    NSArray *_trailingBarButtonGroups;
    NSArray *_centerBarButtonGroups;
    double _marginOverride;
    UIColor *_detachedBackgroundColor;
    UIBlurEffect *_detachedBackgroundEffect;
    UIColor *_detachedTintColor;
}

@property (nonatomic) BOOL allowsHidingShortcuts; // @synthesize allowsHidingShortcuts=_allowsHidingShortcuts;
@property (copy, nonatomic, getter=_centerBarButtonGroups, setter=_setCenterBarButtonGroups:) NSArray *centerBarButtonGroups; // @synthesize centerBarButtonGroups=_centerBarButtonGroups;
@property (strong, nonatomic, getter=_detachedBackgroundColor, setter=_setDetachedBackgroundColor:) UIColor *detachedBackgroundColor; // @synthesize detachedBackgroundColor=_detachedBackgroundColor;
@property (copy, nonatomic, getter=_detachedBackgroundEffect, setter=_setDetachedBackgroundEffect:) UIBlurEffect *detachedBackgroundEffect; // @synthesize detachedBackgroundEffect=_detachedBackgroundEffect;
@property (strong, nonatomic, getter=_detachedTintColor, setter=_setDetachedTintColor:) UIColor *detachedTintColor; // @synthesize detachedTintColor=_detachedTintColor;
@property (readonly, nonatomic, getter=_hasItemsToDisplay) BOOL hasItemsToDisplay;
@property (nonatomic, getter=_independentGroupSizes, setter=_setIndependentGroupSizes:) BOOL independentGroupSizes; // @synthesize independentGroupSizes=_independentGroupSizes;
@property (copy, nonatomic) NSArray *leadingBarButtonGroups; // @synthesize leadingBarButtonGroups=_leadingBarButtonGroups;
@property (nonatomic, getter=_marginOverride, setter=_setMarginOverride:) double marginOverride; // @synthesize marginOverride=_marginOverride;
@property (readonly, nonatomic, getter=_requiresPredictionDisabled) BOOL requiresPredictionDisabled;
@property (nonatomic, getter=_showsBarButtonItemsInline, setter=_setShowsBarButtonItemsInline:) BOOL showsBarButtonItemsInline; // @synthesize showsBarButtonItemsInline=_showsBarButtonItemsInline;
@property (readonly, nonatomic, getter=_isSystemItem) BOOL systemItem;
@property (copy, nonatomic) NSArray *trailingBarButtonGroups; // @synthesize trailingBarButtonGroups=_trailingBarButtonGroups;

+ (id)_keyboardDeleteItem;
- (void)dealloc;
- (id)description;
- (id)init;

@end

