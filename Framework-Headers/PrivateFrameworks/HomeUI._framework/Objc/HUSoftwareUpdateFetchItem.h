//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

@class HMHome, NAFuture;

@interface HUSoftwareUpdateFetchItem : HFItem
{
    HMHome *_home;
    NAFuture *_softwareUpdateFetchFuture;
}

@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) NAFuture *softwareUpdateFetchFuture; // @synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2;

@end
