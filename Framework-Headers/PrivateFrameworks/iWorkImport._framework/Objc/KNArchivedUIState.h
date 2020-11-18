//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class KNUIState;

__attribute__((visibility("hidden")))
@interface KNArchivedUIState : TSPObject
{
    KNUIState *_uiState;
}

@property (readonly, nonatomic) KNUIState *uiState; // @synthesize uiState=_uiState;

- (void).cxx_destruct;
- (id)initWithUIState:(id)arg1 context:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (BOOL)p_validateViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (BOOL)validateDesktopViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2;
- (BOOL)validateMobileViewStateWithDocumentRoot:(id)arg1 documentRevision:(id)arg2;

@end
