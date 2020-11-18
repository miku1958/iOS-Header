//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray, NSMutableArray;

@interface MPUAbbreviatingLabel : UILabel
{
    NSMutableArray *_textRepresentationSizes;
    NSArray *_textRepresentations;
}

@property (copy, nonatomic) NSArray *textRepresentations; // @synthesize textRepresentations=_textRepresentations;

- (void).cxx_destruct;
- (void)_calculateTextSizes;
- (void)_selectBestRepresentation;
- (void)_setTextRepresentation:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;

@end

