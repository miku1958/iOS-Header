//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLLibraryUtility : NSObject
{
}

+ (id)_dcIdentifierFromOpfPath:(id)arg1 isEPUB:(BOOL)arg2;
+ (id)_iTunesMetadataPathForEpubPath:(id)arg1;
+ (BOOL)_isMultiUser;
+ (id)_storeIdFromiTunesMetadataPath:(id)arg1 error:(id *)arg2;
+ (id)dcIdentifierFromBookPath:(id)arg1;
+ (id)generateFileUniqueIdFromPath:(id)arg1;
+ (id)identifierFromBookContainer:(id)arg1 allowHash:(BOOL)arg2 allowStoreID:(BOOL)arg3 error:(id *)arg4;
+ (id)identifierFromBookPath:(id)arg1 allowHash:(BOOL)arg2 allowStoreID:(BOOL)arg3 error:(id *)arg4;
+ (id)identifierFromBookPath:(id)arg1 error:(id *)arg2;
+ (id)identifierFromBookZipArchive:(id)arg1 allowHash:(BOOL)arg2 allowStoreID:(BOOL)arg3 error:(id *)arg4;
+ (id)md5FromPath:(id)arg1;
+ (id)opfPathFromEpubPath:(id)arg1;
+ (id)opfPathFromFullOpfContainerPath:(id)arg1;
+ (id)p_opfPathFromContainerXmlDoc:(struct _xmlDoc *)arg1 epubPath:(id)arg2;
+ (id)p_opfPathFromContainerXmlPath:(id)arg1 epubPath:(id)arg2;
+ (id)uniqueIdFromEpubPath:(id)arg1;
+ (id)uniqueIdFromPdfPath:(id)arg1;
+ (BOOL)writeBinaryPropertyList:(id)arg1 toPath:(id)arg2 error:(id *)arg3;

@end

