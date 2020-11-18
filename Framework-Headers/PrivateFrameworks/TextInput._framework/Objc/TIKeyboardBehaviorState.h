//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TIKeyboardBehaviorState : NSObject
{
    BOOL hasInput;
    BOOL hasCandidates;
    BOOL hasCandidateSelected;
    BOOL hasNextPage;
    BOOL showsExtendedList;
    BOOL followsZhuyin;
    BOOL spaceConfirmation;
    BOOL hardwareKeyboardMode;
    BOOL _hasAutocorrection;
    BOOL _showsCandidatesInLayout;
}

@property (nonatomic) BOOL followsZhuyin; // @synthesize followsZhuyin;
@property (nonatomic) BOOL hardwareKeyboardMode; // @synthesize hardwareKeyboardMode;
@property (nonatomic) BOOL hasAutocorrection; // @synthesize hasAutocorrection=_hasAutocorrection;
@property (nonatomic) BOOL hasCandidateSelected; // @synthesize hasCandidateSelected;
@property (nonatomic) BOOL hasCandidates; // @synthesize hasCandidates;
@property (nonatomic) BOOL hasInput; // @synthesize hasInput;
@property (nonatomic) BOOL hasNextPage; // @synthesize hasNextPage;
@property (nonatomic) BOOL showsCandidatesInLayout; // @synthesize showsCandidatesInLayout=_showsCandidatesInLayout;
@property (nonatomic) BOOL showsExtendedList; // @synthesize showsExtendedList;
@property (nonatomic) BOOL spaceConfirmation; // @synthesize spaceConfirmation;


@end

