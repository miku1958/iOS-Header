//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class MCMoreDetailsContentView;

__attribute__((visibility("hidden")))
@interface MCMoreDetailsCell : PSTableCell
{
    MCMoreDetailsContentView *_mcContentView;
}

+ (float)defaultHeight;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setCertificate:(struct __SecCertificate *)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPayload:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;

@end

