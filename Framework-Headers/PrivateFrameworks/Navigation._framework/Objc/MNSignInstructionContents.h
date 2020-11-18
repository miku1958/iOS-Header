//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/MNListInstructionContents.h>

#import <Navigation/MNInstructionContents-Protocol.h>

@class NSArray, NSString;

@interface MNSignInstructionContents : MNListInstructionContents <MNInstructionContents>
{
    NSArray *_mergeFormats;
    NSArray *_continueFormats;
    NSArray *_maneuverFormats;
}

@property (readonly, nonatomic) long long context;
@property (strong, nonatomic) NSArray *continueFormats; // @synthesize continueFormats=_continueFormats;
@property (readonly, nonatomic) BOOL hasServerContent;
@property (strong, nonatomic) NSArray *maneuverFormats; // @synthesize maneuverFormats=_maneuverFormats;
@property (strong, nonatomic) NSArray *mergeFormats; // @synthesize mergeFormats=_mergeFormats;
@property (strong, nonatomic) NSString *roadName;
@property (nonatomic) BOOL suppressFallback;
@property (nonatomic) BOOL suppressNames;

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3;
- (void).cxx_destruct;
- (id)_instructionsForFormats:(id)arg1;
- (void)_populateFromStep:(id)arg1;
- (id)description;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;

@end

