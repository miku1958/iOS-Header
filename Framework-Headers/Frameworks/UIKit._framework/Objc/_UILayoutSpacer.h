//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UILayoutGuide.h>

#import <UIKitCore/UILayoutSupport-Protocol.h>

@class NSArray, NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

@interface _UILayoutSpacer : UILayoutGuide <UILayoutSupport>
{
    BOOL _compatibilityGuideAllowsArchivingAsSubview;
    BOOL _horizontal;
    NSArray *_constraintsToRemoveAtRuntime;
}

@property (copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier;
@property (nonatomic, setter=_setCompatibilityGuideAllowsArchivingAsSubview:) BOOL _compatibilityGuideAllowsArchivingAsSubview; // @synthesize _compatibilityGuideAllowsArchivingAsSubview;
@property (copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime; // @synthesize _constraintsToRemoveAtRuntime;
@property (nonatomic, getter=_isHorizontal, setter=_setHorizontal:) BOOL _horizontal; // @synthesize _horizontal;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSLayoutDimension *heightAnchor;
@property (readonly, nonatomic) double length;
@property (readonly) Class superclass;
@property (readonly) NSLayoutYAxisAnchor *topAnchor;

+ (id)_horizontalLayoutSpacer;
+ (id)_verticalLayoutSpacer;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)_setUpCounterDimensionConstraint;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

