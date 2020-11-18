//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVCCaptionsToken : NSObject
{
    NSString *_text;
    double _confidence;
    BOOL _hasSpaceAfter;
}

@property (readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (readonly, nonatomic) BOOL hasSpaceAfter; // @synthesize hasSpaceAfter=_hasSpaceAfter;
@property (readonly, nonatomic) NSString *text; // @synthesize text=_text;

- (void)dealloc;
- (id)description;
- (id)initWithText:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3;

@end

