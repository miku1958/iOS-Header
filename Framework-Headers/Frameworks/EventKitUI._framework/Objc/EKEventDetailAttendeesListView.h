//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

__attribute__((visibility("hidden")))
@interface EKEventDetailAttendeesListView : UIView
{
    BOOL _highlighted;
    BOOL _groupsNames;
    NSArray *_acceptedNames;
    NSArray *_maybeNames;
    NSArray *_declinedNames;
    NSArray *_noReplyNames;
    NSArray *_ungroupedNames;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
}

@property (strong, nonatomic) NSArray *acceptedNames; // @synthesize acceptedNames=_acceptedNames;
@property (strong, nonatomic) NSArray *declinedNames; // @synthesize declinedNames=_declinedNames;
@property (nonatomic) BOOL groupsNames; // @synthesize groupsNames=_groupsNames;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (strong, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property (strong, nonatomic) NSArray *maybeNames; // @synthesize maybeNames=_maybeNames;
@property (strong, nonatomic) NSArray *noReplyNames; // @synthesize noReplyNames=_noReplyNames;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (strong, nonatomic) NSArray *ungroupedNames; // @synthesize ungroupedNames=_ungroupedNames;

- (void).cxx_destruct;
- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(double)arg4;
- (double)_heightForGroupOfAttendeeNames:(id)arg1;
- (double)_offsetFromOffsetToBaseline:(double)arg1 withFont:(id)arg2;
- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(double)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

