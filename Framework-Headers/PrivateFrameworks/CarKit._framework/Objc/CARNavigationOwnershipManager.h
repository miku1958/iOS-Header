//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/CRCarPlayNavigationOwnerClient-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CARNavigationOwnershipManagerDelegate;

@interface CARNavigationOwnershipManager : NSObject <CRCarPlayNavigationOwnerClient>
{
    BOOL _ownershipRequested;
    NSXPCConnection *_connection;
    NSString *_identifier;
    id<CARNavigationOwnershipManagerDelegate> _delegate;
}

@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CARNavigationOwnershipManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long owner;
@property (nonatomic) BOOL ownershipRequested; // @synthesize ownershipRequested=_ownershipRequested;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectionReset;
- (void)_setupConnection;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void)navigationOwnershipChangedTo:(unsigned long long)arg1;
- (void)releaseNavigationOwnership;
- (void)requestNavigationOwnership;

@end

