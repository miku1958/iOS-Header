//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;
@protocol HRWDUserActivityResponder;

__attribute__((visibility("hidden")))
@interface _HRWDActivityNode : NSObject
{
    NSMutableDictionary *_responderActivity;
    NSDictionary *_nextResponderActivity;
    NSMapTable *_responderTable;
    id<HRWDUserActivityResponder> _responder;
    id<HRWDUserActivityResponder> _nextResponder;
}

@property (weak, nonatomic) id<HRWDUserActivityResponder> nextResponder; // @synthesize nextResponder=_nextResponder;
@property (weak, nonatomic) id<HRWDUserActivityResponder> responder; // @synthesize responder=_responder;

- (void).cxx_destruct;
- (id)_nextNode;
- (void)addActivitiesToArray:(id)arg1 currentNode:(id)arg2;
- (id)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2;
- (id)description;
- (id)initWithResponder:(id)arg1;
- (id)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3;

@end
