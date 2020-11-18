//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUStorageFactory-Protocol.h>

@class NSString, NUPurgeableStoragePool;

@interface NUPurgeableStorageFactory : NSObject <NUStorageFactory>
{
    Class _storageClass;
    NUPurgeableStoragePool *_storagePool;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStorageClass:(Class)arg1;
- (id)initWithStorageClass:(Class)arg1 storagePool:(id)arg2;
- (id)initWithStoragePool:(id)arg1;
- (id)newStorageWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (void)returnStorage:(id)arg1;

@end

