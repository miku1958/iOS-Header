//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

@class ICStoreRequestContext, MPCModelGenericAVItemTimedMetadataResponse, MPModelGenericObject, NSArray;

@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest
{
    MPCModelGenericAVItemTimedMetadataResponse *_previousResponse;
    MPModelGenericObject *_genericObject;
    ICStoreRequestContext *_storeRequestContext;
    NSArray *_timedMetadataGroups;
}

@property (readonly, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property (strong, nonatomic) MPCModelGenericAVItemTimedMetadataResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property (readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property (readonly, copy, nonatomic) NSArray *timedMetadataGroups; // @synthesize timedMetadataGroups=_timedMetadataGroups;

+ (id)metadataIdentifiers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithGenericObject:(id)arg1 timedMetadataGroups:(id)arg2 storeRequestContext:(id)arg3;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;

@end

