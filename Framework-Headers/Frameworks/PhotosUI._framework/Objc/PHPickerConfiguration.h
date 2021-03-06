//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class PHPhotoLibrary, PHPickerFilter;

@interface PHPickerConfiguration : NSObject <NSCopying>
{
    long long _preferredAssetRepresentationMode;
    long long _selectionLimit;
    PHPickerFilter *_filter;
    PHPhotoLibrary *_photoLibrary;
    unsigned long long _resultOptions;
}

@property (copy, nonatomic) PHPickerFilter *filter; // @synthesize filter=_filter;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (nonatomic) long long preferredAssetRepresentationMode; // @synthesize preferredAssetRepresentationMode=_preferredAssetRepresentationMode;
@property (readonly, nonatomic) unsigned long long resultOptions; // @synthesize resultOptions=_resultOptions;
@property (nonatomic) long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 resultOptions:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

