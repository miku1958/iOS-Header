//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAnalyticsEvent.h>

@class NSNumber;

@interface HFAnalyticsFaceRecognitionNotificationAssociatePersonEvent : HFAnalyticsEvent
{
    NSNumber *_unknownPersonsTagCount;
    NSNumber *_openURLSuccess;
}

@property (strong, nonatomic) NSNumber *openURLSuccess; // @synthesize openURLSuccess=_openURLSuccess;
@property (strong, nonatomic) NSNumber *unknownPersonsTagCount; // @synthesize unknownPersonsTagCount=_unknownPersonsTagCount;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)payload;

@end

