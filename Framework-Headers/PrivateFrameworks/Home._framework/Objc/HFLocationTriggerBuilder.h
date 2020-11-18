//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTriggerBuilder.h>

@class CLCircularRegion;

@interface HFLocationTriggerBuilder : HFTriggerBuilder
{
    CLCircularRegion *_region;
}

@property (copy, nonatomic) CLCircularRegion *region; // @synthesize region=_region;

+ (BOOL)supportsConditions;
- (void).cxx_destruct;
- (id)_allActionSets;
- (id)_performValidation;
- (id)_updateRegion;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (BOOL)requiresConfirmationToRun;

@end

