//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UILayoutSupport-Protocol.h>

@class NSArray, NSLayoutDimension, NSLayoutYAxisAnchor, NSString;

@interface _UILayoutGuide : UIView <UILayoutSupport>
{
    BOOL _allowsArchivingAsSubview;
    BOOL _horizontal;
    NSArray *_constraintsToRemoveAtRuntime;
    NSString *_archivedIdentifier;
}

@property (nonatomic, setter=_setAllowsArchivingAsSubview:) BOOL _allowsArchivingAsSubview; // @synthesize _allowsArchivingAsSubview;
@property (copy, nonatomic, setter=_setArchivedIdentifier:) NSString *_archivedIdentifier; // @synthesize _archivedIdentifier;
@property (copy, nonatomic, setter=_setConstraintsToRemoveAtRuntime:) NSArray *_constraintsToRemoveAtRuntime; // @synthesize _constraintsToRemoveAtRuntime;
@property (nonatomic, getter=isHorizontal, setter=_setHorizontal:) BOOL _horizontal; // @synthesize _horizontal;
@property (readonly) NSLayoutYAxisAnchor *bottomAnchor; // @dynamic bottomAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSLayoutDimension *heightAnchor; // @dynamic heightAnchor;
@property (readonly, nonatomic) double length;
@property (readonly) Class superclass;
@property (readonly) NSLayoutYAxisAnchor *topAnchor; // @dynamic topAnchor;

+ (id)_horizontalLayoutGuide;
+ (id)_verticalLayoutGuide;
+ (id)classFallbacksForKeyedArchiver;
- (BOOL)_isFloatingLayoutItem;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)_setUpCounterDimensionConstraint;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

