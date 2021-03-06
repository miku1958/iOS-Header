//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, PREResponsesGeneratedEvent;

@interface PREResponseTappedEvent : NSObject
{
    BOOL _hasQuestionMark;
    int _inputMethod;
    PREResponsesGeneratedEvent *_responsesGeneratedEvent;
    NSString *_selectedResponse;
    NSNumber *_selectedPosition;
    unsigned long long _timeToTap;
}

@property (nonatomic) BOOL hasQuestionMark; // @synthesize hasQuestionMark=_hasQuestionMark;
@property (nonatomic) int inputMethod; // @synthesize inputMethod=_inputMethod;
@property (strong, nonatomic) PREResponsesGeneratedEvent *responsesGeneratedEvent; // @synthesize responsesGeneratedEvent=_responsesGeneratedEvent;
@property (strong, nonatomic) NSNumber *selectedPosition; // @synthesize selectedPosition=_selectedPosition;
@property (strong, nonatomic) NSString *selectedResponse; // @synthesize selectedResponse=_selectedResponse;
@property (nonatomic) unsigned long long timeToTap; // @synthesize timeToTap=_timeToTap;

- (void).cxx_destruct;

@end

