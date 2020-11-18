//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCUIPayloadUserInputField, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MCUIFieldCollection : NSObject
{
    NSMutableArray *_payloadFieldArrays;
    long long _currentPayloadIndex;
    long long _currentFieldIndex;
    MCUIPayloadUserInputField *_currentField;
    BOOL _isFinalField;
}

- (void).cxx_destruct;
- (void)_setCurrentFieldToCurrentIndices;
- (void)_setIsFinalField;
- (id)currentField;
- (BOOL)currentFieldIsFinalField;
- (BOOL)currentFieldIsLastInPayload;
- (BOOL)currentFieldIsSinglePasswordField;
- (long long)currentPayloadIndex;
- (id)initWithUserInput:(id)arg1;
- (void)moveToNextField;
- (id)responseDictionariesForCurrentPayload;
- (void)restartCurrentPayload;
- (id)userInputResponses;

@end

