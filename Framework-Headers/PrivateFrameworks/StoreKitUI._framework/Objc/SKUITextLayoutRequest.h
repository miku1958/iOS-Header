//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUILayoutRequest-Protocol.h>

@class NSAttributedString, NSString;

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest>
{
    NSAttributedString *_attributedText;
    double _fontSize;
    long long _fontWeight;
    long long _numberOfLines;
    NSString *_text;
    unsigned char _textAlignment;
    double _width;
}

@property (copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property (nonatomic) long long fontWeight; // @synthesize fontWeight=_fontWeight;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) Class layoutClass;
@property (nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property (nonatomic) double width; // @synthesize width=_width;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

