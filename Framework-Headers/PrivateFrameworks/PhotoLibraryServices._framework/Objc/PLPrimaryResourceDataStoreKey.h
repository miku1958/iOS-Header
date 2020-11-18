//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLTaggedPointerDataStoreKey-Protocol.h>

@class NSString;

@interface PLPrimaryResourceDataStoreKey : NSObject <PLTaggedPointerDataStoreKey>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)strategyFromExternalResource:(id)arg1 asset:(id)arg2;
- (id)_init;
- (id)_initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)_initWithKeyStruct:(const void *)arg1;
- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initFromExistingLocationOfExternalResource:(id)arg1 asset:(id)arg2;
- (id)initWithKeyStruct:(const void *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKey:(id)arg1;
- (id)keyData;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;

@end
