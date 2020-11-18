//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIVibrantView.h>

@class NSURL, SearchUITableViewCell;
@protocol SearchUIResult;

@interface SearchUIPunchoutActionButton : SearchUIVibrantView
{
    NSURL *_punchoutURL;
    SearchUITableViewCell *_cell;
    id<SearchUIResult> _result;
}

@property (weak, nonatomic) SearchUITableViewCell *cell; // @synthesize cell=_cell;
@property (strong, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;
@property (strong, nonatomic) id<SearchUIResult> result; // @synthesize result=_result;

- (void).cxx_destruct;
- (void)_buttonPressed;
- (id)initWithActionButtonItem:(id)arg1 style:(unsigned long long)arg2 image:(id)arg3 cell:(id)arg4 result:(id)arg5;
- (BOOL)updateActionButtonWithResult:(id)arg1 style:(unsigned long long)arg2 cell:(id)arg3 result:(id)arg4;

@end

