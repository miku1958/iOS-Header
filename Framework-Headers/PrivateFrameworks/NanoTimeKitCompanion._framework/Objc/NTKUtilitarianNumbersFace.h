//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilitarianFace.h>

#import <NanoTimeKitCompanion/NTKFaceComplicationPreviewable-Protocol.h>

@class NSString;

@interface NTKUtilitarianNumbersFace : NTKUtilitarianFace <NTKFaceComplicationPreviewable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_complicationSlotDescriptors;
+ (id)_dateComplicationSlotForDevice:(id)arg1;
+ (unsigned long long)_dateComplicationSlotSupportedStylesForDevice:(id)arg1;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_orderedComplicationSlots;
- (void)applyPreviewConfigurationWithFamily:(long long)arg1 faceColor:(long long)arg2;

@end
