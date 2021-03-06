//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/FMFSessionDelegate-Protocol.h>

@class FMFSession, NAFuture, NSHashTable, NSString;

@interface HULocationDeviceManager : NSObject <FMFSessionDelegate>
{
    FMFSession *_fmfSession;
    NAFuture *_activeFMFDeviceFuture;
    NAFuture *_availableFMFDevicesFuture;
    NSHashTable *_observers;
}

@property (strong, nonatomic) NAFuture *activeFMFDeviceFuture; // @synthesize activeFMFDeviceFuture=_activeFMFDeviceFuture;
@property (readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
@property (strong, nonatomic) NAFuture *availableFMFDevicesFuture; // @synthesize availableFMFDevicesFuture=_availableFMFDevicesFuture;
@property (readonly, nonatomic) NAFuture *availableLocationDevicesFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FMFSession *fmfSession; // @synthesize fmfSession=_fmfSession;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateActiveFMFDevice:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (id)updateActiveLocationDevice:(id)arg1;

@end

