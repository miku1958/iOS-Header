//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INImage.h>

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface _INURLImage : INImage
{
    NSData *_sandboxExtensionData;
    NSURL *_imageURL;
}

@property (copy, nonatomic, setter=_setSandboxExtensionData:) NSData *_sandboxExtensionData; // @synthesize _sandboxExtensionData;
@property (readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_URLRepresentation;
- (id)_copyWithSubclass:(Class)arg1;
- (id)_dictionaryRepresentation;
- (id)_identifier;
- (id)_initWithURLRepresentation:(id)arg1;
- (BOOL)_isEligibleForProxying;
- (BOOL)_isSupportedForDonation;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_requiresRetrieval;
- (void)_setUri:(id)arg1;
- (id)_uri;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageURL:(id)arg1;

@end

