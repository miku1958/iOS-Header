//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTemplateLabel.h>

__attribute__((visibility("hidden")))
@interface OBTemplateHeaderDetailLabel : OBTemplateLabel
{
    struct _NSRange _titleRange;
    struct _NSRange _bodyRange;
}

@property (nonatomic) struct _NSRange bodyRange; // @synthesize bodyRange=_bodyRange;
@property (nonatomic) struct _NSRange titleRange; // @synthesize titleRange=_titleRange;

- (void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2;
- (void)updateTextAlignment;

@end
