//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ATXSuggestionLayoutPreviewProducer : NSObject
{
}

+ (id)_clientModelSpecForPreview;
+ (id)_executableSpecForAppPredictionWithBundleId:(id)arg1;
+ (id)_proactiveSuggestionWithBundleId:(id)arg1 layoutType:(long long)arg2 title:(id)arg3;
+ (id)_scoreSpecForPreview;
+ (id)_uiSpecForPreviewWithLayoutType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3;
+ (id)previewLayoutFor2x2SuggestionWidget;
+ (id)previewLayoutFor2x4SuggestionWidget;
+ (id)previewLayoutFor4x4SuggestionWidget;
+ (id)previewLayoutForAppPredictionPanel;

@end

