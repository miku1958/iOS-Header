//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKHeroImageView-Protocol.h>

@class NSString, UIImageView;

@interface PKPhoneHeroImageView : UIView <PKHeroImageView>
{
    UIImageView *_phoneView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize)imageSize;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;

@end
