//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController
{
    BOOL _shouldCenter;
    TLKAuxilliaryTextView *_auxilliaryTextView;
}

@property (strong) TLKAuxilliaryTextView *auxilliaryTextView; // @synthesize auxilliaryTextView=_auxilliaryTextView;
@property BOOL shouldCenter; // @synthesize shouldCenter=_shouldCenter;

+ (BOOL)supportsResult:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isPrimarilyTextView;
- (id)setupViewWithStyle:(unsigned long long)arg1;
- (BOOL)shouldVerticallyCenter;
- (void)updateWithResult:(id)arg1;

@end

