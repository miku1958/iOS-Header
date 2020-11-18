//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <SiriUI/SiriUIReusableView-Protocol.h>
#import <SiriUI/SiriUISizableHeaderView-Protocol.h>

@class NSString, SiriUISnippetViewController, UILabel;

@interface SiriUISashHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView>
{
    UILabel *_headerLabel;
    NSString *_titleText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
