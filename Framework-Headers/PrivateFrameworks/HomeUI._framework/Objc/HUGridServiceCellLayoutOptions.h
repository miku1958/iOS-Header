//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridServiceCellLayoutOptions : HUGridCellLayoutOptions
{
    BOOL _showIconOnly;
    BOOL _showDescription;
    BOOL _showAccessoryView;
    double _lineSpacing;
    double _iconToTitleSpacing;
}

@property (nonatomic) double iconToTitleSpacing; // @synthesize iconToTitleSpacing=_iconToTitleSpacing;
@property (nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property (nonatomic, getter=shouldShowAccessoryView) BOOL showAccessoryView; // @synthesize showAccessoryView=_showAccessoryView;
@property (nonatomic, getter=shouldShowDescription) BOOL showDescription; // @synthesize showDescription=_showDescription;
@property (nonatomic, getter=shouldShowIconOnly) BOOL showIconOnly; // @synthesize showIconOnly=_showIconOnly;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
