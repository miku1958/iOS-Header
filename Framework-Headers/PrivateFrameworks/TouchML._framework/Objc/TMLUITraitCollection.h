//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString, UITraitCollection, UIView;

@interface TMLUITraitCollection : NSObject
{
    UITraitCollection *_traitCollection;
    id _subviewsValue;
    id _constraintsValue;
    NSMutableDictionary *_properties;
    NSMutableOrderedSet *_propertyKeys;
    long long _userInterfaceIdiom;
    double _displayScale;
    long long _horizontalSizeClass;
    long long _verticalSizeClass;
    long long _forceTouchCapability;
    NSString *_preferredContentSizeCategory;
    unsigned long long _specificity;
    NSArray *_preferredContentSizeCategories;
}

@property (copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraintsValue;
@property (nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property (nonatomic) long long forceTouchCapability; // @synthesize forceTouchCapability=_forceTouchCapability;
@property (nonatomic) long long horizontalSizeClass; // @synthesize horizontalSizeClass=_horizontalSizeClass;
@property (strong, nonatomic) NSArray *preferredContentSizeCategories; // @synthesize preferredContentSizeCategories=_preferredContentSizeCategories;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (readonly, nonatomic) unsigned long long specificity; // @synthesize specificity=_specificity;
@property (copy, nonatomic) NSArray *subviews; // @synthesize subviews=_subviewsValue;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property (nonatomic) long long verticalSizeClass; // @synthesize verticalSizeClass=_verticalSizeClass;
@property (readonly, nonatomic) UIView *view; // @dynamic view;

+ (id)currentTraitCollection:(id)arg1;
+ (id)defaultCollection;
+ (id)traitEnvironment:(id)arg1 willTransitionToTraitCollection:(id)arg2 fromPreviousTraitCollection:(id)arg3;
- (void).cxx_destruct;
- (void)applyToTraitEnvironment:(id)arg1;
- (id)init;
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;
- (void)tmlDispose;

@end

