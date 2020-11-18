//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerStackView.h>

#import <SearchUI/NUIContainerStackViewDelegate-Protocol.h>

@class NSString, SearchUIImageView, SearchUIVibrantLabel, UILabel;

@interface SearchUITitleContainerView : NUIContainerStackView <NUIContainerStackViewDelegate>
{
    SearchUIVibrantLabel *_titleLabel;
    UILabel *_secondaryLabel;
    SearchUIImageView *_secondaryImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SearchUIImageView *secondaryImageView; // @synthesize secondaryImageView=_secondaryImageView;
@property (strong, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (readonly) Class superclass;
@property (strong, nonatomic) SearchUIVibrantLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)titleFont;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)updateWithResult:(id)arg1;

@end

