//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppPredictionUIWidget/APUISuggestionView.h>

@class ATXHeroAppPrediction, UITapGestureRecognizer;

@interface APUIAppClipView : APUISuggestionView
{
    ATXHeroAppPrediction *_prediction;
    UITapGestureRecognizer *_tapRecognizer;
}

- (void).cxx_destruct;
- (void)_tapRecognized:(id)arg1;
- (void)layoutSuggestion:(id)arg1;
- (void)openPredictionAction;

@end
