//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NSString, UITextView;

@interface NTKCFaceDetailDescriptionCell : NTKCDetailTableViewCell
{
    UITextView *_textView;
}

@property (copy, nonatomic) NSString *text;
@property (strong, nonatomic) UITextView *textView; // @synthesize textView=_textView;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (id)init;
- (void)layoutSubviews;
- (double)rowHeight;

@end

