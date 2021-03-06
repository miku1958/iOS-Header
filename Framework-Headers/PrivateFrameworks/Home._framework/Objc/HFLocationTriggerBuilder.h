//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFTriggerBuilder.h>

@class HFEventBuilder, NSSet;
@protocol HFLocationEventBuilder;

@interface HFLocationTriggerBuilder : HFTriggerBuilder
{
    HFEventBuilder<HFLocationEventBuilder> *_eventBuilder;
    NSSet *_stagedEvents;
}

@property (strong, nonatomic) HFEventBuilder<HFLocationEventBuilder> *eventBuilder; // @synthesize eventBuilder=_eventBuilder;
@property (readonly, nonatomic) BOOL isCustomLocationTrigger;
@property (readonly, nonatomic) BOOL locationCanBeEdited;
@property (strong, nonatomic) NSSet *stagedEvents; // @synthesize stagedEvents=_stagedEvents;

+ (Class)homeKitRepresentationClass;
- (void).cxx_destruct;
- (id)_allActionSets;
- (id)_performValidation;
- (id)_updateEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (BOOL)requiresConfirmationToRun;
- (BOOL)requiresFMFDeviceToRun;
- (BOOL)requiresLocationServicesAuthorization;
- (BOOL)secureActionsRequireConfirmationToRun;
- (BOOL)supportsConditions;
- (BOOL)supportsEndEvents;

@end

