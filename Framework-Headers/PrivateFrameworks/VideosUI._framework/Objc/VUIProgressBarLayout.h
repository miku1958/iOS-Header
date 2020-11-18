//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VUIProgressBarLayout : NSObject
{
    UIColor *_fillColor;
    UIColor *_tintColor;
    double _height;
    struct UIEdgeInsets _margin;
    struct UIEdgeInsets _padding;
}

@property (strong, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property (nonatomic) double height; // @synthesize height=_height;
@property (nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property (nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

- (void).cxx_destruct;

@end

