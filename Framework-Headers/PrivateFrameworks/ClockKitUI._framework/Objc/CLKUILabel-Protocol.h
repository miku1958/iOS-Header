//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/NSObject-Protocol.h>

@class NSAttributedString, NSString, UIColor, UIFont;

@protocol CLKUILabel <NSObject>

@property (readonly, nonatomic) double _lastLineBaseline;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (strong, nonatomic) UIFont *font;
@property (readonly, nonatomic) struct UIEdgeInsets opticalInsets;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (strong, nonatomic) UIColor *textColor;

@end

