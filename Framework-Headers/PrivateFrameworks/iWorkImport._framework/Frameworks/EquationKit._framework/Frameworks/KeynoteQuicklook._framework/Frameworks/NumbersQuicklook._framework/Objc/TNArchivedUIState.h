//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TNUIState;

@interface TNArchivedUIState : TSPObject
{
    TNUIState *_uiState;
}

@property (readonly, nonatomic) TNUIState *uiState; // @synthesize uiState=_uiState;

- (void).cxx_destruct;
- (id)initWithUIState:(id)arg1 context:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
