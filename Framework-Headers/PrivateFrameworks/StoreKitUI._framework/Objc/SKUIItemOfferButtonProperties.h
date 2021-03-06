//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAFilter, NSAttributedString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIItemOfferButtonProperties : NSObject
{
    BOOL _hasBorderView;
    BOOL _borderCornerRadiusMatchesHalfBoundingDimension;
    BOOL _hasTitleLabel;
    BOOL _universal;
    BOOL _progressIndeterminate;
    BOOL _cancelRecognizer;
    BOOL _restores;
    UIColor *_borderBackgroundColor;
    UIColor *_borderColor;
    CAFilter *_borderCompositingFilter;
    double _borderWidth;
    double _borderCornerRadius;
    NSAttributedString *_attributedText;
    UIColor *_textColor;
    long long _confirmationTitleStyle;
    long long _titleStyle;
    UIImage *_image;
    UIImage *_borderedImage;
    long long _progressType;
    double _progress;
    double _alpha;
}

@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property (strong, nonatomic) UIColor *borderBackgroundColor; // @synthesize borderBackgroundColor=_borderBackgroundColor;
@property (strong, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (strong, nonatomic) CAFilter *borderCompositingFilter; // @synthesize borderCompositingFilter=_borderCompositingFilter;
@property (nonatomic) double borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
@property (nonatomic) BOOL borderCornerRadiusMatchesHalfBoundingDimension; // @synthesize borderCornerRadiusMatchesHalfBoundingDimension=_borderCornerRadiusMatchesHalfBoundingDimension;
@property (nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property (strong, nonatomic) UIImage *borderedImage; // @synthesize borderedImage=_borderedImage;
@property (nonatomic) BOOL cancelRecognizer; // @synthesize cancelRecognizer=_cancelRecognizer;
@property (nonatomic) long long confirmationTitleStyle; // @synthesize confirmationTitleStyle=_confirmationTitleStyle;
@property (nonatomic) BOOL hasBorderView; // @synthesize hasBorderView=_hasBorderView;
@property (nonatomic) BOOL hasTitleLabel; // @synthesize hasTitleLabel=_hasTitleLabel;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (nonatomic) BOOL progressIndeterminate; // @synthesize progressIndeterminate=_progressIndeterminate;
@property (nonatomic) long long progressType; // @synthesize progressType=_progressType;
@property (nonatomic) BOOL restores; // @synthesize restores=_restores;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;
@property (nonatomic) BOOL universal; // @synthesize universal=_universal;

- (void).cxx_destruct;

@end

