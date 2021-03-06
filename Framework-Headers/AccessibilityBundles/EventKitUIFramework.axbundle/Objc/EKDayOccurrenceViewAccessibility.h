//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__EKDayOccurrenceViewAccessibility_super.h"

@class NSValue;

@interface EKDayOccurrenceViewAccessibility : __EKDayOccurrenceViewAccessibility_super
{
}

@property (strong, nonatomic, getter=_axDropPointDescriptorsProvider, setter=_axSetDropPointDescriptorsProvider:) id axDropPointDescriptorsProvider;
@property (weak, nonatomic, getter=_axRealFrameInSuperview, setter=_axSetRealFrameInSuperview:) NSValue *axRealFrameInSuperview;

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityIsInWidget;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_axDraggingView;
- (BOOL)_axIsInPreview;
- (id)_axWidgetContainerView;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (struct CGRect)accessibilityFrameForScrolling;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (void)prepareForReuse;
- (void)setDrawsResizeHandles:(BOOL)arg1;

@end

