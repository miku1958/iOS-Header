//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying>
{
    BOOL _opaque;
    BOOL _selected;
    struct CGSize _size;
    UIColor *_backgroundColor;
    UIColor *_sectionBorderColor;
    double _sectionBorderWidth;
    UIColor *_separatorColor;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_fillColor;
    UIColor *_selectionColor;
    double _leftPhase;
    double _rightPhase;
    int _sectionLocation;
    long long _selectionStyle;
    struct UIEdgeInsets _separatorInset;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) UIColor *bottomShadowColor; // @synthesize bottomShadowColor=_bottomShadowColor;
@property (strong, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property (nonatomic) double leftPhase; // @synthesize leftPhase=_leftPhase;
@property (nonatomic) BOOL opaque; // @synthesize opaque=_opaque;
@property (nonatomic) double rightPhase; // @synthesize rightPhase=_rightPhase;
@property (strong, nonatomic) UIColor *sectionBorderColor; // @synthesize sectionBorderColor=_sectionBorderColor;
@property (nonatomic) double sectionBorderWidth; // @synthesize sectionBorderWidth=_sectionBorderWidth;
@property (nonatomic) int sectionLocation; // @synthesize sectionLocation=_sectionLocation;
@property (nonatomic) BOOL selected; // @synthesize selected=_selected;
@property (strong, nonatomic) UIColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property (nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property (strong, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property (nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property (nonatomic) struct CGSize size; // @synthesize size=_size;
@property (strong, nonatomic) UIColor *topShadowColor; // @synthesize topShadowColor=_topShadowColor;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
