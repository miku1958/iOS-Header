//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKVibrantLabel.h>

@interface TLKRoundedCornerLabel : TLKVibrantLabel
{
    BOOL _large;
}

@property (nonatomic) BOOL large; // @synthesize large=_large;

- (id)init;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)makeLabelInsets:(struct CGSize)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;

@end

