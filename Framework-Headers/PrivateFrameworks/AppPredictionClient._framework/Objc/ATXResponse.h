//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSError, NSUUID;
@protocol OS_dispatch_queue;

@interface ATXResponse : NSObject <NSSecureCoding>
{
    NSData *_cacheFileData;
    NSObject<OS_dispatch_queue> *_appClipQueue;
    NSUUID *_uuid;
    NSError *_error;
    NSArray *_predictions;
    NSArray *_proactiveSuggestions;
    NSUUID *_blendingModelUICacheUpdateUUID;
}

@property (readonly, nonatomic) NSUUID *blendingModelUICacheUpdateUUID; // @synthesize blendingModelUICacheUpdateUUID=_blendingModelUICacheUpdateUUID;
@property (readonly, nonatomic) NSData *cacheFileData; // @synthesize cacheFileData=_cacheFileData;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) NSArray *predictedApps;
@property (readonly, nonatomic) NSArray *predictions; // @synthesize predictions=_predictions;
@property (readonly, nonatomic) NSArray *proactiveSuggestions; // @synthesize proactiveSuggestions=_proactiveSuggestions;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAtxSearchResults:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictions:(id)arg1 cacheFileData:(id)arg2 error:(id)arg3;
- (id)initWithPredictions:(id)arg1 proactiveSuggestions:(id)arg2 uuid:(id)arg3 cacheFileData:(id)arg4 blendingUICacheUpdateUUID:(id)arg5 error:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToResponse:(id)arg1;
- (id)json;
- (id)jsonDescription;
- (id)jsonRawData;

@end

