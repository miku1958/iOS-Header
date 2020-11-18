//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCSyncFileCoordinatedDictionary;

@interface FCFileCoordinatedAccountActionQueue : NSObject
{
    FCSyncFileCoordinatedDictionary *_fileCoordinatedDictionary;
}

@property (strong, nonatomic) FCSyncFileCoordinatedDictionary *fileCoordinatedDictionary; // @synthesize fileCoordinatedDictionary=_fileCoordinatedDictionary;

- (void).cxx_destruct;
- (BOOL)enqueueActionWithType:(long long)arg1;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (id)peekAtActionTypes;
- (BOOL)popActionTypesUpToCount:(unsigned long long)arg1 setLocalDataHintIfNeeded:(BOOL)arg2;
- (BOOL)readLocalDataHint;

@end
