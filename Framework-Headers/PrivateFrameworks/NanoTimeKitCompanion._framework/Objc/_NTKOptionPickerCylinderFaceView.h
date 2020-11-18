//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKPolygonCylinderFaceView-Protocol.h>

@class NSString;

@interface _NTKOptionPickerCylinderFaceView : UIView <NTKPolygonCylinderFaceView>
{
    double _contentAlpha;
    double _breathingScale;
    UIView *_optionView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *optionView; // @synthesize optionView=_optionView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyContentAlpha;
- (void)applyBreathingScale:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setRotationFromFront:(double)arg1;

@end
