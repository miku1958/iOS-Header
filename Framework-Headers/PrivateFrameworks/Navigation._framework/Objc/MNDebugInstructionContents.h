//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNInstructionContents-Protocol.h>

@class MNSpokenInstructionContents, NSArray, NSString;

@interface MNDebugInstructionContents : NSObject <MNInstructionContents>
{
    MNSpokenInstructionContents *_contents;
}

@property (strong, nonatomic) NSArray *branchNames;
@property (nonatomic) long long context;
@property (strong, nonatomic) NSString *destinationName;
@property (strong, nonatomic) NSString *exitNumber;
@property (readonly, nonatomic) BOOL hasServerContent;
@property (strong, nonatomic) NSString *intersectionName;
@property (nonatomic) int junctionAngle;
@property (nonatomic) int maneuverType;
@property (strong, nonatomic) NSString *roadName;
@property (nonatomic) BOOL suppressFallback;
@property (nonatomic) BOOL suppressNames;
@property (nonatomic) BOOL toFreeway;
@property (strong, nonatomic) NSArray *towardNames;
@property (nonatomic) int transportType;

- (void).cxx_destruct;
- (id)init;
- (id)instruction;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives;
- (id)stringForDistance:(double)arg1;

@end

