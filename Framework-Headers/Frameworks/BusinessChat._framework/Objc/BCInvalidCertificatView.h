//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface BCInvalidCertificatView : UIView
{
    NSString *_host;
    UIImageView *_insecureIcon;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_contentView;
}

@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) NSString *host; // @synthesize host=_host;
@property (strong, nonatomic) UIImageView *insecureIcon; // @synthesize insecureIcon=_insecureIcon;
@property (strong, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (id)initWithHost:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;

@end

