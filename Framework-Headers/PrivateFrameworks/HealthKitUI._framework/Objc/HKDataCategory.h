//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIImage;

@interface HKDataCategory : NSObject
{
    NSMutableArray *_dataUnitGroups;
    NSMutableDictionary *_cachedGradients;
    NSMutableDictionary *_cachedRoundedCornerGradients;
    UIColor *_topColor;
    UIColor *_bottomColor;
    long long _categoryID;
    NSString *_displayName;
    NSString *_listIconName;
    UIImage *_listIcon;
    UIImage *_dashboardIcon;
    UIImage *_shareIcon;
}

@property (readonly, nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
@property (readonly, nonatomic) UIImage *dashboardIcon; // @synthesize dashboardIcon=_dashboardIcon;
@property (readonly, nonatomic) NSArray *dataUnitGroups;
@property (readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) BOOL isMeCategory;
@property (readonly, nonatomic) UIImage *listIcon; // @synthesize listIcon=_listIcon;
@property (readonly, nonatomic) NSString *listIconName; // @synthesize listIconName=_listIconName;
@property (readonly, nonatomic) UIColor *seriesColor;
@property (readonly, nonatomic) UIImage *shareIcon; // @synthesize shareIcon=_shareIcon;

- (void).cxx_destruct;
- (id)_generateGradientOfHeight:(double)arg1;
- (id)_generateRoundedCornerGradientWithHeight:(double)arg1;
- (void)addDataUnitGroup:(id)arg1;
- (id)gradientWithHeight:(double)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)roundedCornerGradientWithHeight:(double)arg1;

@end

