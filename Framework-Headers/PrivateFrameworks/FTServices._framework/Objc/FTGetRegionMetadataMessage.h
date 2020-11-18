//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import <FTServices/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>
{
    NSString *_language;
    NSDictionary *_responseRegionInformation;
}

@property (copy) NSString *language; // @synthesize language=_language;
@property (copy) NSDictionary *responseRegionInformation; // @synthesize responseRegionInformation=_responseRegionInformation;

- (id)bagKey;
- (long long)command;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)requiredKeys;
- (long long)responseCommand;
- (BOOL)wantsBagKey;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end
