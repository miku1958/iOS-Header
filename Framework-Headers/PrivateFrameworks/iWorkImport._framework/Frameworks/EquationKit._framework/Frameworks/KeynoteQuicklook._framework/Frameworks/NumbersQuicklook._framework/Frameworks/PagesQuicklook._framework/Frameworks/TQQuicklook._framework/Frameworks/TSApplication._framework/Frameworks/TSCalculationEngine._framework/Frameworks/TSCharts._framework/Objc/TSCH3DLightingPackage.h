//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>
#import <TSCharts/TSSPropertyValueArchiving-Protocol.h>

@class NSArray, NSString;

@interface TSCH3DLightingPackage : NSObject <TSSPropertyValueArchiving, NSCopying>
{
    NSString *_name;
    NSArray *_lights;
}

@property (readonly, copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)allNamedPackages;
+ (id)instanceWithArchive:(const struct Chart3DLightingPackageArchive *)arg1 unarchiver:(id)arg2;
+ (id)localizedNameForName:(id)arg1;
+ (id)nameFromSageLightingPackageName:(id)arg1;
+ (id)p_sageLightingPackageNames;
+ (id)package;
+ (id)packageFromName:(id)arg1;
+ (id)packageWithSageLightingPackageData:(id)arg1;
+ (id)sageNameFromLightingPackageName:(id)arg1;
- (void)addLight:(id)arg1;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct Chart3DLightingPackageArchive *)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct Chart3DLightingPackageArchive *)arg1 archiver:(id)arg2;

@end

