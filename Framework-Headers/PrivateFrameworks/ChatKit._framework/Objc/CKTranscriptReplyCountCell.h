//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptStatusCell.h>

@interface CKTranscriptReplyCountCell : CKTranscriptStatusCell
{
    double _countAlpha;
}

@property (nonatomic) double countAlpha; // @synthesize countAlpha=_countAlpha;

- (void)_fadeInLabelAtStartTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFilter:(id)arg1;
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (BOOL)hidesCheckmark;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(CDUnknownBlockType)arg1;
- (void)performReload:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performRemoval:(CDUnknownBlockType)arg1;
- (void)prepareForReuse;
- (BOOL)shouldHideDuringDarkFSM;
- (BOOL)wantsDrawerLayout;

@end

