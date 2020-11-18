//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHomeManager, NSMutableSet;

@interface HFHomeItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HMHomeManager *_homeManager;
    NSMutableSet *_homeItems;
}

@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (strong, nonatomic) NSMutableSet *homeItems; // @synthesize homeItems=_homeItems;
@property (strong, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;

- (void).cxx_destruct;
- (id)initWithHomeManager:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end
