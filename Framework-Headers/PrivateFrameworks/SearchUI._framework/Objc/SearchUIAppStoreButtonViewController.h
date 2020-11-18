//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKStoreButton;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController
{
    BOOL _appIsInstalled;
    TLKStoreButton *_appStoreButton;
}

@property (nonatomic) BOOL appIsInstalled; // @synthesize appIsInstalled=_appIsInstalled;
@property (strong, nonatomic) TLKStoreButton *appStoreButton; // @synthesize appStoreButton=_appStoreButton;

+ (BOOL)supportsRowModel:(id)arg1;
- (void).cxx_destruct;
- (void)buttonPressed;
- (id)setupView;
- (BOOL)shouldTopAlignForAccessibilityContentSizes;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end
