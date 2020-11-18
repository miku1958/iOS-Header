//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogVideoFaceView.h>

@class NSDictionary;

@interface NTKAnalogMetallicFaceView : NTKAnalogVideoFaceView
{
    BOOL _shouldApplyTransform;
    unsigned long long _currentMetallicColor;
    unsigned long long _currentDialShape;
    NSDictionary *_dataSources;
}

@property (nonatomic) unsigned long long currentDialShape; // @synthesize currentDialShape=_currentDialShape;
@property (nonatomic) unsigned long long currentMetallicColor; // @synthesize currentMetallicColor=_currentMetallicColor;
@property (strong, nonatomic) NSDictionary *dataSources; // @synthesize dataSources=_dataSources;

+ (id)_nameForMetallicColor:(unsigned long long)arg1;
+ (id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2;
+ (id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2;
- (void).cxx_destruct;
- (void)_applyVideoPlayerTransform;
- (id)_complicationsCompanionForegroundColor;
- (void)_customizeVideoPlayerOnSetup;
- (id)_editOptionThatHidesAllComplications;
- (void)_handleEitherScreenWake;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (id)_swatchImageForMetallicColor:(unsigned long long)arg1 andDialShape:(unsigned long long)arg2;
- (void)_updateDialSize;
- (id)imageForEditOption:(id)arg1;
- (void)reloadDataSources;
- (void)setOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)setupDataSources;

@end

