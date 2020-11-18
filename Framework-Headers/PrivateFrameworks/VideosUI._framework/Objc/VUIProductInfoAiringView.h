//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class VUILabel, VUIProductInfoAiringLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductInfoAiringView : UIView
{
    VUIProductInfoAiringLayout *_layout;
    VUILabel *_infoLabel;
    _TVImageView *_logo;
}

@property (strong, nonatomic) VUILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property (strong, nonatomic) VUIProductInfoAiringLayout *layout; // @synthesize layout=_layout;
@property (strong, nonatomic) _TVImageView *logo; // @synthesize logo=_logo;

+ (id)airingLogoWithImageDictionary:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)airingTextWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)configureViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

