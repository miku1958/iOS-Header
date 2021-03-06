//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPFileDataStorage.h>

@class NSString, TSPDirectoryPackage;
@protocol TSPCryptoInfo;

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage
{
    NSString *_path;
    id<TSPCryptoInfo> _decryptionInfo;
    unsigned char _packageIdentifier;
    _Atomic BOOL _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic BOOL _isMissingData;
    BOOL _gilligan_isRemote;
    TSPDirectoryPackage *_package;
}

@property (readonly, weak, nonatomic) TSPDirectoryPackage *package; // @synthesize package=_package;

- (void).cxx_destruct;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)arg1;
- (unsigned long long)encodedLength;
- (BOOL)gilligan_isRemote;
- (id)init;
- (id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3;
- (BOOL)isInPackage:(id)arg1;
- (BOOL)isMissingData;
- (unsigned long long)length;
- (BOOL)linkOrCopyToURL:(id)arg1 encryptionInfo:(id)arg2 canLink:(BOOL)arg3;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)setEncodedLength:(unsigned long long)arg1 isMissingData:(BOOL)arg2;
- (void)setGilligan_isRemote:(BOOL)arg1;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo *)arg3 preferredFilename:(id)arg4 error:(id *)arg5;

@end

