//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosImagingFoundation/IPAEditDescription.h>

@interface IPAVideoPlaybackSettings : IPAEditDescription
{
    CDStruct_1b6d18a9 _naturalDuration;
}

@property (readonly, nonatomic) CDStruct_1b6d18a9 naturalDuration; // @synthesize naturalDuration=_naturalDuration;

+ (Class)expectedOperationClass;
+ (void)initialize;
+ (Class)operationClassForIdentifier:(id)arg1;
+ (id)playbackSettingsForAdjustments:(id)arg1;
+ (id)presetifyAdjustmentStack:(id)arg1;
- (id)archivalRepresentation;
- (id)debugDescription;
- (id)descriptionByAddingOperation:(id)arg1;
- (id)descriptionByAddingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionByInsertingOrReplacingOperation:(id)arg1;
- (id)descriptionByReplacingOperation:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)descriptionWithOperations:(id)arg1;
- (id)initWithOperations:(id)arg1;
- (id)initWithOperations:(id)arg1 naturalDuration:(CDStruct_1b6d18a9)arg2;
- (BOOL)isEqualToDescription:(id)arg1;
- (CDStruct_e83c9415)naturalPlaybackRange;
- (CDStruct_1b6d18a9)naturalTimeForPosterFrame;
- (CDStruct_1b6d18a9)naturalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1;
- (id)operationWithIdentifier:(id)arg1;
- (id)posterFrameOperation;
- (CDStruct_1b6d18a9)scaledDuration;
- (CDStruct_e83c9415)scaledPlaybackRangeForScaledDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)scaledTimeFromNaturalTime:(CDStruct_1b6d18a9)arg1;
- (id)slomoOperation;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1;
- (id)trimOperation;

@end

