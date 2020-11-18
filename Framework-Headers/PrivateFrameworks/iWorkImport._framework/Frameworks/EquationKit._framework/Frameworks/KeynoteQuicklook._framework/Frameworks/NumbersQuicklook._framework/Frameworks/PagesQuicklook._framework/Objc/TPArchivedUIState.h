//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TPUIState;

@interface TPArchivedUIState : TSPObject
{
    TPUIState *_uiState;
}

@property (copy, nonatomic) TPUIState *uiState; // @synthesize uiState=_uiState;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithContext:(id)arg1 uiState:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToArchivedUIState:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
