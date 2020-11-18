//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DTextureTiling.h>

@class TSCH3DVector;

__attribute__((visibility("hidden")))
@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling
{
    TSCH3DVector *_scale;
    float _rotation;
}

@property (nonatomic) float rotation; // @synthesize rotation=_rotation;
@property (nonatomic) tvec2_84d5962d scale;

+ (id)instanceWithArchive:(const struct Chart3DBaseImageTextureTilingArchive *)arg1 unarchiver:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct Chart3DBaseImageTextureTilingArchive *)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)restoreDefault;
- (void)saveToArchive:(struct Chart3DBaseImageTextureTilingArchive *)arg1 archiver:(id)arg2;

@end

