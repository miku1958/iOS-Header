//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentInserter-Protocol.h>

@class NSArray, NSString;
@protocol SXAdvertisingSettingsProvider, SXComponentInsertionConditionEngine;

@interface SXAdComponentInserter : NSObject <SXComponentInserter>
{
    id<SXComponentInsertionConditionEngine> _conditionEngine;
    id<SXAdvertisingSettingsProvider> _advertisingSettingsProvider;
    long long _insertedCount;
    double _lastInsertedYOffset;
}

@property (readonly, nonatomic) id<SXAdvertisingSettingsProvider> advertisingSettingsProvider; // @synthesize advertisingSettingsProvider=_advertisingSettingsProvider;
@property (readonly, nonatomic) id<SXComponentInsertionConditionEngine> conditionEngine; // @synthesize conditionEngine=_conditionEngine;
@property (readonly, nonatomic) NSArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long insertedCount; // @synthesize insertedCount=_insertedCount;
@property (nonatomic) double lastInsertedYOffset; // @synthesize lastInsertedYOffset=_lastInsertedYOffset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)adTypeFromBannerType:(unsigned long long)arg1;
- (id)componentInsertForMarker:(id)arg1 layoutProvider:(id)arg2;
- (unsigned long long)componentTraits;
- (id)initWithConditionEngine:(id)arg1 advertisingSettingsProvider:(id)arg2;
- (BOOL)validateMarker:(id)arg1 remainingMarkerCount:(unsigned long long)arg2 layoutProvider:(id)arg3;

@end

