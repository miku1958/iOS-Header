//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXMediaSelectionOptionsAvailabilityObserver-Protocol.h>
#import <Silex/SXVideoPlaybackObserver-Protocol.h>

@class NSString;

@interface SXMediaSelectionOptionsAvailabilityObserver : NSObject <SXVideoPlaybackObserver, SXMediaSelectionOptionsAvailabilityObserver>
{
    BOOL _hasMediaSelectionOptionsAvailable;
    CDUnknownBlockType _availabilityChangedBlock;
}

@property (copy, nonatomic, setter=onAvailabilityChanged:) CDUnknownBlockType availabilityChangedBlock; // @synthesize availabilityChangedBlock=_availabilityChangedBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMediaSelectionOptionsAvailable; // @synthesize hasMediaSelectionOptionsAvailable=_hasMediaSelectionOptionsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlaybackCoordinator:(id)arg1;
- (void)mediaSelectionOptionsAvailabilityChangedForPlaybackCoordinator:(id)arg1;

@end

