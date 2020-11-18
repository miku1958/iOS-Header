//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@class TLKMultilineText;

@interface TLKTextView : UITextView
{
    BOOL _automaticUrlification;
    unsigned long long _prominence;
    TLKMultilineText *_multilineText;
}

@property (nonatomic) BOOL automaticUrlification; // @synthesize automaticUrlification=_automaticUrlification;
@property (strong, nonatomic) TLKMultilineText *multilineText; // @synthesize multilineText=_multilineText;
@property (nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)_usesNonVibrantAppearance;
- (void)didMoveToWindow;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)setText:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateAttributedString;
- (void)urlify;

@end
