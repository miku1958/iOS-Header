//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class CHTextInputTarget, NSArray, NSNumber, NSSet, PKTextInputRecognitionManager, PKTextInputStrokeProvider;

@protocol PKTextInputRecognitionManagerDataSource <NSObject>
- (void)recognitionManager:(PKTextInputRecognitionManager *)arg1 fetchContentInfoForTextInputTarget:(CHTextInputTarget *)arg2 strokeIdentifiers:(NSSet *)arg3 completion:(void (^)(CHTextInputTargetContentInfo *))arg4;
- (void)recognitionManager:(PKTextInputRecognitionManager *)arg1 recognitionDidFinishWithQueryItems:(NSArray *)arg2 duration:(double)arg3;
- (CHTextInputTarget *)recognitionManager:(PKTextInputRecognitionManager *)arg1 textInputTargetForItemStableIdentifier:(NSNumber *)arg2 strokeIdentifiers:(NSSet *)arg3 simultaneousItemStableIdentifiers:(NSArray *)arg4;
- (PKTextInputStrokeProvider *)recognitionManagerStrokeProvider:(PKTextInputRecognitionManager *)arg1;
- (NSArray *)recognitionManagerTextInputTargets:(PKTextInputRecognitionManager *)arg1;
@end

