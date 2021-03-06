//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPNGAsset : TDAsset
{
    int _exifOrientation;
    unsigned int _fileScaleFactor;
}

@property (nonatomic) BOOL rawData; // @dynamic rawData;
@property (strong, nonatomic) NSSet *renditions; // @dynamic renditions;

- (void)_logError:(id)arg1;
- (int)exifOrientation;
- (unsigned int)fileScaleFactor;
- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;
- (void)setFileScaleFactor:(unsigned int)arg1;
- (struct CGSize)sourceImageSizeWithDocument:(id)arg1;
- (id)sourceImageWithDocument:(id)arg1;

@end

