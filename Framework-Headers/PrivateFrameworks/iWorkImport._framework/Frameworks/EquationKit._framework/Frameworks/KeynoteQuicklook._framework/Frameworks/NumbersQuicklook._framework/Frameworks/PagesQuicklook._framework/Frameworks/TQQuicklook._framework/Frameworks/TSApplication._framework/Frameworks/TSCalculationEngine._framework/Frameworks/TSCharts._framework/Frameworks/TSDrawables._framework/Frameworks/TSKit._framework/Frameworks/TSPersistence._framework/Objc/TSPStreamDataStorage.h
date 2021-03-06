//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/TSPDataStorage-Protocol.h>

@class NSString, TSUColor;
@protocol TSPCryptoInfo;

@interface TSPStreamDataStorage : NSObject <TSPDataStorage>
{
}

@property (readonly, nonatomic) unsigned int CRC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TSPCryptoInfo> decryptionInfo;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) TSUColor *fallbackColor;
@property (nonatomic) BOOL gilligan_isRemote;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isMissingData;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) struct CGSize pixelSize;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly) Class superclass;

- (id)AVAssetWithOptions:(id)arg1 forData:(id)arg2;
- (id)AVAssetWithOptions:(id)arg1 usingResourceLoaderForData:(id)arg2;
- (id)NSDataWithOptions:(unsigned long long)arg1;
- (BOOL)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)filenameForPreferredFilename:(id)arg1;
- (BOOL)isInPackage:(id)arg1;
- (struct CGDataProvider *)newCGDataProvider;
- (struct CGImageSource *)newCGImageSource;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo *)arg3 preferredFilename:(id)arg4 error:(id *)arg5;

@end

