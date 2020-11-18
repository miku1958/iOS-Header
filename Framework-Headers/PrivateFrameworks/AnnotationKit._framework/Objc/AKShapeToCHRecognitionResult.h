//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecognitionResult, NSArray, UIBezierPath;

@interface AKShapeToCHRecognitionResult : NSObject
{
    long long _tag;
    CHRecognitionResult *_result;
    UIBezierPath *_doodlePath;
    NSArray *_strokesInInputView;
    struct CGRect _doodlePathBoundsInInputView;
    struct CGRect _strokesBoundsInInputView;
}

@property (strong) UIBezierPath *doodlePath; // @synthesize doodlePath=_doodlePath;
@property struct CGRect doodlePathBoundsInInputView; // @synthesize doodlePathBoundsInInputView=_doodlePathBoundsInInputView;
@property (strong) CHRecognitionResult *result; // @synthesize result=_result;
@property struct CGRect strokesBoundsInInputView; // @synthesize strokesBoundsInInputView=_strokesBoundsInInputView;
@property (strong) NSArray *strokesInInputView; // @synthesize strokesInInputView=_strokesInInputView;
@property long long tag; // @synthesize tag=_tag;

- (void).cxx_destruct;
- (id)initWith:(long long)arg1 result:(id)arg2;

@end

