//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MLNLPFrameworkHandle : NSObject
{
    BOOL _valid;
    CDUnknownFunctionPointerType _NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
    CDUnknownFunctionPointerType _NLPSequenceModelCreateWithDataImpl;
    CDUnknownFunctionPointerType _NLPSequenceModelGetRevisionImpl;
    CDUnknownFunctionPointerType _NLPSequenceModelIsRevisionSupportedImpl;
    CDUnknownFunctionPointerType _NLPSequenceModelGetCurrentRevisionImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelCopyPredictedLabelForTextImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelCreateWithDataImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelGetRevisionImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelIsRevisionSupportedImpl;
    CDUnknownFunctionPointerType _NLPClassifierModelGetCurrentRevisionImpl;
}

@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPClassifierModelCopyPredictedLabelForTextImpl; // @synthesize NLPClassifierModelCopyPredictedLabelForTextImpl=_NLPClassifierModelCopyPredictedLabelForTextImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPClassifierModelCreateWithDataImpl; // @synthesize NLPClassifierModelCreateWithDataImpl=_NLPClassifierModelCreateWithDataImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPClassifierModelGetCurrentRevisionImpl; // @synthesize NLPClassifierModelGetCurrentRevisionImpl=_NLPClassifierModelGetCurrentRevisionImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPClassifierModelGetRevisionImpl; // @synthesize NLPClassifierModelGetRevisionImpl=_NLPClassifierModelGetRevisionImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPClassifierModelIsRevisionSupportedImpl; // @synthesize NLPClassifierModelIsRevisionSupportedImpl=_NLPClassifierModelIsRevisionSupportedImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl; // @synthesize NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl=_NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPSequenceModelCreateWithDataImpl; // @synthesize NLPSequenceModelCreateWithDataImpl=_NLPSequenceModelCreateWithDataImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPSequenceModelGetCurrentRevisionImpl; // @synthesize NLPSequenceModelGetCurrentRevisionImpl=_NLPSequenceModelGetCurrentRevisionImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPSequenceModelGetRevisionImpl; // @synthesize NLPSequenceModelGetRevisionImpl=_NLPSequenceModelGetRevisionImpl;
@property (readonly, nonatomic) CDUnknownFunctionPointerType NLPSequenceModelIsRevisionSupportedImpl; // @synthesize NLPSequenceModelIsRevisionSupportedImpl=_NLPSequenceModelIsRevisionSupportedImpl;
@property (readonly, nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

+ (id)sharedHandle;
- (id)init;
- (const void *)initializeSentenceClassifierModelWithData:(id)arg1 error:(id *)arg2;
- (const void *)initializeWordTaggingModelWithData:(id)arg1 error:(id *)arg2;
- (id)predictLabelsForSentenceString:(void *)arg1 inputString:(id)arg2 error:(id *)arg3;
- (id)predictTokensLabelsLocationsLengthsForString:(void *)arg1 inputString:(id)arg2 error:(id *)arg3;

@end

