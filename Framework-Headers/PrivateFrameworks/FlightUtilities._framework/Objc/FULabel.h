//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKLabel.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface FULabel : TLKLabel
{
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    FULabel *_realAssociatedScalingLabel;
    BOOL _uppercase;
    BOOL _useCurrentLocale;
    CDUnknownBlockType _onTap;
    FULabel *_associatedScalingLabel;
}

@property (weak, nonatomic) FULabel *associatedScalingLabel; // @synthesize associatedScalingLabel=_associatedScalingLabel;
@property (copy) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
@property (readonly, nonatomic) BOOL uppercase; // @synthesize uppercase=_uppercase;
@property (readonly) BOOL useCurrentLocale; // @synthesize useCurrentLocale=_useCurrentLocale;

- (void).cxx_destruct;
- (id)_associatedScalingLabel;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)performTap:(id)arg1;
- (void)setAssociatedLabel:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setStyleProvider:(id)arg1 primaryStyle:(BOOL)arg2;
- (void)setText:(id)arg1;
- (void)setUppercase:(BOOL)arg1 usingCurrentLocale:(BOOL)arg2;

@end

