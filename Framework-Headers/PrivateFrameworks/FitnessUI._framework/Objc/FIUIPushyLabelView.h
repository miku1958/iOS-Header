//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString;

@interface FIUIPushyLabelView : UIView
{
    NSArray *_currentSnapshotCharacters;
    NSArray *_incomingSnapshotCharacters;
    NSAttributedString *_currentAttributedText;
    id _pendingAttributedString;
    unsigned long long _pendingDirection;
    BOOL _pendingPushPerCharacter;
    double _currentAnimationFinishTime;
}

- (void).cxx_destruct;
- (void)_layoutForPushStartWithDirection:(unsigned long long)arg1;
- (void)_layoutViewsAtIndex:(unsigned long long)arg1 forPushEndWithDirection:(unsigned long long)arg2;
- (void)_processPendingStringIfNeeded;
- (void)_setCurrentSnapshotCharacters:(id)arg1;
- (void)_setIncomingSnapshotCharacters:(id)arg1;
- (id)_snapshotCharactersFromAttributedText:(id)arg1 perCharacter:(BOOL)arg2;
- (void)_swapCurrentSnapshotCharacters:(id)arg1 forIncomingCharacters:(id)arg2;
- (id)currentAttributedText;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pushToAttributedText:(id)arg1 direction:(unsigned long long)arg2 perCharacter:(BOOL)arg3;
- (void)setAttributedTextUnanimated:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFitAttributedText:(id)arg1;

@end

