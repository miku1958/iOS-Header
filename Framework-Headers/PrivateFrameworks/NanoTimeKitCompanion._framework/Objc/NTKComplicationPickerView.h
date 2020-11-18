//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOptionPickerView.h>

@class NSMutableDictionary, NSMutableSet, NSString, NTKComplication, NTKComplicationDisplayWrapperView;
@protocol NTKComplicationPickerViewDataSource;

@interface NTKComplicationPickerView : NTKEditOptionPickerView
{
    NSMutableSet *_loadedComplications;
    NSMutableDictionary *_displaysByComplication;
    NSMutableDictionary *_controllersByComplication;
    NSMutableDictionary *_layoutRulesByComplication;
    BOOL _needsReload;
    long long _style;
    id<NTKComplicationPickerViewDataSource> _dataSource;
    NSString *_complicationSlot;
}

@property (strong, nonatomic) NSString *complicationSlot; // @synthesize complicationSlot=_complicationSlot;
@property (weak, nonatomic) id<NTKComplicationPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) NTKComplication *selectedComplication;
@property (readonly, nonatomic) NTKComplicationDisplayWrapperView *selectedComplicationDisplay;
@property (nonatomic) long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (void)_configureFaceView:(id)arg1 forOption:(id)arg2;
- (Class)_cylinderFaceViewClass;
- (void)_detachComplicationDisplays;
- (id)_displayByLoadingComplication:(id)arg1;
- (void)_loadComplication:(id)arg1;
- (void)_reloadLayoutForComplication:(id)arg1;
- (void)_willDisplayFaceView:(id)arg1;
- (id)complicationAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAllowedComplications:(id)arg1 selectedComplication:(id)arg2;
- (void)reloadIfNeeded;
- (void)setNeedsReload;
- (void)stealSelectedComplicationDisplay:(id *)arg1 controller:(id *)arg2;

@end

