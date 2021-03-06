//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface AAUIBadgeModelConfiguration : NSObject
{
    BOOL _useFullColorEnamel;
    BOOL _unearnedUsesTwoToneEnamel;
    BOOL _faceHasMetalInlay;
    NSString *_badgeModelPath;
    NSString *_badgeTexturePath;
    NSString *_shapeName;
    UIColor *_metalColor;
    UIColor *_modelEnamelColor;
    NSArray *_enamelTriColors;
}

@property (copy, nonatomic) NSString *badgeModelPath; // @synthesize badgeModelPath=_badgeModelPath;
@property (copy, nonatomic) NSString *badgeTexturePath; // @synthesize badgeTexturePath=_badgeTexturePath;
@property (copy, nonatomic) NSArray *enamelTriColors; // @synthesize enamelTriColors=_enamelTriColors;
@property (nonatomic) BOOL faceHasMetalInlay; // @synthesize faceHasMetalInlay=_faceHasMetalInlay;
@property (copy, nonatomic) UIColor *metalColor; // @synthesize metalColor=_metalColor;
@property (copy, nonatomic) UIColor *modelEnamelColor; // @synthesize modelEnamelColor=_modelEnamelColor;
@property (copy, nonatomic) NSString *shapeName; // @synthesize shapeName=_shapeName;
@property (nonatomic) BOOL unearnedUsesTwoToneEnamel; // @synthesize unearnedUsesTwoToneEnamel=_unearnedUsesTwoToneEnamel;
@property (nonatomic) BOOL useFullColorEnamel; // @synthesize useFullColorEnamel=_useFullColorEnamel;

+ (id)configurationWithModelPath:(id)arg1 texturePath:(id)arg2 plistPath:(id)arg3;
- (void).cxx_destruct;
- (id)init;
- (id)initWithModelPath:(id)arg1 texturePath:(id)arg2 shapeName:(id)arg3 metalColor:(id)arg4 useFullColorEnamel:(BOOL)arg5 modelEnamelColor:(id)arg6 unearnedUsesTwoToneEnamel:(BOOL)arg7 faceHasMetalInlay:(BOOL)arg8 enamelTricolors:(id)arg9;

@end

