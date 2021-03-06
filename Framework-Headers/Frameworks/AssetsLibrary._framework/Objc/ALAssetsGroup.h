//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject
{
    id _internal;
}

@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (strong, nonatomic) ALAssetsGroupPrivate *internal; // @synthesize internal=_internal;

- (void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_typeAsString;
- (id)_uuid;
- (BOOL)addAsset:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAssetsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithPhotoAlbum:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3;
- (BOOL)isValid;
- (long long)numberOfAssets;
- (struct CGImage *)posterImage;
- (void)setAssetsFilter:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end

