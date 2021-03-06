//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXMonthsLayoutMetrics : PXLayoutMetrics
{
    long long _sizeClass;
    long long _orientation;
    double _interitemSpacing;
    double _defaultSectionAspectRatio;
    double _chapterHeaderHeight;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _chapterHeaderPadding;
}

@property (nonatomic) double chapterHeaderHeight; // @synthesize chapterHeaderHeight=_chapterHeaderHeight;
@property (nonatomic) struct UIEdgeInsets chapterHeaderPadding; // @synthesize chapterHeaderPadding=_chapterHeaderPadding;
@property (nonatomic) double defaultSectionAspectRatio; // @synthesize defaultSectionAspectRatio=_defaultSectionAspectRatio;
@property (nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property (nonatomic) long long sizeClass; // @synthesize sizeClass=_sizeClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

