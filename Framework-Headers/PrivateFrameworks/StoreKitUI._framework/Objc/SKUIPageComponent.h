//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SSMetricsEventFieldProvider-Protocol.h>

@class NSString, SKUIViewElement;

@interface SKUIPageComponent : NSObject <SSMetricsEventFieldProvider>
{
    long long _metricsLocationPosition;
    SKUIViewElement *_viewElement;
}

@property (readonly, nonatomic) long long componentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *metricsElementName;
@property (nonatomic, setter=_setMetricsLocationPosition:) long long metricsLocationPosition; // @synthesize metricsLocationPosition=_metricsLocationPosition;
@property (readonly, nonatomic, getter=isMissingItemData) BOOL missingItemData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SKUIViewElement *viewElement; // @synthesize viewElement=_viewElement;

- (void).cxx_destruct;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (id)valueForMetricsField:(id)arg1;

@end

