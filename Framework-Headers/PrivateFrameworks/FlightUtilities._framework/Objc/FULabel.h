//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface FULabel : UILabel
{
    NSString *_stringValue;
    NSAttributedString *_attributedStringValue;
    FULabel *_realAssociatedScalingLabel;
    BOOL _uppercase;
    CDUnknownBlockType _onTap;
    FULabel *_associatedScalingLabel;
}

@property (weak, nonatomic) FULabel *associatedScalingLabel; // @synthesize associatedScalingLabel=_associatedScalingLabel;
@property (copy) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
@property (nonatomic) BOOL uppercase; // @synthesize uppercase=_uppercase;

- (void).cxx_destruct;
- (id)_associatedScalingLabel;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)performTap:(id)arg1;
- (void)setAssociatedLabel:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;

@end
