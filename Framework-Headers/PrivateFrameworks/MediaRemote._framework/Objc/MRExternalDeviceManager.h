//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPointerArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceManager : NSObject
{
    NSPointerArray *_devicesPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) NSArray *allDevices;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)clearDevices;
- (id)deviceWithIdentifier:(id)arg1;
- (id)init;
- (void)registerDevice:(id)arg1;

@end

