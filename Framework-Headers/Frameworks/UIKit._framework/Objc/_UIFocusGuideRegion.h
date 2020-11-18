//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFocusRegion.h>

@protocol _UIFocusGuideRegionDelegate;

@interface _UIFocusGuideRegion : _UIFocusRegion
{
    id<_UIFocusGuideRegionDelegate> _delegate;
}

@property (weak, nonatomic) id<_UIFocusGuideRegionDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)_delegatePreferredFocusEnvironmentsForMovement:(id)arg1;
- (id)_destinationItemForFocusMovement:(id)arg1 inMap:(id)arg2;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)_fallbackFocusItemForMovement:(id)arg1 inFocusMap:(id)arg2;
- (unsigned long long)_focusableBoundaries;
- (BOOL)_isEnabledForFocusedRegion:(id)arg1;
- (BOOL)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (BOOL)_shouldOccludeRegion:(id)arg1;
- (id)_visualRepresentationColor;
- (long long)_visualRepresentationPatternType;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
