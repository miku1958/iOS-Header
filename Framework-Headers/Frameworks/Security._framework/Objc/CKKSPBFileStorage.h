//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol CKKSPBCodable;

__attribute__((visibility("hidden")))
@interface CKKSPBFileStorage : NSObject
{
    NSURL *_storageFile;
    Class _storageClass;
    id<CKKSPBCodable> _protobufStorage;
}

@property (strong) id<CKKSPBCodable> protobufStorage; // @synthesize protobufStorage=_protobufStorage;
@property (strong) Class storageClass; // @synthesize storageClass=_storageClass;
@property (strong) NSURL *storageFile; // @synthesize storageFile=_storageFile;

- (void).cxx_destruct;
- (id)initWithStoragePath:(id)arg1 storageClass:(Class)arg2;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
