//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIDocumentState.h>

@interface TIDocumentState (UITextInputAdditions)
+ (id)documentStateOfDocument:(id)arg1;
+ (id)documentStateOfDocumentWithRecentInputIdentifier:(id)arg1;
+ (id)documentStateOfSecureTextDocument:(id)arg1;
- (id)_contextAfterPosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;
- (id)_contextBeforePosition:(id)arg1 inDocument:(id)arg2 toBoundary:(long long)arg3;
- (id)_positionFromPosition:(id)arg1 toPreviousWordBoundaryInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;
- (id)_positionFromPosition:(id)arg1 toPreviousWordStartInDocument:(id)arg2 tokenAccumulator:(CDUnknownBlockType)arg3;
- (id)copyTextInRange:(id)arg1 fromDocument:(id)arg2;
- (id)fullString;
- (id)initWithDocument:(id)arg1;
- (id)initWithDocument:(id)arg1 contextBoundary:(long long)arg2;
- (id)initWithDocumentWithRecentInputIdentifier:(id)arg1;
- (id)initWithSecureTextDocument:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 inDocument:(id)arg3;
@end

