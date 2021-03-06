//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAnnotation, CHRecognitionResult, PKDrawing, UIBezierPath;

@interface AKShapeToCHRecognitionResult : NSObject
{
    BOOL _doodlePathIsPrestroked;
    long long _tag;
    CHRecognitionResult *_result;
    UIBezierPath *_doodlePath;
    PKDrawing *_inkDrawing;
    AKAnnotation *_annotation;
    struct CGRect _doodlePathBoundsInInputView;
}

@property (strong) AKAnnotation *annotation; // @synthesize annotation=_annotation;
@property (strong) UIBezierPath *doodlePath; // @synthesize doodlePath=_doodlePath;
@property struct CGRect doodlePathBoundsInInputView; // @synthesize doodlePathBoundsInInputView=_doodlePathBoundsInInputView;
@property BOOL doodlePathIsPrestroked; // @synthesize doodlePathIsPrestroked=_doodlePathIsPrestroked;
@property (strong) PKDrawing *inkDrawing; // @synthesize inkDrawing=_inkDrawing;
@property (strong) CHRecognitionResult *result; // @synthesize result=_result;
@property long long tag; // @synthesize tag=_tag;

- (void).cxx_destruct;
- (id)initWith:(long long)arg1 result:(id)arg2;

@end

