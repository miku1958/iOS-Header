//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPFaceUtils : NSObject
{
}

+ (CDUnknownBlockType)_assetResourceLargestToSmallestComparator;
+ (id)_firstLocallyAvailableResourceFromResources:(id)arg1;
+ (unsigned short)_phFaceAgeTypeFromPVFace:(id)arg1;
+ (unsigned short)_phFaceBaldTypeFromPVFace:(id)arg1;
+ (unsigned short)_phFaceEyesStateFromPVFace:(id)arg1;
+ (unsigned short)_phFaceFacialHairTypeFromPVFace:(id)arg1;
+ (unsigned short)_phFaceGlassesTypeFromPVFace:(id)arg1;
+ (unsigned short)_phFaceHairColorTypeFromPVFace:(id)arg1;
+ (unsigned short)_phFaceSexFromPVFace:(id)arg1;
+ (unsigned short)_phFaceSmileTypeFromPVFace:(id)arg1;
+ (id)_vnFaceAttributeAgeToPHFaceAgeTypeMap;
+ (id)_vnFaceAttributeBaldToPHFaceBaldTypeMap;
+ (id)_vnFaceAttributeEyesToPHEyesStateMap;
+ (id)_vnFaceAttributeFacialHairToPHFacialHairTypeMap;
+ (id)_vnFaceAttributeGlassesToPHFaceGlassesTypeMap;
+ (id)_vnFaceAttributeHairColorToPHFaceHairColorTypeMap;
+ (id)_vnFaceAttributeSexToPHFaceSexTypeMap;
+ (id)_vnFaceAttributeSmileToPHFaceSmileTypeMap;
+ (void)assignPropertiesOfPVFace:(id)arg1 toPHFaceChangeRequest:(id)arg2;
+ (id)phFaceFromPVFace:(id)arg1 withFetchOptions:(id)arg2;
+ (id)phFacesFromPVFaces:(id)arg1 withFetchOptions:(id)arg2;
+ (id)preferredResourcesForFaceProcessingWithAsset:(id)arg1;
+ (id)pvFaceFromPHFace:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvImageCreationOptions;
+ (id)resourceForFaceProcessing:(id)arg1 allowStreaming:(BOOL)arg2;
+ (id)resourceForFaceProcessingWithAsset:(id)arg1 allowStreaming:(BOOL)arg2;
- (id)_pvFacesArrayFromPHFetchResult:(id)arg1 copyPropertiesOption:(long long)arg2;

@end

