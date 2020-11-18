//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment : PLManagedObject
{
}

@property (strong, nonatomic) NSNumber *adjustmentBaseImageFormat; // @dynamic adjustmentBaseImageFormat;
@property (strong, nonatomic) NSString *adjustmentFormatIdentifier; // @dynamic adjustmentFormatIdentifier;
@property (strong, nonatomic) NSString *adjustmentFormatVersion; // @dynamic adjustmentFormatVersion;
@property (nonatomic) unsigned int adjustmentRenderTypes; // @dynamic adjustmentRenderTypes;
@property (strong, nonatomic) NSDate *adjustmentTimestamp; // @dynamic adjustmentTimestamp;
@property (strong, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property (strong, nonatomic) NSString *editorLocalizedName; // @dynamic editorLocalizedName;
@property (strong, nonatomic) NSString *otherAdjustmentsFingerprint; // @dynamic otherAdjustmentsFingerprint;
@property (strong, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint; // @dynamic similarToOriginalAdjustmentsFingerprint;
@property (strong, nonatomic) NSString *uuid; // @dynamic uuid;

+ (id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2;
+ (id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1;
+ (id)copyUnmanagedAdjustmentFromSourceAsset:(id)arg1 forPlaceholderAsset:(id)arg2 inLibrary:(id)arg3 error:(id *)arg4;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;
- (void)willSave;

@end

