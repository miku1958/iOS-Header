//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMApertureStatusIndicator : CAMControlStatusIndicator
{
    BOOL _on;
    double _apertureValue;
}

@property (nonatomic) double apertureValue; // @synthesize apertureValue=_apertureValue;
@property (nonatomic, getter=isOn) BOOL on; // @synthesize on=_on;

- (BOOL)canShowValue;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (id)valueText;

@end

