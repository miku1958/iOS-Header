//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSPDataStorage-Protocol.h>

@class NSData, NSString, SFUCryptoKey;

@interface TSPReadOnlyMemoryDataStorage : NSObject <TSPDataStorage>
{
    NSData *_NSData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (id)bookmarkDataWithOptions:(unsigned long long)arg1;
- (id)filenameForPreferredFilename:(id)arg1;
- (id)initWithNSData:(id)arg1;
- (BOOL)isInPackage:(id)arg1;
- (struct CGDataProvider *)newCGDataProvider;
- (struct CGImageSource *)newCGImageSource;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;

@end

