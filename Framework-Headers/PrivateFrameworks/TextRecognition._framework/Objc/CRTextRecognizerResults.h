//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRLatticeResults, NSArray, NSDate, NSDictionary;

@interface CRTextRecognizerResults : NSObject
{
    NSDictionary *_inputOptions;
    NSDate *_startTime;
    NSDate *_endTime;
    NSArray *_textFeatures;
    NSArray *_codeMaps;
    CRLatticeResults *_latticeResults;
}

@property (strong, nonatomic) NSArray *codeMaps; // @synthesize codeMaps=_codeMaps;
@property (strong, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property (strong, nonatomic) NSDictionary *inputOptions; // @synthesize inputOptions=_inputOptions;
@property (strong, nonatomic) CRLatticeResults *latticeResults; // @synthesize latticeResults=_latticeResults;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) NSArray *textFeatures; // @synthesize textFeatures=_textFeatures;

- (void).cxx_destruct;

@end

