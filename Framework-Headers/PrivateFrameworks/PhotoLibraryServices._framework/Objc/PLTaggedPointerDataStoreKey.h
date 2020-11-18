//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFTaggedPointer.h>

#import <PhotoLibraryServices/PLResourceDataStoreKey-Protocol.h>
#import <PhotoLibraryServices/PLTableThumbResourceKey-Protocol.h>

@class NSString;

@interface PLTaggedPointerDataStoreKey : PFTaggedPointer <PLResourceDataStoreKey, PLTableThumbResourceKey>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)keyWithKeyStruct:(const void *)arg1 keyLength:(unsigned long long)arg2 forStoreID:(unsigned int)arg3;
- (id)descriptionForAssetID:(id)arg1;
- (id)fileURLForAssetID:(id)arg1;
- (id)initWithKeyStruct:(const void *)arg1;
- (BOOL)isValid;
- (id)keyData;
- (struct CGImage *)newTableThumbImage;
- (BOOL)representsSquareResource;

@end

