//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPTwoPartAction : NSObject
{
    CDUnknownBlockType _startAction;
    CDUnknownBlockType _cancelAction;
    CDUnknownBlockType _finishAction;
    BOOL _performImmediately;
}

@property (nonatomic) BOOL performImmediately; // @synthesize performImmediately=_performImmediately;

+ (id)actionWithStartAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2 finishAction:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithStartAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2 finishAction:(CDUnknownBlockType)arg3;
- (void)performFinishAction;
- (void)performStartAction;

@end
