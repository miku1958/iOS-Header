//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class CLKDevice, NSArray, NSDictionary, NSString;

@protocol NTKFaceComplicationConfiguration <NSObject>
+ (NSString *)defaultLocalizedNameForComplicationSlot:(NSString *)arg1;
- (BOOL)complicationExistenceInvalidatesSnapshot;
- (NSDictionary *)complicationSlotDescriptors;
- (NSString *)defaultSelectedComplicationSlotForDevice:(CLKDevice *)arg1;
- (NSString *)localizedNameForComplicationSlot:(NSString *)arg1;
- (NSArray *)orderedComplicationSlots;
- (NSArray *)richComplicationSlotsForDevice:(CLKDevice *)arg1;

@optional
- (NSString *)dateComplicationSlotForDevice:(CLKDevice *)arg1;
- (unsigned long long)dateComplicationSlotSupportedStylesForDevice:(CLKDevice *)arg1;
@end

