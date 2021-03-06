//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/BSInvalidatable-Protocol.h>
#import <CarPlayServices/CRSInCallServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString;

@interface CRSInCallAssertion : NSObject <CRSInCallServerToClientInterface, BSInvalidatable>
{
    struct os_unfair_lock_s _lock;
    BOOL _lock_pendingPresent;
    BOOL _lock_presented;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    BOOL _lock_allowsBanners;
    NSString *_reason;
    BSServiceConnection *_connection;
}

@property (nonatomic) BOOL allowsBanners;
@property (strong, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectionActivated;
- (void)_handleConnectionInterrupted;
- (void)activate;
- (id)initWithReason:(id)arg1;
- (void)invalidate;

@end

