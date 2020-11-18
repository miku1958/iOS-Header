//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, TIInputMode, TILanguageModelAdaptationContext;

@interface TILanguageModelOfflineLearningHandle : NSObject
{
    BOOL _valid;
    TIInputMode *_inputMode;
    NSDate *_lastAdaptationDate;
    TILanguageModelAdaptationContext *_currentAdaptationContext;
}

@property (copy, nonatomic) TILanguageModelAdaptationContext *currentAdaptationContext; // @synthesize currentAdaptationContext=_currentAdaptationContext;
@property (readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
@property (copy, nonatomic) NSDate *lastAdaptationDate; // @synthesize lastAdaptationDate=_lastAdaptationDate;
@property (nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

+ (id)handleForInputMode:(id)arg1;
+ (id)handleForLanguageLikelihood;
- (void).cxx_destruct;
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;
- (void)didFinishLearning;
- (id)initWithInputMode:(id)arg1;
- (void)load;
- (void)updateAdaptationContext:(id)arg1;

@end

