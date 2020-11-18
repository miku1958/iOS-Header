//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLResourceDataStoreKey-Protocol.h>
#import <PhotoLibraryServices/PLTableThumbResourceKey-Protocol.h>

@class NSString;

@interface PLThumbnailResourceDataStoreKey : NSObject <PLResourceDataStoreKey, PLTableThumbResourceKey>
{
    struct PLThumbnailDataStoreKeyStruct_V1 _keyStruct;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int index; // @dynamic index;
@property (nonatomic) struct PLThumbnailDataStoreKeyStruct_V1 keyStruct; // @synthesize keyStruct=_keyStruct;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int tableType; // @dynamic tableType;

+ (id)fileURLForPayloadKeyData:(unsigned long long)arg1 assetID:(id)arg2;
+ (unsigned int)recipeIDForTableType:(unsigned int)arg1 inStore:(id)arg2;
+ (BOOL)representsSquareResourceForPayloadKeyData:(unsigned long long)arg1;
- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initWithKeyStruct:(const void *)arg1;
- (BOOL)isDerivative;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToKey:(id)arg1;
- (id)keyData;
- (BOOL)representsSquareResource;
- (unsigned int)resourceType;
- (unsigned int)resourceVersion;
- (void)tableType:(unsigned int *)arg1 index:(int *)arg2;
- (id)uniformTypeIdentifier;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;

@end
