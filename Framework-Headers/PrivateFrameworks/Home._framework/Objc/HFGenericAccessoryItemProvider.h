//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFGenericAccessoryItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_genericItems;
}

@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (strong, nonatomic) NSMutableSet *genericItems; // @synthesize genericItems=_genericItems;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;

- (void).cxx_destruct;
- (BOOL)_isAccessorySupported:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end
