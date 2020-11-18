//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SearchUIFeedbackEvent : NSObject
{
    id _result;
    NSString *_actionArea;
    NSString *_actionType;
    NSString *_actionCardType;
    NSString *_actionTarget;
    NSString *_actionDestination;
    NSDate *_timestamp;
}

@property (copy, nonatomic) NSString *actionArea; // @synthesize actionArea=_actionArea;
@property (copy, nonatomic) NSString *actionCardType; // @synthesize actionCardType=_actionCardType;
@property (copy, nonatomic) NSString *actionDestination; // @synthesize actionDestination=_actionDestination;
@property (copy, nonatomic) NSString *actionTarget; // @synthesize actionTarget=_actionTarget;
@property (copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property (strong, nonatomic) id result; // @synthesize result=_result;
@property (strong, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

+ (id)feedbackEventOnResult:(id)arg1 actionArea:(id)arg2 actionType:(id)arg3 cardType:(id)arg4 actionTarget:(id)arg5 actionDestination:(id)arg6;
- (void).cxx_destruct;

@end

