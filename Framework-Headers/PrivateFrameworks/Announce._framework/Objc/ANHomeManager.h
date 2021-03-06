//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Announce/HMAccessoryDelegatePrivate-Protocol.h>
#import <Announce/HMHomeDelegate-Protocol.h>
#import <Announce/HMHomeDelegatePrivate-Protocol.h>
#import <Announce/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ANHomeManager : NSObject <HMHomeManagerDelegate, HMHomeDelegate, HMHomeDelegatePrivate, HMAccessoryDelegatePrivate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _homesLoaded;
    HMHomeManager *_homeManager;
    NSMutableArray *_homesLoadedCompletionHandlers;
    NSMutableArray *_delegates;
}

@property (readonly, nonatomic) NSArray *allHomes;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (nonatomic) BOOL homesLoaded; // @synthesize homesLoaded=_homesLoaded;
@property (strong, nonatomic) NSMutableArray *homesLoadedCompletionHandlers; // @synthesize homesLoadedCompletionHandlers=_homesLoadedCompletionHandlers;
@property (readonly, nonatomic) NSArray *homesSupportingAnnounce;
@property (readonly, nonatomic) BOOL isCurrentAccessoryHomePod;
@property (readonly) Class superclass;

+ (id)shared;
- (void).cxx_destruct;
- (id)_currentHomesWeAreIn;
- (id)_findBestHomeNames;
- (id)_homeNamesForAccessoryForContext:(id)arg1;
- (id)_homeNamesForContext:(id)arg1;
- (void)_notifyDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)_notifyManagerLoadedHomes:(id)arg1;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
- (id)homeForID:(id)arg1;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)homeNamesForContext:(id)arg1;
- (id)homeWithName:(id)arg1;
- (id)homesWithRoomNames:(id)arg1;
- (id)homesWithZoneNames:(id)arg1;
- (id)init;
- (id)initWithCaching:(BOOL)arg1;
- (BOOL)isLocalDeviceInRoom:(id)arg1;
- (void)loadHomes:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;

@end

