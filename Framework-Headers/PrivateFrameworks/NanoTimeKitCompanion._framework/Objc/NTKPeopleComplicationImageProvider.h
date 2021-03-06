//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKImageProvider.h>

@class NSString, UIImage;

@interface NTKPeopleComplicationImageProvider : CLKImageProvider
{
    double _borderWidth;
    double _fontSize;
    UIImage *_profileImage;
    NSString *_fullName;
    NSString *_nameAbbreviation;
}

@property double borderWidth; // @synthesize borderWidth=_borderWidth;
@property double fontSize; // @synthesize fontSize=_fontSize;
@property (strong, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (strong, nonatomic) NSString *nameAbbreviation; // @synthesize nameAbbreviation=_nameAbbreviation;
@property (strong, nonatomic) UIImage *profileImage; // @synthesize profileImage=_profileImage;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

