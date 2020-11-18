//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIFeedbackFactory : NSObject
{
    NSDictionary *_customFeedbacksArchiveContents;
    NSDictionary *_customDiscreteFeedbacks;
    NSDictionary *_customContinuousFeedbacks;
    NSString *_localIdentifier;
}

@property (readonly, nonatomic) NSArray *continuousFeedbackIdentifiers;
@property (strong, nonatomic) NSDictionary *customContinuousFeedbacks; // @synthesize customContinuousFeedbacks=_customContinuousFeedbacks;
@property (strong, nonatomic) NSDictionary *customDiscreteFeedbacks; // @synthesize customDiscreteFeedbacks=_customDiscreteFeedbacks;
@property (readonly, nonatomic) NSDictionary *customFeedbacksArchiveContents; // @synthesize customFeedbacksArchiveContents=_customFeedbacksArchiveContents;
@property (readonly, nonatomic) NSArray *discreteFeedbackIdentifiers;
@property (strong, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;

+ (id)sharedFactory;
- (void).cxx_destruct;
- (long long)_continuousFeedbackTypeFromIdentifier:(id)arg1;
- (BOOL)_customEventType:(unsigned long long *)arg1 andSystemSoundID:(unsigned int *)arg2 fromIdentifier:(id)arg3;
- (long long)_discreteFeedbackTypeFromIdentifier:(id)arg1;
- (id)_patternIdentifierFromIdentifier:(id)arg1;
- (void)addLocalPatterns:(id)arg1;
- (id)continuousFeedbackWithIdentifier:(id)arg1;
- (id)discreteFeedbackWithIdentifier:(id)arg1;
- (id)feedbackWithIdentifier:(id)arg1;
- (id)identifierForContinuousFeedbackType:(long long)arg1;
- (id)identifierForCustomDiscreteFeedbackWithEventType:(unsigned long long)arg1 systemSoundID:(unsigned int)arg2;
- (id)identifierForDiscreteFeedbackType:(long long)arg1;
- (id)identifierForLocalPatternFeedbackWithName:(id)arg1;
- (id)identifierForPatternFeedbackWithFilename:(id)arg1;
- (void)performWithLocalIdentifier:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)titleForFeedbackWithIdentifier:(id)arg1;

@end

