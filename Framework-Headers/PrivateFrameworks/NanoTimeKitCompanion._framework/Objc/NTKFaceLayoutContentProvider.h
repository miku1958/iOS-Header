//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface NTKFaceLayoutContentProvider : NSObject
{
    UIColor *_foregroundColor;
    UIColor *_platterColor;
}

@property (strong, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (strong, nonatomic) UIColor *platterColor; // @synthesize platterColor=_platterColor;

- (void).cxx_destruct;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 faceView:(id)arg3;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)setForegroundColor:(id)arg1 faceView:(id)arg2;
- (void)setPlatterColor:(id)arg1 faceView:(id)arg2;

@end

