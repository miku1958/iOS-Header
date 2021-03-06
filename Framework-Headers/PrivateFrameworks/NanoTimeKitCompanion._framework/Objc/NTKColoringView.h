//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKColoringView-Protocol.h>

@class NSString, UIColor, _NTKColorManager;

@interface NTKColoringView : UIView <NTKColoringView>
{
    _NTKColorManager *_colorManager;
    UIColor *_overrideColor;
}

@property (strong, nonatomic) UIColor *color; // @dynamic color;
@property (readonly, nonatomic) UIColor *contentColor; // @dynamic contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility; // @dynamic usesLegibility;

- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;

@end

