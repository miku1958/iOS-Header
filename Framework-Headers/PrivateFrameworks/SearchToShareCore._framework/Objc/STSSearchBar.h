//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UISearchBar.h>

@protocol STSSearchBarDelegate;

@interface STSSearchBar : UISearchBar
{
    BOOL _clickBeganInSearchBar;
    id<STSSearchBarDelegate> _stsDelegate;
}

@property (weak, nonatomic) id<STSSearchBarDelegate> stsDelegate; // @synthesize stsDelegate=_stsDelegate;

- (void).cxx_destruct;

@end
