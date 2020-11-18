//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PMLTrainingProtocol;

@interface SGDetectedAttributeML : NSObject
{
    id<PMLTrainingProtocol> _localTraining;
}

- (void).cxx_destruct;
- (id)detectionFromEntity:(id)arg1 ddMatch:(id)arg2 matchedContext:(id)arg3 withSupervision:(id)arg4 inLanguage:(id)arg5;
- (id)detectionFromMatch:(id)arg1 plainTextContent:(id)arg2;
- (void)handleTextMessageContactSharing:(id)arg1 andMatch:(id)arg2 andContext:(id)arg3 andLanguage:(id)arg4 withSupervision:(id)arg5;
- (void)handleTextMessageContactSharingWithNegativeSample:(id)arg1 andLanguage:(id)arg2;
- (id)init;
- (id)initWithTraining:(id)arg1;
- (id)selfIdDetectionWithEntity:(id)arg1 inConversation:(id)arg2 withSupervision:(id)arg3;

@end

