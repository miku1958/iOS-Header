//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIVisualEffectSubview.h>

@class CAFilter, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview
{
    CAFilter *_blurFilter;
    CAFilter *_saturateFilter;
    CAFilter *_colorOffsetFilter;
    NSMutableArray *_pendingScaleTransitionBlocks;
    id _statisticsDelegate;
    unsigned long long _blurHardEdges;
    double _blurRadius;
}

@property (nonatomic) unsigned long long blurHardEdges; // @synthesize blurHardEdges=_blurHardEdges;
@property (nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property (nonatomic) id statisticsDelegate; // @synthesize statisticsDelegate=_statisticsDelegate;

+ (id)_additionAnimationsKeys;
+ (Class)layerClass;
- (void).cxx_destruct;
- (id)_groupName;
- (id)_initWithFrame:(struct CGRect)arg1 settings:(id)arg2;
- (void)_setGroupName:(id)arg1;
- (void)_setupfilters;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBackdropScaleWithSettingsDeferredIfNecessary:(id)arg1;
- (void)applySettings:(id)arg1;
- (id)backdropLayer;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

