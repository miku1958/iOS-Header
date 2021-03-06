//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class UIColor;

@interface PXViewSpec : NSObject <NSCopying>
{
    BOOL _hidden;
    UIColor *_backgroundColor;
    UIColor *_selectionHighlightColor;
    UIColor *_borderColor;
    double _borderWidth;
    double _cornerRadius;
    double _displayScale;
    long long _compositingFilterType;
}

@property (copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property (nonatomic) long long compositingFilterType; // @synthesize compositingFilterType=_compositingFilterType;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (copy, nonatomic) UIColor *selectionHighlightColor; // @synthesize selectionHighlightColor=_selectionHighlightColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end

