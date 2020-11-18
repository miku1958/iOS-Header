//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _UIButtonBarLayoutMetricsData;

__attribute__((visibility("hidden")))
@interface _UIButtonBarLayout : NSObject
{
    id<_UIButtonBarLayoutMetricsData> _layoutMetrics;
    BOOL _dirty;
}

@property (nonatomic) BOOL dirty; // @synthesize dirty=_dirty;

- (void).cxx_destruct;
- (void)_addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)_addLayoutGuides:(id)arg1;
- (void)_addLayoutViews:(id)arg1;
- (void)_configure;
- (BOOL)_isGroup;
- (BOOL)_isSpace;
- (id)_item;
- (id)_metricsData;
- (BOOL)_shouldBeDirty;
- (void)addConstraintsToActivate:(id)arg1 toDeactivate:(id)arg2;
- (void)addLayoutGuides:(id)arg1;
- (void)addLayoutViews:(id)arg1;
- (void)addLayoutViews:(id)arg1 layoutGuides:(id)arg2 constraintsToActivate:(id)arg3 constraintsToDeactivate:(id)arg4;
- (BOOL)compact;
- (void)configure;
- (id)description;
- (void)dirtyLayoutForPlainAppearanceChange:(BOOL)arg1 doneAppearanceChanged:(BOOL)arg2;
- (id)init;
- (id)initWithLayoutMetrics:(id)arg1;
- (double)minimumLayoutWidthGivenMinimumSpaceWidth:(double)arg1;
- (void)setSuppressSpacing:(BOOL)arg1;
- (void)setUseGroupSizing:(BOOL)arg1;
- (BOOL)shouldHoriziontallyCenterView:(id)arg1;
- (BOOL)suppressSpacing;
- (BOOL)useGroupSizing;

@end
