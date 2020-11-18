//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer, _WKUserInitiatedAction;

@interface _SFURLSpoofingMitigator : NSObject
{
    NSDate *_dateOfStartOfLastProvisionalNavigation;
    unsigned long long _recentlyInterruptedNavigationCount;
    _WKUserInitiatedAction *_userInitiatedAction;
    NSTimer *_timerForRevertingToCommittedURL;
    BOOL _UIShouldReflectCommittedURLInsteadOfCurrentURL;
    long long _navigationSource;
}

@property (readonly, nonatomic) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL; // @synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL;
@property (nonatomic) long long navigationSource; // @synthesize navigationSource=_navigationSource;

+ (BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
- (void).cxx_destruct;
- (void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
- (void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)arg1;
- (void)_stopTrackingInterruptedProvisionalNavigations;
- (void)didCommitNavigation;
- (void)didFailProvisionalNavigationWithError:(id)arg1;
- (void)didStartProvisionalNavigationWithUserInitiatedAction:(id)arg1;

@end

