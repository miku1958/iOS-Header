//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TIWordSearchController : NSObject
{
    NSMapTable *_inputModeToWordSearchMapping;
}

@property (strong, nonatomic) NSMapTable *inputModeToWordSearchMapping; // @synthesize inputModeToWordSearchMapping=_inputModeToWordSearchMapping;

+ (id)sharedWordSearchController;
- (void)dealloc;
- (id)init;
- (void)setWordSearch:(id)arg1 forInputMode:(id)arg2;
- (id)wordSearchForInputMode:(id)arg1;

@end

