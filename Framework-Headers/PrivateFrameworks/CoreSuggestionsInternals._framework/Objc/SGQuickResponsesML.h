//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PMLTrainingProtocol;

@interface SGQuickResponsesML : NSObject
{
    id<PMLTrainingProtocol> _localTraining;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTraining:(id)arg1;
- (void)trainQuickResponsesForMessage:(id)arg1 withConversationHistory:(id)arg2;

@end

