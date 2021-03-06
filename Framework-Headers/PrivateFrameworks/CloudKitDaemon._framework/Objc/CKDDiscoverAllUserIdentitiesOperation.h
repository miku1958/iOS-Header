//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDiscoverUserIdentitiesOperation.h>

@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation
{
    NSMutableDictionary *_contactIdentifiersByLookupInfo;
}

@property (strong, nonatomic) NSMutableDictionary *contactIdentifiersByLookupInfo; // @synthesize contactIdentifiersByLookupInfo=_contactIdentifiersByLookupInfo;

- (void).cxx_destruct;
- (void)_discoverIdentitiesBatched:(id)arg1;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;

@end

