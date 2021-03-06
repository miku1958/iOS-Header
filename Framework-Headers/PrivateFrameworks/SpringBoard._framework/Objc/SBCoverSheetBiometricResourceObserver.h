//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBPearlMatchingStateProvider-Protocol.h>
#import <SpringBoard/SBUIBiometricResourceObserver-Protocol.h>

@class NSString;
@protocol SBPearlMatchingStateProviderDelegate, SBUIBiometricResource;

@interface SBCoverSheetBiometricResourceObserver : NSObject <SBUIBiometricResourceObserver, SBPearlMatchingStateProvider>
{
    BOOL _seenMatchResultSinceScreenOn;
    id<SBPearlMatchingStateProviderDelegate> _delegate;
    id<SBUIBiometricResource> _biometricResource;
}

@property (weak, nonatomic) id<SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBPearlMatchingStateProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL pearlMatchEnabledAndPossible;
@property (nonatomic) BOOL seenMatchResultSinceScreenOn; // @synthesize seenMatchResultSinceScreenOn=_seenMatchResultSinceScreenOn;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (id)initWithBiometricResource:(id)arg1;
- (void)reset;

@end

