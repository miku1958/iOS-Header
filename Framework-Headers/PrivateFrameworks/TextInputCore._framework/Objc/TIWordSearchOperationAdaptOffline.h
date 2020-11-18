//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIWordSearchOperation.h>

@class NSString, TILanguageModelAdaptationContext, TIMecabraWrapper;

@interface TIWordSearchOperationAdaptOffline : TIWordSearchOperation
{
    TIMecabraWrapper *_mecabraWrapper;
    TILanguageModelAdaptationContext *_adaptationContext;
    NSString *_paragraph;
    double _timeStamp;
}

@property (copy, nonatomic) TILanguageModelAdaptationContext *adaptationContext; // @synthesize adaptationContext=_adaptationContext;
@property (strong, nonatomic) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
@property (copy, nonatomic) NSString *paragraph; // @synthesize paragraph=_paragraph;
@property (nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithWordSearch:(id)arg1 paragraph:(id)arg2 adaptationContext:(id)arg3 timeStamp:(double)arg4;
- (void)perform;

@end
