//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSDate, NSString;

@interface PLValidatedExternalCloudResource : PLValidatedExternalResource
{
    short _remoteAvailability;
    short _cloudLocalState;
    short _prefetchCount;
    unsigned long long _cplType;
    unsigned long long _sourceCplType;
    NSDate *_masterDateCreated;
    NSDate *_lastOnDemandDownloadDate;
    NSDate *_lastPrefetchDate;
    NSDate *_prunedAt;
    NSString *_fingerprint;
}

@property (nonatomic) short cloudLocalState; // @synthesize cloudLocalState=_cloudLocalState;
@property (nonatomic) unsigned long long cplType; // @synthesize cplType=_cplType;
@property (strong, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
@property (strong, nonatomic) NSDate *lastOnDemandDownloadDate; // @synthesize lastOnDemandDownloadDate=_lastOnDemandDownloadDate;
@property (strong, nonatomic) NSDate *lastPrefetchDate; // @synthesize lastPrefetchDate=_lastPrefetchDate;
@property (strong, nonatomic) NSDate *masterDateCreated; // @synthesize masterDateCreated=_masterDateCreated;
@property (nonatomic) short prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property (strong, nonatomic) NSDate *prunedAt; // @synthesize prunedAt=_prunedAt;
@property (nonatomic) short remoteAvailability; // @synthesize remoteAvailability=_remoteAvailability;
@property (nonatomic) unsigned long long sourceCplType; // @synthesize sourceCplType=_sourceCplType;

- (void).cxx_destruct;
- (unsigned long long)cplTypeWithAssetID:(id)arg1;
- (id)initWithCloudResource:(id)arg1;
- (id)initWithInternalResource:(id)arg1;
- (BOOL)isEqualToValidatedExternalResource:(id)arg1;

@end

