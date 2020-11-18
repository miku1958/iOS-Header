//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSServiceMonitor : NSObject
{
    long long _availability;
    NSString *_service;
    int _token;
}

@property (readonly, nonatomic) NSString *service;

- (void).cxx_destruct;
- (void)_postAvailability:(long long)arg1;
- (void)_updateAvailability;
- (void)dealloc;
- (id)initWithService:(id)arg1;
- (long long)serviceAvailability;
- (void)updateAvailability;

@end
