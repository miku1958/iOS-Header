//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PrototypeTools/PTSHUDControl-Protocol.h>
#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSArray, NSString, UILabel, UISwitch, _UISettings;

@interface PTSSwitch : UIView <PTSHUDControl, _UISettingsKeyPathObserver>
{
    int _alignment;
    _UISettings *_settings;
    NSString *_valueKeyPath;
    double _height;
    id _target;
    SEL _action;
    UISwitch *_switchControl;
    UILabel *_titleLabel;
    NSArray *_subviewConstraints;
}

@property (nonatomic) SEL action; // @synthesize action=_action;
@property (nonatomic) int alignment; // @synthesize alignment=_alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double height; // @synthesize height=_height;
@property (weak, nonatomic) _UISettings *settings; // @synthesize settings=_settings;
@property (strong, nonatomic) NSArray *subviewConstraints; // @synthesize subviewConstraints=_subviewConstraints;
@property (readonly) Class superclass;
@property (strong, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
@property (weak, nonatomic) id target; // @synthesize target=_target;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;

+ (struct CGRect)defaultFrame;
+ (id)switch;
+ (id)switchForSettings:(id)arg1 valueKeyPath:(id)arg2 title:(id)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)makeSwitch;
- (id)makeTitleLabel;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)pressed:(id)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;

@end
