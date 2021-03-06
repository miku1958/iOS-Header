//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSArray, NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFServiceItemProvider : HFItemProvider
{
    HMHome *_home;
    CDUnknownBlockType _filter;
    CDUnknownBlockType _sourceServiceGenerator;
    NSMutableSet *_serviceItems;
    NSArray *_serviceTypes;
    id<HFCharacteristicValueSource> _overrideValueSource;
}

@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) id<HFCharacteristicValueSource> overrideValueSource; // @synthesize overrideValueSource=_overrideValueSource;
@property (strong, nonatomic) NSMutableSet *serviceItems; // @synthesize serviceItems=_serviceItems;
@property (strong, nonatomic) NSArray *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property (copy, nonatomic) CDUnknownBlockType sourceServiceGenerator; // @synthesize sourceServiceGenerator=_sourceServiceGenerator;
@property (strong, nonatomic) id<HFCharacteristicValueSource> valueSource;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 serviceTypes:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

