//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PT2DGraphView.h>

#import <PrototypeTools/PTSHUDControl-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSString, _UISettings, _UISettingsGroup;

@interface PTSGraphView : PT2DGraphView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    int _alignment;
    _UISettings *_settings;
    _UISettingsGroup *_settingsGroup;
    NSString *_xAxisValueKeyPath;
    NSString *_yAxisValueKeyPath;
    NSString *_valueKeyPath;
}

@property (nonatomic) int alignment; // @synthesize alignment=_alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) _UISettings *settings; // @synthesize settings=_settings;
@property (weak, nonatomic) _UISettingsGroup *settingsGroup; // @synthesize settingsGroup=_settingsGroup;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
@property (copy, nonatomic) NSString *xAxisValueKeyPath; // @synthesize xAxisValueKeyPath=_xAxisValueKeyPath;
@property (copy, nonatomic) NSString *yAxisValueKeyPath; // @synthesize yAxisValueKeyPath=_yAxisValueKeyPath;

+ (struct CGRect)defaultFrame;
+ (id)graphView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)updateGraphData;

@end
