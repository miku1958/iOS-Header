//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOptionPickerSideView.h>

#import <NanoTimeKitCompanion/NTKCurvedPickerSideView-Protocol.h>

@class NSString, NTKComplicationLayoutRule;

@interface NTKComplicationPickerSideView : NTKEditOptionPickerSideView <NTKCurvedPickerSideView>
{
    NTKComplicationLayoutRule *_layoutRule;
    long long _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NTKComplicationLayoutRule *layoutRule; // @synthesize layoutRule=_layoutRule;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCurvedAngle:(double)arg1;

@end
