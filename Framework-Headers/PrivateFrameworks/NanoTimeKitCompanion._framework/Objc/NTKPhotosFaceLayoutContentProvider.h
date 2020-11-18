//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceLayoutContentProvider.h>

@class NTKUtilityComplicationFactory;

@interface NTKPhotosFaceLayoutContentProvider : NTKFaceLayoutContentProvider
{
    NTKUtilityComplicationFactory *_complicationFactory;
}

- (void).cxx_destruct;
- (long long)_photosUtilitySlotForSlot:(id)arg1;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)init;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;

@end

