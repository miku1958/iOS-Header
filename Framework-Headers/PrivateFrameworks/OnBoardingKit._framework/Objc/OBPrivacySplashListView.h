//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class NSMutableArray, UITextView;

@interface OBPrivacySplashListView : UIStackView
{
    BOOL _darkMode;
    UITextView *_footerTextView;
    NSMutableArray *_textViews;
    NSMutableArray *_stackedIconTextLists;
}

@property (nonatomic, getter=isDarkMode) BOOL darkMode; // @synthesize darkMode=_darkMode;
@property (readonly, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
@property (strong, nonatomic) NSMutableArray *stackedIconTextLists; // @synthesize stackedIconTextLists=_stackedIconTextLists;
@property (strong, nonatomic) NSMutableArray *textViews; // @synthesize textViews=_textViews;

- (void).cxx_destruct;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2;
- (id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(BOOL)arg3;

@end

