//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UISelectionFeedbackGenerator;

__attribute__((visibility("hidden")))
@interface PUSelectionFeedbackGenerator : NSObject
{
    UISelectionFeedbackGenerator *_feedbackGenerator;
}

@property (readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;

- (void).cxx_destruct;
- (id)init;
- (void)performFeedback;
- (void)prepareFeedback;

@end
