//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, TDTemplateRenderingMode, TDThemeBitSource;

@interface TDAsset : NSManagedObject
{
    unsigned int _scaleFactor;
}

@property (readonly, nonatomic) NSString *baseName;
@property (strong, nonatomic) NSString *category; // @dynamic category;
@property (strong, nonatomic) NSString *name; // @dynamic name;
@property (strong, nonatomic) TDThemeBitSource *source; // @dynamic source;
@property (strong, nonatomic) TDTemplateRenderingMode *templateRenderingMode; // @dynamic templateRenderingMode;

+ (id)_filenameRegex;
+ (long long)idiomFromImageFilename:(id)arg1;
+ (BOOL)isTemplateFromImageFilename:(id)arg1;
+ (unsigned int)scaleFactorFromImageFilename:(id)arg1;
+ (long long)subtypeFromImageFilename:(id)arg1;
- (id)_sourceRelativePathComponents;
- (id)fileURLWithDocument:(id)arg1;
- (BOOL)hasProduction;
- (unsigned int)scaleFactor;
- (void)setHasProduction:(id)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (id)sourceRelativePath;

@end

