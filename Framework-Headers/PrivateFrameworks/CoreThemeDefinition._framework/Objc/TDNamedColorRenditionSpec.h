//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString;

@interface TDNamedColorRenditionSpec : TDRenditionSpec
{
}

@property (nonatomic) double alpha; // @dynamic alpha;
@property (nonatomic) double blue; // @dynamic blue;
@property (nonatomic) long long colorSpaceID; // @dynamic colorSpaceID;
@property (nonatomic) double green; // @dynamic green;
@property (nonatomic) double red; // @dynamic red;
@property (strong, nonatomic) NSString *systemColorName; // @dynamic systemColorName;

- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)setColorPropertiesFromCGColor:(struct CGColor *)arg1;

@end

