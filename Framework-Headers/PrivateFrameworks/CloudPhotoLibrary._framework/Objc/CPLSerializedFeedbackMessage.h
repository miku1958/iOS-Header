//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLServerFeedbackMessage, NSDictionary, NSString, NSUUID;

@interface CPLSerializedFeedbackMessage : NSObject
{
    NSUUID *_uuid;
    CPLServerFeedbackMessage *_serverMessage;
    NSString *_feedbackType;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *feedbackType; // @synthesize feedbackType=_feedbackType;
@property (readonly, nonatomic) CPLServerFeedbackMessage *serverMessage; // @synthesize serverMessage=_serverMessage;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)messagesForPlistRepresentation:(id)arg1;
+ (id)plistRepresentationForMessages:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithMessage:(id)arg1;

@end

