//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/_HMAccessoryProfile.h>

@class NSArray;
@protocol _HMTelevisionProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMTelevisionProfile : _HMAccessoryProfile
{
    BOOL _mediaSourceDisplayOrderModifiable;
    NSArray *_mediaSourceDisplayOrder;
    id<_HMTelevisionProfileDelegate> _delegate;
}

@property (weak) id<_HMTelevisionProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong) NSArray *mediaSourceDisplayOrder; // @synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder;
@property (readonly) BOOL mediaSourceDisplayOrderModifiable; // @synthesize mediaSourceDisplayOrderModifiable=_mediaSourceDisplayOrderModifiable;

- (void).cxx_destruct;
- (void)_handleSourceDisplayOrderUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2;
- (BOOL)isMediaSourceDisplayOrderModifiable;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
