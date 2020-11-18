//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSExternalBehaviorProviding-Protocol.h>

@class CSCoverSheetViewController, NSString, SBMainDisplayPolicyAggregator;

@interface SBDashBoardPolicyBasedBehaviorProvider : NSObject <CSExternalBehaviorProviding>
{
    CSCoverSheetViewController *_coverSheetViewController;
    SBMainDisplayPolicyAggregator *_policyAggregator;
    id _notificationToken;
}

@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) long long participantState;
@property (readonly, nonatomic) long long proximityDetectionMode;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly, nonatomic) long long scrollingStrategy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_cameraRestrictions;
- (unsigned long long)_restrictedCapability:(unsigned long long)arg1 forAggregatorCapability:(long long)arg2;
- (void)conformsToCSBehaviorProviding;
- (void)conformsToCSExternalBehaviorProviding;
- (void)dealloc;
- (id)initWithCoverSheetViewController:(id)arg1 policyAggregator:(id)arg2;

@end
