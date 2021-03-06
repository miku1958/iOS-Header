//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPContainedObject.h>

#import <KeynoteQuicklook/KNInspectableAnimation-Protocol.h>
#import <KeynoteQuicklook/TSKModel-Protocol.h>

@class KNAnimationInfo, KNAnimationPluginMenu, KNTransitionAttributes, NSArray, NSSet, NSString, TSDBezierPathSource, TSUColor;

@interface KNTransition : TSPContainedObject <KNInspectableAnimation, TSKModel>
{
    KNTransitionAttributes *_attributes;
}

@property (readonly, nonatomic) KNAnimationInfo *animationInfo;
@property (copy, nonatomic) KNTransitionAttributes *attributes;
@property (readonly, nonatomic) BOOL canEditAnimations;
@property (readonly, nonatomic) TSUColor *color;
@property (readonly, nonatomic) BOOL customBounce;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve1;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve2;
@property (readonly, nonatomic) TSDBezierPathSource *customEffectTimingCurve3;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName1;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName2;
@property (readonly, nonatomic) NSString *customEffectTimingCurveThemeName3;
@property (readonly, nonatomic) BOOL customMagicMoveFadeUnmatchedObjects;
@property (readonly, nonatomic) long long customMosaicSize;
@property (readonly, nonatomic) long long customMosaicType;
@property (readonly, nonatomic) BOOL customMotionBlur;
@property (readonly, nonatomic) long long customTextDelivery;
@property (readonly, nonatomic) long long customTimingCurve;
@property (readonly, nonatomic) float customTravelDistance;
@property (readonly, nonatomic) float customTwist;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) KNAnimationPluginMenu *directionMenu;
@property (readonly, nonatomic) unsigned long long directionType;
@property (readonly, nonatomic) BOOL documentIsRTL;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString *effect;
@property (readonly, nonatomic) BOOL hasAutomaticTrigger;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *inspectableAttributes;
@property (readonly, nonatomic) BOOL isAutomaticTransition;
@property (readonly, nonatomic) BOOL isMagicMove;
@property (readonly, nonatomic) NSArray *localizedEventTriggerNames;
@property (readonly, nonatomic) long long randomNumberSeed;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBounce;
@property (readonly, nonatomic) BOOL supportsColor;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve1;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve2;
@property (readonly, nonatomic) BOOL supportsCustomEffectTimingCurve3;
@property (readonly, nonatomic) BOOL supportsDirection;
@property (readonly, nonatomic) BOOL supportsDuration;
@property (readonly, nonatomic) BOOL supportsTravelDistance;
@property (readonly, nonatomic) BOOL supportsTwist;

+ (id)attributeKeyForBindingKeyPath:(id)arg1;
+ (id)bindingKeyPathForAttributeKey:(id)arg1;
+ (id)bindingMap;
+ (unsigned long long)directionTypeForEffect:(id)arg1;
+ (BOOL)hasDirectionOptionForEffect:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithArchive:(const struct TransitionArchive *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (id)initWithOwner:(id)arg1;
- (id)initWithOwner:(id)arg1 attributes:(id)arg2;
- (unsigned long long)p_keynoteVersionFromUnarchiver:(id)arg1;
- (BOOL)p_supportsCustomEffectTimingCurveForLayoutStyles:(id)arg1;
- (void)saveToArchive:(struct TransitionArchive *)arg1 archiver:(id)arg2;
- (BOOL)supportsRandomNumberSeedInspection;
- (BOOL)supportsTimingCurves;

@end

