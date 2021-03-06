//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, PPLocalLocationStore, PPLocation;

@interface PPLocationCache : NSObject
{
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (void).cxx_destruct;
- (void)_refresh;
- (id)homeOrWorkAddresses;
- (id)init;
- (id)initWithLocationStore:(id)arg1;
- (void)invalidate;
- (id)locationForHome;
- (id)locationForWork;

@end

