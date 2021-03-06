//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class NSCountedSet, NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerResizeTaskDescriptor : NSObject <NSCopying>
{
    NSCountedSet *_cachedAssetsIdentifiersForEstimation;
    unsigned long long _cachedSizeEstimate;
    NSString *_localizedDescription;
    struct CGSize _targetSize;
}

@property (readonly, copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property (readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;

+ (id)defaultActualSizeDescriptor;
+ (id)defaultLargeDescriptor;
+ (id)defaultMediumDescriptor;
+ (id)defaultSmallDescriptor;
+ (id)orderedDefaultDescriptors;
- (void).cxx_destruct;
- (BOOL)appliesToAsset:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)estimatedSizeForAssets:(id)arg1;
- (id)formattedSizeForAssets:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLocalizedDescription:(id)arg1 targetSize:(struct CGSize)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)localizedDescriptionForAssets:(id)arg1;

@end

