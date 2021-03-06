//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;
@protocol APMetricPrimitiveCreating, APPCPromotableContent;

@interface _TtC15PromotedContent20JourneyMetricsHelper : NSObject
{
    MISSING_TYPE *promotedContent;
    MISSING_TYPE *promotedContentIdentifier;
    MISSING_TYPE *journeyIdentifier;
    MISSING_TYPE *primitiveCreator;
    MISSING_TYPE *contextIdentifier;
    MISSING_TYPE *hasBeenOnScreen;
    MISSING_TYPE *isCurrentlyOnScreen;
    MISSING_TYPE *notificationOwner;
    MISSING_TYPE *interactionThreshold;
    MISSING_TYPE *interactionTime;
    MISSING_TYPE *viewReady;
    MISSING_TYPE *wasCreated;
    MISSING_TYPE *hasBeenPlaced;
    MISSING_TYPE *stop;
}

@property (nonatomic) BOOL hasBeenOnScreen; // @synthesize hasBeenOnScreen;
@property (nonatomic, copy) NSString *journeyIdentifier;
@property (nonatomic, strong) id<APMetricPrimitiveCreating> primitiveCreator; // @synthesize primitiveCreator;
@property (nonatomic, weak) id<APPCPromotableContent> promotedContent; // @synthesize promotedContent;
@property (nonatomic, copy) NSString *promotedContentIdentifier;

- (void).cxx_destruct;
- (void)adMarkerInteracted;
- (void)contentLoadFailure;
- (void)createdWithAdType:(long long)arg1;
- (void)delivered;
- (void)discardedWithCode:(long long)arg1;
- (void)exceededContainer;
- (void)getAppWithButtonState:(long long)arg1 timeToPreviousInstall:(double)arg2;
- (id)init;
- (void)interactedAtXPos:(float)arg1 yPos:(float)arg2;
- (void)loaded;
- (void)notConsumedWithCode:(long long)arg1 placeholder:(BOOL)arg2;
- (void)offScreenWithCollapsed:(BOOL)arg1;
- (void)onScreenWithCollapsed:(BOOL)arg1;
- (void)placedWithPlacementType:(long long)arg1 wasNativeSlot:(BOOL)arg2;
- (void)ready;
- (void)registerHandlerForAllMetricsWithClosure:(CDUnknownBlockType)arg1;
- (void)removeHandler;
- (void)replacedWithHelper:(id)arg1;
- (void)userReturnedFromInteraction;
- (void)visibleWithPercent:(long long)arg1 starting:(id)arg2 duration:(double)arg3 scrollVelocity:(float)arg4 collapsed:(BOOL)arg5;

@end

