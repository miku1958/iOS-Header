//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DTexturesMaterial.h>

__attribute__((visibility("hidden")))
@interface TSCH3DModulateMaterial : TSCH3DTexturesMaterial
{
}

+ (id)instanceWithArchive:(const struct Chart3DModulateMaterialArchive *)arg1 unarchiver:(id)arg2;
- (struct MaterialShaderVariables)defaultShaderVariables;
- (id)initWithArchive:(const struct Chart3DModulateMaterialArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Chart3DModulateMaterialArchive *)arg1 archiver:(id)arg2;

@end

