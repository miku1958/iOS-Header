//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OAVReadState.h>

@class NSMutableDictionary, WDParagraph, WXReadState;

__attribute__((visibility("hidden")))
@interface WXOAVReadState : OAVReadState
{
    WXReadState *mWxState;
    WDParagraph *mParagraph;
    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;
}

- (void).cxx_destruct;
- (id)currentParagraph;
- (id)initWithWXReadState:(id)arg1;
- (id)nextVmlShapeIdToTextBoxMap;
- (void)setCurrentParagraph:(id)arg1;
- (id)wxReadState;

@end

