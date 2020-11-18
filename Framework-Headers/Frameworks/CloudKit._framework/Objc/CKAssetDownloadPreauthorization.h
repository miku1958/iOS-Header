//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface CKAssetDownloadPreauthorization : NSObject <NSCopying>
{
    NSString *_responseUUID;
    NSDictionary *_contentResponseHeaders;
    NSData *_contentResponseBody;
}

@property (strong, nonatomic) NSData *contentResponseBody; // @synthesize contentResponseBody=_contentResponseBody;
@property (strong, nonatomic) NSDictionary *contentResponseHeaders; // @synthesize contentResponseHeaders=_contentResponseHeaders;
@property (strong, nonatomic) NSString *responseUUID; // @synthesize responseUUID=_responseUUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

