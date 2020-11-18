//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCharacteristicsAvailabilityListenerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSDate, NSSet, NSString;
@protocol HMDDoorbellChimeControllerContext;

@interface HMDDoorbellChimeController : NSObject <HMFLogging, HMDCharacteristicsAvailabilityListenerDelegate>
{
    NSSet *_availableCharacteristics;
    NSDate *_lastUnidentifiedChimeDate;
    id<HMDDoorbellChimeControllerContext> _context;
}

@property (strong) NSSet *availableCharacteristics; // @synthesize availableCharacteristics=_availableCharacteristics;
@property (strong) id<HMDDoorbellChimeControllerContext> context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSDate *lastUnidentifiedChimeDate; // @synthesize lastUnidentifiedChimeDate=_lastUnidentifiedChimeDate;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_handleCharacteristicsValueUpdated:(id)arg1;
- (void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(BOOL)arg1 attemptCloudPullIfNoPersonsFound:(BOOL)arg2;
- (id)clientIdentifier;
- (void)configureWithContext:(id)arg1;
- (void)dealloc;
- (void)handleCharacteristicsValueUpdated:(id)arg1;
- (void)handleUpdatedPersonIdentificationInformation;
- (id)init;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;
- (id)logIdentifier;

@end
