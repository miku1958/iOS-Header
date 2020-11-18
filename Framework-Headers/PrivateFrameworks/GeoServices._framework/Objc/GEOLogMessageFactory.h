//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSString;
@protocol OS_dispatch_queue;

@interface GEOLogMessageFactory : NSObject
{
    NSLock *_lock;
    NSString *_carrierOperatorName;
    NSLock *_carrierNameLock;
    NSLock *_coreTelephonyServerLock;
    NSObject<OS_dispatch_queue> *_carrierNameQueue;
}

@property (readonly, nonatomic) NSString *carrierOperatorName;

+ (BOOL)deviceHasRadio;
+ (id)sharedInstance;
- (int)_bucketValueForTimeDelta:(double)arg1;
- (void)_connectToCoreTelephonyServer;
- (id)_retrieveCarrierOperatorName;
- (void)_updateCarrierOperatorName;
- (void)dealloc;
- (id)init;

@end

