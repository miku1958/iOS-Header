//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@class MISSING_TYPE, UIFont;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI20DynamicTypeTextField : UITextField
{
    MISSING_TYPE *fontUseCaseContentSizeCategory;
    MISSING_TYPE *fontUseCase;
    MISSING_TYPE *directionalTextAlignment;
}

@property (nonatomic, strong) UIFont *font;
@property (nonatomic, readonly) BOOL jet_isTextExtraTall;
@property (nonatomic, readonly) struct UIEdgeInsets jet_languageAwareOutsets;
@property (nonatomic, readonly) long long jet_textLength;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
