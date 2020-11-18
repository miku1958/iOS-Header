//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INImage.h>

@class NSString;

@interface INRemoteImageProxy : INImage
{
    NSString *_storageServiceIdentifier;
    NSString *_proxyIdentifier;
}

@property (copy, nonatomic, setter=_setProxyIdentifier:) NSString *_proxyIdentifier; // @synthesize _proxyIdentifier;
@property (copy, nonatomic, setter=_setStorageServiceIdentifier:) NSString *_storageServiceIdentifier; // @synthesize _storageServiceIdentifier;
@property (readonly, nonatomic) BOOL isValid;

+ (id)proxyImageSynchronously:(id)arg1 usingService:(id)arg2 error:(id *)arg3;
+ (void)requestProxyByStoringImage:(id)arg1 qualityOfService:(unsigned int)arg2 scaled:(BOOL)arg3 storeType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_URLRepresentation;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_initWithURLRepresentation:(id)arg1;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_retrieveImageDataWithReply:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)purgeStoredImageWithCompletion:(CDUnknownBlockType)arg1;
- (id)retrieveProxiedImageSynchronouslyUsingService:(id)arg1 error:(id *)arg2;
- (void)unproxyImageFromService:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

