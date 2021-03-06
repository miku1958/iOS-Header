//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSData, NSDictionary;

@interface ICStoreFileAssetFairPlayInfo : NSObject <NSCopying>
{
    NSDictionary *_responseSinfDictionary;
}

@property (readonly, copy, nonatomic) NSData *dpInfoData;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSData *pinfData;
@property (readonly, copy, nonatomic) NSDictionary *purchaseBundleSinfDictionary;
@property (readonly, copy, nonatomic) NSDictionary *responseSinfDictionary; // @synthesize responseSinfDictionary=_responseSinfDictionary;
@property (readonly, copy, nonatomic) NSData *sinf2Data;
@property (readonly, copy, nonatomic) NSData *sinfData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseSinfDictionary:(id)arg1;

@end

