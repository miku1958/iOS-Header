//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSSet;
@protocol HFRoomSuggestionVendor;

@interface HFRoomSuggestionItemProvider : HFItemProvider
{
    unsigned long long _suggestedRoomLimit;
    HMHome *_home;
    id<HFRoomSuggestionVendor> _suggestionVendor;
    NSSet *_suggestionItems;
}

@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (nonatomic) unsigned long long suggestedRoomLimit; // @synthesize suggestedRoomLimit=_suggestedRoomLimit;
@property (strong, nonatomic) NSSet *suggestionItems; // @synthesize suggestionItems=_suggestionItems;
@property (strong, nonatomic) id<HFRoomSuggestionVendor> suggestionVendor; // @synthesize suggestionVendor=_suggestionVendor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 suggestionVendor:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

