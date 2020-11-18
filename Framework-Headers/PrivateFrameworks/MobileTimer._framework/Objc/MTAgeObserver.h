//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, NSNumber;

@interface MTAgeObserver : NSObject
{
    int _characteristicUpdateToken;
    NSNumber *_age;
    HKHealthStore *_healthStore;
}

@property (strong, nonatomic) NSNumber *age; // @synthesize age=_age;
@property (nonatomic) int characteristicUpdateToken; // @synthesize characteristicUpdateToken=_characteristicUpdateToken;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;

+ (id)age;
+ (id)sharedAgeObserver;
- (void).cxx_destruct;
- (id)_computeAge;
- (void)_registerForSignificantTimeChangeNotification;
- (void)checkForAgeChange;
- (void)dealloc;
- (id)init;

@end
