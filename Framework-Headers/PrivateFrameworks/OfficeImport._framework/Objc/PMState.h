//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMState.h>

@class CMOutlineState, OADTablePartStyle;

__attribute__((visibility("hidden")))
@interface PMState : CMState
{
    CMOutlineState *mListState;
    OADTablePartStyle *mCurrentRowStyle;
}

- (void).cxx_destruct;
- (id)currentRowStyle;
- (id)init;
- (id)listState;
- (void)setCurrentRowStyle:(id)arg1;

@end
