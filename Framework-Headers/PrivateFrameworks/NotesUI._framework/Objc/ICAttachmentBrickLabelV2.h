//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, NSString, UIColor;

@interface ICAttachmentBrickLabelV2 : UILabel
{
    BOOL _vibrant;
    BOOL _disableVibrancy;
    UIColor *_defaultTextColor;
}

@property (strong, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property (nonatomic) BOOL disableVibrancy; // @synthesize disableVibrancy=_disableVibrancy;
@property (strong, nonatomic) NSAttributedString *ic_attributedStringValue;
@property (strong, nonatomic) NSString *ic_stringValue;
@property (nonatomic) BOOL vibrant; // @synthesize vibrant=_vibrant;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)text;

@end

