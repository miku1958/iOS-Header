//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject
{
    SPAdvertisementCache *_advertisementCache;
}

@property (strong, nonatomic) SPAdvertisementCache *advertisementCache; // @synthesize advertisementCache=_advertisementCache;

- (void).cxx_destruct;
- (id)beaconPayloadCache;
- (id)finderStateManager;
- (id)stateManager;

@end

