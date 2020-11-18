//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKPickerBarView-Protocol.h>

@class CALayer, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKMessageAcknowledgmentPickerBarView : UIView <CKPickerBarView>
{
    CALayer *_anchorBubble;
    CALayer *_intermediateBubble;
    UIView *_pillBubble;
    NSDictionary *_groupAcknowledgmentCounts;
    long long _selectedAcknowledgment;
    BOOL _balloonOrientation;
    NSArray *_acknowledgmentViews;
    struct CGPoint _anchorBubblePosition;
}

@property (copy, nonatomic) NSArray *acknowledgmentViews; // @synthesize acknowledgmentViews=_acknowledgmentViews;
@property (nonatomic) struct CGPoint anchorBubblePosition; // @synthesize anchorBubblePosition=_anchorBubblePosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize)_ackViewsBoundsWidth;
- (BOOL)_hasGroupCounts;
- (id)initWithGroupCounts:(id)arg1 selectedType:(long long)arg2 orientation:(BOOL)arg3;
- (void)layoutSubviews;
- (void)performCancelAnimation:(CDUnknownBlockType)arg1;
- (void)performSelectedAnimation:(CDUnknownBlockType)arg1;
- (void)performSendAnimation:(CDUnknownBlockType)arg1;
- (void)performShowAnimation:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateDynamicColorsForBubbleLayers;

@end
