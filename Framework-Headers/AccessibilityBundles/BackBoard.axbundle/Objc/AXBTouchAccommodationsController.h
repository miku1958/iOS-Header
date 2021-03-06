//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXUIClientDelegate-Protocol.h"

@class AXUIClient, NSString;
@protocol OS_dispatch_queue;

@interface AXBTouchAccommodationsController : NSObject <AXUIClientDelegate>
{
    BOOL _areTouchAccommodationsInEffect;
    NSObject<OS_dispatch_queue> *_touchAccommodationsQueue;
    AXUIClient *_touchAccommodationsClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) AXUIClient *touchAccommodationsClient; // @synthesize touchAccommodationsClient=_touchAccommodationsClient;

+ (void)hideHoldDurationTripleClickHelp;
+ (void)initializeMonitor;
+ (void)showHoldDurationTripleClickHelp;
- (void).cxx_destruct;
- (id)_clientIdentifier;
- (void)_hideHoldDurationTripleClickHelp;
- (void)_registerForTouchAccommodationsAXSettingsUpdate;
- (void)_showHoldDurationTripleClickHelp;
- (void)_updateTouchAccommodationsSetting;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;

@end

