//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSString;

@interface HMDMediaEndpoint : HMFObject
{
    void *_endpoint;
    NSString *_uniqueIdentifier;
    NSString *_sessionIdentifier;
    NSString *_localizedName;
    NSArray *_advertisements;
}

@property (readonly, nonatomic) NSArray *advertisements; // @synthesize advertisements=_advertisements;
@property (readonly, nonatomic) void *endpoint; // @synthesize endpoint=_endpoint;
@property (readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (readonly, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

- (void).cxx_destruct;
- (id)_getAdvertisements;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithEndpoint:(void *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)updateWithEndpoint:(void *)arg1;

@end

