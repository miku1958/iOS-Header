//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKTextInputRecognitionManagerDataSource-Protocol.h>

@class NSString, PKTextInputDebugArchivedLogEntry, PKTextInputLanguageSpec, PKTextInputRecognitionManager, PKTextInputStrokeProvider;

@interface PKTextInputDebugLogEntryRerun : NSObject <PKTextInputRecognitionManagerDataSource>
{
    PKTextInputRecognitionManager *_recognitionManager;
    CDUnknownBlockType _completionBlock;
    PKTextInputLanguageSpec *_languageSpec;
    PKTextInputStrokeProvider *_strokeProvider;
    PKTextInputDebugArchivedLogEntry *_logEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKTextInputDebugArchivedLogEntry *logEntry; // @synthesize logEntry=_logEntry;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishRerunWithQueryItems:(id)arg1 error:(id)arg2;
- (id)initWithLogEntry:(id)arg1;
- (void)recognitionManager:(id)arg1 fetchContentInfoForTextInputTarget:(id)arg2 strokeIdentifiers:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)recognitionManager:(id)arg1 recognitionDidFinishWithQueryItems:(id)arg2 duration:(double)arg3;
- (id)recognitionManager:(id)arg1 textInputTargetForItemStableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 simultaneousItemStableIdentifiers:(id)arg4;
- (id)recognitionManagerStrokeProvider:(id)arg1;
- (id)recognitionManagerTextInputTargets:(id)arg1;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;

@end
