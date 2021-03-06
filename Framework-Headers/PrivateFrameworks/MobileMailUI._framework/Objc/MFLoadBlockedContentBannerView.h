//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFLoadBlockedContentBannerViewDelegate;

@interface MFLoadBlockedContentBannerView : MFSuggestionBannerView
{
    long long _blockingReason;
    id<MFLoadBlockedContentBannerViewDelegate> _delegate;
    unsigned long long _blockedContentTypes;
}

@property (nonatomic) unsigned long long blockedContentTypes; // @synthesize blockedContentTypes=_blockedContentTypes;
@property (weak, nonatomic) id<MFLoadBlockedContentBannerViewDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_titleControlTapped:(id)arg1;
- (void)_updateBannerText;
- (id)initWithFrame:(struct CGRect)arg1 blockedContentTypes:(unsigned long long)arg2 blockingReason:(long long)arg3;

@end

