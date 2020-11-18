//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKHeroImageView-Protocol.h>

@class NSString, UIImageView, UILabel;

@interface PKWatchHeroImageView : UIView <PKHeroImageView>
{
    UIImageView *_watchView;
    struct CGSize _originalWatchViewSize;
    UILabel *_doneLabel;
    BOOL _hideDoneLabel;
}

@property (readonly, nonatomic) struct CGRect cardFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideDoneLabel; // @synthesize hideDoneLabel=_hideDoneLabel;
@property (readonly, nonatomic) BOOL isCompactWatch;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGPoint watchScreenCenter;
@property (readonly, nonatomic) struct CGRect watchScreenFrame;

+ (id)_bridgeHeroImage;
+ (id)watchDeviceImage;
- (void).cxx_destruct;
- (struct CGSize)_heroWatchImageSize;
- (id)_resizeImage:(id)arg1 toSize:(struct CGSize)arg2;
- (struct CGPoint)_watchScreenInset;
- (struct CGSize)_watchScreenSize:(double)arg1;
- (struct CGSize)imageSize;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)scale;
- (struct CGRect)spaceBelowCardFrame;

@end
