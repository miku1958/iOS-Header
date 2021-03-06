//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UILabel.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorMessageLabel : UILabel
{
    NSDictionary *_regularTextAttributes;
    NSDictionary *_effectiveTextAttributes;
}

@property (readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes; // @synthesize effectiveTextAttributes=_effectiveTextAttributes;
@property (copy, nonatomic) NSDictionary *regularTextAttributes; // @synthesize regularTextAttributes=_regularTextAttributes;
@property (readonly, nonatomic) double verticalSpacingToSpinner;

+ (id)defaultRegularContentSizeTextAttributes;
- (void).cxx_destruct;
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1;
- (double)_effectiveVerticalSpacingToSpinner;
- (void)_ensureCapableOfCalculatingBaselineOffsets;
- (id)_validatedAttributedString:(id)arg1;
- (id)initWithRegularTextAttributes:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setEffectiveTextAttributes:(id)arg1;
- (void)setText:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

